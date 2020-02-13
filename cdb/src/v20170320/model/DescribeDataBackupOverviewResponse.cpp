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
using namespace rapidjson;
using namespace std;

DescribeDataBackupOverviewResponse::DescribeDataBackupOverviewResponse() :
    m_dataBackupVolumeHasBeenSet(false),
    m_dataBackupCountHasBeenSet(false),
    m_autoBackupVolumeHasBeenSet(false),
    m_autoBackupCountHasBeenSet(false),
    m_manualBackupVolumeHasBeenSet(false),
    m_manualBackupCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDataBackupOverviewResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DataBackupVolume") && !rsp["DataBackupVolume"].IsNull())
    {
        if (!rsp["DataBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupVolume = rsp["DataBackupVolume"].GetInt64();
        m_dataBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupCount") && !rsp["DataBackupCount"].IsNull())
    {
        if (!rsp["DataBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackupCount = rsp["DataBackupCount"].GetInt64();
        m_dataBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBackupVolume") && !rsp["AutoBackupVolume"].IsNull())
    {
        if (!rsp["AutoBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupVolume = rsp["AutoBackupVolume"].GetInt64();
        m_autoBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBackupCount") && !rsp["AutoBackupCount"].IsNull())
    {
        if (!rsp["AutoBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupCount = rsp["AutoBackupCount"].GetInt64();
        m_autoBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBackupVolume") && !rsp["ManualBackupVolume"].IsNull())
    {
        if (!rsp["ManualBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManualBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupVolume = rsp["ManualBackupVolume"].GetInt64();
        m_manualBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBackupCount") && !rsp["ManualBackupCount"].IsNull())
    {
        if (!rsp["ManualBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManualBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupCount = rsp["ManualBackupCount"].GetInt64();
        m_manualBackupCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


