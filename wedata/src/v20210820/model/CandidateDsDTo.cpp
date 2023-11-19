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

#include <tencentcloud/wedata/v20210820/model/CandidateDsDTo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CandidateDsDTo::CandidateDsDTo() :
    m_valueHasBeenSet(false),
    m_valueDescHasBeenSet(false)
{
}

CoreInternalOutcome CandidateDsDTo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CandidateDsDTo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ValueDesc") && !value["ValueDesc"].IsNull())
    {
        if (!value["ValueDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CandidateDsDTo.ValueDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueDesc = string(value["ValueDesc"].GetString());
        m_valueDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CandidateDsDTo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_valueDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueDesc.c_str(), allocator).Move(), allocator);
    }

}


string CandidateDsDTo::GetValue() const
{
    return m_value;
}

void CandidateDsDTo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CandidateDsDTo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CandidateDsDTo::GetValueDesc() const
{
    return m_valueDesc;
}

void CandidateDsDTo::SetValueDesc(const string& _valueDesc)
{
    m_valueDesc = _valueDesc;
    m_valueDescHasBeenSet = true;
}

bool CandidateDsDTo::ValueDescHasBeenSet() const
{
    return m_valueDescHasBeenSet;
}

