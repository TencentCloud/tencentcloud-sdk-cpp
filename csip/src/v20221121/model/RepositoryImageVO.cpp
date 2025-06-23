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

#include <tencentcloud/csip/v20221121/model/RepositoryImageVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RepositoryImageVO::RepositoryImageVO() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_instanceSizeHasBeenSet(false),
    m_buildCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_repositoryUrlHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_vulRiskHasBeenSet(false),
    m_checkCountHasBeenSet(false),
    m_checkTimeHasBeenSet(false),
    m_isNewAssetHasBeenSet(false)
{
}

CoreInternalOutcome RepositoryImageVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreateTime") && !value["InstanceCreateTime"].IsNull())
    {
        if (!value["InstanceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.InstanceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreateTime = string(value["InstanceCreateTime"].GetString());
        m_instanceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceSize") && !value["InstanceSize"].IsNull())
    {
        if (!value["InstanceSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.InstanceSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceSize = string(value["InstanceSize"].GetString());
        m_instanceSizeHasBeenSet = true;
    }

    if (value.HasMember("BuildCount") && !value["BuildCount"].IsNull())
    {
        if (!value["BuildCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.BuildCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buildCount = value["BuildCount"].GetInt64();
        m_buildCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthStatus") && !value["AuthStatus"].IsNull())
    {
        if (!value["AuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.AuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = value["AuthStatus"].GetInt64();
        m_authStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RepositoryUrl") && !value["RepositoryUrl"].IsNull())
    {
        if (!value["RepositoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.RepositoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryUrl = string(value["RepositoryUrl"].GetString());
        m_repositoryUrlHasBeenSet = true;
    }

    if (value.HasMember("RepositoryName") && !value["RepositoryName"].IsNull())
    {
        if (!value["RepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.RepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryName = string(value["RepositoryName"].GetString());
        m_repositoryNameHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("VulRisk") && !value["VulRisk"].IsNull())
    {
        if (!value["VulRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.VulRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulRisk = value["VulRisk"].GetInt64();
        m_vulRiskHasBeenSet = true;
    }

    if (value.HasMember("CheckCount") && !value["CheckCount"].IsNull())
    {
        if (!value["CheckCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.CheckCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkCount = value["CheckCount"].GetInt64();
        m_checkCountHasBeenSet = true;
    }

    if (value.HasMember("CheckTime") && !value["CheckTime"].IsNull())
    {
        if (!value["CheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.CheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkTime = string(value["CheckTime"].GetString());
        m_checkTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryImageVO.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepositoryImageVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceSize.c_str(), allocator).Move(), allocator);
    }

    if (m_buildCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildCount, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authStatus, allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_vulRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulRisk, allocator);
    }

    if (m_checkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkCount, allocator);
    }

    if (m_checkTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

}


int64_t RepositoryImageVO::GetAppId() const
{
    return m_appId;
}

void RepositoryImageVO::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RepositoryImageVO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RepositoryImageVO::GetUin() const
{
    return m_uin;
}

void RepositoryImageVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RepositoryImageVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RepositoryImageVO::GetNickName() const
{
    return m_nickName;
}

void RepositoryImageVO::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool RepositoryImageVO::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string RepositoryImageVO::GetInstanceId() const
{
    return m_instanceId;
}

void RepositoryImageVO::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RepositoryImageVO::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RepositoryImageVO::GetInstanceName() const
{
    return m_instanceName;
}

void RepositoryImageVO::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RepositoryImageVO::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RepositoryImageVO::GetInstanceCreateTime() const
{
    return m_instanceCreateTime;
}

void RepositoryImageVO::SetInstanceCreateTime(const string& _instanceCreateTime)
{
    m_instanceCreateTime = _instanceCreateTime;
    m_instanceCreateTimeHasBeenSet = true;
}

bool RepositoryImageVO::InstanceCreateTimeHasBeenSet() const
{
    return m_instanceCreateTimeHasBeenSet;
}

string RepositoryImageVO::GetInstanceSize() const
{
    return m_instanceSize;
}

void RepositoryImageVO::SetInstanceSize(const string& _instanceSize)
{
    m_instanceSize = _instanceSize;
    m_instanceSizeHasBeenSet = true;
}

bool RepositoryImageVO::InstanceSizeHasBeenSet() const
{
    return m_instanceSizeHasBeenSet;
}

int64_t RepositoryImageVO::GetBuildCount() const
{
    return m_buildCount;
}

void RepositoryImageVO::SetBuildCount(const int64_t& _buildCount)
{
    m_buildCount = _buildCount;
    m_buildCountHasBeenSet = true;
}

bool RepositoryImageVO::BuildCountHasBeenSet() const
{
    return m_buildCountHasBeenSet;
}

string RepositoryImageVO::GetInstanceType() const
{
    return m_instanceType;
}

void RepositoryImageVO::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RepositoryImageVO::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t RepositoryImageVO::GetAuthStatus() const
{
    return m_authStatus;
}

void RepositoryImageVO::SetAuthStatus(const int64_t& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool RepositoryImageVO::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

string RepositoryImageVO::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void RepositoryImageVO::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool RepositoryImageVO::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string RepositoryImageVO::GetRegion() const
{
    return m_region;
}

void RepositoryImageVO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RepositoryImageVO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RepositoryImageVO::GetRepositoryUrl() const
{
    return m_repositoryUrl;
}

void RepositoryImageVO::SetRepositoryUrl(const string& _repositoryUrl)
{
    m_repositoryUrl = _repositoryUrl;
    m_repositoryUrlHasBeenSet = true;
}

bool RepositoryImageVO::RepositoryUrlHasBeenSet() const
{
    return m_repositoryUrlHasBeenSet;
}

string RepositoryImageVO::GetRepositoryName() const
{
    return m_repositoryName;
}

void RepositoryImageVO::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool RepositoryImageVO::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

uint64_t RepositoryImageVO::GetIsCore() const
{
    return m_isCore;
}

void RepositoryImageVO::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool RepositoryImageVO::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

int64_t RepositoryImageVO::GetVulRisk() const
{
    return m_vulRisk;
}

void RepositoryImageVO::SetVulRisk(const int64_t& _vulRisk)
{
    m_vulRisk = _vulRisk;
    m_vulRiskHasBeenSet = true;
}

bool RepositoryImageVO::VulRiskHasBeenSet() const
{
    return m_vulRiskHasBeenSet;
}

int64_t RepositoryImageVO::GetCheckCount() const
{
    return m_checkCount;
}

void RepositoryImageVO::SetCheckCount(const int64_t& _checkCount)
{
    m_checkCount = _checkCount;
    m_checkCountHasBeenSet = true;
}

bool RepositoryImageVO::CheckCountHasBeenSet() const
{
    return m_checkCountHasBeenSet;
}

string RepositoryImageVO::GetCheckTime() const
{
    return m_checkTime;
}

void RepositoryImageVO::SetCheckTime(const string& _checkTime)
{
    m_checkTime = _checkTime;
    m_checkTimeHasBeenSet = true;
}

bool RepositoryImageVO::CheckTimeHasBeenSet() const
{
    return m_checkTimeHasBeenSet;
}

uint64_t RepositoryImageVO::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void RepositoryImageVO::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool RepositoryImageVO::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

