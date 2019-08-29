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

#include <tencentcloud/gaap/v20180529/model/ModifyGroupDomainConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ModifyGroupDomainConfigRequest::ModifyGroupDomainConfigRequest() :
    m_groupIdHasBeenSet(false),
    m_defaultDnsIpHasBeenSet(false),
    m_accessRegionListHasBeenSet(false)
{
}

string ModifyGroupDomainConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDnsIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultDnsIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_defaultDnsIp.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRegionListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessRegionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessRegionList.begin(); itr != m_accessRegionList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGroupDomainConfigRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyGroupDomainConfigRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyGroupDomainConfigRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyGroupDomainConfigRequest::GetDefaultDnsIp() const
{
    return m_defaultDnsIp;
}

void ModifyGroupDomainConfigRequest::SetDefaultDnsIp(const string& _defaultDnsIp)
{
    m_defaultDnsIp = _defaultDnsIp;
    m_defaultDnsIpHasBeenSet = true;
}

bool ModifyGroupDomainConfigRequest::DefaultDnsIpHasBeenSet() const
{
    return m_defaultDnsIpHasBeenSet;
}

vector<AccessRegionDomainConf> ModifyGroupDomainConfigRequest::GetAccessRegionList() const
{
    return m_accessRegionList;
}

void ModifyGroupDomainConfigRequest::SetAccessRegionList(const vector<AccessRegionDomainConf>& _accessRegionList)
{
    m_accessRegionList = _accessRegionList;
    m_accessRegionListHasBeenSet = true;
}

bool ModifyGroupDomainConfigRequest::AccessRegionListHasBeenSet() const
{
    return m_accessRegionListHasBeenSet;
}


