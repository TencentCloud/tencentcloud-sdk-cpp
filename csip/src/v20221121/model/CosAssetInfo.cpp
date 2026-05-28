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

#include <tencentcloud/csip/v20221121/model/CosAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAssetInfo::CosAssetInfo() :
    m_appIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketRegionCodeHasBeenSet(false),
    m_bucketMarkerHasBeenSet(false),
    m_bucketOwnerUinHasBeenSet(false),
    m_bucketOwnerNickNameHasBeenSet(false),
    m_bucketTagInfoHasBeenSet(false),
    m_bucketSecuritySuggestionHasBeenSet(false),
    m_bucketAlarmListHasBeenSet(false),
    m_bucketRiskListHasBeenSet(false),
    m_bucketInvokeSourceIpCountHasBeenSet(false),
    m_bucketAccessWayHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_bucketIdHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_dataScanInfoHasBeenSet(false),
    m_bucketAzTypeHasBeenSet(false),
    m_bucketStorageSizeHasBeenSet(false),
    m_bucketObjectCountHasBeenSet(false),
    m_identifySampleRateHasBeenSet(false)
{
}

CoreInternalOutcome CosAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketRegionCode") && !value["BucketRegionCode"].IsNull())
    {
        if (!value["BucketRegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketRegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegionCode = string(value["BucketRegionCode"].GetString());
        m_bucketRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("BucketMarker") && !value["BucketMarker"].IsNull())
    {
        if (!value["BucketMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketMarker = string(value["BucketMarker"].GetString());
        m_bucketMarkerHasBeenSet = true;
    }

    if (value.HasMember("BucketOwnerUin") && !value["BucketOwnerUin"].IsNull())
    {
        if (!value["BucketOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketOwnerUin = string(value["BucketOwnerUin"].GetString());
        m_bucketOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("BucketOwnerNickName") && !value["BucketOwnerNickName"].IsNull())
    {
        if (!value["BucketOwnerNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketOwnerNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketOwnerNickName = string(value["BucketOwnerNickName"].GetString());
        m_bucketOwnerNickNameHasBeenSet = true;
    }

    if (value.HasMember("BucketTagInfo") && !value["BucketTagInfo"].IsNull())
    {
        if (!value["BucketTagInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketTagInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketTagInfo = string(value["BucketTagInfo"].GetString());
        m_bucketTagInfoHasBeenSet = true;
    }

    if (value.HasMember("BucketSecuritySuggestion") && !value["BucketSecuritySuggestion"].IsNull())
    {
        if (!value["BucketSecuritySuggestion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketSecuritySuggestion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketSecuritySuggestion = value["BucketSecuritySuggestion"].GetInt64();
        m_bucketSecuritySuggestionHasBeenSet = true;
    }

    if (value.HasMember("BucketAlarmList") && !value["BucketAlarmList"].IsNull())
    {
        if (!value["BucketAlarmList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketAlarmList` is not array type"));

        const rapidjson::Value &tmpValue = value["BucketAlarmList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskAlarmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bucketAlarmList.push_back(item);
        }
        m_bucketAlarmListHasBeenSet = true;
    }

    if (value.HasMember("BucketRiskList") && !value["BucketRiskList"].IsNull())
    {
        if (!value["BucketRiskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketRiskList` is not array type"));

        const rapidjson::Value &tmpValue = value["BucketRiskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskAlarmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bucketRiskList.push_back(item);
        }
        m_bucketRiskListHasBeenSet = true;
    }

    if (value.HasMember("BucketInvokeSourceIpCount") && !value["BucketInvokeSourceIpCount"].IsNull())
    {
        if (!value["BucketInvokeSourceIpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketInvokeSourceIpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketInvokeSourceIpCount = value["BucketInvokeSourceIpCount"].GetInt64();
        m_bucketInvokeSourceIpCountHasBeenSet = true;
    }

    if (value.HasMember("BucketAccessWay") && !value["BucketAccessWay"].IsNull())
    {
        if (!value["BucketAccessWay"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketAccessWay` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketAccessWay.Deserialize(value["BucketAccessWay"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketAccessWayHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.LastAccessTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = value["LastAccessTime"].GetInt64();
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("BucketId") && !value["BucketId"].IsNull())
    {
        if (!value["BucketId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketId = value["BucketId"].GetUint64();
        m_bucketIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.MonitorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetUint64();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("DataScanInfo") && !value["DataScanInfo"].IsNull())
    {
        if (!value["DataScanInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.DataScanInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataScanInfo.Deserialize(value["DataScanInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataScanInfoHasBeenSet = true;
    }

    if (value.HasMember("BucketAzType") && !value["BucketAzType"].IsNull())
    {
        if (!value["BucketAzType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketAzType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketAzType = string(value["BucketAzType"].GetString());
        m_bucketAzTypeHasBeenSet = true;
    }

    if (value.HasMember("BucketStorageSize") && !value["BucketStorageSize"].IsNull())
    {
        if (!value["BucketStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketStorageSize = value["BucketStorageSize"].GetInt64();
        m_bucketStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("BucketObjectCount") && !value["BucketObjectCount"].IsNull())
    {
        if (!value["BucketObjectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.BucketObjectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketObjectCount = value["BucketObjectCount"].GetInt64();
        m_bucketObjectCountHasBeenSet = true;
    }

    if (value.HasMember("IdentifySampleRate") && !value["IdentifySampleRate"].IsNull())
    {
        if (!value["IdentifySampleRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetInfo.IdentifySampleRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_identifySampleRate = value["IdentifySampleRate"].GetDouble();
        m_identifySampleRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketMarker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketMarker.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketOwnerNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketOwnerNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketOwnerNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketTagInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketTagInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketTagInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketSecuritySuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketSecuritySuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketSecuritySuggestion, allocator);
    }

    if (m_bucketAlarmListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAlarmList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bucketAlarmList.begin(); itr != m_bucketAlarmList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bucketRiskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRiskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bucketRiskList.begin(); itr != m_bucketRiskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bucketInvokeSourceIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketInvokeSourceIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketInvokeSourceIpCount, allocator);
    }

    if (m_bucketAccessWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAccessWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketAccessWay.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastAccessTime, allocator);
    }

    if (m_bucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketId, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_dataScanInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataScanInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataScanInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bucketAzTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAzType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketAzType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketStorageSize, allocator);
    }

    if (m_bucketObjectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketObjectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketObjectCount, allocator);
    }

    if (m_identifySampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifySampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifySampleRate, allocator);
    }

}


int64_t CosAssetInfo::GetAppId() const
{
    return m_appId;
}

void CosAssetInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosAssetInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CosAssetInfo::GetBucketName() const
{
    return m_bucketName;
}

void CosAssetInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosAssetInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosAssetInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CosAssetInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CosAssetInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CosAssetInfo::GetBucketRegionCode() const
{
    return m_bucketRegionCode;
}

void CosAssetInfo::SetBucketRegionCode(const string& _bucketRegionCode)
{
    m_bucketRegionCode = _bucketRegionCode;
    m_bucketRegionCodeHasBeenSet = true;
}

bool CosAssetInfo::BucketRegionCodeHasBeenSet() const
{
    return m_bucketRegionCodeHasBeenSet;
}

string CosAssetInfo::GetBucketMarker() const
{
    return m_bucketMarker;
}

void CosAssetInfo::SetBucketMarker(const string& _bucketMarker)
{
    m_bucketMarker = _bucketMarker;
    m_bucketMarkerHasBeenSet = true;
}

bool CosAssetInfo::BucketMarkerHasBeenSet() const
{
    return m_bucketMarkerHasBeenSet;
}

string CosAssetInfo::GetBucketOwnerUin() const
{
    return m_bucketOwnerUin;
}

void CosAssetInfo::SetBucketOwnerUin(const string& _bucketOwnerUin)
{
    m_bucketOwnerUin = _bucketOwnerUin;
    m_bucketOwnerUinHasBeenSet = true;
}

bool CosAssetInfo::BucketOwnerUinHasBeenSet() const
{
    return m_bucketOwnerUinHasBeenSet;
}

string CosAssetInfo::GetBucketOwnerNickName() const
{
    return m_bucketOwnerNickName;
}

void CosAssetInfo::SetBucketOwnerNickName(const string& _bucketOwnerNickName)
{
    m_bucketOwnerNickName = _bucketOwnerNickName;
    m_bucketOwnerNickNameHasBeenSet = true;
}

bool CosAssetInfo::BucketOwnerNickNameHasBeenSet() const
{
    return m_bucketOwnerNickNameHasBeenSet;
}

string CosAssetInfo::GetBucketTagInfo() const
{
    return m_bucketTagInfo;
}

void CosAssetInfo::SetBucketTagInfo(const string& _bucketTagInfo)
{
    m_bucketTagInfo = _bucketTagInfo;
    m_bucketTagInfoHasBeenSet = true;
}

bool CosAssetInfo::BucketTagInfoHasBeenSet() const
{
    return m_bucketTagInfoHasBeenSet;
}

int64_t CosAssetInfo::GetBucketSecuritySuggestion() const
{
    return m_bucketSecuritySuggestion;
}

void CosAssetInfo::SetBucketSecuritySuggestion(const int64_t& _bucketSecuritySuggestion)
{
    m_bucketSecuritySuggestion = _bucketSecuritySuggestion;
    m_bucketSecuritySuggestionHasBeenSet = true;
}

bool CosAssetInfo::BucketSecuritySuggestionHasBeenSet() const
{
    return m_bucketSecuritySuggestionHasBeenSet;
}

vector<CosRiskAlarmInfo> CosAssetInfo::GetBucketAlarmList() const
{
    return m_bucketAlarmList;
}

void CosAssetInfo::SetBucketAlarmList(const vector<CosRiskAlarmInfo>& _bucketAlarmList)
{
    m_bucketAlarmList = _bucketAlarmList;
    m_bucketAlarmListHasBeenSet = true;
}

bool CosAssetInfo::BucketAlarmListHasBeenSet() const
{
    return m_bucketAlarmListHasBeenSet;
}

vector<CosRiskAlarmInfo> CosAssetInfo::GetBucketRiskList() const
{
    return m_bucketRiskList;
}

void CosAssetInfo::SetBucketRiskList(const vector<CosRiskAlarmInfo>& _bucketRiskList)
{
    m_bucketRiskList = _bucketRiskList;
    m_bucketRiskListHasBeenSet = true;
}

bool CosAssetInfo::BucketRiskListHasBeenSet() const
{
    return m_bucketRiskListHasBeenSet;
}

int64_t CosAssetInfo::GetBucketInvokeSourceIpCount() const
{
    return m_bucketInvokeSourceIpCount;
}

void CosAssetInfo::SetBucketInvokeSourceIpCount(const int64_t& _bucketInvokeSourceIpCount)
{
    m_bucketInvokeSourceIpCount = _bucketInvokeSourceIpCount;
    m_bucketInvokeSourceIpCountHasBeenSet = true;
}

bool CosAssetInfo::BucketInvokeSourceIpCountHasBeenSet() const
{
    return m_bucketInvokeSourceIpCountHasBeenSet;
}

CosBucketAccessWay CosAssetInfo::GetBucketAccessWay() const
{
    return m_bucketAccessWay;
}

void CosAssetInfo::SetBucketAccessWay(const CosBucketAccessWay& _bucketAccessWay)
{
    m_bucketAccessWay = _bucketAccessWay;
    m_bucketAccessWayHasBeenSet = true;
}

bool CosAssetInfo::BucketAccessWayHasBeenSet() const
{
    return m_bucketAccessWayHasBeenSet;
}

int64_t CosAssetInfo::GetCreateTime() const
{
    return m_createTime;
}

void CosAssetInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CosAssetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CosAssetInfo::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void CosAssetInfo::SetLastAccessTime(const int64_t& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool CosAssetInfo::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

uint64_t CosAssetInfo::GetBucketId() const
{
    return m_bucketId;
}

void CosAssetInfo::SetBucketId(const uint64_t& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool CosAssetInfo::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

uint64_t CosAssetInfo::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void CosAssetInfo::SetMonitorStatus(const uint64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool CosAssetInfo::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

CosAssetDataScanDetail CosAssetInfo::GetDataScanInfo() const
{
    return m_dataScanInfo;
}

void CosAssetInfo::SetDataScanInfo(const CosAssetDataScanDetail& _dataScanInfo)
{
    m_dataScanInfo = _dataScanInfo;
    m_dataScanInfoHasBeenSet = true;
}

bool CosAssetInfo::DataScanInfoHasBeenSet() const
{
    return m_dataScanInfoHasBeenSet;
}

string CosAssetInfo::GetBucketAzType() const
{
    return m_bucketAzType;
}

void CosAssetInfo::SetBucketAzType(const string& _bucketAzType)
{
    m_bucketAzType = _bucketAzType;
    m_bucketAzTypeHasBeenSet = true;
}

bool CosAssetInfo::BucketAzTypeHasBeenSet() const
{
    return m_bucketAzTypeHasBeenSet;
}

int64_t CosAssetInfo::GetBucketStorageSize() const
{
    return m_bucketStorageSize;
}

void CosAssetInfo::SetBucketStorageSize(const int64_t& _bucketStorageSize)
{
    m_bucketStorageSize = _bucketStorageSize;
    m_bucketStorageSizeHasBeenSet = true;
}

bool CosAssetInfo::BucketStorageSizeHasBeenSet() const
{
    return m_bucketStorageSizeHasBeenSet;
}

int64_t CosAssetInfo::GetBucketObjectCount() const
{
    return m_bucketObjectCount;
}

void CosAssetInfo::SetBucketObjectCount(const int64_t& _bucketObjectCount)
{
    m_bucketObjectCount = _bucketObjectCount;
    m_bucketObjectCountHasBeenSet = true;
}

bool CosAssetInfo::BucketObjectCountHasBeenSet() const
{
    return m_bucketObjectCountHasBeenSet;
}

double CosAssetInfo::GetIdentifySampleRate() const
{
    return m_identifySampleRate;
}

void CosAssetInfo::SetIdentifySampleRate(const double& _identifySampleRate)
{
    m_identifySampleRate = _identifySampleRate;
    m_identifySampleRateHasBeenSet = true;
}

bool CosAssetInfo::IdentifySampleRateHasBeenSet() const
{
    return m_identifySampleRateHasBeenSet;
}

