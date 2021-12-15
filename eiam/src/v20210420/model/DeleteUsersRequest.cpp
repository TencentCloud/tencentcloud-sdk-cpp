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

#include <tencentcloud/eiam/v20210420/model/DeleteUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DeleteUsersRequest::DeleteUsersRequest() :
    m_deleteIdListHasBeenSet(false),
    m_deleteNameListHasBeenSet(false)
{
}

string DeleteUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deleteIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteIdList.begin(); itr != m_deleteIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteNameList.begin(); itr != m_deleteNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteUsersRequest::GetDeleteIdList() const
{
    return m_deleteIdList;
}

void DeleteUsersRequest::SetDeleteIdList(const vector<string>& _deleteIdList)
{
    m_deleteIdList = _deleteIdList;
    m_deleteIdListHasBeenSet = true;
}

bool DeleteUsersRequest::DeleteIdListHasBeenSet() const
{
    return m_deleteIdListHasBeenSet;
}

vector<string> DeleteUsersRequest::GetDeleteNameList() const
{
    return m_deleteNameList;
}

void DeleteUsersRequest::SetDeleteNameList(const vector<string>& _deleteNameList)
{
    m_deleteNameList = _deleteNameList;
    m_deleteNameListHasBeenSet = true;
}

bool DeleteUsersRequest::DeleteNameListHasBeenSet() const
{
    return m_deleteNameListHasBeenSet;
}


