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


    if (rsp.HasMember("TotalSize") && !rsp["TotalSize"].IsNull())
    {
        if (!rsp["TotalSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = rsp["TotalSize"].GetDouble();
        m_totalSizeHasBeenSet = true;
    }

    if (rsp.HasMember("RealTradeSize") && !rsp["RealTradeSize"].IsNull())
    {
        if (!rsp["RealTradeSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RealTradeSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realTradeSize = rsp["RealTradeSize"].GetDouble();
        m_realTradeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("FreeQuota") && !rsp["FreeQuota"].IsNull())
    {
        if (!rsp["FreeQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FreeQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = rsp["FreeQuota"].GetDouble();
        m_freeQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNums") && !rsp["TotalNums"].IsNull())
    {
        if (!rsp["TotalNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNums = rsp["TotalNums"].GetInt64();
        m_totalNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetSnapOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_realTradeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTradeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTradeSize, allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeQuota, allocator);
    }

    if (m_totalNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNums, allocator);
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


