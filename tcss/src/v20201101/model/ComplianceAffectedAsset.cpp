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

#include <tencentcloud/tcss/v20201101/model/ComplianceAffectedAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceAffectedAsset::ComplianceAffectedAsset() :
    m_customerAssetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_verifyInfoHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_imageRegistryInfoHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceAffectedAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerAssetId") && !value["CustomerAssetId"].IsNull())
    {
        if (!value["CustomerAssetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.CustomerAssetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerAssetId = value["CustomerAssetId"].GetUint64();
        m_customerAssetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("VerifyInfo") && !value["VerifyInfo"].IsNull())
    {
        if (!value["VerifyInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.VerifyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyInfo = string(value["VerifyInfo"].GetString());
        m_verifyInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ImageRegistryInfo") && !value["ImageRegistryInfo"].IsNull())
    {
        if (!value["ImageRegistryInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.ImageRegistryInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAffectedAsset.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceAffectedAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerAssetId, allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
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

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyInfo.c_str(), allocator).Move(), allocator);
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


uint64_t ComplianceAffectedAsset::GetCustomerAssetId() const
{
    return m_customerAssetId;
}

void ComplianceAffectedAsset::SetCustomerAssetId(const uint64_t& _customerAssetId)
{
    m_customerAssetId = _customerAssetId;
    m_customerAssetIdHasBeenSet = true;
}

bool ComplianceAffectedAsset::CustomerAssetIdHasBeenSet() const
{
    return m_customerAssetIdHasBeenSet;
}

string ComplianceAffectedAsset::GetAssetName() const
{
    return m_assetName;
}

void ComplianceAffectedAsset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool ComplianceAffectedAsset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string ComplianceAffectedAsset::GetAssetType() const
{
    return m_assetType;
}

void ComplianceAffectedAsset::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ComplianceAffectedAsset::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string ComplianceAffectedAsset::GetCheckStatus() const
{
    return m_checkStatus;
}

void ComplianceAffectedAsset::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ComplianceAffectedAsset::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string ComplianceAffectedAsset::GetNodeName() const
{
    return m_nodeName;
}

void ComplianceAffectedAsset::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ComplianceAffectedAsset::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ComplianceAffectedAsset::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void ComplianceAffectedAsset::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool ComplianceAffectedAsset::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string ComplianceAffectedAsset::GetCheckResult() const
{
    return m_checkResult;
}

void ComplianceAffectedAsset::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ComplianceAffectedAsset::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string ComplianceAffectedAsset::GetHostIP() const
{
    return m_hostIP;
}

void ComplianceAffectedAsset::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool ComplianceAffectedAsset::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string ComplianceAffectedAsset::GetImageTag() const
{
    return m_imageTag;
}

void ComplianceAffectedAsset::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ComplianceAffectedAsset::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string ComplianceAffectedAsset::GetVerifyInfo() const
{
    return m_verifyInfo;
}

void ComplianceAffectedAsset::SetVerifyInfo(const string& _verifyInfo)
{
    m_verifyInfo = _verifyInfo;
    m_verifyInfoHasBeenSet = true;
}

bool ComplianceAffectedAsset::VerifyInfoHasBeenSet() const
{
    return m_verifyInfoHasBeenSet;
}

string ComplianceAffectedAsset::GetInstanceId() const
{
    return m_instanceId;
}

void ComplianceAffectedAsset::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ComplianceAffectedAsset::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ImageRegistryInfo ComplianceAffectedAsset::GetImageRegistryInfo() const
{
    return m_imageRegistryInfo;
}

void ComplianceAffectedAsset::SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo)
{
    m_imageRegistryInfo = _imageRegistryInfo;
    m_imageRegistryInfoHasBeenSet = true;
}

bool ComplianceAffectedAsset::ImageRegistryInfoHasBeenSet() const
{
    return m_imageRegistryInfoHasBeenSet;
}

string ComplianceAffectedAsset::GetClusterID() const
{
    return m_clusterID;
}

void ComplianceAffectedAsset::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ComplianceAffectedAsset::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ComplianceAffectedAsset::GetClusterName() const
{
    return m_clusterName;
}

void ComplianceAffectedAsset::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ComplianceAffectedAsset::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

