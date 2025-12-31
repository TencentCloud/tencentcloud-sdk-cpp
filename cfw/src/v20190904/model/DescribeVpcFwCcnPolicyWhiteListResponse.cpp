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

#include <tencentcloud/cfw/v20190904/model/DescribeVpcFwCcnPolicyWhiteListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeVpcFwCcnPolicyWhiteListResponse::DescribeVpcFwCcnPolicyWhiteListResponse() :
    m_supportCcnPolicyHasBeenSet(false),
    m_supportCcnPolicyCidrHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVpcFwCcnPolicyWhiteListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SupportCcnPolicy") && !rsp["SupportCcnPolicy"].IsNull())
    {
        if (!rsp["SupportCcnPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportCcnPolicy` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SupportCcnPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportCcnPolicy.push_back((*itr).GetString());
        }
        m_supportCcnPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("SupportCcnPolicyCidr") && !rsp["SupportCcnPolicyCidr"].IsNull())
    {
        if (!rsp["SupportCcnPolicyCidr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportCcnPolicyCidr` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SupportCcnPolicyCidr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportCcnPolicyCidr.push_back((*itr).GetString());
        }
        m_supportCcnPolicyCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVpcFwCcnPolicyWhiteListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_supportCcnPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportCcnPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportCcnPolicy.begin(); itr != m_supportCcnPolicy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportCcnPolicyCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportCcnPolicyCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportCcnPolicyCidr.begin(); itr != m_supportCcnPolicyCidr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


vector<string> DescribeVpcFwCcnPolicyWhiteListResponse::GetSupportCcnPolicy() const
{
    return m_supportCcnPolicy;
}

bool DescribeVpcFwCcnPolicyWhiteListResponse::SupportCcnPolicyHasBeenSet() const
{
    return m_supportCcnPolicyHasBeenSet;
}

vector<string> DescribeVpcFwCcnPolicyWhiteListResponse::GetSupportCcnPolicyCidr() const
{
    return m_supportCcnPolicyCidr;
}

bool DescribeVpcFwCcnPolicyWhiteListResponse::SupportCcnPolicyCidrHasBeenSet() const
{
    return m_supportCcnPolicyCidrHasBeenSet;
}


