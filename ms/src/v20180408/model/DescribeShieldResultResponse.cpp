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

#include <tencentcloud/ms/v20180408/model/DescribeShieldResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeShieldResultResponse::DescribeShieldResultResponse() :
    m_taskStatusHasBeenSet(false),
    m_appDetailInfoHasBeenSet(false),
    m_shieldInfoHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_statusRefHasBeenSet(false)
{
}

CoreInternalOutcome DescribeShieldResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = rsp["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AppDetailInfo") && !rsp["AppDetailInfo"].IsNull())
    {
        if (!rsp["AppDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appDetailInfo.Deserialize(rsp["AppDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldInfo") && !rsp["ShieldInfo"].IsNull())
    {
        if (!rsp["ShieldInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shieldInfo.Deserialize(rsp["ShieldInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shieldInfoHasBeenSet = true;
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

    if (rsp.HasMember("StatusRef") && !rsp["StatusRef"].IsNull())
    {
        if (!rsp["StatusRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusRef = string(rsp["StatusRef"].GetString());
        m_statusRefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeShieldResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_appDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appDetailInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shieldInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shieldInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusRef.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeShieldResultResponse::GetTaskStatus() const
{
    return m_taskStatus;
}

bool DescribeShieldResultResponse::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

AppDetailInfo DescribeShieldResultResponse::GetAppDetailInfo() const
{
    return m_appDetailInfo;
}

bool DescribeShieldResultResponse::AppDetailInfoHasBeenSet() const
{
    return m_appDetailInfoHasBeenSet;
}

ShieldInfo DescribeShieldResultResponse::GetShieldInfo() const
{
    return m_shieldInfo;
}

bool DescribeShieldResultResponse::ShieldInfoHasBeenSet() const
{
    return m_shieldInfoHasBeenSet;
}

string DescribeShieldResultResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeShieldResultResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeShieldResultResponse::GetStatusRef() const
{
    return m_statusRef;
}

bool DescribeShieldResultResponse::StatusRefHasBeenSet() const
{
    return m_statusRefHasBeenSet;
}


