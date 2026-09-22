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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeExternalAgentResponse::DescribeExternalAgentResponse() :
    m_a2AAgentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_bindingIdHasBeenSet(false),
    m_boundHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_a2AVersionHasBeenSet(false),
    m_a2ASkillSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExternalAgentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("A2AAgentId") && !rsp["A2AAgentId"].IsNull())
    {
        if (!rsp["A2AAgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2AAgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AAgentId = string(rsp["A2AAgentId"].GetString());
        m_a2AAgentIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Endpoint") && !rsp["Endpoint"].IsNull())
    {
        if (!rsp["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(rsp["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (rsp.HasMember("BindingId") && !rsp["BindingId"].IsNull())
    {
        if (!rsp["BindingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindingId = string(rsp["BindingId"].GetString());
        m_bindingIdHasBeenSet = true;
    }

    if (rsp.HasMember("Bound") && !rsp["Bound"].IsNull())
    {
        if (!rsp["Bound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Bound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bound = rsp["Bound"].GetBool();
        m_boundHasBeenSet = true;
    }

    if (rsp.HasMember("IconUrl") && !rsp["IconUrl"].IsNull())
    {
        if (!rsp["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(rsp["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (rsp.HasMember("A2AVersion") && !rsp["A2AVersion"].IsNull())
    {
        if (!rsp["A2AVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2AVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AVersion = string(rsp["A2AVersion"].GetString());
        m_a2AVersionHasBeenSet = true;
    }

    if (rsp.HasMember("A2ASkillSet") && !rsp["A2ASkillSet"].IsNull())
    {
        if (!rsp["A2ASkillSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `A2ASkillSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["A2ASkillSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            A2ASkillItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_a2ASkillSet.push_back(item);
        }
        m_a2ASkillSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExternalAgentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_a2AAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AAgentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindingId.c_str(), allocator).Move(), allocator);
    }

    if (m_boundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bound, allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_a2ASkillSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2ASkillSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_a2ASkillSet.begin(); itr != m_a2ASkillSet.end(); ++itr, ++i)
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


string DescribeExternalAgentResponse::GetA2AAgentId() const
{
    return m_a2AAgentId;
}

bool DescribeExternalAgentResponse::A2AAgentIdHasBeenSet() const
{
    return m_a2AAgentIdHasBeenSet;
}

string DescribeExternalAgentResponse::GetName() const
{
    return m_name;
}

bool DescribeExternalAgentResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeExternalAgentResponse::GetDescription() const
{
    return m_description;
}

bool DescribeExternalAgentResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeExternalAgentResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool DescribeExternalAgentResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string DescribeExternalAgentResponse::GetBindingId() const
{
    return m_bindingId;
}

bool DescribeExternalAgentResponse::BindingIdHasBeenSet() const
{
    return m_bindingIdHasBeenSet;
}

bool DescribeExternalAgentResponse::GetBound() const
{
    return m_bound;
}

bool DescribeExternalAgentResponse::BoundHasBeenSet() const
{
    return m_boundHasBeenSet;
}

string DescribeExternalAgentResponse::GetIconUrl() const
{
    return m_iconUrl;
}

bool DescribeExternalAgentResponse::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string DescribeExternalAgentResponse::GetA2AVersion() const
{
    return m_a2AVersion;
}

bool DescribeExternalAgentResponse::A2AVersionHasBeenSet() const
{
    return m_a2AVersionHasBeenSet;
}

vector<A2ASkillItem> DescribeExternalAgentResponse::GetA2ASkillSet() const
{
    return m_a2ASkillSet;
}

bool DescribeExternalAgentResponse::A2ASkillSetHasBeenSet() const
{
    return m_a2ASkillSetHasBeenSet;
}


