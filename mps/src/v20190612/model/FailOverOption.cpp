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

#include <tencentcloud/mps/v20190612/model/FailOverOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FailOverOption::FailOverOption() :
    m_failOverTypeHasBeenSet(false)
{
}

CoreInternalOutcome FailOverOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailOverType") && !value["FailOverType"].IsNull())
    {
        if (!value["FailOverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailOverOption.FailOverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failOverType = string(value["FailOverType"].GetString());
        m_failOverTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FailOverOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failOverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failOverType.c_str(), allocator).Move(), allocator);
    }

}


string FailOverOption::GetFailOverType() const
{
    return m_failOverType;
}

void FailOverOption::SetFailOverType(const string& _failOverType)
{
    m_failOverType = _failOverType;
    m_failOverTypeHasBeenSet = true;
}

bool FailOverOption::FailOverTypeHasBeenSet() const
{
    return m_failOverTypeHasBeenSet;
}

