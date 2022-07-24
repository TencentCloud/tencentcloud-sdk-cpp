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

#include <tencentcloud/ckafka/v20190819/model/ReplaceParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ReplaceParam::ReplaceParam() :
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false)
{
}

CoreInternalOutcome ReplaceParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplaceParam.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplaceParam.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplaceParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

}


string ReplaceParam::GetOldValue() const
{
    return m_oldValue;
}

void ReplaceParam::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ReplaceParam::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string ReplaceParam::GetNewValue() const
{
    return m_newValue;
}

void ReplaceParam::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool ReplaceParam::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

