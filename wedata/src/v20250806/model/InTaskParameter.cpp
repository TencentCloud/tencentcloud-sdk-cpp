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

#include <tencentcloud/wedata/v20250806/model/InTaskParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

InTaskParameter::InTaskParameter() :
    m_paramKeyHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_fromTaskIdHasBeenSet(false),
    m_fromParamKeyHasBeenSet(false)
{
}

CoreInternalOutcome InTaskParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InTaskParameter.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamDesc") && !value["ParamDesc"].IsNull())
    {
        if (!value["ParamDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InTaskParameter.ParamDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDesc = string(value["ParamDesc"].GetString());
        m_paramDescHasBeenSet = true;
    }

    if (value.HasMember("FromTaskId") && !value["FromTaskId"].IsNull())
    {
        if (!value["FromTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InTaskParameter.FromTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromTaskId = string(value["FromTaskId"].GetString());
        m_fromTaskIdHasBeenSet = true;
    }

    if (value.HasMember("FromParamKey") && !value["FromParamKey"].IsNull())
    {
        if (!value["FromParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InTaskParameter.FromParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromParamKey = string(value["FromParamKey"].GetString());
        m_fromParamKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InTaskParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fromTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromParamKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromParamKey.c_str(), allocator).Move(), allocator);
    }

}


string InTaskParameter::GetParamKey() const
{
    return m_paramKey;
}

void InTaskParameter::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool InTaskParameter::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string InTaskParameter::GetParamDesc() const
{
    return m_paramDesc;
}

void InTaskParameter::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool InTaskParameter::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string InTaskParameter::GetFromTaskId() const
{
    return m_fromTaskId;
}

void InTaskParameter::SetFromTaskId(const string& _fromTaskId)
{
    m_fromTaskId = _fromTaskId;
    m_fromTaskIdHasBeenSet = true;
}

bool InTaskParameter::FromTaskIdHasBeenSet() const
{
    return m_fromTaskIdHasBeenSet;
}

string InTaskParameter::GetFromParamKey() const
{
    return m_fromParamKey;
}

void InTaskParameter::SetFromParamKey(const string& _fromParamKey)
{
    m_fromParamKey = _fromParamKey;
    m_fromParamKeyHasBeenSet = true;
}

bool InTaskParameter::FromParamKeyHasBeenSet() const
{
    return m_fromParamKeyHasBeenSet;
}

