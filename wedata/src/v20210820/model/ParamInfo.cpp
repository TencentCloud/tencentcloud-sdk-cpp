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

#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParamInfo::ParamInfo() :
    m_paramKeyHasBeenSet(false),
    m_paramValueHasBeenSet(false)
{
}

CoreInternalOutcome ParamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

}


string ParamInfo::GetParamKey() const
{
    return m_paramKey;
}

void ParamInfo::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool ParamInfo::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string ParamInfo::GetParamValue() const
{
    return m_paramValue;
}

void ParamInfo::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool ParamInfo::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

