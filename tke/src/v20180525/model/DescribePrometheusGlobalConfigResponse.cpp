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

#include <tencentcloud/tke/v20180525/model/DescribePrometheusGlobalConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribePrometheusGlobalConfigResponse::DescribePrometheusGlobalConfigResponse() :
    m_configHasBeenSet(false),
    m_serviceMonitorsHasBeenSet(false),
    m_podMonitorsHasBeenSet(false),
    m_rawJobsHasBeenSet(false)
{
}

CoreInternalOutcome DescribePrometheusGlobalConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Config") && !rsp["Config"].IsNull())
    {
        if (!rsp["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(rsp["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceMonitors") && !rsp["ServiceMonitors"].IsNull())
    {
        if (!rsp["ServiceMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceMonitors` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceMonitors.push_back(item);
        }
        m_serviceMonitorsHasBeenSet = true;
    }

    if (rsp.HasMember("PodMonitors") && !rsp["PodMonitors"].IsNull())
    {
        if (!rsp["PodMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodMonitors` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PodMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podMonitors.push_back(item);
        }
        m_podMonitorsHasBeenSet = true;
    }

    if (rsp.HasMember("RawJobs") && !rsp["RawJobs"].IsNull())
    {
        if (!rsp["RawJobs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RawJobs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RawJobs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rawJobs.push_back(item);
        }
        m_rawJobsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePrometheusGlobalConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceMonitors.begin(); itr != m_serviceMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_podMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podMonitors.begin(); itr != m_podMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rawJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawJobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rawJobs.begin(); itr != m_rawJobs.end(); ++itr, ++i)
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


string DescribePrometheusGlobalConfigResponse::GetConfig() const
{
    return m_config;
}

bool DescribePrometheusGlobalConfigResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<PrometheusConfigItem> DescribePrometheusGlobalConfigResponse::GetServiceMonitors() const
{
    return m_serviceMonitors;
}

bool DescribePrometheusGlobalConfigResponse::ServiceMonitorsHasBeenSet() const
{
    return m_serviceMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> DescribePrometheusGlobalConfigResponse::GetPodMonitors() const
{
    return m_podMonitors;
}

bool DescribePrometheusGlobalConfigResponse::PodMonitorsHasBeenSet() const
{
    return m_podMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> DescribePrometheusGlobalConfigResponse::GetRawJobs() const
{
    return m_rawJobs;
}

bool DescribePrometheusGlobalConfigResponse::RawJobsHasBeenSet() const
{
    return m_rawJobsHasBeenSet;
}


