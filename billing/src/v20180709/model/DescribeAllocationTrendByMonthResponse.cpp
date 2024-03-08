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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationTrendByMonthResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationTrendByMonthResponse::DescribeAllocationTrendByMonthResponse() :
    m_currentHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_statHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAllocationTrendByMonthResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Current") && !rsp["Current"].IsNull())
    {
        if (!rsp["Current"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Current` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_current.Deserialize(rsp["Current"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentHasBeenSet = true;
    }

    if (rsp.HasMember("Previous") && !rsp["Previous"].IsNull())
    {
        if (!rsp["Previous"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Previous` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Previous"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationBillTrendDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_previous.push_back(item);
        }
        m_previousHasBeenSet = true;
    }

    if (rsp.HasMember("Stat") && !rsp["Stat"].IsNull())
    {
        if (!rsp["Stat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Stat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stat.Deserialize(rsp["Stat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAllocationTrendByMonthResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_currentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Current";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_current.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_previousHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Previous";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_previous.begin(); itr != m_previous.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stat.ToJsonObject(value[key.c_str()], allocator);
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


AllocationBillTrendDetail DescribeAllocationTrendByMonthResponse::GetCurrent() const
{
    return m_current;
}

bool DescribeAllocationTrendByMonthResponse::CurrentHasBeenSet() const
{
    return m_currentHasBeenSet;
}

vector<AllocationBillTrendDetail> DescribeAllocationTrendByMonthResponse::GetPrevious() const
{
    return m_previous;
}

bool DescribeAllocationTrendByMonthResponse::PreviousHasBeenSet() const
{
    return m_previousHasBeenSet;
}

AllocationStat DescribeAllocationTrendByMonthResponse::GetStat() const
{
    return m_stat;
}

bool DescribeAllocationTrendByMonthResponse::StatHasBeenSet() const
{
    return m_statHasBeenSet;
}


