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
using namespace rapidjson;
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


    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = rsp["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AppDetailInfo") && !rsp["AppDetailInfo"].IsNull())
    {
        if (!rsp["AppDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AppDetailInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ShieldInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("StatusRef") && !rsp["StatusRef"].IsNull())
    {
        if (!rsp["StatusRef"].IsString())
        {
            return CoreInternalOutcome(Error("response `StatusRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusRef = string(rsp["StatusRef"].GetString());
        m_statusRefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


