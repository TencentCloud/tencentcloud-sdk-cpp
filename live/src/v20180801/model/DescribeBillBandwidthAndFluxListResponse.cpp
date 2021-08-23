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

#include <tencentcloud/live/v20180801/model/DescribeBillBandwidthAndFluxListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeBillBandwidthAndFluxListResponse::DescribeBillBandwidthAndFluxListResponse() :
    m_peakBandwidthTimeHasBeenSet(false),
    m_peakBandwidthHasBeenSet(false),
    m_p95PeakBandwidthTimeHasBeenSet(false),
    m_p95PeakBandwidthHasBeenSet(false),
    m_sumFluxHasBeenSet(false),
    m_dataInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBillBandwidthAndFluxListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PeakBandwidthTime") && !rsp["PeakBandwidthTime"].IsNull())
    {
        if (!rsp["PeakBandwidthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakBandwidthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peakBandwidthTime = string(rsp["PeakBandwidthTime"].GetString());
        m_peakBandwidthTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PeakBandwidth") && !rsp["PeakBandwidth"].IsNull())
    {
        if (!rsp["PeakBandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PeakBandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_peakBandwidth = rsp["PeakBandwidth"].GetDouble();
        m_peakBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("P95PeakBandwidthTime") && !rsp["P95PeakBandwidthTime"].IsNull())
    {
        if (!rsp["P95PeakBandwidthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `P95PeakBandwidthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p95PeakBandwidthTime = string(rsp["P95PeakBandwidthTime"].GetString());
        m_p95PeakBandwidthTimeHasBeenSet = true;
    }

    if (rsp.HasMember("P95PeakBandwidth") && !rsp["P95PeakBandwidth"].IsNull())
    {
        if (!rsp["P95PeakBandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P95PeakBandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p95PeakBandwidth = rsp["P95PeakBandwidth"].GetDouble();
        m_p95PeakBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("SumFlux") && !rsp["SumFlux"].IsNull())
    {
        if (!rsp["SumFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SumFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sumFlux = rsp["SumFlux"].GetDouble();
        m_sumFluxHasBeenSet = true;
    }

    if (rsp.HasMember("DataInfoList") && !rsp["DataInfoList"].IsNull())
    {
        if (!rsp["DataInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillDataInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataInfoList.push_back(item);
        }
        m_dataInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBillBandwidthAndFluxListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_peakBandwidthTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakBandwidthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peakBandwidthTime.c_str(), allocator).Move(), allocator);
    }

    if (m_peakBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peakBandwidth, allocator);
    }

    if (m_p95PeakBandwidthTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P95PeakBandwidthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p95PeakBandwidthTime.c_str(), allocator).Move(), allocator);
    }

    if (m_p95PeakBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P95PeakBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p95PeakBandwidth, allocator);
    }

    if (m_sumFluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumFlux, allocator);
    }

    if (m_dataInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataInfoList.begin(); itr != m_dataInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeBillBandwidthAndFluxListResponse::GetPeakBandwidthTime() const
{
    return m_peakBandwidthTime;
}

bool DescribeBillBandwidthAndFluxListResponse::PeakBandwidthTimeHasBeenSet() const
{
    return m_peakBandwidthTimeHasBeenSet;
}

double DescribeBillBandwidthAndFluxListResponse::GetPeakBandwidth() const
{
    return m_peakBandwidth;
}

bool DescribeBillBandwidthAndFluxListResponse::PeakBandwidthHasBeenSet() const
{
    return m_peakBandwidthHasBeenSet;
}

string DescribeBillBandwidthAndFluxListResponse::GetP95PeakBandwidthTime() const
{
    return m_p95PeakBandwidthTime;
}

bool DescribeBillBandwidthAndFluxListResponse::P95PeakBandwidthTimeHasBeenSet() const
{
    return m_p95PeakBandwidthTimeHasBeenSet;
}

double DescribeBillBandwidthAndFluxListResponse::GetP95PeakBandwidth() const
{
    return m_p95PeakBandwidth;
}

bool DescribeBillBandwidthAndFluxListResponse::P95PeakBandwidthHasBeenSet() const
{
    return m_p95PeakBandwidthHasBeenSet;
}

double DescribeBillBandwidthAndFluxListResponse::GetSumFlux() const
{
    return m_sumFlux;
}

bool DescribeBillBandwidthAndFluxListResponse::SumFluxHasBeenSet() const
{
    return m_sumFluxHasBeenSet;
}

vector<BillDataInfo> DescribeBillBandwidthAndFluxListResponse::GetDataInfoList() const
{
    return m_dataInfoList;
}

bool DescribeBillBandwidthAndFluxListResponse::DataInfoListHasBeenSet() const
{
    return m_dataInfoListHasBeenSet;
}


