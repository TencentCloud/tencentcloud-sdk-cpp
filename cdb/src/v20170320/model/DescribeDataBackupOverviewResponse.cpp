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

#include <tencentcloud/cdb/v20170320/model/DescribeDataBackupOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeDataBackupOverviewResponse::DescribeDataBackupOverviewResponse() :
    m_dataBackupVolumeHasBeenSet(false),
    m_dataBackupCountHasBeenSet(false),
    m_autoBackupVolumeHasBeenSet(false),
    m_autoBackupCountHasBeenSet(false),
    m_manualBackupVolumeHasBeenSet(false),
    m_manualBackupCountHasBeenSet(false),
    m_remoteBackupVolumeHasBeenSet(false),
    m_remoteBackupCountHasBeenSet(false),
    m_dataBackupArchiveVolumeHasBeenSet(false),
    m_dataBackupArchiveCountHasBeenSet(false),
    m_dataBackupStandbyVolumeHasBeenSet(false),
    m_dataBackupStandbyCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDataBackupOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DataBackupVolume") && !rsp["DataBackupVolume"].IsNull())
    {
        if (!rsp["DataBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupVolume = rsp["DataBackupVolume"].GetInt64();
        m_dataBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupCount") && !rsp["DataBackupCount"].IsNull())
    {
        if (!rsp["DataBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupCount = rsp["DataBackupCount"].GetInt64();
        m_dataBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBackupVolume") && !rsp["AutoBackupVolume"].IsNull())
    {
        if (!rsp["AutoBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupVolume = rsp["AutoBackupVolume"].GetInt64();
        m_autoBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBackupCount") && !rsp["AutoBackupCount"].IsNull())
    {
        if (!rsp["AutoBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupCount = rsp["AutoBackupCount"].GetInt64();
        m_autoBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBackupVolume") && !rsp["ManualBackupVolume"].IsNull())
    {
        if (!rsp["ManualBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupVolume = rsp["ManualBackupVolume"].GetInt64();
        m_manualBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBackupCount") && !rsp["ManualBackupCount"].IsNull())
    {
        if (!rsp["ManualBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupCount = rsp["ManualBackupCount"].GetInt64();
        m_manualBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBackupVolume") && !rsp["RemoteBackupVolume"].IsNull())
    {
        if (!rsp["RemoteBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBackupVolume = rsp["RemoteBackupVolume"].GetInt64();
        m_remoteBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBackupCount") && !rsp["RemoteBackupCount"].IsNull())
    {
        if (!rsp["RemoteBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBackupCount = rsp["RemoteBackupCount"].GetInt64();
        m_remoteBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupArchiveVolume") && !rsp["DataBackupArchiveVolume"].IsNull())
    {
        if (!rsp["DataBackupArchiveVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupArchiveVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupArchiveVolume = rsp["DataBackupArchiveVolume"].GetInt64();
        m_dataBackupArchiveVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupArchiveCount") && !rsp["DataBackupArchiveCount"].IsNull())
    {
        if (!rsp["DataBackupArchiveCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupArchiveCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupArchiveCount = rsp["DataBackupArchiveCount"].GetInt64();
        m_dataBackupArchiveCountHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupStandbyVolume") && !rsp["DataBackupStandbyVolume"].IsNull())
    {
        if (!rsp["DataBackupStandbyVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStandbyVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupStandbyVolume = rsp["DataBackupStandbyVolume"].GetInt64();
        m_dataBackupStandbyVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupStandbyCount") && !rsp["DataBackupStandbyCount"].IsNull())
    {
        if (!rsp["DataBackupStandbyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackupStandbyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupStandbyCount = rsp["DataBackupStandbyCount"].GetInt64();
        m_dataBackupStandbyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDataBackupOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupVolume, allocator);
    }

    if (m_dataBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupCount, allocator);
    }

    if (m_autoBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupVolume, allocator);
    }

    if (m_autoBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupCount, allocator);
    }

    if (m_manualBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupVolume, allocator);
    }

    if (m_manualBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackupCount, allocator);
    }

    if (m_remoteBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteBackupVolume, allocator);
    }

    if (m_remoteBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteBackupCount, allocator);
    }

    if (m_dataBackupArchiveVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupArchiveVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupArchiveVolume, allocator);
    }

    if (m_dataBackupArchiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupArchiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupArchiveCount, allocator);
    }

    if (m_dataBackupStandbyVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupStandbyVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupStandbyVolume, allocator);
    }

    if (m_dataBackupStandbyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupStandbyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackupStandbyCount, allocator);
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


int64_t DescribeDataBackupOverviewResponse::GetDataBackupVolume() const
{
    return m_dataBackupVolume;
}

bool DescribeDataBackupOverviewResponse::DataBackupVolumeHasBeenSet() const
{
    return m_dataBackupVolumeHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetDataBackupCount() const
{
    return m_dataBackupCount;
}

bool DescribeDataBackupOverviewResponse::DataBackupCountHasBeenSet() const
{
    return m_dataBackupCountHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetAutoBackupVolume() const
{
    return m_autoBackupVolume;
}

bool DescribeDataBackupOverviewResponse::AutoBackupVolumeHasBeenSet() const
{
    return m_autoBackupVolumeHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetAutoBackupCount() const
{
    return m_autoBackupCount;
}

bool DescribeDataBackupOverviewResponse::AutoBackupCountHasBeenSet() const
{
    return m_autoBackupCountHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetManualBackupVolume() const
{
    return m_manualBackupVolume;
}

bool DescribeDataBackupOverviewResponse::ManualBackupVolumeHasBeenSet() const
{
    return m_manualBackupVolumeHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetManualBackupCount() const
{
    return m_manualBackupCount;
}

bool DescribeDataBackupOverviewResponse::ManualBackupCountHasBeenSet() const
{
    return m_manualBackupCountHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetRemoteBackupVolume() const
{
    return m_remoteBackupVolume;
}

bool DescribeDataBackupOverviewResponse::RemoteBackupVolumeHasBeenSet() const
{
    return m_remoteBackupVolumeHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetRemoteBackupCount() const
{
    return m_remoteBackupCount;
}

bool DescribeDataBackupOverviewResponse::RemoteBackupCountHasBeenSet() const
{
    return m_remoteBackupCountHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetDataBackupArchiveVolume() const
{
    return m_dataBackupArchiveVolume;
}

bool DescribeDataBackupOverviewResponse::DataBackupArchiveVolumeHasBeenSet() const
{
    return m_dataBackupArchiveVolumeHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetDataBackupArchiveCount() const
{
    return m_dataBackupArchiveCount;
}

bool DescribeDataBackupOverviewResponse::DataBackupArchiveCountHasBeenSet() const
{
    return m_dataBackupArchiveCountHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetDataBackupStandbyVolume() const
{
    return m_dataBackupStandbyVolume;
}

bool DescribeDataBackupOverviewResponse::DataBackupStandbyVolumeHasBeenSet() const
{
    return m_dataBackupStandbyVolumeHasBeenSet;
}

int64_t DescribeDataBackupOverviewResponse::GetDataBackupStandbyCount() const
{
    return m_dataBackupStandbyCount;
}

bool DescribeDataBackupOverviewResponse::DataBackupStandbyCountHasBeenSet() const
{
    return m_dataBackupStandbyCountHasBeenSet;
}


