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

#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyAddressTemplateGroupAttributeRequest::ModifyAddressTemplateGroupAttributeRequest() :
    m_addressTemplateGroupIdHasBeenSet(false),
    m_addressTemplateGroupNameHasBeenSet(false),
    m_addressTemplateIdsHasBeenSet(false)
{
}

string ModifyAddressTemplateGroupAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressTemplateGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressTemplateGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressTemplateGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_addressTemplateIds.begin(); itr != m_addressTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAddressTemplateGroupAttributeRequest::GetAddressTemplateGroupId() const
{
    return m_addressTemplateGroupId;
}

void ModifyAddressTemplateGroupAttributeRequest::SetAddressTemplateGroupId(const string& _addressTemplateGroupId)
{
    m_addressTemplateGroupId = _addressTemplateGroupId;
    m_addressTemplateGroupIdHasBeenSet = true;
}

bool ModifyAddressTemplateGroupAttributeRequest::AddressTemplateGroupIdHasBeenSet() const
{
    return m_addressTemplateGroupIdHasBeenSet;
}

string ModifyAddressTemplateGroupAttributeRequest::GetAddressTemplateGroupName() const
{
    return m_addressTemplateGroupName;
}

void ModifyAddressTemplateGroupAttributeRequest::SetAddressTemplateGroupName(const string& _addressTemplateGroupName)
{
    m_addressTemplateGroupName = _addressTemplateGroupName;
    m_addressTemplateGroupNameHasBeenSet = true;
}

bool ModifyAddressTemplateGroupAttributeRequest::AddressTemplateGroupNameHasBeenSet() const
{
    return m_addressTemplateGroupNameHasBeenSet;
}

vector<string> ModifyAddressTemplateGroupAttributeRequest::GetAddressTemplateIds() const
{
    return m_addressTemplateIds;
}

void ModifyAddressTemplateGroupAttributeRequest::SetAddressTemplateIds(const vector<string>& _addressTemplateIds)
{
    m_addressTemplateIds = _addressTemplateIds;
    m_addressTemplateIdsHasBeenSet = true;
}

bool ModifyAddressTemplateGroupAttributeRequest::AddressTemplateIdsHasBeenSet() const
{
    return m_addressTemplateIdsHasBeenSet;
}


