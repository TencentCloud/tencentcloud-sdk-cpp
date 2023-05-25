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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterPasswordComplexityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterPasswordComplexityRequest::ModifyClusterPasswordComplexityRequest() :
    m_clusterIdHasBeenSet(false),
    m_validatePasswordLengthHasBeenSet(false),
    m_validatePasswordMixedCaseCountHasBeenSet(false),
    m_validatePasswordSpecialCharCountHasBeenSet(false),
    m_validatePasswordNumberCountHasBeenSet(false),
    m_validatePasswordPolicyHasBeenSet(false),
    m_validatePasswordDictionaryHasBeenSet(false)
{
}

string ModifyClusterPasswordComplexityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_validatePasswordLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validatePasswordLength, allocator);
    }

    if (m_validatePasswordMixedCaseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordMixedCaseCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validatePasswordMixedCaseCount, allocator);
    }

    if (m_validatePasswordSpecialCharCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordSpecialCharCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validatePasswordSpecialCharCount, allocator);
    }

    if (m_validatePasswordNumberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordNumberCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validatePasswordNumberCount, allocator);
    }

    if (m_validatePasswordPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validatePasswordPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_validatePasswordDictionaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePasswordDictionary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_validatePasswordDictionary.begin(); itr != m_validatePasswordDictionary.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterPasswordComplexityRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterPasswordComplexityRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ModifyClusterPasswordComplexityRequest::GetValidatePasswordLength() const
{
    return m_validatePasswordLength;
}

void ModifyClusterPasswordComplexityRequest::SetValidatePasswordLength(const int64_t& _validatePasswordLength)
{
    m_validatePasswordLength = _validatePasswordLength;
    m_validatePasswordLengthHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ValidatePasswordLengthHasBeenSet() const
{
    return m_validatePasswordLengthHasBeenSet;
}

int64_t ModifyClusterPasswordComplexityRequest::GetValidatePasswordMixedCaseCount() const
{
    return m_validatePasswordMixedCaseCount;
}

void ModifyClusterPasswordComplexityRequest::SetValidatePasswordMixedCaseCount(const int64_t& _validatePasswordMixedCaseCount)
{
    m_validatePasswordMixedCaseCount = _validatePasswordMixedCaseCount;
    m_validatePasswordMixedCaseCountHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ValidatePasswordMixedCaseCountHasBeenSet() const
{
    return m_validatePasswordMixedCaseCountHasBeenSet;
}

int64_t ModifyClusterPasswordComplexityRequest::GetValidatePasswordSpecialCharCount() const
{
    return m_validatePasswordSpecialCharCount;
}

void ModifyClusterPasswordComplexityRequest::SetValidatePasswordSpecialCharCount(const int64_t& _validatePasswordSpecialCharCount)
{
    m_validatePasswordSpecialCharCount = _validatePasswordSpecialCharCount;
    m_validatePasswordSpecialCharCountHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ValidatePasswordSpecialCharCountHasBeenSet() const
{
    return m_validatePasswordSpecialCharCountHasBeenSet;
}

int64_t ModifyClusterPasswordComplexityRequest::GetValidatePasswordNumberCount() const
{
    return m_validatePasswordNumberCount;
}

void ModifyClusterPasswordComplexityRequest::SetValidatePasswordNumberCount(const int64_t& _validatePasswordNumberCount)
{
    m_validatePasswordNumberCount = _validatePasswordNumberCount;
    m_validatePasswordNumberCountHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ValidatePasswordNumberCountHasBeenSet() const
{
    return m_validatePasswordNumberCountHasBeenSet;
}

string ModifyClusterPasswordComplexityRequest::GetValidatePasswordPolicy() const
{
    return m_validatePasswordPolicy;
}

void ModifyClusterPasswordComplexityRequest::SetValidatePasswordPolicy(const string& _validatePasswordPolicy)
{
    m_validatePasswordPolicy = _validatePasswordPolicy;
    m_validatePasswordPolicyHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ValidatePasswordPolicyHasBeenSet() const
{
    return m_validatePasswordPolicyHasBeenSet;
}

vector<string> ModifyClusterPasswordComplexityRequest::GetValidatePasswordDictionary() const
{
    return m_validatePasswordDictionary;
}

void ModifyClusterPasswordComplexityRequest::SetValidatePasswordDictionary(const vector<string>& _validatePasswordDictionary)
{
    m_validatePasswordDictionary = _validatePasswordDictionary;
    m_validatePasswordDictionaryHasBeenSet = true;
}

bool ModifyClusterPasswordComplexityRequest::ValidatePasswordDictionaryHasBeenSet() const
{
    return m_validatePasswordDictionaryHasBeenSet;
}


