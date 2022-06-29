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

#include <tencentcloud/cynosdb/v20190107/model/AccountParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AccountParam::AccountParam() :
    m_paramNameHasBeenSet(false),
    m_paramValueHasBeenSet(false)
{
}

CoreInternalOutcome AccountParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountParam.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountParam.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

}


string AccountParam::GetParamName() const
{
    return m_paramName;
}

void AccountParam::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool AccountParam::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string AccountParam::GetParamValue() const
{
    return m_paramValue;
}

void AccountParam::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool AccountParam::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

