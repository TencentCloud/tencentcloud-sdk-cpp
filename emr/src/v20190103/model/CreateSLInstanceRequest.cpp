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

#include <tencentcloud/emr/v20190103/model/CreateSLInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CreateSLInstanceRequest::CreateSLInstanceRequest() :
    m_instanceNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_zoneSettingsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_prePaySettingHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateSLInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneSettings.begin(); itr != m_zoneSettings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_prePaySettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrePaySetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prePaySetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSLInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateSLInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateSLInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CreateSLInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateSLInstanceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateSLInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateSLInstanceRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateSLInstanceRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateSLInstanceRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t CreateSLInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateSLInstanceRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateSLInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CreateSLInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void CreateSLInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool CreateSLInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<ZoneSetting> CreateSLInstanceRequest::GetZoneSettings() const
{
    return m_zoneSettings;
}

void CreateSLInstanceRequest::SetZoneSettings(const vector<ZoneSetting>& _zoneSettings)
{
    m_zoneSettings = _zoneSettings;
    m_zoneSettingsHasBeenSet = true;
}

bool CreateSLInstanceRequest::ZoneSettingsHasBeenSet() const
{
    return m_zoneSettingsHasBeenSet;
}

vector<Tag> CreateSLInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateSLInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSLInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

PrePaySetting CreateSLInstanceRequest::GetPrePaySetting() const
{
    return m_prePaySetting;
}

void CreateSLInstanceRequest::SetPrePaySetting(const PrePaySetting& _prePaySetting)
{
    m_prePaySetting = _prePaySetting;
    m_prePaySettingHasBeenSet = true;
}

bool CreateSLInstanceRequest::PrePaySettingHasBeenSet() const
{
    return m_prePaySettingHasBeenSet;
}

string CreateSLInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateSLInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateSLInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


