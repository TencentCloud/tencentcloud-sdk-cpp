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

#include <tencentcloud/waf/v20180125/model/DescribeLLMHourBillDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeLLMHourBillDetailResponse::DescribeLLMHourBillDetailResponse() :
    m_instanceIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_estimatedTotalFeeHasBeenSet(false),
    m_itemFeesHasBeenSet(false),
    m_hourlyTrendHasBeenSet(false),
    m_hourlyDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLLMHourBillDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Date") && !rsp["Date"].IsNull())
    {
        if (!rsp["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(rsp["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (rsp.HasMember("EstimatedTotalFee") && !rsp["EstimatedTotalFee"].IsNull())
    {
        if (!rsp["EstimatedTotalFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EstimatedTotalFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTotalFee = string(rsp["EstimatedTotalFee"].GetString());
        m_estimatedTotalFeeHasBeenSet = true;
    }

    if (rsp.HasMember("ItemFees") && !rsp["ItemFees"].IsNull())
    {
        if (!rsp["ItemFees"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemFees` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemFees.Deserialize(rsp["ItemFees"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemFeesHasBeenSet = true;
    }

    if (rsp.HasMember("HourlyTrend") && !rsp["HourlyTrend"].IsNull())
    {
        if (!rsp["HourlyTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HourlyTrend` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HourlyTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LLMHourBillTrendItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hourlyTrend.push_back(item);
        }
        m_hourlyTrendHasBeenSet = true;
    }

    if (rsp.HasMember("HourlyDetail") && !rsp["HourlyDetail"].IsNull())
    {
        if (!rsp["HourlyDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HourlyDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HourlyDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LLMHourBillDetailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hourlyDetail.push_back(item);
        }
        m_hourlyDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLLMHourBillDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedTotalFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedTotalFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estimatedTotalFee.c_str(), allocator).Move(), allocator);
    }

    if (m_itemFeesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemFees";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemFees.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hourlyTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourlyTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hourlyTrend.begin(); itr != m_hourlyTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hourlyDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourlyDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hourlyDetail.begin(); itr != m_hourlyDetail.end(); ++itr, ++i)
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


string DescribeLLMHourBillDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeLLMHourBillDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeLLMHourBillDetailResponse::GetDate() const
{
    return m_date;
}

bool DescribeLLMHourBillDetailResponse::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeLLMHourBillDetailResponse::GetEstimatedTotalFee() const
{
    return m_estimatedTotalFee;
}

bool DescribeLLMHourBillDetailResponse::EstimatedTotalFeeHasBeenSet() const
{
    return m_estimatedTotalFeeHasBeenSet;
}

LLMBillItemFee DescribeLLMHourBillDetailResponse::GetItemFees() const
{
    return m_itemFees;
}

bool DescribeLLMHourBillDetailResponse::ItemFeesHasBeenSet() const
{
    return m_itemFeesHasBeenSet;
}

vector<LLMHourBillTrendItem> DescribeLLMHourBillDetailResponse::GetHourlyTrend() const
{
    return m_hourlyTrend;
}

bool DescribeLLMHourBillDetailResponse::HourlyTrendHasBeenSet() const
{
    return m_hourlyTrendHasBeenSet;
}

vector<LLMHourBillDetailItem> DescribeLLMHourBillDetailResponse::GetHourlyDetail() const
{
    return m_hourlyDetail;
}

bool DescribeLLMHourBillDetailResponse::HourlyDetailHasBeenSet() const
{
    return m_hourlyDetailHasBeenSet;
}


