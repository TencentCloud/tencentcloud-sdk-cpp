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

#include <tencentcloud/waf/v20180125/model/LimitHeaderName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LimitHeaderName::LimitHeaderName() :
    m_paramsNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome LimitHeaderName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamsName") && !value["ParamsName"].IsNull())
    {
        if (!value["ParamsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitHeaderName.ParamsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramsName = string(value["ParamsName"].GetString());
        m_paramsNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitHeaderName.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LimitHeaderName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramsName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string LimitHeaderName::GetParamsName() const
{
    return m_paramsName;
}

void LimitHeaderName::SetParamsName(const string& _paramsName)
{
    m_paramsName = _paramsName;
    m_paramsNameHasBeenSet = true;
}

bool LimitHeaderName::ParamsNameHasBeenSet() const
{
    return m_paramsNameHasBeenSet;
}

string LimitHeaderName::GetType() const
{
    return m_type;
}

void LimitHeaderName::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LimitHeaderName::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

