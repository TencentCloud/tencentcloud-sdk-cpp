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

#include <tencentcloud/iai/v20200303/model/GetUpgradeGroupFaceModelVersionResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

GetUpgradeGroupFaceModelVersionResultResponse::GetUpgradeGroupFaceModelVersionResultResponse() :
    m_endTimestampHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_fromFaceModelVersionHasBeenSet(false),
    m_toFaceModelVersionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_failedFacesUrlHasBeenSet(false)
{
}

CoreInternalOutcome GetUpgradeGroupFaceModelVersionResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EndTimestamp") && !rsp["EndTimestamp"].IsNull())
    {
        if (!rsp["EndTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimestamp = rsp["EndTimestamp"].GetUint64();
        m_endTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetDouble();
        m_progressHasBeenSet = true;
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

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FromFaceModelVersion") && !rsp["FromFaceModelVersion"].IsNull())
    {
        if (!rsp["FromFaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FromFaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromFaceModelVersion = string(rsp["FromFaceModelVersion"].GetString());
        m_fromFaceModelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ToFaceModelVersion") && !rsp["ToFaceModelVersion"].IsNull())
    {
        if (!rsp["ToFaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToFaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toFaceModelVersion = string(rsp["ToFaceModelVersion"].GetString());
        m_toFaceModelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("FailedFacesUrl") && !rsp["FailedFacesUrl"].IsNull())
    {
        if (!rsp["FailedFacesUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedFacesUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedFacesUrl = string(rsp["FailedFacesUrl"].GetString());
        m_failedFacesUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUpgradeGroupFaceModelVersionResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_endTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimestamp, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_fromFaceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromFaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromFaceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_toFaceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToFaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toFaceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_failedFacesUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedFacesUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedFacesUrl.c_str(), allocator).Move(), allocator);
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


uint64_t GetUpgradeGroupFaceModelVersionResultResponse::GetEndTimestamp() const
{
    return m_endTimestamp;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::EndTimestampHasBeenSet() const
{
    return m_endTimestampHasBeenSet;
}

double GetUpgradeGroupFaceModelVersionResultResponse::GetProgress() const
{
    return m_progress;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t GetUpgradeGroupFaceModelVersionResultResponse::GetStatus() const
{
    return m_status;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t GetUpgradeGroupFaceModelVersionResultResponse::GetStartTime() const
{
    return m_startTime;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetUpgradeGroupFaceModelVersionResultResponse::GetFromFaceModelVersion() const
{
    return m_fromFaceModelVersion;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::FromFaceModelVersionHasBeenSet() const
{
    return m_fromFaceModelVersionHasBeenSet;
}

string GetUpgradeGroupFaceModelVersionResultResponse::GetToFaceModelVersion() const
{
    return m_toFaceModelVersion;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::ToFaceModelVersionHasBeenSet() const
{
    return m_toFaceModelVersionHasBeenSet;
}

string GetUpgradeGroupFaceModelVersionResultResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GetUpgradeGroupFaceModelVersionResultResponse::GetFailedFacesUrl() const
{
    return m_failedFacesUrl;
}

bool GetUpgradeGroupFaceModelVersionResultResponse::FailedFacesUrlHasBeenSet() const
{
    return m_failedFacesUrlHasBeenSet;
}


