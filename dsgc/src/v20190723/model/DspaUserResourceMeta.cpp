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

#include <tencentcloud/dsgc/v20190723/model/DspaUserResourceMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaUserResourceMeta::DspaUserResourceMeta() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceVipHasBeenSet(false),
    m_resourceVPortHasBeenSet(false),
    m_resourceCreateTimeHasBeenSet(false),
    m_resourceUniqueVpcIdHasBeenSet(false),
    m_resourceUniqueSubnetIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceSyncTimeHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_buildTypeHasBeenSet(false),
    m_masterInsIdHasBeenSet(false),
    m_resourceVpcIdHasBeenSet(false),
    m_resourceSubnetIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_resourceVersionHasBeenSet(false),
    m_resourceAuthTypeHasBeenSet(false),
    m_resourceAuthAccountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceValueHasBeenSet(false),
    m_governAuthStatusHasBeenSet(false),
    m_authRangeHasBeenSet(false)
{
}

CoreInternalOutcome DspaUserResourceMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceVip") && !value["ResourceVip"].IsNull())
    {
        if (!value["ResourceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVip = string(value["ResourceVip"].GetString());
        m_resourceVipHasBeenSet = true;
    }

    if (value.HasMember("ResourceVPort") && !value["ResourceVPort"].IsNull())
    {
        if (!value["ResourceVPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceVPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVPort = value["ResourceVPort"].GetUint64();
        m_resourceVPortHasBeenSet = true;
    }

    if (value.HasMember("ResourceCreateTime") && !value["ResourceCreateTime"].IsNull())
    {
        if (!value["ResourceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCreateTime = string(value["ResourceCreateTime"].GetString());
        m_resourceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceUniqueVpcId") && !value["ResourceUniqueVpcId"].IsNull())
    {
        if (!value["ResourceUniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceUniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUniqueVpcId = string(value["ResourceUniqueVpcId"].GetString());
        m_resourceUniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceUniqueSubnetId") && !value["ResourceUniqueSubnetId"].IsNull())
    {
        if (!value["ResourceUniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceUniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUniqueSubnetId = string(value["ResourceUniqueSubnetId"].GetString());
        m_resourceUniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("MetaType") && !value["MetaType"].IsNull())
    {
        if (!value["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(value["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("ResourceSyncTime") && !value["ResourceSyncTime"].IsNull())
    {
        if (!value["ResourceSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceSyncTime = string(value["ResourceSyncTime"].GetString());
        m_resourceSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthStatus") && !value["AuthStatus"].IsNull())
    {
        if (!value["AuthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.AuthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = string(value["AuthStatus"].GetString());
        m_authStatusHasBeenSet = true;
    }

    if (value.HasMember("BuildType") && !value["BuildType"].IsNull())
    {
        if (!value["BuildType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.BuildType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildType = string(value["BuildType"].GetString());
        m_buildTypeHasBeenSet = true;
    }

    if (value.HasMember("MasterInsId") && !value["MasterInsId"].IsNull())
    {
        if (!value["MasterInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.MasterInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterInsId = string(value["MasterInsId"].GetString());
        m_masterInsIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceVpcId") && !value["ResourceVpcId"].IsNull())
    {
        if (!value["ResourceVpcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceVpcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVpcId = value["ResourceVpcId"].GetUint64();
        m_resourceVpcIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceSubnetId") && !value["ResourceSubnetId"].IsNull())
    {
        if (!value["ResourceSubnetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceSubnetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceSubnetId = value["ResourceSubnetId"].GetUint64();
        m_resourceSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ResourceVersion") && !value["ResourceVersion"].IsNull())
    {
        if (!value["ResourceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVersion = string(value["ResourceVersion"].GetString());
        m_resourceVersionHasBeenSet = true;
    }

    if (value.HasMember("ResourceAuthType") && !value["ResourceAuthType"].IsNull())
    {
        if (!value["ResourceAuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceAuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceAuthType = string(value["ResourceAuthType"].GetString());
        m_resourceAuthTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceAuthAccount") && !value["ResourceAuthAccount"].IsNull())
    {
        if (!value["ResourceAuthAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.ResourceAuthAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceAuthAccount = string(value["ResourceAuthAccount"].GetString());
        m_resourceAuthAccountHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceValue") && !value["InstanceValue"].IsNull())
    {
        if (!value["InstanceValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.InstanceValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceValue = string(value["InstanceValue"].GetString());
        m_instanceValueHasBeenSet = true;
    }

    if (value.HasMember("GovernAuthStatus") && !value["GovernAuthStatus"].IsNull())
    {
        if (!value["GovernAuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.GovernAuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_governAuthStatus = value["GovernAuthStatus"].GetInt64();
        m_governAuthStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthRange") && !value["AuthRange"].IsNull())
    {
        if (!value["AuthRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaUserResourceMeta.AuthRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authRange = string(value["AuthRange"].GetString());
        m_authRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaUserResourceMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceVPort, allocator);
    }

    if (m_resourceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }

    if (m_masterInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceVpcId, allocator);
    }

    if (m_resourceSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceSubnetId, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceAuthTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceAuthType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceAuthAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAuthAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceAuthAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_governAuthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernAuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_governAuthStatus, allocator);
    }

    if (m_authRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authRange.c_str(), allocator).Move(), allocator);
    }

}


string DspaUserResourceMeta::GetResourceId() const
{
    return m_resourceId;
}

void DspaUserResourceMeta::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DspaUserResourceMeta::GetResourceName() const
{
    return m_resourceName;
}

void DspaUserResourceMeta::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string DspaUserResourceMeta::GetResourceVip() const
{
    return m_resourceVip;
}

void DspaUserResourceMeta::SetResourceVip(const string& _resourceVip)
{
    m_resourceVip = _resourceVip;
    m_resourceVipHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceVipHasBeenSet() const
{
    return m_resourceVipHasBeenSet;
}

uint64_t DspaUserResourceMeta::GetResourceVPort() const
{
    return m_resourceVPort;
}

void DspaUserResourceMeta::SetResourceVPort(const uint64_t& _resourceVPort)
{
    m_resourceVPort = _resourceVPort;
    m_resourceVPortHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceVPortHasBeenSet() const
{
    return m_resourceVPortHasBeenSet;
}

string DspaUserResourceMeta::GetResourceCreateTime() const
{
    return m_resourceCreateTime;
}

void DspaUserResourceMeta::SetResourceCreateTime(const string& _resourceCreateTime)
{
    m_resourceCreateTime = _resourceCreateTime;
    m_resourceCreateTimeHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceCreateTimeHasBeenSet() const
{
    return m_resourceCreateTimeHasBeenSet;
}

string DspaUserResourceMeta::GetResourceUniqueVpcId() const
{
    return m_resourceUniqueVpcId;
}

void DspaUserResourceMeta::SetResourceUniqueVpcId(const string& _resourceUniqueVpcId)
{
    m_resourceUniqueVpcId = _resourceUniqueVpcId;
    m_resourceUniqueVpcIdHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceUniqueVpcIdHasBeenSet() const
{
    return m_resourceUniqueVpcIdHasBeenSet;
}

string DspaUserResourceMeta::GetResourceUniqueSubnetId() const
{
    return m_resourceUniqueSubnetId;
}

void DspaUserResourceMeta::SetResourceUniqueSubnetId(const string& _resourceUniqueSubnetId)
{
    m_resourceUniqueSubnetId = _resourceUniqueSubnetId;
    m_resourceUniqueSubnetIdHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceUniqueSubnetIdHasBeenSet() const
{
    return m_resourceUniqueSubnetIdHasBeenSet;
}

string DspaUserResourceMeta::GetMetaType() const
{
    return m_metaType;
}

void DspaUserResourceMeta::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool DspaUserResourceMeta::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string DspaUserResourceMeta::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DspaUserResourceMeta::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string DspaUserResourceMeta::GetResourceSyncTime() const
{
    return m_resourceSyncTime;
}

void DspaUserResourceMeta::SetResourceSyncTime(const string& _resourceSyncTime)
{
    m_resourceSyncTime = _resourceSyncTime;
    m_resourceSyncTimeHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceSyncTimeHasBeenSet() const
{
    return m_resourceSyncTimeHasBeenSet;
}

string DspaUserResourceMeta::GetAuthStatus() const
{
    return m_authStatus;
}

void DspaUserResourceMeta::SetAuthStatus(const string& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool DspaUserResourceMeta::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

string DspaUserResourceMeta::GetBuildType() const
{
    return m_buildType;
}

void DspaUserResourceMeta::SetBuildType(const string& _buildType)
{
    m_buildType = _buildType;
    m_buildTypeHasBeenSet = true;
}

bool DspaUserResourceMeta::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}

string DspaUserResourceMeta::GetMasterInsId() const
{
    return m_masterInsId;
}

void DspaUserResourceMeta::SetMasterInsId(const string& _masterInsId)
{
    m_masterInsId = _masterInsId;
    m_masterInsIdHasBeenSet = true;
}

bool DspaUserResourceMeta::MasterInsIdHasBeenSet() const
{
    return m_masterInsIdHasBeenSet;
}

uint64_t DspaUserResourceMeta::GetResourceVpcId() const
{
    return m_resourceVpcId;
}

void DspaUserResourceMeta::SetResourceVpcId(const uint64_t& _resourceVpcId)
{
    m_resourceVpcId = _resourceVpcId;
    m_resourceVpcIdHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceVpcIdHasBeenSet() const
{
    return m_resourceVpcIdHasBeenSet;
}

uint64_t DspaUserResourceMeta::GetResourceSubnetId() const
{
    return m_resourceSubnetId;
}

void DspaUserResourceMeta::SetResourceSubnetId(const uint64_t& _resourceSubnetId)
{
    m_resourceSubnetId = _resourceSubnetId;
    m_resourceSubnetIdHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceSubnetIdHasBeenSet() const
{
    return m_resourceSubnetIdHasBeenSet;
}

string DspaUserResourceMeta::GetProtocol() const
{
    return m_protocol;
}

void DspaUserResourceMeta::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DspaUserResourceMeta::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DspaUserResourceMeta::GetResourceVersion() const
{
    return m_resourceVersion;
}

void DspaUserResourceMeta::SetResourceVersion(const string& _resourceVersion)
{
    m_resourceVersion = _resourceVersion;
    m_resourceVersionHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceVersionHasBeenSet() const
{
    return m_resourceVersionHasBeenSet;
}

string DspaUserResourceMeta::GetResourceAuthType() const
{
    return m_resourceAuthType;
}

void DspaUserResourceMeta::SetResourceAuthType(const string& _resourceAuthType)
{
    m_resourceAuthType = _resourceAuthType;
    m_resourceAuthTypeHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceAuthTypeHasBeenSet() const
{
    return m_resourceAuthTypeHasBeenSet;
}

string DspaUserResourceMeta::GetResourceAuthAccount() const
{
    return m_resourceAuthAccount;
}

void DspaUserResourceMeta::SetResourceAuthAccount(const string& _resourceAuthAccount)
{
    m_resourceAuthAccount = _resourceAuthAccount;
    m_resourceAuthAccountHasBeenSet = true;
}

bool DspaUserResourceMeta::ResourceAuthAccountHasBeenSet() const
{
    return m_resourceAuthAccountHasBeenSet;
}

string DspaUserResourceMeta::GetInstanceType() const
{
    return m_instanceType;
}

void DspaUserResourceMeta::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DspaUserResourceMeta::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DspaUserResourceMeta::GetInstanceValue() const
{
    return m_instanceValue;
}

void DspaUserResourceMeta::SetInstanceValue(const string& _instanceValue)
{
    m_instanceValue = _instanceValue;
    m_instanceValueHasBeenSet = true;
}

bool DspaUserResourceMeta::InstanceValueHasBeenSet() const
{
    return m_instanceValueHasBeenSet;
}

int64_t DspaUserResourceMeta::GetGovernAuthStatus() const
{
    return m_governAuthStatus;
}

void DspaUserResourceMeta::SetGovernAuthStatus(const int64_t& _governAuthStatus)
{
    m_governAuthStatus = _governAuthStatus;
    m_governAuthStatusHasBeenSet = true;
}

bool DspaUserResourceMeta::GovernAuthStatusHasBeenSet() const
{
    return m_governAuthStatusHasBeenSet;
}

string DspaUserResourceMeta::GetAuthRange() const
{
    return m_authRange;
}

void DspaUserResourceMeta::SetAuthRange(const string& _authRange)
{
    m_authRange = _authRange;
    m_authRangeHasBeenSet = true;
}

bool DspaUserResourceMeta::AuthRangeHasBeenSet() const
{
    return m_authRangeHasBeenSet;
}

