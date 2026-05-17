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

#include <tencentcloud/csip/v20221121/model/CosAkAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAkAssetInfo::CosAkAssetInfo() :
    m_appIdHasBeenSet(false),
    m_akIdHasBeenSet(false),
    m_akNameHasBeenSet(false),
    m_akRemarkHasBeenSet(false),
    m_akOwnerUinHasBeenSet(false),
    m_akOwnerTypeHasBeenSet(false),
    m_akOwnerNameHasBeenSet(false),
    m_akMainOwnerNameHasBeenSet(false),
    m_akRelBucketSetHasBeenSet(false),
    m_akRelAlarmSetHasBeenSet(false),
    m_akRelIpCountHasBeenSet(false),
    m_akStatusHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_lastAccessTimestampHasBeenSet(false)
{
}

CoreInternalOutcome CosAkAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AkId") && !value["AkId"].IsNull())
    {
        if (!value["AkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_akId = string(value["AkId"].GetString());
        m_akIdHasBeenSet = true;
    }

    if (value.HasMember("AkName") && !value["AkName"].IsNull())
    {
        if (!value["AkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_akName = string(value["AkName"].GetString());
        m_akNameHasBeenSet = true;
    }

    if (value.HasMember("AkRemark") && !value["AkRemark"].IsNull())
    {
        if (!value["AkRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_akRemark = string(value["AkRemark"].GetString());
        m_akRemarkHasBeenSet = true;
    }

    if (value.HasMember("AkOwnerUin") && !value["AkOwnerUin"].IsNull())
    {
        if (!value["AkOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_akOwnerUin = string(value["AkOwnerUin"].GetString());
        m_akOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("AkOwnerType") && !value["AkOwnerType"].IsNull())
    {
        if (!value["AkOwnerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkOwnerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_akOwnerType = value["AkOwnerType"].GetInt64();
        m_akOwnerTypeHasBeenSet = true;
    }

    if (value.HasMember("AkOwnerName") && !value["AkOwnerName"].IsNull())
    {
        if (!value["AkOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_akOwnerName = string(value["AkOwnerName"].GetString());
        m_akOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("AkMainOwnerName") && !value["AkMainOwnerName"].IsNull())
    {
        if (!value["AkMainOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkMainOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_akMainOwnerName = string(value["AkMainOwnerName"].GetString());
        m_akMainOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("AkRelBucketSet") && !value["AkRelBucketSet"].IsNull())
    {
        if (!value["AkRelBucketSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkRelBucketSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AkRelBucketSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_akRelBucketSet.push_back((*itr).GetString());
        }
        m_akRelBucketSetHasBeenSet = true;
    }

    if (value.HasMember("AkRelAlarmSet") && !value["AkRelAlarmSet"].IsNull())
    {
        if (!value["AkRelAlarmSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkRelAlarmSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AkRelAlarmSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_akRelAlarmSet.push_back(item);
        }
        m_akRelAlarmSetHasBeenSet = true;
    }

    if (value.HasMember("AkRelIpCount") && !value["AkRelIpCount"].IsNull())
    {
        if (!value["AkRelIpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkRelIpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_akRelIpCount = value["AkRelIpCount"].GetUint64();
        m_akRelIpCountHasBeenSet = true;
    }

    if (value.HasMember("AkStatus") && !value["AkStatus"].IsNull())
    {
        if (!value["AkStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.AkStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_akStatus = value["AkStatus"].GetInt64();
        m_akStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTimestamp") && !value["CreateTimestamp"].IsNull())
    {
        if (!value["CreateTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.CreateTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTimestamp = value["CreateTimestamp"].GetUint64();
        m_createTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTimestamp") && !value["LastAccessTimestamp"].IsNull())
    {
        if (!value["LastAccessTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkAssetInfo.LastAccessTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTimestamp = value["LastAccessTimestamp"].GetUint64();
        m_lastAccessTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAkAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_akIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_akId.c_str(), allocator).Move(), allocator);
    }

    if (m_akNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_akName.c_str(), allocator).Move(), allocator);
    }

    if (m_akRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_akRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_akOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_akOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_akOwnerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkOwnerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_akOwnerType, allocator);
    }

    if (m_akOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_akOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_akMainOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkMainOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_akMainOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_akRelBucketSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkRelBucketSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_akRelBucketSet.begin(); itr != m_akRelBucketSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_akRelAlarmSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkRelAlarmSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_akRelAlarmSet.begin(); itr != m_akRelAlarmSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_akRelIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkRelIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_akRelIpCount, allocator);
    }

    if (m_akStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_akStatus, allocator);
    }

    if (m_createTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTimestamp, allocator);
    }

    if (m_lastAccessTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastAccessTimestamp, allocator);
    }

}


uint64_t CosAkAssetInfo::GetAppId() const
{
    return m_appId;
}

void CosAkAssetInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosAkAssetInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CosAkAssetInfo::GetAkId() const
{
    return m_akId;
}

void CosAkAssetInfo::SetAkId(const string& _akId)
{
    m_akId = _akId;
    m_akIdHasBeenSet = true;
}

bool CosAkAssetInfo::AkIdHasBeenSet() const
{
    return m_akIdHasBeenSet;
}

string CosAkAssetInfo::GetAkName() const
{
    return m_akName;
}

void CosAkAssetInfo::SetAkName(const string& _akName)
{
    m_akName = _akName;
    m_akNameHasBeenSet = true;
}

bool CosAkAssetInfo::AkNameHasBeenSet() const
{
    return m_akNameHasBeenSet;
}

string CosAkAssetInfo::GetAkRemark() const
{
    return m_akRemark;
}

void CosAkAssetInfo::SetAkRemark(const string& _akRemark)
{
    m_akRemark = _akRemark;
    m_akRemarkHasBeenSet = true;
}

bool CosAkAssetInfo::AkRemarkHasBeenSet() const
{
    return m_akRemarkHasBeenSet;
}

string CosAkAssetInfo::GetAkOwnerUin() const
{
    return m_akOwnerUin;
}

void CosAkAssetInfo::SetAkOwnerUin(const string& _akOwnerUin)
{
    m_akOwnerUin = _akOwnerUin;
    m_akOwnerUinHasBeenSet = true;
}

bool CosAkAssetInfo::AkOwnerUinHasBeenSet() const
{
    return m_akOwnerUinHasBeenSet;
}

int64_t CosAkAssetInfo::GetAkOwnerType() const
{
    return m_akOwnerType;
}

void CosAkAssetInfo::SetAkOwnerType(const int64_t& _akOwnerType)
{
    m_akOwnerType = _akOwnerType;
    m_akOwnerTypeHasBeenSet = true;
}

bool CosAkAssetInfo::AkOwnerTypeHasBeenSet() const
{
    return m_akOwnerTypeHasBeenSet;
}

string CosAkAssetInfo::GetAkOwnerName() const
{
    return m_akOwnerName;
}

void CosAkAssetInfo::SetAkOwnerName(const string& _akOwnerName)
{
    m_akOwnerName = _akOwnerName;
    m_akOwnerNameHasBeenSet = true;
}

bool CosAkAssetInfo::AkOwnerNameHasBeenSet() const
{
    return m_akOwnerNameHasBeenSet;
}

string CosAkAssetInfo::GetAkMainOwnerName() const
{
    return m_akMainOwnerName;
}

void CosAkAssetInfo::SetAkMainOwnerName(const string& _akMainOwnerName)
{
    m_akMainOwnerName = _akMainOwnerName;
    m_akMainOwnerNameHasBeenSet = true;
}

bool CosAkAssetInfo::AkMainOwnerNameHasBeenSet() const
{
    return m_akMainOwnerNameHasBeenSet;
}

vector<string> CosAkAssetInfo::GetAkRelBucketSet() const
{
    return m_akRelBucketSet;
}

void CosAkAssetInfo::SetAkRelBucketSet(const vector<string>& _akRelBucketSet)
{
    m_akRelBucketSet = _akRelBucketSet;
    m_akRelBucketSetHasBeenSet = true;
}

bool CosAkAssetInfo::AkRelBucketSetHasBeenSet() const
{
    return m_akRelBucketSetHasBeenSet;
}

vector<CosRiskInfo> CosAkAssetInfo::GetAkRelAlarmSet() const
{
    return m_akRelAlarmSet;
}

void CosAkAssetInfo::SetAkRelAlarmSet(const vector<CosRiskInfo>& _akRelAlarmSet)
{
    m_akRelAlarmSet = _akRelAlarmSet;
    m_akRelAlarmSetHasBeenSet = true;
}

bool CosAkAssetInfo::AkRelAlarmSetHasBeenSet() const
{
    return m_akRelAlarmSetHasBeenSet;
}

uint64_t CosAkAssetInfo::GetAkRelIpCount() const
{
    return m_akRelIpCount;
}

void CosAkAssetInfo::SetAkRelIpCount(const uint64_t& _akRelIpCount)
{
    m_akRelIpCount = _akRelIpCount;
    m_akRelIpCountHasBeenSet = true;
}

bool CosAkAssetInfo::AkRelIpCountHasBeenSet() const
{
    return m_akRelIpCountHasBeenSet;
}

int64_t CosAkAssetInfo::GetAkStatus() const
{
    return m_akStatus;
}

void CosAkAssetInfo::SetAkStatus(const int64_t& _akStatus)
{
    m_akStatus = _akStatus;
    m_akStatusHasBeenSet = true;
}

bool CosAkAssetInfo::AkStatusHasBeenSet() const
{
    return m_akStatusHasBeenSet;
}

uint64_t CosAkAssetInfo::GetCreateTimestamp() const
{
    return m_createTimestamp;
}

void CosAkAssetInfo::SetCreateTimestamp(const uint64_t& _createTimestamp)
{
    m_createTimestamp = _createTimestamp;
    m_createTimestampHasBeenSet = true;
}

bool CosAkAssetInfo::CreateTimestampHasBeenSet() const
{
    return m_createTimestampHasBeenSet;
}

uint64_t CosAkAssetInfo::GetLastAccessTimestamp() const
{
    return m_lastAccessTimestamp;
}

void CosAkAssetInfo::SetLastAccessTimestamp(const uint64_t& _lastAccessTimestamp)
{
    m_lastAccessTimestamp = _lastAccessTimestamp;
    m_lastAccessTimestampHasBeenSet = true;
}

bool CosAkAssetInfo::LastAccessTimestampHasBeenSet() const
{
    return m_lastAccessTimestampHasBeenSet;
}

