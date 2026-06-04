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

#include <tencentcloud/cfw/v20190904/model/DescribeNatCcnFwSwitchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNatCcnFwSwitchResponse::DescribeNatCcnFwSwitchResponse() :
    m_switchModeHasBeenSet(false),
    m_routingModeHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_accessInstanceListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNatCcnFwSwitchResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SwitchMode") && !rsp["SwitchMode"].IsNull())
    {
        if (!rsp["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = rsp["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (rsp.HasMember("RoutingMode") && !rsp["RoutingMode"].IsNull())
    {
        if (!rsp["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = rsp["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }

    if (rsp.HasMember("Bypass") && !rsp["Bypass"].IsNull())
    {
        if (!rsp["Bypass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bypass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bypass = rsp["Bypass"].GetInt64();
        m_bypassHasBeenSet = true;
    }

    if (rsp.HasMember("CcnId") && !rsp["CcnId"].IsNull())
    {
        if (!rsp["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(rsp["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (rsp.HasMember("AccessInstanceList") && !rsp["AccessInstanceList"].IsNull())
    {
        if (!rsp["AccessInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AccessInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessInstanceList.push_back(item);
        }
        m_accessInstanceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNatCcnFwSwitchResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingMode, allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bypass, allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessInstanceList.begin(); itr != m_accessInstanceList.end(); ++itr, ++i)
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


int64_t DescribeNatCcnFwSwitchResponse::GetSwitchMode() const
{
    return m_switchMode;
}

bool DescribeNatCcnFwSwitchResponse::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t DescribeNatCcnFwSwitchResponse::GetRoutingMode() const
{
    return m_routingMode;
}

bool DescribeNatCcnFwSwitchResponse::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

int64_t DescribeNatCcnFwSwitchResponse::GetBypass() const
{
    return m_bypass;
}

bool DescribeNatCcnFwSwitchResponse::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string DescribeNatCcnFwSwitchResponse::GetCcnId() const
{
    return m_ccnId;
}

bool DescribeNatCcnFwSwitchResponse::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<AccessInstanceInfo> DescribeNatCcnFwSwitchResponse::GetAccessInstanceList() const
{
    return m_accessInstanceList;
}

bool DescribeNatCcnFwSwitchResponse::AccessInstanceListHasBeenSet() const
{
    return m_accessInstanceListHasBeenSet;
}


