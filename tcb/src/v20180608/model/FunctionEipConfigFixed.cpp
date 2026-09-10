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

#include <tencentcloud/tcb/v20180608/model/FunctionEipConfigFixed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

FunctionEipConfigFixed::FunctionEipConfigFixed() :
    m_eipFixedHasBeenSet(false)
{
}

CoreInternalOutcome FunctionEipConfigFixed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipFixed") && !value["EipFixed"].IsNull())
    {
        if (!value["EipFixed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionEipConfigFixed.EipFixed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipFixed = string(value["EipFixed"].GetString());
        m_eipFixedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionEipConfigFixed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipFixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipFixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipFixed.c_str(), allocator).Move(), allocator);
    }

}


string FunctionEipConfigFixed::GetEipFixed() const
{
    return m_eipFixed;
}

void FunctionEipConfigFixed::SetEipFixed(const string& _eipFixed)
{
    m_eipFixed = _eipFixed;
    m_eipFixedHasBeenSet = true;
}

bool FunctionEipConfigFixed::EipFixedHasBeenSet() const
{
    return m_eipFixedHasBeenSet;
}

