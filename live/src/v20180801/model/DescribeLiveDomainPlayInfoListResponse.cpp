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

#include <tencentcloud/live/v20180801/model/DescribeLiveDomainPlayInfoListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveDomainPlayInfoListResponse::DescribeLiveDomainPlayInfoListResponse() :
    m_timeHasBeenSet(false),
    m_totalBandwidthHasBeenSet(false),
    m_totalFluxHasBeenSet(false),
    m_totalRequestHasBeenSet(false),
    m_totalOnlineHasBeenSet(false),
    m_domainInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLiveDomainPlayInfoListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Time") && !rsp["Time"].IsNull())
    {
        if (!rsp["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(rsp["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalBandwidth") && !rsp["TotalBandwidth"].IsNull())
    {
        if (!rsp["TotalBandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalBandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalBandwidth = rsp["TotalBandwidth"].GetDouble();
        m_totalBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("TotalFlux") && !rsp["TotalFlux"].IsNull())
    {
        if (!rsp["TotalFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = rsp["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRequest") && !rsp["TotalRequest"].IsNull())
    {
        if (!rsp["TotalRequest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequest = rsp["TotalRequest"].GetUint64();
        m_totalRequestHasBeenSet = true;
    }

    if (rsp.HasMember("TotalOnline") && !rsp["TotalOnline"].IsNull())
    {
        if (!rsp["TotalOnline"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalOnline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalOnline = rsp["TotalOnline"].GetUint64();
        m_totalOnlineHasBeenSet = true;
    }

    if (rsp.HasMember("DomainInfoList") && !rsp["DomainInfoList"].IsNull())
    {
        if (!rsp["DomainInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DomainInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainInfoList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_domainInfoList.push_back(item);
        }
        m_domainInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLiveDomainPlayInfoListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_totalBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBandwidth, allocator);
    }

    if (m_totalFluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFlux, allocator);
    }

    if (m_totalRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRequest, allocator);
    }

    if (m_totalOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalOnline, allocator);
    }

    if (m_domainInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domainInfoList.begin(); itr != m_domainInfoList.end(); ++itr, ++i)
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


string DescribeLiveDomainPlayInfoListResponse::GetTime() const
{
    return m_time;
}

bool DescribeLiveDomainPlayInfoListResponse::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double DescribeLiveDomainPlayInfoListResponse::GetTotalBandwidth() const
{
    return m_totalBandwidth;
}

bool DescribeLiveDomainPlayInfoListResponse::TotalBandwidthHasBeenSet() const
{
    return m_totalBandwidthHasBeenSet;
}

double DescribeLiveDomainPlayInfoListResponse::GetTotalFlux() const
{
    return m_totalFlux;
}

bool DescribeLiveDomainPlayInfoListResponse::TotalFluxHasBeenSet() const
{
    return m_totalFluxHasBeenSet;
}

uint64_t DescribeLiveDomainPlayInfoListResponse::GetTotalRequest() const
{
    return m_totalRequest;
}

bool DescribeLiveDomainPlayInfoListResponse::TotalRequestHasBeenSet() const
{
    return m_totalRequestHasBeenSet;
}

uint64_t DescribeLiveDomainPlayInfoListResponse::GetTotalOnline() const
{
    return m_totalOnline;
}

bool DescribeLiveDomainPlayInfoListResponse::TotalOnlineHasBeenSet() const
{
    return m_totalOnlineHasBeenSet;
}

vector<DomainInfoList> DescribeLiveDomainPlayInfoListResponse::GetDomainInfoList() const
{
    return m_domainInfoList;
}

bool DescribeLiveDomainPlayInfoListResponse::DomainInfoListHasBeenSet() const
{
    return m_domainInfoListHasBeenSet;
}


