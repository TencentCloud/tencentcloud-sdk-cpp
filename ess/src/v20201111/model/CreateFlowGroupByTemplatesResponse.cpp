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

#include <tencentcloud/ess/v20201111/model/CreateFlowGroupByTemplatesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowGroupByTemplatesResponse::CreateFlowGroupByTemplatesResponse() :
    m_flowGroupIdHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_approversHasBeenSet(false)
{
}

CoreInternalOutcome CreateFlowGroupByTemplatesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowGroupId") && !rsp["FlowGroupId"].IsNull())
    {
        if (!rsp["FlowGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowGroupId = string(rsp["FlowGroupId"].GetString());
        m_flowGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("FlowIds") && !rsp["FlowIds"].IsNull())
    {
        if (!rsp["FlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIds.push_back((*itr).GetString());
        }
        m_flowIdsHasBeenSet = true;
    }

    if (rsp.HasMember("Approvers") && !rsp["Approvers"].IsNull())
    {
        if (!rsp["Approvers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Approvers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Approvers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowGroupApprovers item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approvers.push_back(item);
        }
        m_approversHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateFlowGroupByTemplatesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_approversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approvers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvers.begin(); itr != m_approvers.end(); ++itr, ++i)
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


string CreateFlowGroupByTemplatesResponse::GetFlowGroupId() const
{
    return m_flowGroupId;
}

bool CreateFlowGroupByTemplatesResponse::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

vector<string> CreateFlowGroupByTemplatesResponse::GetFlowIds() const
{
    return m_flowIds;
}

bool CreateFlowGroupByTemplatesResponse::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

vector<FlowGroupApprovers> CreateFlowGroupByTemplatesResponse::GetApprovers() const
{
    return m_approvers;
}

bool CreateFlowGroupByTemplatesResponse::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}


