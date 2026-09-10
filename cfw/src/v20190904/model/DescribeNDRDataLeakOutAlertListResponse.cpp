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

#include <tencentcloud/cfw/v20190904/model/DescribeNDRDataLeakOutAlertListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNDRDataLeakOutAlertListResponse::DescribeNDRDataLeakOutAlertListResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_instanceTypeOptionsHasBeenSet(false),
    m_regionOptionsHasBeenSet(false),
    m_dstServiceTypeOptionsHasBeenSet(false),
    m_riskScenarioOptionsHasBeenSet(false),
    m_analysisStatusOptionsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNDRDataLeakOutAlertListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataLeakOutAlertEvent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceTypeOptions") && !rsp["InstanceTypeOptions"].IsNull())
    {
        if (!rsp["InstanceTypeOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTypeOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceTypeOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTypeOptions.push_back(item);
        }
        m_instanceTypeOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("RegionOptions") && !rsp["RegionOptions"].IsNull())
    {
        if (!rsp["RegionOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionOptions.push_back(item);
        }
        m_regionOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("DstServiceTypeOptions") && !rsp["DstServiceTypeOptions"].IsNull())
    {
        if (!rsp["DstServiceTypeOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DstServiceTypeOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DstServiceTypeOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dstServiceTypeOptions.push_back(item);
        }
        m_dstServiceTypeOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("RiskScenarioOptions") && !rsp["RiskScenarioOptions"].IsNull())
    {
        if (!rsp["RiskScenarioOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskScenarioOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskScenarioOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskScenarioOptions.push_back(item);
        }
        m_riskScenarioOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisStatusOptions") && !rsp["AnalysisStatusOptions"].IsNull())
    {
        if (!rsp["AnalysisStatusOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalysisStatusOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AnalysisStatusOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisStatusOptions.push_back(item);
        }
        m_analysisStatusOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNDRDataLeakOutAlertListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTypeOptions.begin(); itr != m_instanceTypeOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionOptions.begin(); itr != m_regionOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dstServiceTypeOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstServiceTypeOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstServiceTypeOptions.begin(); itr != m_dstServiceTypeOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_riskScenarioOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScenarioOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskScenarioOptions.begin(); itr != m_riskScenarioOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_analysisStatusOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisStatusOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisStatusOptions.begin(); itr != m_analysisStatusOptions.end(); ++itr, ++i)
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


uint64_t DescribeNDRDataLeakOutAlertListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeNDRDataLeakOutAlertListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<DataLeakOutAlertEvent> DescribeNDRDataLeakOutAlertListResponse::GetData() const
{
    return m_data;
}

bool DescribeNDRDataLeakOutAlertListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<FieldOption> DescribeNDRDataLeakOutAlertListResponse::GetInstanceTypeOptions() const
{
    return m_instanceTypeOptions;
}

bool DescribeNDRDataLeakOutAlertListResponse::InstanceTypeOptionsHasBeenSet() const
{
    return m_instanceTypeOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRDataLeakOutAlertListResponse::GetRegionOptions() const
{
    return m_regionOptions;
}

bool DescribeNDRDataLeakOutAlertListResponse::RegionOptionsHasBeenSet() const
{
    return m_regionOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRDataLeakOutAlertListResponse::GetDstServiceTypeOptions() const
{
    return m_dstServiceTypeOptions;
}

bool DescribeNDRDataLeakOutAlertListResponse::DstServiceTypeOptionsHasBeenSet() const
{
    return m_dstServiceTypeOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRDataLeakOutAlertListResponse::GetRiskScenarioOptions() const
{
    return m_riskScenarioOptions;
}

bool DescribeNDRDataLeakOutAlertListResponse::RiskScenarioOptionsHasBeenSet() const
{
    return m_riskScenarioOptionsHasBeenSet;
}

vector<FieldOption> DescribeNDRDataLeakOutAlertListResponse::GetAnalysisStatusOptions() const
{
    return m_analysisStatusOptions;
}

bool DescribeNDRDataLeakOutAlertListResponse::AnalysisStatusOptionsHasBeenSet() const
{
    return m_analysisStatusOptionsHasBeenSet;
}


