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

#include <tencentcloud/cdb/v20170320/model/DescribeCPUExpandStrategyInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeCPUExpandStrategyInfoResponse::DescribeCPUExpandStrategyInfoResponse() :
    m_typeHasBeenSet(false),
    m_expandCpuHasBeenSet(false),
    m_autoStrategyHasBeenSet(false),
    m_periodStrategyHasBeenSet(false),
    m_timeIntervalStrategyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCPUExpandStrategyInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpandCpu") && !rsp["ExpandCpu"].IsNull())
    {
        if (!rsp["ExpandCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpandCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandCpu = rsp["ExpandCpu"].GetInt64();
        m_expandCpuHasBeenSet = true;
    }

    if (rsp.HasMember("AutoStrategy") && !rsp["AutoStrategy"].IsNull())
    {
        if (!rsp["AutoStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoStrategy.Deserialize(rsp["AutoStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("PeriodStrategy") && !rsp["PeriodStrategy"].IsNull())
    {
        if (!rsp["PeriodStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_periodStrategy.Deserialize(rsp["PeriodStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("TimeIntervalStrategy") && !rsp["TimeIntervalStrategy"].IsNull())
    {
        if (!rsp["TimeIntervalStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimeIntervalStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeIntervalStrategy.Deserialize(rsp["TimeIntervalStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeIntervalStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCPUExpandStrategyInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_expandCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandCpu, allocator);
    }

    if (m_autoStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_periodStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeIntervalStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeIntervalStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeIntervalStrategy.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeCPUExpandStrategyInfoResponse::GetType() const
{
    return m_type;
}

bool DescribeCPUExpandStrategyInfoResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeCPUExpandStrategyInfoResponse::GetExpandCpu() const
{
    return m_expandCpu;
}

bool DescribeCPUExpandStrategyInfoResponse::ExpandCpuHasBeenSet() const
{
    return m_expandCpuHasBeenSet;
}

AutoStrategy DescribeCPUExpandStrategyInfoResponse::GetAutoStrategy() const
{
    return m_autoStrategy;
}

bool DescribeCPUExpandStrategyInfoResponse::AutoStrategyHasBeenSet() const
{
    return m_autoStrategyHasBeenSet;
}

PeriodStrategy DescribeCPUExpandStrategyInfoResponse::GetPeriodStrategy() const
{
    return m_periodStrategy;
}

bool DescribeCPUExpandStrategyInfoResponse::PeriodStrategyHasBeenSet() const
{
    return m_periodStrategyHasBeenSet;
}

TimeIntervalStrategy DescribeCPUExpandStrategyInfoResponse::GetTimeIntervalStrategy() const
{
    return m_timeIntervalStrategy;
}

bool DescribeCPUExpandStrategyInfoResponse::TimeIntervalStrategyHasBeenSet() const
{
    return m_timeIntervalStrategyHasBeenSet;
}


