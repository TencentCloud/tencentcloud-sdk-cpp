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

#include <tencentcloud/ess/v20201111/model/CreateIntegrationSubOrganizationActiveRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateIntegrationSubOrganizationActiveRecordRequest::CreateIntegrationSubOrganizationActiveRecordRequest() :
    m_operatorHasBeenSet(false),
    m_subOrganizationIdsHasBeenSet(false)
{
}

string CreateIntegrationSubOrganizationActiveRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subOrganizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subOrganizationIds.begin(); itr != m_subOrganizationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateIntegrationSubOrganizationActiveRecordRequest::GetOperator() const
{
    return m_operator;
}

void CreateIntegrationSubOrganizationActiveRecordRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateIntegrationSubOrganizationActiveRecordRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateIntegrationSubOrganizationActiveRecordRequest::GetSubOrganizationIds() const
{
    return m_subOrganizationIds;
}

void CreateIntegrationSubOrganizationActiveRecordRequest::SetSubOrganizationIds(const vector<string>& _subOrganizationIds)
{
    m_subOrganizationIds = _subOrganizationIds;
    m_subOrganizationIdsHasBeenSet = true;
}

bool CreateIntegrationSubOrganizationActiveRecordRequest::SubOrganizationIdsHasBeenSet() const
{
    return m_subOrganizationIdsHasBeenSet;
}


