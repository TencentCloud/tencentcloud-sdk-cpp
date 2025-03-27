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

#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeDBInstancesAttributeResponse::DescribeDBInstancesAttributeResponse() :
    m_instanceIdHasBeenSet(false),
    m_regularBackupEnableHasBeenSet(false),
    m_regularBackupSaveDaysHasBeenSet(false),
    m_regularBackupStrategyHasBeenSet(false),
    m_regularBackupCountsHasBeenSet(false),
    m_regularBackupStartTimeHasBeenSet(false),
    m_blockedThresholdHasBeenSet(false),
    m_eventSaveDaysHasBeenSet(false),
    m_tDEConfigHasBeenSet(false),
    m_sSLConfigHasBeenSet(false),
    m_drReadableInfoHasBeenSet(false),
    m_oldVipListHasBeenSet(false),
    m_xEventStatusHasBeenSet(false),
    m_multiDrReadableInfoHasBeenSet(false),
    m_isDiskEncryptFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstancesAttributeResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupEnable") && !rsp["RegularBackupEnable"].IsNull())
    {
        if (!rsp["RegularBackupEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupEnable = string(rsp["RegularBackupEnable"].GetString());
        m_regularBackupEnableHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupSaveDays") && !rsp["RegularBackupSaveDays"].IsNull())
    {
        if (!rsp["RegularBackupSaveDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupSaveDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupSaveDays = rsp["RegularBackupSaveDays"].GetUint64();
        m_regularBackupSaveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupStrategy") && !rsp["RegularBackupStrategy"].IsNull())
    {
        if (!rsp["RegularBackupStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupStrategy = string(rsp["RegularBackupStrategy"].GetString());
        m_regularBackupStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupCounts") && !rsp["RegularBackupCounts"].IsNull())
    {
        if (!rsp["RegularBackupCounts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupCounts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupCounts = rsp["RegularBackupCounts"].GetUint64();
        m_regularBackupCountsHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupStartTime") && !rsp["RegularBackupStartTime"].IsNull())
    {
        if (!rsp["RegularBackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupStartTime = string(rsp["RegularBackupStartTime"].GetString());
        m_regularBackupStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BlockedThreshold") && !rsp["BlockedThreshold"].IsNull())
    {
        if (!rsp["BlockedThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockedThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedThreshold = rsp["BlockedThreshold"].GetInt64();
        m_blockedThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("EventSaveDays") && !rsp["EventSaveDays"].IsNull())
    {
        if (!rsp["EventSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventSaveDays = rsp["EventSaveDays"].GetInt64();
        m_eventSaveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("TDEConfig") && !rsp["TDEConfig"].IsNull())
    {
        if (!rsp["TDEConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TDEConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tDEConfig.Deserialize(rsp["TDEConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tDEConfigHasBeenSet = true;
    }

    if (rsp.HasMember("SSLConfig") && !rsp["SSLConfig"].IsNull())
    {
        if (!rsp["SSLConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SSLConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sSLConfig.Deserialize(rsp["SSLConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sSLConfigHasBeenSet = true;
    }

    if (rsp.HasMember("DrReadableInfo") && !rsp["DrReadableInfo"].IsNull())
    {
        if (!rsp["DrReadableInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DrReadableInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_drReadableInfo.Deserialize(rsp["DrReadableInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_drReadableInfoHasBeenSet = true;
    }

    if (rsp.HasMember("OldVipList") && !rsp["OldVipList"].IsNull())
    {
        if (!rsp["OldVipList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OldVipList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OldVipList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OldVip item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oldVipList.push_back(item);
        }
        m_oldVipListHasBeenSet = true;
    }

    if (rsp.HasMember("XEventStatus") && !rsp["XEventStatus"].IsNull())
    {
        if (!rsp["XEventStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XEventStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xEventStatus = string(rsp["XEventStatus"].GetString());
        m_xEventStatusHasBeenSet = true;
    }

    if (rsp.HasMember("MultiDrReadableInfo") && !rsp["MultiDrReadableInfo"].IsNull())
    {
        if (!rsp["MultiDrReadableInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiDrReadableInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MultiDrReadableInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrReadableInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiDrReadableInfo.push_back(item);
        }
        m_multiDrReadableInfoHasBeenSet = true;
    }

    if (rsp.HasMember("IsDiskEncryptFlag") && !rsp["IsDiskEncryptFlag"].IsNull())
    {
        if (!rsp["IsDiskEncryptFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsDiskEncryptFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDiskEncryptFlag = rsp["IsDiskEncryptFlag"].GetInt64();
        m_isDiskEncryptFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstancesAttributeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularBackupEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regularBackupSaveDays, allocator);
    }

    if (m_regularBackupStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularBackupStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regularBackupCounts, allocator);
    }

    if (m_regularBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedThreshold, allocator);
    }

    if (m_eventSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventSaveDays, allocator);
    }

    if (m_tDEConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TDEConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tDEConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sSLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSLConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_drReadableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrReadableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_drReadableInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oldVipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldVipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oldVipList.begin(); itr != m_oldVipList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_xEventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XEventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xEventStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_multiDrReadableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiDrReadableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiDrReadableInfo.begin(); itr != m_multiDrReadableInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDiskEncryptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDiskEncryptFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDiskEncryptFlag, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeDBInstancesAttributeResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDBInstancesAttributeResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetRegularBackupEnable() const
{
    return m_regularBackupEnable;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupEnableHasBeenSet() const
{
    return m_regularBackupEnableHasBeenSet;
}

uint64_t DescribeDBInstancesAttributeResponse::GetRegularBackupSaveDays() const
{
    return m_regularBackupSaveDays;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupSaveDaysHasBeenSet() const
{
    return m_regularBackupSaveDaysHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetRegularBackupStrategy() const
{
    return m_regularBackupStrategy;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupStrategyHasBeenSet() const
{
    return m_regularBackupStrategyHasBeenSet;
}

uint64_t DescribeDBInstancesAttributeResponse::GetRegularBackupCounts() const
{
    return m_regularBackupCounts;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupCountsHasBeenSet() const
{
    return m_regularBackupCountsHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetRegularBackupStartTime() const
{
    return m_regularBackupStartTime;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupStartTimeHasBeenSet() const
{
    return m_regularBackupStartTimeHasBeenSet;
}

int64_t DescribeDBInstancesAttributeResponse::GetBlockedThreshold() const
{
    return m_blockedThreshold;
}

bool DescribeDBInstancesAttributeResponse::BlockedThresholdHasBeenSet() const
{
    return m_blockedThresholdHasBeenSet;
}

int64_t DescribeDBInstancesAttributeResponse::GetEventSaveDays() const
{
    return m_eventSaveDays;
}

bool DescribeDBInstancesAttributeResponse::EventSaveDaysHasBeenSet() const
{
    return m_eventSaveDaysHasBeenSet;
}

TDEConfigAttribute DescribeDBInstancesAttributeResponse::GetTDEConfig() const
{
    return m_tDEConfig;
}

bool DescribeDBInstancesAttributeResponse::TDEConfigHasBeenSet() const
{
    return m_tDEConfigHasBeenSet;
}

SSLConfig DescribeDBInstancesAttributeResponse::GetSSLConfig() const
{
    return m_sSLConfig;
}

bool DescribeDBInstancesAttributeResponse::SSLConfigHasBeenSet() const
{
    return m_sSLConfigHasBeenSet;
}

DrReadableInfo DescribeDBInstancesAttributeResponse::GetDrReadableInfo() const
{
    return m_drReadableInfo;
}

bool DescribeDBInstancesAttributeResponse::DrReadableInfoHasBeenSet() const
{
    return m_drReadableInfoHasBeenSet;
}

vector<OldVip> DescribeDBInstancesAttributeResponse::GetOldVipList() const
{
    return m_oldVipList;
}

bool DescribeDBInstancesAttributeResponse::OldVipListHasBeenSet() const
{
    return m_oldVipListHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetXEventStatus() const
{
    return m_xEventStatus;
}

bool DescribeDBInstancesAttributeResponse::XEventStatusHasBeenSet() const
{
    return m_xEventStatusHasBeenSet;
}

vector<DrReadableInfo> DescribeDBInstancesAttributeResponse::GetMultiDrReadableInfo() const
{
    return m_multiDrReadableInfo;
}

bool DescribeDBInstancesAttributeResponse::MultiDrReadableInfoHasBeenSet() const
{
    return m_multiDrReadableInfoHasBeenSet;
}

int64_t DescribeDBInstancesAttributeResponse::GetIsDiskEncryptFlag() const
{
    return m_isDiskEncryptFlag;
}

bool DescribeDBInstancesAttributeResponse::IsDiskEncryptFlagHasBeenSet() const
{
    return m_isDiskEncryptFlagHasBeenSet;
}


