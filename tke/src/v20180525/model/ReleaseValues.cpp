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

#include <tencentcloud/tke/v20180525/model/ReleaseValues.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ReleaseValues::ReleaseValues() :
    m_rawOriginalHasBeenSet(false),
    m_valuesTypeHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseValues::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RawOriginal") && !value["RawOriginal"].IsNull())
    {
        if (!value["RawOriginal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseValues.RawOriginal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawOriginal = string(value["RawOriginal"].GetString());
        m_rawOriginalHasBeenSet = true;
    }

    if (value.HasMember("ValuesType") && !value["ValuesType"].IsNull())
    {
        if (!value["ValuesType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseValues.ValuesType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valuesType = string(value["ValuesType"].GetString());
        m_valuesTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseValues::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rawOriginalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawOriginal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawOriginal.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValuesType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valuesType.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseValues::GetRawOriginal() const
{
    return m_rawOriginal;
}

void ReleaseValues::SetRawOriginal(const string& _rawOriginal)
{
    m_rawOriginal = _rawOriginal;
    m_rawOriginalHasBeenSet = true;
}

bool ReleaseValues::RawOriginalHasBeenSet() const
{
    return m_rawOriginalHasBeenSet;
}

string ReleaseValues::GetValuesType() const
{
    return m_valuesType;
}

void ReleaseValues::SetValuesType(const string& _valuesType)
{
    m_valuesType = _valuesType;
    m_valuesTypeHasBeenSet = true;
}

bool ReleaseValues::ValuesTypeHasBeenSet() const
{
    return m_valuesTypeHasBeenSet;
}

