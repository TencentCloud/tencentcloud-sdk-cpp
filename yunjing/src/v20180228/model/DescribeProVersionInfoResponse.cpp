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

#include <tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeProVersionInfoResponse::DescribeProVersionInfoResponse() :
    m_postPayCostHasBeenSet(false),
    m_isAutoOpenProVersionHasBeenSet(false),
    m_proVersionNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProVersionInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PostPayCost") && !rsp["PostPayCost"].IsNull())
    {
        if (!rsp["PostPayCost"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PostPayCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postPayCost = rsp["PostPayCost"].GetUint64();
        m_postPayCostHasBeenSet = true;
    }

    if (rsp.HasMember("IsAutoOpenProVersion") && !rsp["IsAutoOpenProVersion"].IsNull())
    {
        if (!rsp["IsAutoOpenProVersion"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsAutoOpenProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoOpenProVersion = rsp["IsAutoOpenProVersion"].GetBool();
        m_isAutoOpenProVersionHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}


uint64_t DescribeProVersionInfoResponse::GetPostPayCost() const
{
    return m_postPayCost;
}

bool DescribeProVersionInfoResponse::PostPayCostHasBeenSet() const
{
    return m_postPayCostHasBeenSet;
}

bool DescribeProVersionInfoResponse::GetIsAutoOpenProVersion() const
{
    return m_isAutoOpenProVersion;
}

bool DescribeProVersionInfoResponse::IsAutoOpenProVersionHasBeenSet() const
{
    return m_isAutoOpenProVersionHasBeenSet;
}

uint64_t DescribeProVersionInfoResponse::GetProVersionNum() const
{
    return m_proVersionNum;
}

bool DescribeProVersionInfoResponse::ProVersionNumHasBeenSet() const
{
    return m_proVersionNumHasBeenSet;
}


