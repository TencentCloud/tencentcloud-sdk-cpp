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

#include <tencentcloud/eis/v20210601/model/GetRuntimeResourceMonitorMetricMCResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

GetRuntimeResourceMonitorMetricMCResponse::GetRuntimeResourceMonitorMetricMCResponse() :
    m_metricTypeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome GetRuntimeResourceMonitorMetricMCResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("MetricType") && !rsp["MetricType"].IsNull())
    {
        if (!rsp["MetricType"].IsString())
        {
            return CoreInternalOutcome(Error("response `MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(rsp["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Values") && !rsp["Values"].IsNull())
    {
        if (!rsp["Values"].IsArray())
            return CoreInternalOutcome(Error("response `Values` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricValueMC item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_values.push_back(item);
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetRuntimeResourceMonitorMetricMCResponse::GetMetricType() const
{
    return m_metricType;
}

bool GetRuntimeResourceMonitorMetricMCResponse::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

vector<MetricValueMC> GetRuntimeResourceMonitorMetricMCResponse::GetValues() const
{
    return m_values;
}

bool GetRuntimeResourceMonitorMetricMCResponse::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}


