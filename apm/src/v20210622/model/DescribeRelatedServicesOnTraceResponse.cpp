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

#include <tencentcloud/apm/v20210622/model/DescribeRelatedServicesOnTraceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeRelatedServicesOnTraceResponse::DescribeRelatedServicesOnTraceResponse() :
    m_totalTracesHasBeenSet(false),
    m_totalServicesHasBeenSet(false),
    m_selectedTracesHasBeenSet(false),
    m_serviceRelationsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRelatedServicesOnTraceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalTraces") && !rsp["TotalTraces"].IsNull())
    {
        if (!rsp["TotalTraces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalTraces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTraces = rsp["TotalTraces"].GetInt64();
        m_totalTracesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalServices") && !rsp["TotalServices"].IsNull())
    {
        if (!rsp["TotalServices"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalServices` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalServices = rsp["TotalServices"].GetInt64();
        m_totalServicesHasBeenSet = true;
    }

    if (rsp.HasMember("SelectedTraces") && !rsp["SelectedTraces"].IsNull())
    {
        if (!rsp["SelectedTraces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTraces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_selectedTraces = rsp["SelectedTraces"].GetInt64();
        m_selectedTracesHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceRelations") && !rsp["ServiceRelations"].IsNull())
    {
        if (!rsp["ServiceRelations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceRelations` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceRelations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceRelations.push_back(item);
        }
        m_serviceRelationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRelatedServicesOnTraceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalTracesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTraces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTraces, allocator);
    }

    if (m_totalServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalServices, allocator);
    }

    if (m_selectedTracesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTraces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectedTraces, allocator);
    }

    if (m_serviceRelationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceRelations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceRelations.begin(); itr != m_serviceRelations.end(); ++itr, ++i)
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


int64_t DescribeRelatedServicesOnTraceResponse::GetTotalTraces() const
{
    return m_totalTraces;
}

bool DescribeRelatedServicesOnTraceResponse::TotalTracesHasBeenSet() const
{
    return m_totalTracesHasBeenSet;
}

int64_t DescribeRelatedServicesOnTraceResponse::GetTotalServices() const
{
    return m_totalServices;
}

bool DescribeRelatedServicesOnTraceResponse::TotalServicesHasBeenSet() const
{
    return m_totalServicesHasBeenSet;
}

int64_t DescribeRelatedServicesOnTraceResponse::GetSelectedTraces() const
{
    return m_selectedTraces;
}

bool DescribeRelatedServicesOnTraceResponse::SelectedTracesHasBeenSet() const
{
    return m_selectedTracesHasBeenSet;
}

vector<ServiceRelation> DescribeRelatedServicesOnTraceResponse::GetServiceRelations() const
{
    return m_serviceRelations;
}

bool DescribeRelatedServicesOnTraceResponse::ServiceRelationsHasBeenSet() const
{
    return m_serviceRelationsHasBeenSet;
}


