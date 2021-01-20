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

#include <tencentcloud/tsf/v20180326/model/AddClusterInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

AddClusterInstancesRequest::AddClusterInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_instanceImportModeHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_featureIdListHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string AddClusterInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_osNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_sgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sgId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceImportModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceImportMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceImportMode.c_str(), allocator).Move(), allocator);
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FeatureIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_featureIdList.begin(); itr != m_featureIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddClusterInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddClusterInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddClusterInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> AddClusterInstancesRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void AddClusterInstancesRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool AddClusterInstancesRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string AddClusterInstancesRequest::GetOsName() const
{
    return m_osName;
}

void AddClusterInstancesRequest::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool AddClusterInstancesRequest::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string AddClusterInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void AddClusterInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AddClusterInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AddClusterInstancesRequest::GetPassword() const
{
    return m_password;
}

void AddClusterInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AddClusterInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string AddClusterInstancesRequest::GetKeyId() const
{
    return m_keyId;
}

void AddClusterInstancesRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool AddClusterInstancesRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string AddClusterInstancesRequest::GetSgId() const
{
    return m_sgId;
}

void AddClusterInstancesRequest::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool AddClusterInstancesRequest::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

string AddClusterInstancesRequest::GetInstanceImportMode() const
{
    return m_instanceImportMode;
}

void AddClusterInstancesRequest::SetInstanceImportMode(const string& _instanceImportMode)
{
    m_instanceImportMode = _instanceImportMode;
    m_instanceImportModeHasBeenSet = true;
}

bool AddClusterInstancesRequest::InstanceImportModeHasBeenSet() const
{
    return m_instanceImportModeHasBeenSet;
}

string AddClusterInstancesRequest::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void AddClusterInstancesRequest::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool AddClusterInstancesRequest::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

vector<string> AddClusterInstancesRequest::GetFeatureIdList() const
{
    return m_featureIdList;
}

void AddClusterInstancesRequest::SetFeatureIdList(const vector<string>& _featureIdList)
{
    m_featureIdList = _featureIdList;
    m_featureIdListHasBeenSet = true;
}

bool AddClusterInstancesRequest::FeatureIdListHasBeenSet() const
{
    return m_featureIdListHasBeenSet;
}

InstanceAdvancedSettings AddClusterInstancesRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void AddClusterInstancesRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool AddClusterInstancesRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

vector<string> AddClusterInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void AddClusterInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool AddClusterInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


