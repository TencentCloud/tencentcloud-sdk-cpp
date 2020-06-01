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

#include <tencentcloud/iai/v20200303/model/CheckSimilarPersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20200303::Model;
using namespace rapidjson;
using namespace std;

CheckSimilarPersonRequest::CheckSimilarPersonRequest() :
    m_groupIdsHasBeenSet(false),
    m_uniquePersonControlHasBeenSet(false)
{
}

string CheckSimilarPersonRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uniquePersonControlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniquePersonControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uniquePersonControl, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CheckSimilarPersonRequest::GetGroupIds() const
{
    return m_groupIds;
}

void CheckSimilarPersonRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool CheckSimilarPersonRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

int64_t CheckSimilarPersonRequest::GetUniquePersonControl() const
{
    return m_uniquePersonControl;
}

void CheckSimilarPersonRequest::SetUniquePersonControl(const int64_t& _uniquePersonControl)
{
    m_uniquePersonControl = _uniquePersonControl;
    m_uniquePersonControlHasBeenSet = true;
}

bool CheckSimilarPersonRequest::UniquePersonControlHasBeenSet() const
{
    return m_uniquePersonControlHasBeenSet;
}


