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
    m_binlogBackupCountHasBeenSet(false)
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


