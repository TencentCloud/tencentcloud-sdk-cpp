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

#include <tencentcloud/tke/v20180525/model/DescribeClusterInspectionResultsOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeClusterInspectionResultsOverviewResponse::DescribeClusterInspectionResultsOverviewResponse() :
    m_statisticsHasBeenSet(false),
    m_diagnosticsHasBeenSet(false),
    m_inspectionOverviewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterInspectionResultsOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Statistics") && !rsp["Statistics"].IsNull())
    {
        if (!rsp["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Statistics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Statistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statistics.push_back(item);
        }
        m_statisticsHasBeenSet = true;
    }

    if (rsp.HasMember("Diagnostics") && !rsp["Diagnostics"].IsNull())
    {
        if (!rsp["Diagnostics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Diagnostics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Diagnostics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateDiagnosticOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnostics.push_back(item);
        }
        m_diagnosticsHasBeenSet = true;
    }

    if (rsp.HasMember("InspectionOverview") && !rsp["InspectionOverview"].IsNull())
    {
        if (!rsp["InspectionOverview"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InspectionOverview` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InspectionOverview"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateInspectionOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inspectionOverview.push_back(item);
        }
        m_inspectionOverviewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterInspectionResultsOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statistics.begin(); itr != m_statistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diagnosticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Diagnostics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnostics.begin(); itr != m_diagnostics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inspectionOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inspectionOverview.begin(); itr != m_inspectionOverview.end(); ++itr, ++i)
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


vector<KubeJarvisStateStatistic> DescribeClusterInspectionResultsOverviewResponse::GetStatistics() const
{
    return m_statistics;
}

bool DescribeClusterInspectionResultsOverviewResponse::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

vector<KubeJarvisStateDiagnosticOverview> DescribeClusterInspectionResultsOverviewResponse::GetDiagnostics() const
{
    return m_diagnostics;
}

bool DescribeClusterInspectionResultsOverviewResponse::DiagnosticsHasBeenSet() const
{
    return m_diagnosticsHasBeenSet;
}

vector<KubeJarvisStateInspectionOverview> DescribeClusterInspectionResultsOverviewResponse::GetInspectionOverview() const
{
    return m_inspectionOverview;
}

bool DescribeClusterInspectionResultsOverviewResponse::InspectionOverviewHasBeenSet() const
{
    return m_inspectionOverviewHasBeenSet;
}


