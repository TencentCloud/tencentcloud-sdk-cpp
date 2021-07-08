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

#include <tencentcloud/ssm/v20190923/model/DescribeRotationDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

DescribeRotationDetailResponse::DescribeRotationDetailResponse() :
    m_enableRotationHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_latestRotateTimeHasBeenSet(false),
    m_nextRotateBeginTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRotationDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("EnableRotation") && !rsp["EnableRotation"].IsNull())
    {
        if (!rsp["EnableRotation"].IsBool())
        {
            return CoreInternalOutcome(Error("response `EnableRotation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRotation = rsp["EnableRotation"].GetBool();
        m_enableRotationHasBeenSet = true;
    }

    if (rsp.HasMember("Frequency") && !rsp["Frequency"].IsNull())
    {
        if (!rsp["Frequency"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Frequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = rsp["Frequency"].GetInt64();
        m_frequencyHasBeenSet = true;
    }

    if (rsp.HasMember("LatestRotateTime") && !rsp["LatestRotateTime"].IsNull())
    {
        if (!rsp["LatestRotateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LatestRotateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestRotateTime = string(rsp["LatestRotateTime"].GetString());
        m_latestRotateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NextRotateBeginTime") && !rsp["NextRotateBeginTime"].IsNull())
    {
        if (!rsp["NextRotateBeginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NextRotateBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextRotateBeginTime = string(rsp["NextRotateBeginTime"].GetString());
        m_nextRotateBeginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


bool DescribeRotationDetailResponse::GetEnableRotation() const
{
    return m_enableRotation;
}

bool DescribeRotationDetailResponse::EnableRotationHasBeenSet() const
{
    return m_enableRotationHasBeenSet;
}

int64_t DescribeRotationDetailResponse::GetFrequency() const
{
    return m_frequency;
}

bool DescribeRotationDetailResponse::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string DescribeRotationDetailResponse::GetLatestRotateTime() const
{
    return m_latestRotateTime;
}

bool DescribeRotationDetailResponse::LatestRotateTimeHasBeenSet() const
{
    return m_latestRotateTimeHasBeenSet;
}

string DescribeRotationDetailResponse::GetNextRotateBeginTime() const
{
    return m_nextRotateBeginTime;
}

bool DescribeRotationDetailResponse::NextRotateBeginTimeHasBeenSet() const
{
    return m_nextRotateBeginTimeHasBeenSet;
}


