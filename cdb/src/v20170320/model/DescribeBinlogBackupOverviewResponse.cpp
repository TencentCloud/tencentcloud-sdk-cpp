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

#include <tencentcloud/cdb/v20170320/model/DescribeBinlogBackupOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeBinlogBackupOverviewResponse::DescribeBinlogBackupOverviewResponse() :
    m_binlogBackupVolumeHasBeenSet(false),
    m_binlogBackupCountHasBeenSet(false),
    m_remoteBinlogVolumeHasBeenSet(false),
    m_remoteBinlogCountHasBeenSet(false),
    m_binlogArchiveVolumeHasBeenSet(false),
    m_binlogArchiveCountHasBeenSet(false),
    m_binlogStandbyVolumeHasBeenSet(false),
    m_binlogStandbyCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBinlogBackupOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BinlogBackupVolume") && !rsp["BinlogBackupVolume"].IsNull())
    {
        if (!rsp["BinlogBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogBackupVolume = rsp["BinlogBackupVolume"].GetInt64();
        m_binlogBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogBackupCount") && !rsp["BinlogBackupCount"].IsNull())
    {
        if (!rsp["BinlogBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogBackupCount = rsp["BinlogBackupCount"].GetInt64();
        m_binlogBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBinlogVolume") && !rsp["RemoteBinlogVolume"].IsNull())
    {
        if (!rsp["RemoteBinlogVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBinlogVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBinlogVolume = rsp["RemoteBinlogVolume"].GetInt64();
        m_remoteBinlogVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBinlogCount") && !rsp["RemoteBinlogCount"].IsNull())
    {
        if (!rsp["RemoteBinlogCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBinlogCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBinlogCount = rsp["RemoteBinlogCount"].GetInt64();
        m_remoteBinlogCountHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogArchiveVolume") && !rsp["BinlogArchiveVolume"].IsNull())
    {
        if (!rsp["BinlogArchiveVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogArchiveVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogArchiveVolume = rsp["BinlogArchiveVolume"].GetInt64();
        m_binlogArchiveVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogArchiveCount") && !rsp["BinlogArchiveCount"].IsNull())
    {
        if (!rsp["BinlogArchiveCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogArchiveCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogArchiveCount = rsp["BinlogArchiveCount"].GetInt64();
        m_binlogArchiveCountHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogStandbyVolume") && !rsp["BinlogStandbyVolume"].IsNull())
    {
        if (!rsp["BinlogStandbyVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogStandbyVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogStandbyVolume = rsp["BinlogStandbyVolume"].GetInt64();
        m_binlogStandbyVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogStandbyCount") && !rsp["BinlogStandbyCount"].IsNull())
    {
        if (!rsp["BinlogStandbyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogStandbyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogStandbyCount = rsp["BinlogStandbyCount"].GetInt64();
        m_binlogStandbyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBinlogBackupOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_binlogBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogBackupVolume, allocator);
    }

    if (m_binlogBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogBackupCount, allocator);
    }

    if (m_remoteBinlogVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBinlogVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteBinlogVolume, allocator);
    }

    if (m_remoteBinlogCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBinlogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteBinlogCount, allocator);
    }

    if (m_binlogArchiveVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogArchiveVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogArchiveVolume, allocator);
    }

    if (m_binlogArchiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogArchiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogArchiveCount, allocator);
    }

    if (m_binlogStandbyVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogStandbyVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogStandbyVolume, allocator);
    }

    if (m_binlogStandbyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogStandbyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogStandbyCount, allocator);
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


int64_t DescribeBinlogBackupOverviewResponse::GetBinlogBackupVolume() const
{
    return m_binlogBackupVolume;
}

bool DescribeBinlogBackupOverviewResponse::BinlogBackupVolumeHasBeenSet() const
{
    return m_binlogBackupVolumeHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetBinlogBackupCount() const
{
    return m_binlogBackupCount;
}

bool DescribeBinlogBackupOverviewResponse::BinlogBackupCountHasBeenSet() const
{
    return m_binlogBackupCountHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetRemoteBinlogVolume() const
{
    return m_remoteBinlogVolume;
}

bool DescribeBinlogBackupOverviewResponse::RemoteBinlogVolumeHasBeenSet() const
{
    return m_remoteBinlogVolumeHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetRemoteBinlogCount() const
{
    return m_remoteBinlogCount;
}

bool DescribeBinlogBackupOverviewResponse::RemoteBinlogCountHasBeenSet() const
{
    return m_remoteBinlogCountHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetBinlogArchiveVolume() const
{
    return m_binlogArchiveVolume;
}

bool DescribeBinlogBackupOverviewResponse::BinlogArchiveVolumeHasBeenSet() const
{
    return m_binlogArchiveVolumeHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetBinlogArchiveCount() const
{
    return m_binlogArchiveCount;
}

bool DescribeBinlogBackupOverviewResponse::BinlogArchiveCountHasBeenSet() const
{
    return m_binlogArchiveCountHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetBinlogStandbyVolume() const
{
    return m_binlogStandbyVolume;
}

bool DescribeBinlogBackupOverviewResponse::BinlogStandbyVolumeHasBeenSet() const
{
    return m_binlogStandbyVolumeHasBeenSet;
}

int64_t DescribeBinlogBackupOverviewResponse::GetBinlogStandbyCount() const
{
    return m_binlogStandbyCount;
}

bool DescribeBinlogBackupOverviewResponse::BinlogStandbyCountHasBeenSet() const
{
    return m_binlogStandbyCountHasBeenSet;
}


