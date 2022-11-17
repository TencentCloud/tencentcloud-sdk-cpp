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

#include <tencentcloud/tdid/v20210519/model/QueryPolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

QueryPolicyResponse::QueryPolicyResponse() :
    m_idHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_cptIdHasBeenSet(false),
    m_policyDataHasBeenSet(false)
{
}

CoreInternalOutcome QueryPolicyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyId") && !rsp["PolicyId"].IsNull())
    {
        if (!rsp["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = rsp["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (rsp.HasMember("CptId") && !rsp["CptId"].IsNull())
    {
        if (!rsp["CptId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptId = rsp["CptId"].GetUint64();
        m_cptIdHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyData") && !rsp["PolicyData"].IsNull())
    {
        if (!rsp["PolicyData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyData = string(rsp["PolicyData"].GetString());
        m_policyDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryPolicyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_cptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptId, allocator);
    }

    if (m_policyDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyData.c_str(), allocator).Move(), allocator);
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


uint64_t QueryPolicyResponse::GetId() const
{
    return m_id;
}

bool QueryPolicyResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t QueryPolicyResponse::GetPolicyId() const
{
    return m_policyId;
}

bool QueryPolicyResponse::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

uint64_t QueryPolicyResponse::GetCptId() const
{
    return m_cptId;
}

bool QueryPolicyResponse::CptIdHasBeenSet() const
{
    return m_cptIdHasBeenSet;
}

string QueryPolicyResponse::GetPolicyData() const
{
    return m_policyData;
}

bool QueryPolicyResponse::PolicyDataHasBeenSet() const
{
    return m_policyDataHasBeenSet;
}


