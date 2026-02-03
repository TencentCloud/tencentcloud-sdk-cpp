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

#include <tencentcloud/tcb/v20180608/model/CloudBaseClientQPSPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseClientQPSPolicy::CloudBaseClientQPSPolicy() :
    m_limitByHasBeenSet(false),
    m_limitValueHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseClientQPSPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitBy") && !value["LimitBy"].IsNull())
    {
        if (!value["LimitBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseClientQPSPolicy.LimitBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitBy = string(value["LimitBy"].GetString());
        m_limitByHasBeenSet = true;
    }

    if (value.HasMember("LimitValue") && !value["LimitValue"].IsNull())
    {
        if (!value["LimitValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseClientQPSPolicy.LimitValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitValue = value["LimitValue"].GetInt64();
        m_limitValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseClientQPSPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitBy.c_str(), allocator).Move(), allocator);
    }

    if (m_limitValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitValue, allocator);
    }

}


string CloudBaseClientQPSPolicy::GetLimitBy() const
{
    return m_limitBy;
}

void CloudBaseClientQPSPolicy::SetLimitBy(const string& _limitBy)
{
    m_limitBy = _limitBy;
    m_limitByHasBeenSet = true;
}

bool CloudBaseClientQPSPolicy::LimitByHasBeenSet() const
{
    return m_limitByHasBeenSet;
}

int64_t CloudBaseClientQPSPolicy::GetLimitValue() const
{
    return m_limitValue;
}

void CloudBaseClientQPSPolicy::SetLimitValue(const int64_t& _limitValue)
{
    m_limitValue = _limitValue;
    m_limitValueHasBeenSet = true;
}

bool CloudBaseClientQPSPolicy::LimitValueHasBeenSet() const
{
    return m_limitValueHasBeenSet;
}

