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

#include <tencentcloud/asw/v20200722/model/ModifyFlowServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

ModifyFlowServiceResponse::ModifyFlowServiceResponse() :
    m_flowServiceResourceHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
}

CoreInternalOutcome ModifyFlowServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowServiceResource") && !rsp["FlowServiceResource"].IsNull())
    {
        if (!rsp["FlowServiceResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowServiceResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceResource = string(rsp["FlowServiceResource"].GetString());
        m_flowServiceResourceHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateDate") && !rsp["UpdateDate"].IsNull())
    {
        if (!rsp["UpdateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateDate = string(rsp["UpdateDate"].GetString());
        m_updateDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyFlowServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowServiceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceResource.c_str(), allocator).Move(), allocator);
    }

    if (m_updateDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateDate.c_str(), allocator).Move(), allocator);
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


string ModifyFlowServiceResponse::GetFlowServiceResource() const
{
    return m_flowServiceResource;
}

bool ModifyFlowServiceResponse::FlowServiceResourceHasBeenSet() const
{
    return m_flowServiceResourceHasBeenSet;
}

string ModifyFlowServiceResponse::GetUpdateDate() const
{
    return m_updateDate;
}

bool ModifyFlowServiceResponse::UpdateDateHasBeenSet() const
{
    return m_updateDateHasBeenSet;
}


