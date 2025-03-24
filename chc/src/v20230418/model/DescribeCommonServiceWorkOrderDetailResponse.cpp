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

#include <tencentcloud/chc/v20230418/model/DescribeCommonServiceWorkOrderDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DescribeCommonServiceWorkOrderDetailResponse::DescribeCommonServiceWorkOrderDetailResponse() :
    m_stepSetHasBeenSet(false),
    m_baseInfoHasBeenSet(false),
    m_deviceSetHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_rejectReasonHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCommonServiceWorkOrderDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StepSet") && !rsp["StepSet"].IsNull())
    {
        if (!rsp["StepSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StepSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StepSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrderStep item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stepSet.push_back(item);
        }
        m_stepSetHasBeenSet = true;
    }

    if (rsp.HasMember("BaseInfo") && !rsp["BaseInfo"].IsNull())
    {
        if (!rsp["BaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseInfo.Deserialize(rsp["BaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceSet") && !rsp["DeviceSet"].IsNull())
    {
        if (!rsp["DeviceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeviceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevicePosition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceSet.push_back(item);
        }
        m_deviceSetHasBeenSet = true;
    }

    if (rsp.HasMember("OrderStatus") && !rsp["OrderStatus"].IsNull())
    {
        if (!rsp["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(rsp["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RejectReason") && !rsp["RejectReason"].IsNull())
    {
        if (!rsp["RejectReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RejectReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectReason = string(rsp["RejectReason"].GetString());
        m_rejectReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCommonServiceWorkOrderDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_stepSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stepSet.begin(); itr != m_stepSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_baseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceSet.begin(); itr != m_deviceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rejectReason.c_str(), allocator).Move(), allocator);
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


vector<OrderStep> DescribeCommonServiceWorkOrderDetailResponse::GetStepSet() const
{
    return m_stepSet;
}

bool DescribeCommonServiceWorkOrderDetailResponse::StepSetHasBeenSet() const
{
    return m_stepSetHasBeenSet;
}

CommonServiceBaseInfo DescribeCommonServiceWorkOrderDetailResponse::GetBaseInfo() const
{
    return m_baseInfo;
}

bool DescribeCommonServiceWorkOrderDetailResponse::BaseInfoHasBeenSet() const
{
    return m_baseInfoHasBeenSet;
}

vector<DevicePosition> DescribeCommonServiceWorkOrderDetailResponse::GetDeviceSet() const
{
    return m_deviceSet;
}

bool DescribeCommonServiceWorkOrderDetailResponse::DeviceSetHasBeenSet() const
{
    return m_deviceSetHasBeenSet;
}

string DescribeCommonServiceWorkOrderDetailResponse::GetOrderStatus() const
{
    return m_orderStatus;
}

bool DescribeCommonServiceWorkOrderDetailResponse::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string DescribeCommonServiceWorkOrderDetailResponse::GetRejectReason() const
{
    return m_rejectReason;
}

bool DescribeCommonServiceWorkOrderDetailResponse::RejectReasonHasBeenSet() const
{
    return m_rejectReasonHasBeenSet;
}


