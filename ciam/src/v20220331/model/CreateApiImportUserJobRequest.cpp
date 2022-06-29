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

#include <tencentcloud/ciam/v20220331/model/CreateApiImportUserJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

CreateApiImportUserJobRequest::CreateApiImportUserJobRequest() :
    m_userStoreIdHasBeenSet(false),
    m_dataFlowUserCreateListHasBeenSet(false)
{
}

string CreateApiImportUserJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowUserCreateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowUserCreateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataFlowUserCreateList.begin(); itr != m_dataFlowUserCreateList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApiImportUserJobRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void CreateApiImportUserJobRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool CreateApiImportUserJobRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

vector<ImportUser> CreateApiImportUserJobRequest::GetDataFlowUserCreateList() const
{
    return m_dataFlowUserCreateList;
}

void CreateApiImportUserJobRequest::SetDataFlowUserCreateList(const vector<ImportUser>& _dataFlowUserCreateList)
{
    m_dataFlowUserCreateList = _dataFlowUserCreateList;
    m_dataFlowUserCreateListHasBeenSet = true;
}

bool CreateApiImportUserJobRequest::DataFlowUserCreateListHasBeenSet() const
{
    return m_dataFlowUserCreateListHasBeenSet;
}


