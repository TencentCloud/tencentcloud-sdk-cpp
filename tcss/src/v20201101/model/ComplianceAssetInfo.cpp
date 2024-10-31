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

#include <tencentcloud/tcss/v20201101/model/ComplianceAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceAssetInfo::ComplianceAssetInfo() :
    m_customerAssetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_passedPolicyItemCountHasBeenSet(false),
    m_failedPolicyItemCountHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_imageRegistryInfoHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerAssetId") && !value["CustomerAssetId"].IsNull())
    {
        if (!value["CustomerAssetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.CustomerAssetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerAssetId = value["CustomerAssetId"].GetUint64();
        m_customerAssetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("PassedPolicyItemCount") && !value["PassedPolicyItemCount"].IsNull())
    {
        if (!value["PassedPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.PassedPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passedPolicyItemCount = value["PassedPolicyItemCount"].GetUint64();
        m_passedPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedPolicyItemCount") && !value["FailedPolicyItemCount"].IsNull())
    {
        if (!value["FailedPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.FailedPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedPolicyItemCount = value["FailedPolicyItemCount"].GetUint64();
        m_failedPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ImageRegistryInfo") && !value["ImageRegistryInfo"].IsNull())
    {
        if (!value["ImageRegistryInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.ImageRegistryInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageRegistryInfo.Deserialize(value["ImageRegistryInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageRegistryInfoHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerAssetId, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_passedPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassedPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passedPolicyItemCount, allocator);
    }

    if (m_failedPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedPolicyItemCount, allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkResult.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageRegistryInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceAssetInfo::GetCustomerAssetId() const
{
    return m_customerAssetId;
}

void ComplianceAssetInfo::SetCustomerAssetId(const uint64_t& _customerAssetId)
{
    m_customerAssetId = _customerAssetId;
    m_customerAssetIdHasBeenSet = true;
}

bool ComplianceAssetInfo::CustomerAssetIdHasBeenSet() const
{
    return m_customerAssetIdHasBeenSet;
}

string ComplianceAssetInfo::GetAssetType() const
{
    return m_assetType;
}

void ComplianceAssetInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ComplianceAssetInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string ComplianceAssetInfo::GetAssetName() const
{
    return m_assetName;
}

void ComplianceAssetInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool ComplianceAssetInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string ComplianceAssetInfo::GetImageTag() const
{
    return m_imageTag;
}

void ComplianceAssetInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ComplianceAssetInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string ComplianceAssetInfo::GetHostIP() const
{
    return m_hostIP;
}

void ComplianceAssetInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool ComplianceAssetInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string ComplianceAssetInfo::GetNodeName() const
{
    return m_nodeName;
}

void ComplianceAssetInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ComplianceAssetInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ComplianceAssetInfo::GetCheckStatus() const
{
    return m_checkStatus;
}

void ComplianceAssetInfo::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ComplianceAssetInfo::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

uint64_t ComplianceAssetInfo::GetPassedPolicyItemCount() const
{
    return m_passedPolicyItemCount;
}

void ComplianceAssetInfo::SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount)
{
    m_passedPolicyItemCount = _passedPolicyItemCount;
    m_passedPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetInfo::PassedPolicyItemCountHasBeenSet() const
{
    return m_passedPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetInfo::GetFailedPolicyItemCount() const
{
    return m_failedPolicyItemCount;
}

void ComplianceAssetInfo::SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount)
{
    m_failedPolicyItemCount = _failedPolicyItemCount;
    m_failedPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetInfo::FailedPolicyItemCountHasBeenSet() const
{
    return m_failedPolicyItemCountHasBeenSet;
}

string ComplianceAssetInfo::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void ComplianceAssetInfo::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool ComplianceAssetInfo::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string ComplianceAssetInfo::GetCheckResult() const
{
    return m_checkResult;
}

void ComplianceAssetInfo::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ComplianceAssetInfo::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string ComplianceAssetInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ComplianceAssetInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ComplianceAssetInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ImageRegistryInfo ComplianceAssetInfo::GetImageRegistryInfo() const
{
    return m_imageRegistryInfo;
}

void ComplianceAssetInfo::SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo)
{
    m_imageRegistryInfo = _imageRegistryInfo;
    m_imageRegistryInfoHasBeenSet = true;
}

bool ComplianceAssetInfo::ImageRegistryInfoHasBeenSet() const
{
    return m_imageRegistryInfoHasBeenSet;
}

string ComplianceAssetInfo::GetClusterID() const
{
    return m_clusterID;
}

void ComplianceAssetInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ComplianceAssetInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ComplianceAssetInfo::GetClusterName() const
{
    return m_clusterName;
}

void ComplianceAssetInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ComplianceAssetInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

