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

#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreatePrepareFlowGroupResponse::CreatePrepareFlowGroupResponse() :
    m_flowGroupIdHasBeenSet(false),
    m_prepareUrlHasBeenSet(false)
{
}

CoreInternalOutcome CreatePrepareFlowGroupResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("PrepareUrl") && !rsp["PrepareUrl"].IsNull())
    {
        if (!rsp["PrepareUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepareUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepareUrl = string(rsp["PrepareUrl"].GetString());
        m_prepareUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreatePrepareFlowGroupResponse::ToJsonString() const
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

    if (m_prepareUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepareUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepareUrl.c_str(), allocator).Move(), allocator);
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


string CreatePrepareFlowGroupResponse::GetFlowGroupId() const
{
    return m_flowGroupId;
}

bool CreatePrepareFlowGroupResponse::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string CreatePrepareFlowGroupResponse::GetPrepareUrl() const
{
    return m_prepareUrl;
}

bool CreatePrepareFlowGroupResponse::PrepareUrlHasBeenSet() const
{
    return m_prepareUrlHasBeenSet;
}


