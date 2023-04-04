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

#include <tencentcloud/trro/v20220325/model/DescribePolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DescribePolicyResponse::DescribePolicyResponse() :
    m_policyModeHasBeenSet(false),
    m_policyEnabledHasBeenSet(false),
    m_policyInfoHasBeenSet(false),
    m_numHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PolicyMode") && !rsp["PolicyMode"].IsNull())
    {
        if (!rsp["PolicyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyMode = string(rsp["PolicyMode"].GetString());
        m_policyModeHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyEnabled") && !rsp["PolicyEnabled"].IsNull())
    {
        if (!rsp["PolicyEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_policyEnabled = rsp["PolicyEnabled"].GetBool();
        m_policyEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyInfo") && !rsp["PolicyInfo"].IsNull())
    {
        if (!rsp["PolicyInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PolicyInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PolicyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyInfo.push_back(item);
        }
        m_policyInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Num") && !rsp["Num"].IsNull())
    {
        if (!rsp["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = rsp["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePolicyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_policyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_policyEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyEnabled, allocator);
    }

    if (m_policyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyInfo.begin(); itr != m_policyInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
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


string DescribePolicyResponse::GetPolicyMode() const
{
    return m_policyMode;
}

bool DescribePolicyResponse::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}

bool DescribePolicyResponse::GetPolicyEnabled() const
{
    return m_policyEnabled;
}

bool DescribePolicyResponse::PolicyEnabledHasBeenSet() const
{
    return m_policyEnabledHasBeenSet;
}

vector<PolicyInfo> DescribePolicyResponse::GetPolicyInfo() const
{
    return m_policyInfo;
}

bool DescribePolicyResponse::PolicyInfoHasBeenSet() const
{
    return m_policyInfoHasBeenSet;
}

int64_t DescribePolicyResponse::GetNum() const
{
    return m_num;
}

bool DescribePolicyResponse::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

int64_t DescribePolicyResponse::GetTotal() const
{
    return m_total;
}

bool DescribePolicyResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}


