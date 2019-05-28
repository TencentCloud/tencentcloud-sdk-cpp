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

#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeDisasterRecoverGroupQuotaResponse::DescribeDisasterRecoverGroupQuotaResponse() :
    m_groupQuotaHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_cvmInHostGroupQuotaHasBeenSet(false),
    m_cvmInSwGroupQuotaHasBeenSet(false),
    m_cvmInRackGroupQuotaHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDisasterRecoverGroupQuotaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GroupQuota") && !rsp["GroupQuota"].IsNull())
    {
        if (!rsp["GroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `GroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupQuota = rsp["GroupQuota"].GetInt64();
        m_groupQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentNum") && !rsp["CurrentNum"].IsNull())
    {
        if (!rsp["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = rsp["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (rsp.HasMember("CvmInHostGroupQuota") && !rsp["CvmInHostGroupQuota"].IsNull())
    {
        if (!rsp["CvmInHostGroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CvmInHostGroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInHostGroupQuota = rsp["CvmInHostGroupQuota"].GetInt64();
        m_cvmInHostGroupQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CvmInSwGroupQuota") && !rsp["CvmInSwGroupQuota"].IsNull())
    {
        if (!rsp["CvmInSwGroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CvmInSwGroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInSwGroupQuota = rsp["CvmInSwGroupQuota"].GetInt64();
        m_cvmInSwGroupQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("CvmInRackGroupQuota") && !rsp["CvmInRackGroupQuota"].IsNull())
    {
        if (!rsp["CvmInRackGroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CvmInRackGroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInRackGroupQuota = rsp["CvmInRackGroupQuota"].GetInt64();
        m_cvmInRackGroupQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeDisasterRecoverGroupQuotaResponse::GetGroupQuota() const
{
    return m_groupQuota;
}

bool DescribeDisasterRecoverGroupQuotaResponse::GroupQuotaHasBeenSet() const
{
    return m_groupQuotaHasBeenSet;
}

int64_t DescribeDisasterRecoverGroupQuotaResponse::GetCurrentNum() const
{
    return m_currentNum;
}

bool DescribeDisasterRecoverGroupQuotaResponse::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

int64_t DescribeDisasterRecoverGroupQuotaResponse::GetCvmInHostGroupQuota() const
{
    return m_cvmInHostGroupQuota;
}

bool DescribeDisasterRecoverGroupQuotaResponse::CvmInHostGroupQuotaHasBeenSet() const
{
    return m_cvmInHostGroupQuotaHasBeenSet;
}

int64_t DescribeDisasterRecoverGroupQuotaResponse::GetCvmInSwGroupQuota() const
{
    return m_cvmInSwGroupQuota;
}

bool DescribeDisasterRecoverGroupQuotaResponse::CvmInSwGroupQuotaHasBeenSet() const
{
    return m_cvmInSwGroupQuotaHasBeenSet;
}

int64_t DescribeDisasterRecoverGroupQuotaResponse::GetCvmInRackGroupQuota() const
{
    return m_cvmInRackGroupQuota;
}

bool DescribeDisasterRecoverGroupQuotaResponse::CvmInRackGroupQuotaHasBeenSet() const
{
    return m_cvmInRackGroupQuotaHasBeenSet;
}


