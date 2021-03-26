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

#include <tencentcloud/faceid/v20180301/model/GetEidTokenConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

GetEidTokenConfig::GetEidTokenConfig() :
    m_inputTypeHasBeenSet(false)
{
}

CoreInternalOutcome GetEidTokenConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Error("response `GetEidTokenConfig.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetEidTokenConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_inputTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

}


string GetEidTokenConfig::GetInputType() const
{
    return m_inputType;
}

void GetEidTokenConfig::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool GetEidTokenConfig::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

