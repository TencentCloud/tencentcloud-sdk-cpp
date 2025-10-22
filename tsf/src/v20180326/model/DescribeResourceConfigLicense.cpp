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

#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigLicense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeResourceConfigLicense::DescribeResourceConfigLicense() :
    m_functionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_countdownHasBeenSet(false),
    m_specHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceConfigLicense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicense.Function` is not array type"));

        const rapidjson::Value &tmpValue = value["Function"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeResourceConfigLicenseFunction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_function.push_back(item);
        }
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicense.Resource` is not array type"));

        const rapidjson::Value &tmpValue = value["Resource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeResourceConfigLicenseResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resource.push_back(item);
        }
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicense.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Countdown") && !value["Countdown"].IsNull())
    {
        if (!value["Countdown"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicense.Countdown` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countdown = value["Countdown"].GetUint64();
        m_countdownHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigLicense.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeResourceConfigLicense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_function.begin(); itr != m_function.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resource.begin(); itr != m_resource.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_countdownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Countdown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countdown, allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

}


vector<DescribeResourceConfigLicenseFunction> DescribeResourceConfigLicense::GetFunction() const
{
    return m_function;
}

void DescribeResourceConfigLicense::SetFunction(const vector<DescribeResourceConfigLicenseFunction>& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool DescribeResourceConfigLicense::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

vector<DescribeResourceConfigLicenseResource> DescribeResourceConfigLicense::GetResource() const
{
    return m_resource;
}

void DescribeResourceConfigLicense::SetResource(const vector<DescribeResourceConfigLicenseResource>& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool DescribeResourceConfigLicense::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

uint64_t DescribeResourceConfigLicense::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeResourceConfigLicense::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeResourceConfigLicense::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t DescribeResourceConfigLicense::GetCountdown() const
{
    return m_countdown;
}

void DescribeResourceConfigLicense::SetCountdown(const uint64_t& _countdown)
{
    m_countdown = _countdown;
    m_countdownHasBeenSet = true;
}

bool DescribeResourceConfigLicense::CountdownHasBeenSet() const
{
    return m_countdownHasBeenSet;
}

string DescribeResourceConfigLicense::GetSpec() const
{
    return m_spec;
}

void DescribeResourceConfigLicense::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool DescribeResourceConfigLicense::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

