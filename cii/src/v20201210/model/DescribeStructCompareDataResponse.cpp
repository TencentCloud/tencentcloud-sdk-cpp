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

#include <tencentcloud/cii/v20201210/model/DescribeStructCompareDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20201210::Model;
using namespace std;

DescribeStructCompareDataResponse::DescribeStructCompareDataResponse() :
    m_policyIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_reviewTimeHasBeenSet(false),
    m_machineResultHasBeenSet(false),
    m_manualResultHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_newItemsHasBeenSet(false),
    m_modifyItemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStructCompareDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PolicyId") && !rsp["PolicyId"].IsNull())
    {
        if (!rsp["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(rsp["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerId") && !rsp["CustomerId"].IsNull())
    {
        if (!rsp["CustomerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = string(rsp["CustomerId"].GetString());
        m_customerIdHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerName") && !rsp["CustomerName"].IsNull())
    {
        if (!rsp["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(rsp["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ReviewTime") && !rsp["ReviewTime"].IsNull())
    {
        if (!rsp["ReviewTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewTime = string(rsp["ReviewTime"].GetString());
        m_reviewTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MachineResult") && !rsp["MachineResult"].IsNull())
    {
        if (!rsp["MachineResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineResult = string(rsp["MachineResult"].GetString());
        m_machineResultHasBeenSet = true;
    }

    if (rsp.HasMember("ManualResult") && !rsp["ManualResult"].IsNull())
    {
        if (!rsp["ManualResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manualResult = string(rsp["ManualResult"].GetString());
        m_manualResultHasBeenSet = true;
    }

    if (rsp.HasMember("Metrics") && !rsp["Metrics"].IsNull())
    {
        if (!rsp["Metrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Metrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metrics.Deserialize(rsp["Metrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricsHasBeenSet = true;
    }

    if (rsp.HasMember("NewItems") && !rsp["NewItems"].IsNull())
    {
        if (!rsp["NewItems"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewItems` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newItems = string(rsp["NewItems"].GetString());
        m_newItemsHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyItems") && !rsp["ModifyItems"].IsNull())
    {
        if (!rsp["ModifyItems"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyItems` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyItems = string(rsp["ModifyItems"].GetString());
        m_modifyItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStructCompareDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineResult.c_str(), allocator).Move(), allocator);
    }

    if (m_manualResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manualResult.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_newItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newItems.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyItems.c_str(), allocator).Move(), allocator);
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


string DescribeStructCompareDataResponse::GetPolicyId() const
{
    return m_policyId;
}

bool DescribeStructCompareDataResponse::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DescribeStructCompareDataResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeStructCompareDataResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeStructCompareDataResponse::GetCustomerId() const
{
    return m_customerId;
}

bool DescribeStructCompareDataResponse::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string DescribeStructCompareDataResponse::GetCustomerName() const
{
    return m_customerName;
}

bool DescribeStructCompareDataResponse::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string DescribeStructCompareDataResponse::GetReviewTime() const
{
    return m_reviewTime;
}

bool DescribeStructCompareDataResponse::ReviewTimeHasBeenSet() const
{
    return m_reviewTimeHasBeenSet;
}

string DescribeStructCompareDataResponse::GetMachineResult() const
{
    return m_machineResult;
}

bool DescribeStructCompareDataResponse::MachineResultHasBeenSet() const
{
    return m_machineResultHasBeenSet;
}

string DescribeStructCompareDataResponse::GetManualResult() const
{
    return m_manualResult;
}

bool DescribeStructCompareDataResponse::ManualResultHasBeenSet() const
{
    return m_manualResultHasBeenSet;
}

CompareMetricsData DescribeStructCompareDataResponse::GetMetrics() const
{
    return m_metrics;
}

bool DescribeStructCompareDataResponse::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeStructCompareDataResponse::GetNewItems() const
{
    return m_newItems;
}

bool DescribeStructCompareDataResponse::NewItemsHasBeenSet() const
{
    return m_newItemsHasBeenSet;
}

string DescribeStructCompareDataResponse::GetModifyItems() const
{
    return m_modifyItems;
}

bool DescribeStructCompareDataResponse::ModifyItemsHasBeenSet() const
{
    return m_modifyItemsHasBeenSet;
}


