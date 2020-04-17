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

#include <tencentcloud/cbs/v20170312/model/GetSnapOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

GetSnapOverviewResponse::GetSnapOverviewResponse() :
    m_totalSizeHasBeenSet(false),
    m_realTradeSizeHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_totalNumsHasBeenSet(false)
{
}

CoreInternalOutcome GetSnapOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalSize") && !rsp["TotalSize"].IsNull())
    {
        if (!rsp["TotalSize"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TotalSize` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = rsp["TotalSize"].GetDouble();
        m_totalSizeHasBeenSet = true;
    }

    if (rsp.HasMember("RealTradeSize") && !rsp["RealTradeSize"].IsNull())
    {
        if (!rsp["RealTradeSize"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `RealTradeSize` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realTradeSize = rsp["RealTradeSize"].GetDouble();
        m_realTradeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("FreeQuota") && !rsp["FreeQuota"].IsNull())
    {
        if (!rsp["FreeQuota"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FreeQuota` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = rsp["FreeQuota"].GetDouble();
        m_freeQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNums") && !rsp["TotalNums"].IsNull())
    {
        if (!rsp["TotalNums"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNums = rsp["TotalNums"].GetInt64();
        m_totalNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double GetSnapOverviewResponse::GetTotalSize() const
{
    return m_totalSize;
}

bool GetSnapOverviewResponse::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

double GetSnapOverviewResponse::GetRealTradeSize() const
{
    return m_realTradeSize;
}

bool GetSnapOverviewResponse::RealTradeSizeHasBeenSet() const
{
    return m_realTradeSizeHasBeenSet;
}

double GetSnapOverviewResponse::GetFreeQuota() const
{
    return m_freeQuota;
}

bool GetSnapOverviewResponse::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

int64_t GetSnapOverviewResponse::GetTotalNums() const
{
    return m_totalNums;
}

bool GetSnapOverviewResponse::TotalNumsHasBeenSet() const
{
    return m_totalNumsHasBeenSet;
}


