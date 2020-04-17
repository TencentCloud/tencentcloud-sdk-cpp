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
using namespace rapidjson;
using namespace std;

ScaleOutInstanceResponse::ScaleOutInstanceResponse() :
    m_instanceIdHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_billIdHasBeenSet(false)
{
}

CoreInternalOutcome ScaleOutInstanceResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("DealNames") && !rsp["DealNames"].IsNull())
    {
        if (!rsp["DealNames"].IsArray())
            return CoreInternalOutcome(Error("response `DealNames` is not array type"));

        const Value &tmpValue = rsp["DealNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }

    if (rsp.HasMember("ClientToken") && !rsp["ClientToken"].IsNull())
    {
        if (!rsp["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(rsp["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = rsp["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("BillId") && !rsp["BillId"].IsNull())
    {
        if (!rsp["BillId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(rsp["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


