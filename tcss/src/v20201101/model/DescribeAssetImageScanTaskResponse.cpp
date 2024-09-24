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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageScanTaskResponse::DescribeAssetImageScanTaskResponse() :
    m_taskIDHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageScanTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskID") && !rsp["TaskID"].IsNull())
    {
        if (!rsp["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(rsp["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (rsp.HasMember("LastScanTime") && !rsp["LastScanTime"].IsNull())
    {
        if (!rsp["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(rsp["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SubStatus") && !rsp["SubStatus"].IsNull())
    {
        if (!rsp["SubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = string(rsp["SubStatus"].GetString());
        m_subStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetImageScanTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subStatus.c_str(), allocator).Move(), allocator);
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


string DescribeAssetImageScanTaskResponse::GetTaskID() const
{
    return m_taskID;
}

bool DescribeAssetImageScanTaskResponse::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string DescribeAssetImageScanTaskResponse::GetLastScanTime() const
{
    return m_lastScanTime;
}

bool DescribeAssetImageScanTaskResponse::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string DescribeAssetImageScanTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAssetImageScanTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAssetImageScanTaskResponse::GetSubStatus() const
{
    return m_subStatus;
}

bool DescribeAssetImageScanTaskResponse::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}


