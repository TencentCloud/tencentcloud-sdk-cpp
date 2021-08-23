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

#include <tencentcloud/taf/v20200210/model/OutputTaValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

OutputTaValue::OutputTaValue() :
    m_isCheckHasBeenSet(false),
    m_isMatchHasBeenSet(false)
{
}

CoreInternalOutcome OutputTaValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsCheck") && !value["IsCheck"].IsNull())
    {
        if (!value["IsCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputTaValue.IsCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCheck = value["IsCheck"].GetInt64();
        m_isCheckHasBeenSet = true;
    }

    if (value.HasMember("IsMatch") && !value["IsMatch"].IsNull())
    {
        if (!value["IsMatch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputTaValue.IsMatch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMatch = value["IsMatch"].GetInt64();
        m_isMatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputTaValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCheck, allocator);
    }

    if (m_isMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMatch, allocator);
    }

}


int64_t OutputTaValue::GetIsCheck() const
{
    return m_isCheck;
}

void OutputTaValue::SetIsCheck(const int64_t& _isCheck)
{
    m_isCheck = _isCheck;
    m_isCheckHasBeenSet = true;
}

bool OutputTaValue::IsCheckHasBeenSet() const
{
    return m_isCheckHasBeenSet;
}

int64_t OutputTaValue::GetIsMatch() const
{
    return m_isMatch;
}

void OutputTaValue::SetIsMatch(const int64_t& _isMatch)
{
    m_isMatch = _isMatch;
    m_isMatchHasBeenSet = true;
}

bool OutputTaValue::IsMatchHasBeenSet() const
{
    return m_isMatchHasBeenSet;
}

