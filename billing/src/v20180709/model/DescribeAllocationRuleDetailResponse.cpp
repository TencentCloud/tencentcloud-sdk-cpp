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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationRuleDetailResponse::DescribeAllocationRuleDetailResponse() :
    m_idHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleDetailHasBeenSet(false),
    m_ratioDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAllocationRuleDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
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

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("RuleDetail") && !rsp["RuleDetail"].IsNull())
    {
        if (!rsp["RuleDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ruleDetail.Deserialize(rsp["RuleDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleDetailHasBeenSet = true;
    }

    if (rsp.HasMember("RatioDetail") && !rsp["RatioDetail"].IsNull())
    {
        if (!rsp["RatioDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RatioDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RatioDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationRationExpression item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ratioDetail.push_back(item);
        }
        m_ratioDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAllocationRuleDetailResponse::ToJsonString() const
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

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_ruleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ratioDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RatioDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ratioDetail.begin(); itr != m_ratioDetail.end(); ++itr, ++i)
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


uint64_t DescribeAllocationRuleDetailResponse::GetId() const
{
    return m_id;
}

bool DescribeAllocationRuleDetailResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeAllocationRuleDetailResponse::GetUin() const
{
    return m_uin;
}

bool DescribeAllocationRuleDetailResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeAllocationRuleDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeAllocationRuleDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAllocationRuleDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeAllocationRuleDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AllocationRuleExpression DescribeAllocationRuleDetailResponse::GetRuleDetail() const
{
    return m_ruleDetail;
}

bool DescribeAllocationRuleDetailResponse::RuleDetailHasBeenSet() const
{
    return m_ruleDetailHasBeenSet;
}

vector<AllocationRationExpression> DescribeAllocationRuleDetailResponse::GetRatioDetail() const
{
    return m_ratioDetail;
}

bool DescribeAllocationRuleDetailResponse::RatioDetailHasBeenSet() const
{
    return m_ratioDetailHasBeenSet;
}


