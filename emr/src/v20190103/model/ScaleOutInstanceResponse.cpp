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

#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ScaleOutInstanceResponse::ScaleOutInstanceResponse() :
    m_instanceIdHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

CoreInternalOutcome ScaleOutInstanceResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("DealNames") && !rsp["DealNames"].IsNull())
    {
        if (!rsp["DealNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DealNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }

    if (rsp.HasMember("ClientToken") && !rsp["ClientToken"].IsNull())
    {
        if (!rsp["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(rsp["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = rsp["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("BillId") && !rsp["BillId"].IsNull())
    {
        if (!rsp["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(rsp["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (rsp.HasMember("TraceId") && !rsp["TraceId"].IsNull())
    {
        if (!rsp["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(rsp["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ScaleOutInstanceResponse::ToJsonString() const
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

    if (m_dealNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
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


string ScaleOutInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool ScaleOutInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ScaleOutInstanceResponse::GetDealNames() const
{
    return m_dealNames;
}

bool ScaleOutInstanceResponse::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

string ScaleOutInstanceResponse::GetClientToken() const
{
    return m_clientToken;
}

bool ScaleOutInstanceResponse::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

int64_t ScaleOutInstanceResponse::GetFlowId() const
{
    return m_flowId;
}

bool ScaleOutInstanceResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string ScaleOutInstanceResponse::GetBillId() const
{
    return m_billId;
}

bool ScaleOutInstanceResponse::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string ScaleOutInstanceResponse::GetTraceId() const
{
    return m_traceId;
}

bool ScaleOutInstanceResponse::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}


