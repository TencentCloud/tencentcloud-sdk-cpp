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

#include <tencentcloud/dlc/v20210125/model/ImportTkeClusterResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ImportTkeClusterResponse::ImportTkeClusterResponse() :
    m_resourcePoolIdHasBeenSet(false),
    m_resourcePoolCodeHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

CoreInternalOutcome ImportTkeClusterResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResourcePoolId") && !rsp["ResourcePoolId"].IsNull())
    {
        if (!rsp["ResourcePoolId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePoolId = rsp["ResourcePoolId"].GetInt64();
        m_resourcePoolIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourcePoolCode") && !rsp["ResourcePoolCode"].IsNull())
    {
        if (!rsp["ResourcePoolCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePoolCode = string(rsp["ResourcePoolCode"].GetString());
        m_resourcePoolCodeHasBeenSet = true;
    }

    if (rsp.HasMember("WorkflowId") && !rsp["WorkflowId"].IsNull())
    {
        if (!rsp["WorkflowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = rsp["WorkflowId"].GetInt64();
        m_workflowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ImportTkeClusterResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourcePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourcePoolId, allocator);
    }

    if (m_resourcePoolCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePoolCode.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workflowId, allocator);
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


int64_t ImportTkeClusterResponse::GetResourcePoolId() const
{
    return m_resourcePoolId;
}

bool ImportTkeClusterResponse::ResourcePoolIdHasBeenSet() const
{
    return m_resourcePoolIdHasBeenSet;
}

string ImportTkeClusterResponse::GetResourcePoolCode() const
{
    return m_resourcePoolCode;
}

bool ImportTkeClusterResponse::ResourcePoolCodeHasBeenSet() const
{
    return m_resourcePoolCodeHasBeenSet;
}

int64_t ImportTkeClusterResponse::GetWorkflowId() const
{
    return m_workflowId;
}

bool ImportTkeClusterResponse::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}


