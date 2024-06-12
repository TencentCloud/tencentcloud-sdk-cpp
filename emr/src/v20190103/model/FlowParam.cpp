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

#include <tencentcloud/emr/v20190103/model/FlowParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

FlowParam::FlowParam() :
    m_fKeyHasBeenSet(false),
    m_fValueHasBeenSet(false)
{
}

CoreInternalOutcome FlowParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FKey") && !value["FKey"].IsNull())
    {
        if (!value["FKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowParam.FKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fKey = string(value["FKey"].GetString());
        m_fKeyHasBeenSet = true;
    }

    if (value.HasMember("FValue") && !value["FValue"].IsNull())
    {
        if (!value["FValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowParam.FValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fValue = string(value["FValue"].GetString());
        m_fValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fValue.c_str(), allocator).Move(), allocator);
    }

}


string FlowParam::GetFKey() const
{
    return m_fKey;
}

void FlowParam::SetFKey(const string& _fKey)
{
    m_fKey = _fKey;
    m_fKeyHasBeenSet = true;
}

bool FlowParam::FKeyHasBeenSet() const
{
    return m_fKeyHasBeenSet;
}

string FlowParam::GetFValue() const
{
    return m_fValue;
}

void FlowParam::SetFValue(const string& _fValue)
{
    m_fValue = _fValue;
    m_fValueHasBeenSet = true;
}

bool FlowParam::FValueHasBeenSet() const
{
    return m_fValueHasBeenSet;
}

