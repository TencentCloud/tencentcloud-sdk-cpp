/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ImageRegistryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryInfo::ImageRegistryInfo() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryVersionHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_latestSyncTimeHasBeenSet(false),
    m_syncSolutionHasBeenSet(false),
    m_syncModeHasBeenSet(false),
    m_connDetectDetailHasBeenSet(false),
    m_connDetectTypeHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_syncFailReasonHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.RegistryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = value["RegistryId"].GetUint64();
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("RegistryVersion") && !value["RegistryVersion"].IsNull())
    {
        if (!value["RegistryVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.RegistryVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryVersion = string(value["RegistryVersion"].GetString());
        m_registryVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("LatestSyncTime") && !value["LatestSyncTime"].IsNull())
    {
        if (!value["LatestSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.LatestSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSyncTime = string(value["LatestSyncTime"].GetString());
        m_latestSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("SyncSolution") && !value["SyncSolution"].IsNull())
    {
        if (!value["SyncSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.SyncSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncSolution = string(value["SyncSolution"].GetString());
        m_syncSolutionHasBeenSet = true;
    }

    if (value.HasMember("SyncMode") && !value["SyncMode"].IsNull())
    {
        if (!value["SyncMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.SyncMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncMode = value["SyncMode"].GetUint64();
        m_syncModeHasBeenSet = true;
    }

    if (value.HasMember("ConnDetectDetail") && !value["ConnDetectDetail"].IsNull())
    {
        if (!value["ConnDetectDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.ConnDetectDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["ConnDetectDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegistryConnDetectResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_connDetectDetail.push_back(item);
        }
        m_connDetectDetailHasBeenSet = true;
    }

    if (value.HasMember("ConnDetectType") && !value["ConnDetectType"].IsNull())
    {
        if (!value["ConnDetectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.ConnDetectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connDetectType = string(value["ConnDetectType"].GetString());
        m_connDetectTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SyncFailReason") && !value["SyncFailReason"].IsNull())
    {
        if (!value["SyncFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.SyncFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncFailReason = string(value["SyncFailReason"].GetString());
        m_syncFailReasonHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_syncSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncMode, allocator);
    }

    if (m_connDetectDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnDetectDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_connDetectDetail.begin(); itr != m_connDetectDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_connDetectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnDetectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connDetectType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_syncFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageRegistryInfo::GetRegistryId() const
{
    return m_registryId;
}

void ImageRegistryInfo::SetRegistryId(const uint64_t& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ImageRegistryInfo::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ImageRegistryInfo::GetName() const
{
    return m_name;
}

void ImageRegistryInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRegistryInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageRegistryInfo::GetRegistryType() const
{
    return m_registryType;
}

void ImageRegistryInfo::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageRegistryInfo::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string ImageRegistryInfo::GetUrl() const
{
    return m_url;
}

void ImageRegistryInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ImageRegistryInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ImageRegistryInfo::GetNetType() const
{
    return m_netType;
}

void ImageRegistryInfo::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ImageRegistryInfo::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string ImageRegistryInfo::GetRegistryRegion() const
{
    return m_registryRegion;
}

void ImageRegistryInfo::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool ImageRegistryInfo::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string ImageRegistryInfo::GetRegistryVersion() const
{
    return m_registryVersion;
}

void ImageRegistryInfo::SetRegistryVersion(const string& _registryVersion)
{
    m_registryVersion = _registryVersion;
    m_registryVersionHasBeenSet = true;
}

bool ImageRegistryInfo::RegistryVersionHasBeenSet() const
{
    return m_registryVersionHasBeenSet;
}

string ImageRegistryInfo::GetInstanceID() const
{
    return m_instanceID;
}

void ImageRegistryInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ImageRegistryInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ImageRegistryInfo::GetLatestSyncTime() const
{
    return m_latestSyncTime;
}

void ImageRegistryInfo::SetLatestSyncTime(const string& _latestSyncTime)
{
    m_latestSyncTime = _latestSyncTime;
    m_latestSyncTimeHasBeenSet = true;
}

bool ImageRegistryInfo::LatestSyncTimeHasBeenSet() const
{
    return m_latestSyncTimeHasBeenSet;
}

string ImageRegistryInfo::GetSyncSolution() const
{
    return m_syncSolution;
}

void ImageRegistryInfo::SetSyncSolution(const string& _syncSolution)
{
    m_syncSolution = _syncSolution;
    m_syncSolutionHasBeenSet = true;
}

bool ImageRegistryInfo::SyncSolutionHasBeenSet() const
{
    return m_syncSolutionHasBeenSet;
}

uint64_t ImageRegistryInfo::GetSyncMode() const
{
    return m_syncMode;
}

void ImageRegistryInfo::SetSyncMode(const uint64_t& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool ImageRegistryInfo::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

vector<RegistryConnDetectResult> ImageRegistryInfo::GetConnDetectDetail() const
{
    return m_connDetectDetail;
}

void ImageRegistryInfo::SetConnDetectDetail(const vector<RegistryConnDetectResult>& _connDetectDetail)
{
    m_connDetectDetail = _connDetectDetail;
    m_connDetectDetailHasBeenSet = true;
}

bool ImageRegistryInfo::ConnDetectDetailHasBeenSet() const
{
    return m_connDetectDetailHasBeenSet;
}

string ImageRegistryInfo::GetConnDetectType() const
{
    return m_connDetectType;
}

void ImageRegistryInfo::SetConnDetectType(const string& _connDetectType)
{
    m_connDetectType = _connDetectType;
    m_connDetectTypeHasBeenSet = true;
}

bool ImageRegistryInfo::ConnDetectTypeHasBeenSet() const
{
    return m_connDetectTypeHasBeenSet;
}

string ImageRegistryInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageRegistryInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageRegistryInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageRegistryInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageRegistryInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageRegistryInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageRegistryInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageRegistryInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageRegistryInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ImageRegistryInfo::GetSyncStatus() const
{
    return m_syncStatus;
}

void ImageRegistryInfo::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool ImageRegistryInfo::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string ImageRegistryInfo::GetSyncFailReason() const
{
    return m_syncFailReason;
}

void ImageRegistryInfo::SetSyncFailReason(const string& _syncFailReason)
{
    m_syncFailReason = _syncFailReason;
    m_syncFailReasonHasBeenSet = true;
}

bool ImageRegistryInfo::SyncFailReasonHasBeenSet() const
{
    return m_syncFailReasonHasBeenSet;
}

RegionInfo ImageRegistryInfo::GetRegionInfo() const
{
    return m_regionInfo;
}

void ImageRegistryInfo::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool ImageRegistryInfo::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

string ImageRegistryInfo::GetUserName() const
{
    return m_userName;
}

void ImageRegistryInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ImageRegistryInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

