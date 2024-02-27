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

#include <tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeCostExplorerSummaryResponse::DescribeCostExplorerSummaryResponse() :
    m_totalHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_totalDetailHasBeenSet(false),
    m_conditionValueHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCostExplorerSummaryResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Header") && !rsp["Header"].IsNull())
    {
        if (!rsp["Header"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Header` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_header.Deserialize(rsp["Header"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headerHasBeenSet = true;
    }

    if (rsp.HasMember("Detail") && !rsp["Detail"].IsNull())
    {
        if (!rsp["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Detail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDetail") && !rsp["TotalDetail"].IsNull())
    {
        if (!rsp["TotalDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalDetail.Deserialize(rsp["TotalDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalDetailHasBeenSet = true;
    }

    if (rsp.HasMember("ConditionValue") && !rsp["ConditionValue"].IsNull())
    {
        if (!rsp["ConditionValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conditionValue.Deserialize(rsp["ConditionValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCostExplorerSummaryResponse::ToJsonString() const
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

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_header.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conditionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conditionValue.ToJsonObject(value[key.c_str()], allocator);
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


uint64_t DescribeCostExplorerSummaryResponse::GetTotal() const
{
    return m_total;
}

bool DescribeCostExplorerSummaryResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

AnalyseHeaderDetail DescribeCostExplorerSummaryResponse::GetHeader() const
{
    return m_header;
}

bool DescribeCostExplorerSummaryResponse::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

vector<AnalyseDetail> DescribeCostExplorerSummaryResponse::GetDetail() const
{
    return m_detail;
}

bool DescribeCostExplorerSummaryResponse::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

AnalyseDetail DescribeCostExplorerSummaryResponse::GetTotalDetail() const
{
    return m_totalDetail;
}

bool DescribeCostExplorerSummaryResponse::TotalDetailHasBeenSet() const
{
    return m_totalDetailHasBeenSet;
}

AnalyseConditionDetail DescribeCostExplorerSummaryResponse::GetConditionValue() const
{
    return m_conditionValue;
}

bool DescribeCostExplorerSummaryResponse::ConditionValueHasBeenSet() const
{
    return m_conditionValueHasBeenSet;
}


