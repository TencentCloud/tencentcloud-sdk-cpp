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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceDTSInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeInstanceDTSInfoResponse::DescribeInstanceDTSInfoResponse() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_cutDownTimeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceDTSInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobName") && !rsp["JobName"].IsNull())
    {
        if (!rsp["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(rsp["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("CutDownTime") && !rsp["CutDownTime"].IsNull())
    {
        if (!rsp["CutDownTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CutDownTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cutDownTime = string(rsp["CutDownTime"].GetString());
        m_cutDownTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SrcInfo") && !rsp["SrcInfo"].IsNull())
    {
        if (!rsp["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(rsp["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DstInfo") && !rsp["DstInfo"].IsNull())
    {
        if (!rsp["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(rsp["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceDTSInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_cutDownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CutDownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cutDownTime.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeInstanceDTSInfoResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeInstanceDTSInfoResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeInstanceDTSInfoResponse::GetJobName() const
{
    return m_jobName;
}

bool DescribeInstanceDTSInfoResponse::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

int64_t DescribeInstanceDTSInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeInstanceDTSInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeInstanceDTSInfoResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeInstanceDTSInfoResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t DescribeInstanceDTSInfoResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeInstanceDTSInfoResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeInstanceDTSInfoResponse::GetCutDownTime() const
{
    return m_cutDownTime;
}

bool DescribeInstanceDTSInfoResponse::CutDownTimeHasBeenSet() const
{
    return m_cutDownTimeHasBeenSet;
}

DescribeInstanceDTSInstanceInfo DescribeInstanceDTSInfoResponse::GetSrcInfo() const
{
    return m_srcInfo;
}

bool DescribeInstanceDTSInfoResponse::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

DescribeInstanceDTSInstanceInfo DescribeInstanceDTSInfoResponse::GetDstInfo() const
{
    return m_dstInfo;
}

bool DescribeInstanceDTSInfoResponse::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}


