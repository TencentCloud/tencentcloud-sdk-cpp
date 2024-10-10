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

#include <tencentcloud/ess/v20201111/model/CreateDynamicFlowApproverResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateDynamicFlowApproverResponse::CreateDynamicFlowApproverResponse() :
    m_flowIdHasBeenSet(false),
    m_dynamicFlowApproverListHasBeenSet(false)
{
}

CoreInternalOutcome CreateDynamicFlowApproverResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(rsp["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("DynamicFlowApproverList") && !rsp["DynamicFlowApproverList"].IsNull())
    {
        if (!rsp["DynamicFlowApproverList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicFlowApproverList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DynamicFlowApproverList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DynamicFlowApproverResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dynamicFlowApproverList.push_back(item);
        }
        m_dynamicFlowApproverListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateDynamicFlowApproverResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicFlowApproverListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicFlowApproverList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicFlowApproverList.begin(); itr != m_dynamicFlowApproverList.end(); ++itr, ++i)
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


string CreateDynamicFlowApproverResponse::GetFlowId() const
{
    return m_flowId;
}

bool CreateDynamicFlowApproverResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<DynamicFlowApproverResult> CreateDynamicFlowApproverResponse::GetDynamicFlowApproverList() const
{
    return m_dynamicFlowApproverList;
}

bool CreateDynamicFlowApproverResponse::DynamicFlowApproverListHasBeenSet() const
{
    return m_dynamicFlowApproverListHasBeenSet;
}


