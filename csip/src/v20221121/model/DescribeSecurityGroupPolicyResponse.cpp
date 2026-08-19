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

#include <tencentcloud/csip/v20221121/model/DescribeSecurityGroupPolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSecurityGroupPolicyResponse::DescribeSecurityGroupPolicyResponse() :
    m_securityGroupIDListHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_ingressHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityGroupPolicyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SecurityGroupIDList") && !rsp["SecurityGroupIDList"].IsNull())
    {
        if (!rsp["SecurityGroupIDList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupIDList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SecurityGroupIDList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIDList.push_back((*itr).GetString());
        }
        m_securityGroupIDListHasBeenSet = true;
    }

    if (rsp.HasMember("Egress") && !rsp["Egress"].IsNull())
    {
        if (!rsp["Egress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Egress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Egress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicyItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_egress.push_back(item);
        }
        m_egressHasBeenSet = true;
    }

    if (rsp.HasMember("Ingress") && !rsp["Ingress"].IsNull())
    {
        if (!rsp["Ingress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Ingress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Ingress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicyItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ingress.push_back(item);
        }
        m_ingressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityGroupPolicyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_securityGroupIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIDList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIDList.begin(); itr != m_securityGroupIDList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_egress.begin(); itr != m_egress.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ingressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ingress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingress.begin(); itr != m_ingress.end(); ++itr, ++i)
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


vector<string> DescribeSecurityGroupPolicyResponse::GetSecurityGroupIDList() const
{
    return m_securityGroupIDList;
}

bool DescribeSecurityGroupPolicyResponse::SecurityGroupIDListHasBeenSet() const
{
    return m_securityGroupIDListHasBeenSet;
}

vector<SecurityGroupPolicyItem> DescribeSecurityGroupPolicyResponse::GetEgress() const
{
    return m_egress;
}

bool DescribeSecurityGroupPolicyResponse::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

vector<SecurityGroupPolicyItem> DescribeSecurityGroupPolicyResponse::GetIngress() const
{
    return m_ingress;
}

bool DescribeSecurityGroupPolicyResponse::IngressHasBeenSet() const
{
    return m_ingressHasBeenSet;
}


