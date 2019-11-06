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

#include <tencentcloud/organization/v20181225/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20181225::Model;
using namespace rapidjson;
using namespace std;

DeleteOrganizationMembersRequest::DeleteOrganizationMembersRequest() :
    m_uinsHasBeenSet(false)
{
}

string DeleteOrganizationMembersRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uinsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_uins.begin(); itr != m_uins.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteOrganizationMembersRequest::GetUins() const
{
    return m_uins;
}

void DeleteOrganizationMembersRequest::SetUins(const vector<uint64_t>& _uins)
{
    m_uins = _uins;
    m_uinsHasBeenSet = true;
}

bool DeleteOrganizationMembersRequest::UinsHasBeenSet() const
{
    return m_uinsHasBeenSet;
}


