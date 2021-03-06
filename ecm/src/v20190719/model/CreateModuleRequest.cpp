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

#include <tencentcloud/ecm/v20190719/model/CreateModuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

CreateModuleRequest::CreateModuleRequest() :
    m_moduleNameHasBeenSet(false),
    m_defaultBandWidthHasBeenSet(false),
    m_defaultImageIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_defaultSystemDiskSizeHasBeenSet(false),
    m_defaultDataDiskSizeHasBeenSet(false),
    m_closeIpDirectHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_defaultBandWidthInHasBeenSet(false),
    m_disableWanIpHasBeenSet(false)
{
}

string CreateModuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_moduleName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultBandWidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultBandWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultBandWidth, allocator);
    }

    if (m_defaultImageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_defaultImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultSystemDiskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultSystemDiskSize, allocator);
    }

    if (m_defaultDataDiskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultDataDiskSize, allocator);
    }

    if (m_closeIpDirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CloseIpDirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_closeIpDirect, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_securityGroupsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultBandWidthInHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultBandWidthIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultBandWidthIn, allocator);
    }

    if (m_disableWanIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisableWanIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableWanIp, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModuleRequest::GetModuleName() const
{
    return m_moduleName;
}

void CreateModuleRequest::SetModuleName(const string& _moduleName)
{
    m_moduleName = _moduleName;
    m_moduleNameHasBeenSet = true;
}

bool CreateModuleRequest::ModuleNameHasBeenSet() const
{
    return m_moduleNameHasBeenSet;
}

int64_t CreateModuleRequest::GetDefaultBandWidth() const
{
    return m_defaultBandWidth;
}

void CreateModuleRequest::SetDefaultBandWidth(const int64_t& _defaultBandWidth)
{
    m_defaultBandWidth = _defaultBandWidth;
    m_defaultBandWidthHasBeenSet = true;
}

bool CreateModuleRequest::DefaultBandWidthHasBeenSet() const
{
    return m_defaultBandWidthHasBeenSet;
}

string CreateModuleRequest::GetDefaultImageId() const
{
    return m_defaultImageId;
}

void CreateModuleRequest::SetDefaultImageId(const string& _defaultImageId)
{
    m_defaultImageId = _defaultImageId;
    m_defaultImageIdHasBeenSet = true;
}

bool CreateModuleRequest::DefaultImageIdHasBeenSet() const
{
    return m_defaultImageIdHasBeenSet;
}

string CreateModuleRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateModuleRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateModuleRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t CreateModuleRequest::GetDefaultSystemDiskSize() const
{
    return m_defaultSystemDiskSize;
}

void CreateModuleRequest::SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize)
{
    m_defaultSystemDiskSize = _defaultSystemDiskSize;
    m_defaultSystemDiskSizeHasBeenSet = true;
}

bool CreateModuleRequest::DefaultSystemDiskSizeHasBeenSet() const
{
    return m_defaultSystemDiskSizeHasBeenSet;
}

int64_t CreateModuleRequest::GetDefaultDataDiskSize() const
{
    return m_defaultDataDiskSize;
}

void CreateModuleRequest::SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize)
{
    m_defaultDataDiskSize = _defaultDataDiskSize;
    m_defaultDataDiskSizeHasBeenSet = true;
}

bool CreateModuleRequest::DefaultDataDiskSizeHasBeenSet() const
{
    return m_defaultDataDiskSizeHasBeenSet;
}

bool CreateModuleRequest::GetCloseIpDirect() const
{
    return m_closeIpDirect;
}

void CreateModuleRequest::SetCloseIpDirect(const bool& _closeIpDirect)
{
    m_closeIpDirect = _closeIpDirect;
    m_closeIpDirectHasBeenSet = true;
}

bool CreateModuleRequest::CloseIpDirectHasBeenSet() const
{
    return m_closeIpDirectHasBeenSet;
}

vector<TagSpecification> CreateModuleRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateModuleRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateModuleRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

vector<string> CreateModuleRequest::GetSecurityGroups() const
{
    return m_securityGroups;
}

void CreateModuleRequest::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool CreateModuleRequest::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

int64_t CreateModuleRequest::GetDefaultBandWidthIn() const
{
    return m_defaultBandWidthIn;
}

void CreateModuleRequest::SetDefaultBandWidthIn(const int64_t& _defaultBandWidthIn)
{
    m_defaultBandWidthIn = _defaultBandWidthIn;
    m_defaultBandWidthInHasBeenSet = true;
}

bool CreateModuleRequest::DefaultBandWidthInHasBeenSet() const
{
    return m_defaultBandWidthInHasBeenSet;
}

bool CreateModuleRequest::GetDisableWanIp() const
{
    return m_disableWanIp;
}

void CreateModuleRequest::SetDisableWanIp(const bool& _disableWanIp)
{
    m_disableWanIp = _disableWanIp;
    m_disableWanIpHasBeenSet = true;
}

bool CreateModuleRequest::DisableWanIpHasBeenSet() const
{
    return m_disableWanIpHasBeenSet;
}


