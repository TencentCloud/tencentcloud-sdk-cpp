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

#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterPasswordComplexityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeClusterPasswordComplexityResponse::DescribeClusterPasswordComplexityResponse() :
    m_validatePasswordDictionaryHasBeenSet(false),
    m_validatePasswordLengthHasBeenSet(false),
    m_validatePasswordMixedCaseCountHasBeenSet(false),
    m_validatePasswordNumberCountHasBeenSet(false),
    m_validatePasswordPolicyHasBeenSet(false),
    m_validatePasswordSpecialCharCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterPasswordComplexityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ValidatePasswordDictionary") && !rsp["ValidatePasswordDictionary"].IsNull())
    {
        if (!rsp["ValidatePasswordDictionary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValidatePasswordDictionary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validatePasswordDictionary.Deserialize(rsp["ValidatePasswordDictionary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validatePasswordDictionaryHasBeenSet = true;
    }

    if (rsp.HasMember("ValidatePasswordLength") && !rsp["ValidatePasswordLength"].IsNull())
    {
        if (!rsp["ValidatePasswordLength"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValidatePasswordLength` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validatePasswordLength.Deserialize(rsp["ValidatePasswordLength"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validatePasswordLengthHasBeenSet = true;
    }

    if (rsp.HasMember("ValidatePasswordMixedCaseCount") && !rsp["ValidatePasswordMixedCaseCount"].IsNull())
    {
        if (!rsp["ValidatePasswordMixedCaseCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValidatePasswordMixedCaseCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validatePasswordMixedCaseCount.Deserialize(rsp["ValidatePasswordMixedCaseCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validatePasswordMixedCaseCountHasBeenSet = true;
    }

    if (rsp.HasMember("ValidatePasswordNumberCount") && !rsp["ValidatePasswordNumberCount"].IsNull())
    {
        if (!rsp["ValidatePasswordNumberCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValidatePasswordNumberCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validatePasswordNumberCount.Deserialize(rsp["ValidatePasswordNumberCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validatePasswordNumberCountHasBeenSet = true;
    }

    if (rsp.HasMember("ValidatePasswordPolicy") && !rsp["ValidatePasswordPolicy"].IsNull())
    {
        if (!rsp["ValidatePasswordPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValidatePasswordPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validatePasswordPolicy.Deserialize(rsp["ValidatePasswordPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validatePasswordPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("ValidatePasswordSpecialCharCount") && !rsp["ValidatePasswordSpecialCharCount"].IsNull())
    {
        if (!rsp["ValidatePasswordSpecialCharCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValidatePasswordSpecialCharCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validatePasswordSpecialCharCount.Deserialize(rsp["ValidatePasswordSpecialCharCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validatePasswordSpecialCharCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterPasswordComplexityResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_validatePasswordDictionaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordDictionary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validatePasswordDictionary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validatePasswordLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validatePasswordLength.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validatePasswordMixedCaseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordMixedCaseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validatePasswordMixedCaseCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validatePasswordNumberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordNumberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validatePasswordNumberCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validatePasswordPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validatePasswordPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validatePasswordSpecialCharCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordSpecialCharCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validatePasswordSpecialCharCount.ToJsonObject(value[key.c_str()], allocator);
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


ParamInfo DescribeClusterPasswordComplexityResponse::GetValidatePasswordDictionary() const
{
    return m_validatePasswordDictionary;
}

bool DescribeClusterPasswordComplexityResponse::ValidatePasswordDictionaryHasBeenSet() const
{
    return m_validatePasswordDictionaryHasBeenSet;
}

ParamInfo DescribeClusterPasswordComplexityResponse::GetValidatePasswordLength() const
{
    return m_validatePasswordLength;
}

bool DescribeClusterPasswordComplexityResponse::ValidatePasswordLengthHasBeenSet() const
{
    return m_validatePasswordLengthHasBeenSet;
}

ParamInfo DescribeClusterPasswordComplexityResponse::GetValidatePasswordMixedCaseCount() const
{
    return m_validatePasswordMixedCaseCount;
}

bool DescribeClusterPasswordComplexityResponse::ValidatePasswordMixedCaseCountHasBeenSet() const
{
    return m_validatePasswordMixedCaseCountHasBeenSet;
}

ParamInfo DescribeClusterPasswordComplexityResponse::GetValidatePasswordNumberCount() const
{
    return m_validatePasswordNumberCount;
}

bool DescribeClusterPasswordComplexityResponse::ValidatePasswordNumberCountHasBeenSet() const
{
    return m_validatePasswordNumberCountHasBeenSet;
}

ParamInfo DescribeClusterPasswordComplexityResponse::GetValidatePasswordPolicy() const
{
    return m_validatePasswordPolicy;
}

bool DescribeClusterPasswordComplexityResponse::ValidatePasswordPolicyHasBeenSet() const
{
    return m_validatePasswordPolicyHasBeenSet;
}

ParamInfo DescribeClusterPasswordComplexityResponse::GetValidatePasswordSpecialCharCount() const
{
    return m_validatePasswordSpecialCharCount;
}

bool DescribeClusterPasswordComplexityResponse::ValidatePasswordSpecialCharCountHasBeenSet() const
{
    return m_validatePasswordSpecialCharCountHasBeenSet;
}


