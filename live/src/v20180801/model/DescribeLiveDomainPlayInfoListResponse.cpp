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
using namespace rapidjson;
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


    if (rsp.HasMember("Time") && !rsp["Time"].IsNull())
    {
        if (!rsp["Time"].IsString())
        {
            return CoreInternalOutcome(Error("response `Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(rsp["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalBandwidth") && !rsp["TotalBandwidth"].IsNull())
    {
        if (!rsp["TotalBandwidth"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TotalBandwidth` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalBandwidth = rsp["TotalBandwidth"].GetDouble();
        m_totalBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("TotalFlux") && !rsp["TotalFlux"].IsNull())
    {
        if (!rsp["TotalFlux"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TotalFlux` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = rsp["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRequest") && !rsp["TotalRequest"].IsNull())
    {
        if (!rsp["TotalRequest"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequest = rsp["TotalRequest"].GetUint64();
        m_totalRequestHasBeenSet = true;
    }

    if (rsp.HasMember("TotalOnline") && !rsp["TotalOnline"].IsNull())
    {
        if (!rsp["TotalOnline"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalOnline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalOnline = rsp["TotalOnline"].GetUint64();
        m_totalOnlineHasBeenSet = true;
    }

    if (rsp.HasMember("DomainInfoList") && !rsp["DomainInfoList"].IsNull())
    {
        if (!rsp["DomainInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `DomainInfoList` is not array type"));

        const Value &tmpValue = rsp["DomainInfoList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


