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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupOverviewResponse::DescribeBackupOverviewResponse() :
    m_backupTotalVolumeHasBeenSet(false),
    m_backupSnapshotVolumeHasBeenSet(false),
    m_backupLogicVolumeHasBeenSet(false),
    m_logTotalVolumeHasBeenSet(false),
    m_logBinlogVolumeHasBeenSet(false),
    m_logRedoLogVolumeHasBeenSet(false),
    m_crossTotalVolumeHasBeenSet(false),
    m_crossRegionBackupVolumeHasBeenSet(false),
    m_crossRegionLogVolumeHasBeenSet(false),
    m_backupVolumeInfosHasBeenSet(false),
    m_crossRegionBackupVolumeInfosHasBeenSet(false),
    m_crossRegionsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackupTotalVolume") && !rsp["BackupTotalVolume"].IsNull())
    {
        if (!rsp["BackupTotalVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTotalVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_backupTotalVolume = rsp["BackupTotalVolume"].GetDouble();
        m_backupTotalVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupSnapshotVolume") && !rsp["BackupSnapshotVolume"].IsNull())
    {
        if (!rsp["BackupSnapshotVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSnapshotVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_backupSnapshotVolume = rsp["BackupSnapshotVolume"].GetDouble();
        m_backupSnapshotVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupLogicVolume") && !rsp["BackupLogicVolume"].IsNull())
    {
        if (!rsp["BackupLogicVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLogicVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_backupLogicVolume = rsp["BackupLogicVolume"].GetDouble();
        m_backupLogicVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("LogTotalVolume") && !rsp["LogTotalVolume"].IsNull())
    {
        if (!rsp["LogTotalVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogTotalVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_logTotalVolume = rsp["LogTotalVolume"].GetDouble();
        m_logTotalVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("LogBinlogVolume") && !rsp["LogBinlogVolume"].IsNull())
    {
        if (!rsp["LogBinlogVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogBinlogVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_logBinlogVolume = rsp["LogBinlogVolume"].GetDouble();
        m_logBinlogVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("LogRedoLogVolume") && !rsp["LogRedoLogVolume"].IsNull())
    {
        if (!rsp["LogRedoLogVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogRedoLogVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_logRedoLogVolume = rsp["LogRedoLogVolume"].GetDouble();
        m_logRedoLogVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("CrossTotalVolume") && !rsp["CrossTotalVolume"].IsNull())
    {
        if (!rsp["CrossTotalVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTotalVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_crossTotalVolume = rsp["CrossTotalVolume"].GetDouble();
        m_crossTotalVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("CrossRegionBackupVolume") && !rsp["CrossRegionBackupVolume"].IsNull())
    {
        if (!rsp["CrossRegionBackupVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionBackupVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegionBackupVolume = rsp["CrossRegionBackupVolume"].GetDouble();
        m_crossRegionBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("CrossRegionLogVolume") && !rsp["CrossRegionLogVolume"].IsNull())
    {
        if (!rsp["CrossRegionLogVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionLogVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegionLogVolume = rsp["CrossRegionLogVolume"].GetDouble();
        m_crossRegionLogVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupVolumeInfos") && !rsp["BackupVolumeInfos"].IsNull())
    {
        if (!rsp["BackupVolumeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupVolumeInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupVolumeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupVolumeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupVolumeInfos.push_back(item);
        }
        m_backupVolumeInfosHasBeenSet = true;
    }

    if (rsp.HasMember("CrossRegionBackupVolumeInfos") && !rsp["CrossRegionBackupVolumeInfos"].IsNull())
    {
        if (!rsp["CrossRegionBackupVolumeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossRegionBackupVolumeInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CrossRegionBackupVolumeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupVolumeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_crossRegionBackupVolumeInfos.push_back(item);
        }
        m_crossRegionBackupVolumeInfosHasBeenSet = true;
    }

    if (rsp.HasMember("CrossRegions") && !rsp["CrossRegions"].IsNull())
    {
        if (!rsp["CrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_crossRegions.push_back((*itr).GetString());
        }
        m_crossRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupTotalVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTotalVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTotalVolume, allocator);
    }

    if (m_backupSnapshotVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSnapshotVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSnapshotVolume, allocator);
    }

    if (m_backupLogicVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupLogicVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupLogicVolume, allocator);
    }

    if (m_logTotalVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTotalVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logTotalVolume, allocator);
    }

    if (m_logBinlogVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBinlogVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBinlogVolume, allocator);
    }

    if (m_logRedoLogVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRedoLogVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logRedoLogVolume, allocator);
    }

    if (m_crossTotalVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossTotalVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossTotalVolume, allocator);
    }

    if (m_crossRegionBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossRegionBackupVolume, allocator);
    }

    if (m_crossRegionLogVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionLogVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossRegionLogVolume, allocator);
    }

    if (m_backupVolumeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVolumeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupVolumeInfos.begin(); itr != m_backupVolumeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_crossRegionBackupVolumeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionBackupVolumeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_crossRegionBackupVolumeInfos.begin(); itr != m_crossRegionBackupVolumeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_crossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_crossRegions.begin(); itr != m_crossRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


double DescribeBackupOverviewResponse::GetBackupTotalVolume() const
{
    return m_backupTotalVolume;
}

bool DescribeBackupOverviewResponse::BackupTotalVolumeHasBeenSet() const
{
    return m_backupTotalVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetBackupSnapshotVolume() const
{
    return m_backupSnapshotVolume;
}

bool DescribeBackupOverviewResponse::BackupSnapshotVolumeHasBeenSet() const
{
    return m_backupSnapshotVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetBackupLogicVolume() const
{
    return m_backupLogicVolume;
}

bool DescribeBackupOverviewResponse::BackupLogicVolumeHasBeenSet() const
{
    return m_backupLogicVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetLogTotalVolume() const
{
    return m_logTotalVolume;
}

bool DescribeBackupOverviewResponse::LogTotalVolumeHasBeenSet() const
{
    return m_logTotalVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetLogBinlogVolume() const
{
    return m_logBinlogVolume;
}

bool DescribeBackupOverviewResponse::LogBinlogVolumeHasBeenSet() const
{
    return m_logBinlogVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetLogRedoLogVolume() const
{
    return m_logRedoLogVolume;
}

bool DescribeBackupOverviewResponse::LogRedoLogVolumeHasBeenSet() const
{
    return m_logRedoLogVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetCrossTotalVolume() const
{
    return m_crossTotalVolume;
}

bool DescribeBackupOverviewResponse::CrossTotalVolumeHasBeenSet() const
{
    return m_crossTotalVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetCrossRegionBackupVolume() const
{
    return m_crossRegionBackupVolume;
}

bool DescribeBackupOverviewResponse::CrossRegionBackupVolumeHasBeenSet() const
{
    return m_crossRegionBackupVolumeHasBeenSet;
}

double DescribeBackupOverviewResponse::GetCrossRegionLogVolume() const
{
    return m_crossRegionLogVolume;
}

bool DescribeBackupOverviewResponse::CrossRegionLogVolumeHasBeenSet() const
{
    return m_crossRegionLogVolumeHasBeenSet;
}

vector<BackupVolumeInfo> DescribeBackupOverviewResponse::GetBackupVolumeInfos() const
{
    return m_backupVolumeInfos;
}

bool DescribeBackupOverviewResponse::BackupVolumeInfosHasBeenSet() const
{
    return m_backupVolumeInfosHasBeenSet;
}

vector<BackupVolumeInfo> DescribeBackupOverviewResponse::GetCrossRegionBackupVolumeInfos() const
{
    return m_crossRegionBackupVolumeInfos;
}

bool DescribeBackupOverviewResponse::CrossRegionBackupVolumeInfosHasBeenSet() const
{
    return m_crossRegionBackupVolumeInfosHasBeenSet;
}

vector<string> DescribeBackupOverviewResponse::GetCrossRegions() const
{
    return m_crossRegions;
}

bool DescribeBackupOverviewResponse::CrossRegionsHasBeenSet() const
{
    return m_crossRegionsHasBeenSet;
}


