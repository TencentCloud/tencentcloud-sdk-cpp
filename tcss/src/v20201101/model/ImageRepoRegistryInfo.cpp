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

#include <tencentcloud/tcss/v20201101/model/ImageRepoRegistryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageRepoRegistryInfo::ImageRepoRegistryInfo() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryVersionHasBeenSet(false),
    m_connectMsgHasBeenSet(false),
    m_connDetectTypeHasBeenSet(false),
    m_connDetectHostCountHasBeenSet(false),
    m_connDetectDetailHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_latestSyncTimeHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_syncFailReasonHasBeenSet(false),
    m_syncSolutionHasBeenSet(false),
    m_syncMessageHasBeenSet(false),
    m_syncModeHasBeenSet(false)
{
}

CoreInternalOutcome ImageRepoRegistryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.RegistryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = value["RegistryId"].GetUint64();
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("RegistryRegion") && !value["RegistryRegion"].IsNull())
    {
        if (!value["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(value["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (value.HasMember("RegistryVersion") && !value["RegistryVersion"].IsNull())
    {
        if (!value["RegistryVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.RegistryVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryVersion = string(value["RegistryVersion"].GetString());
        m_registryVersionHasBeenSet = true;
    }

    if (value.HasMember("ConnectMsg") && !value["ConnectMsg"].IsNull())
    {
        if (!value["ConnectMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.ConnectMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectMsg = string(value["ConnectMsg"].GetString());
        m_connectMsgHasBeenSet = true;
    }

    if (value.HasMember("ConnDetectType") && !value["ConnDetectType"].IsNull())
    {
        if (!value["ConnDetectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.ConnDetectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connDetectType = string(value["ConnDetectType"].GetString());
        m_connDetectTypeHasBeenSet = true;
    }

    if (value.HasMember("ConnDetectHostCount") && !value["ConnDetectHostCount"].IsNull())
    {
        if (!value["ConnDetectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.ConnDetectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connDetectHostCount = value["ConnDetectHostCount"].GetUint64();
        m_connDetectHostCountHasBeenSet = true;
    }

    if (value.HasMember("ConnDetectDetail") && !value["ConnDetectDetail"].IsNull())
    {
        if (!value["ConnDetectDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.ConnDetectDetail` is not array type"));

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

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("LatestSyncTime") && !value["LatestSyncTime"].IsNull())
    {
        if (!value["LatestSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.LatestSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSyncTime = string(value["LatestSyncTime"].GetString());
        m_latestSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SyncFailReason") && !value["SyncFailReason"].IsNull())
    {
        if (!value["SyncFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.SyncFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncFailReason = string(value["SyncFailReason"].GetString());
        m_syncFailReasonHasBeenSet = true;
    }

    if (value.HasMember("SyncSolution") && !value["SyncSolution"].IsNull())
    {
        if (!value["SyncSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.SyncSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncSolution = string(value["SyncSolution"].GetString());
        m_syncSolutionHasBeenSet = true;
    }

    if (value.HasMember("SyncMessage") && !value["SyncMessage"].IsNull())
    {
        if (!value["SyncMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.SyncMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncMessage = string(value["SyncMessage"].GetString());
        m_syncMessageHasBeenSet = true;
    }

    if (value.HasMember("SyncMode") && !value["SyncMode"].IsNull())
    {
        if (!value["SyncMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepoRegistryInfo.SyncMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncMode = value["SyncMode"].GetUint64();
        m_syncModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRepoRegistryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_connectMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_connDetectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnDetectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connDetectType.c_str(), allocator).Move(), allocator);
    }

    if (m_connDetectHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnDetectHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connDetectHostCount, allocator);
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

    if (m_syncSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_syncMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncMode, allocator);
    }

}


uint64_t ImageRepoRegistryInfo::GetRegistryId() const
{
    return m_registryId;
}

void ImageRepoRegistryInfo::SetRegistryId(const uint64_t& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ImageRepoRegistryInfo::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ImageRepoRegistryInfo::GetName() const
{
    return m_name;
}

void ImageRepoRegistryInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRepoRegistryInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageRepoRegistryInfo::GetRegistryType() const
{
    return m_registryType;
}

void ImageRepoRegistryInfo::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ImageRepoRegistryInfo::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string ImageRepoRegistryInfo::GetUrl() const
{
    return m_url;
}

void ImageRepoRegistryInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ImageRepoRegistryInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ImageRepoRegistryInfo::GetNetType() const
{
    return m_netType;
}

void ImageRepoRegistryInfo::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ImageRepoRegistryInfo::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string ImageRepoRegistryInfo::GetRegistryRegion() const
{
    return m_registryRegion;
}

void ImageRepoRegistryInfo::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool ImageRepoRegistryInfo::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string ImageRepoRegistryInfo::GetRegistryVersion() const
{
    return m_registryVersion;
}

void ImageRepoRegistryInfo::SetRegistryVersion(const string& _registryVersion)
{
    m_registryVersion = _registryVersion;
    m_registryVersionHasBeenSet = true;
}

bool ImageRepoRegistryInfo::RegistryVersionHasBeenSet() const
{
    return m_registryVersionHasBeenSet;
}

string ImageRepoRegistryInfo::GetConnectMsg() const
{
    return m_connectMsg;
}

void ImageRepoRegistryInfo::SetConnectMsg(const string& _connectMsg)
{
    m_connectMsg = _connectMsg;
    m_connectMsgHasBeenSet = true;
}

bool ImageRepoRegistryInfo::ConnectMsgHasBeenSet() const
{
    return m_connectMsgHasBeenSet;
}

string ImageRepoRegistryInfo::GetConnDetectType() const
{
    return m_connDetectType;
}

void ImageRepoRegistryInfo::SetConnDetectType(const string& _connDetectType)
{
    m_connDetectType = _connDetectType;
    m_connDetectTypeHasBeenSet = true;
}

bool ImageRepoRegistryInfo::ConnDetectTypeHasBeenSet() const
{
    return m_connDetectTypeHasBeenSet;
}

uint64_t ImageRepoRegistryInfo::GetConnDetectHostCount() const
{
    return m_connDetectHostCount;
}

void ImageRepoRegistryInfo::SetConnDetectHostCount(const uint64_t& _connDetectHostCount)
{
    m_connDetectHostCount = _connDetectHostCount;
    m_connDetectHostCountHasBeenSet = true;
}

bool ImageRepoRegistryInfo::ConnDetectHostCountHasBeenSet() const
{
    return m_connDetectHostCountHasBeenSet;
}

vector<RegistryConnDetectResult> ImageRepoRegistryInfo::GetConnDetectDetail() const
{
    return m_connDetectDetail;
}

void ImageRepoRegistryInfo::SetConnDetectDetail(const vector<RegistryConnDetectResult>& _connDetectDetail)
{
    m_connDetectDetail = _connDetectDetail;
    m_connDetectDetailHasBeenSet = true;
}

bool ImageRepoRegistryInfo::ConnDetectDetailHasBeenSet() const
{
    return m_connDetectDetailHasBeenSet;
}

string ImageRepoRegistryInfo::GetInstanceID() const
{
    return m_instanceID;
}

void ImageRepoRegistryInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ImageRepoRegistryInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ImageRepoRegistryInfo::GetLatestSyncTime() const
{
    return m_latestSyncTime;
}

void ImageRepoRegistryInfo::SetLatestSyncTime(const string& _latestSyncTime)
{
    m_latestSyncTime = _latestSyncTime;
    m_latestSyncTimeHasBeenSet = true;
}

bool ImageRepoRegistryInfo::LatestSyncTimeHasBeenSet() const
{
    return m_latestSyncTimeHasBeenSet;
}

string ImageRepoRegistryInfo::GetSyncStatus() const
{
    return m_syncStatus;
}

void ImageRepoRegistryInfo::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool ImageRepoRegistryInfo::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string ImageRepoRegistryInfo::GetSyncFailReason() const
{
    return m_syncFailReason;
}

void ImageRepoRegistryInfo::SetSyncFailReason(const string& _syncFailReason)
{
    m_syncFailReason = _syncFailReason;
    m_syncFailReasonHasBeenSet = true;
}

bool ImageRepoRegistryInfo::SyncFailReasonHasBeenSet() const
{
    return m_syncFailReasonHasBeenSet;
}

string ImageRepoRegistryInfo::GetSyncSolution() const
{
    return m_syncSolution;
}

void ImageRepoRegistryInfo::SetSyncSolution(const string& _syncSolution)
{
    m_syncSolution = _syncSolution;
    m_syncSolutionHasBeenSet = true;
}

bool ImageRepoRegistryInfo::SyncSolutionHasBeenSet() const
{
    return m_syncSolutionHasBeenSet;
}

string ImageRepoRegistryInfo::GetSyncMessage() const
{
    return m_syncMessage;
}

void ImageRepoRegistryInfo::SetSyncMessage(const string& _syncMessage)
{
    m_syncMessage = _syncMessage;
    m_syncMessageHasBeenSet = true;
}

bool ImageRepoRegistryInfo::SyncMessageHasBeenSet() const
{
    return m_syncMessageHasBeenSet;
}

uint64_t ImageRepoRegistryInfo::GetSyncMode() const
{
    return m_syncMode;
}

void ImageRepoRegistryInfo::SetSyncMode(const uint64_t& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool ImageRepoRegistryInfo::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

