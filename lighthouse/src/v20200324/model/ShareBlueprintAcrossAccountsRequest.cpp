/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/lighthouse/v20200324/model/ShareBlueprintAcrossAccountsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ShareBlueprintAcrossAccountsRequest::ShareBlueprintAcrossAccountsRequest() :
    m_blueprintIdHasBeenSet(false),
    m_accountIdsHasBeenSet(false)
{
}

string ShareBlueprintAcrossAccountsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountIds.begin(); itr != m_accountIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ShareBlueprintAcrossAccountsRequest::GetBlueprintId() const
{
    return m_blueprintId;
}

void ShareBlueprintAcrossAccountsRequest::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool ShareBlueprintAcrossAccountsRequest::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

vector<string> ShareBlueprintAcrossAccountsRequest::GetAccountIds() const
{
    return m_accountIds;
}

void ShareBlueprintAcrossAccountsRequest::SetAccountIds(const vector<string>& _accountIds)
{
    m_accountIds = _accountIds;
    m_accountIdsHasBeenSet = true;
}

bool ShareBlueprintAcrossAccountsRequest::AccountIdsHasBeenSet() const
{
    return m_accountIdsHasBeenSet;
}


