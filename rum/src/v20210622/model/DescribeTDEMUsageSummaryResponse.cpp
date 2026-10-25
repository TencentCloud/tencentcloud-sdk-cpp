/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMUsageSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMUsageSummaryResponse::DescribeTDEMUsageSummaryResponse() :
    m_reportVolumeHasBeenSet(false),
    m_resourceCountHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_byDateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMUsageSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReportVolume") && !rsp["ReportVolume"].IsNull())
    {
        if (!rsp["ReportVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportVolume = rsp["ReportVolume"].GetInt64();
        m_reportVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceCount") && !rsp["ResourceCount"].IsNull())
    {
        if (!rsp["ResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCount = rsp["ResourceCount"].GetInt64();
        m_resourceCountHasBeenSet = true;
    }

    if (rsp.HasMember("Granularity") && !rsp["Granularity"].IsNull())
    {
        if (!rsp["Granularity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Granularity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_granularity = string(rsp["Granularity"].GetString());
        m_granularityHasBeenSet = true;
    }

    if (rsp.HasMember("ByDate") && !rsp["ByDate"].IsNull())
    {
        if (!rsp["ByDate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ByDate` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ByDate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageTimePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_byDate.push_back(item);
        }
        m_byDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMUsageSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_reportVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportVolume, allocator);
    }

    if (m_resourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceCount, allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
    }

    if (m_byDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_byDate.begin(); itr != m_byDate.end(); ++itr, ++i)
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


int64_t DescribeTDEMUsageSummaryResponse::GetReportVolume() const
{
    return m_reportVolume;
}

bool DescribeTDEMUsageSummaryResponse::ReportVolumeHasBeenSet() const
{
    return m_reportVolumeHasBeenSet;
}

int64_t DescribeTDEMUsageSummaryResponse::GetResourceCount() const
{
    return m_resourceCount;
}

bool DescribeTDEMUsageSummaryResponse::ResourceCountHasBeenSet() const
{
    return m_resourceCountHasBeenSet;
}

string DescribeTDEMUsageSummaryResponse::GetGranularity() const
{
    return m_granularity;
}

bool DescribeTDEMUsageSummaryResponse::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

vector<UsageTimePoint> DescribeTDEMUsageSummaryResponse::GetByDate() const
{
    return m_byDate;
}

bool DescribeTDEMUsageSummaryResponse::ByDateHasBeenSet() const
{
    return m_byDateHasBeenSet;
}


