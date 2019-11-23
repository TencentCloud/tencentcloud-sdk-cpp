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

#include <tencentcloud/yunjing/v20180228/model/DescribeVulScanResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeVulScanResultResponse::DescribeVulScanResultResponse() :
    m_vulNumHasBeenSet(false),
    m_proVersionNumHasBeenSet(false),
    m_impactedHostNumHasBeenSet(false),
    m_hostNumHasBeenSet(false),
    m_basicVersionNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulScanResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulNum") && !rsp["VulNum"].IsNull())
    {
        if (!rsp["VulNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = rsp["VulNum"].GetUint64();
        m_vulNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionNum") && !rsp["ProVersionNum"].IsNull())
    {
        if (!rsp["ProVersionNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProVersionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionNum = rsp["ProVersionNum"].GetUint64();
        m_proVersionNumHasBeenSet = true;
    }

    if (rsp.HasMember("ImpactedHostNum") && !rsp["ImpactedHostNum"].IsNull())
    {
        if (!rsp["ImpactedHostNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImpactedHostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impactedHostNum = rsp["ImpactedHostNum"].GetUint64();
        m_impactedHostNumHasBeenSet = true;
    }

    if (rsp.HasMember("HostNum") && !rsp["HostNum"].IsNull())
    {
        if (!rsp["HostNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `HostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostNum = rsp["HostNum"].GetUint64();
        m_hostNumHasBeenSet = true;
    }

    if (rsp.HasMember("BasicVersionNum") && !rsp["BasicVersionNum"].IsNull())
    {
        if (!rsp["BasicVersionNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BasicVersionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basicVersionNum = rsp["BasicVersionNum"].GetUint64();
        m_basicVersionNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeVulScanResultResponse::GetVulNum() const
{
    return m_vulNum;
}

bool DescribeVulScanResultResponse::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

uint64_t DescribeVulScanResultResponse::GetProVersionNum() const
{
    return m_proVersionNum;
}

bool DescribeVulScanResultResponse::ProVersionNumHasBeenSet() const
{
    return m_proVersionNumHasBeenSet;
}

uint64_t DescribeVulScanResultResponse::GetImpactedHostNum() const
{
    return m_impactedHostNum;
}

bool DescribeVulScanResultResponse::ImpactedHostNumHasBeenSet() const
{
    return m_impactedHostNumHasBeenSet;
}

uint64_t DescribeVulScanResultResponse::GetHostNum() const
{
    return m_hostNum;
}

bool DescribeVulScanResultResponse::HostNumHasBeenSet() const
{
    return m_hostNumHasBeenSet;
}

uint64_t DescribeVulScanResultResponse::GetBasicVersionNum() const
{
    return m_basicVersionNum;
}

bool DescribeVulScanResultResponse::BasicVersionNumHasBeenSet() const
{
    return m_basicVersionNumHasBeenSet;
}


