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

#include <tencentcloud/tcb/v20180608/model/FunctionEipConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

FunctionEipConfig::FunctionEipConfig() :
    m_eipStatusHasBeenSet(false)
{
}

CoreInternalOutcome FunctionEipConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipStatus") && !value["EipStatus"].IsNull())
    {
        if (!value["EipStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionEipConfig.EipStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipStatus = string(value["EipStatus"].GetString());
        m_eipStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionEipConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipStatus.c_str(), allocator).Move(), allocator);
    }

}


string FunctionEipConfig::GetEipStatus() const
{
    return m_eipStatus;
}

void FunctionEipConfig::SetEipStatus(const string& _eipStatus)
{
    m_eipStatus = _eipStatus;
    m_eipStatusHasBeenSet = true;
}

bool FunctionEipConfig::EipStatusHasBeenSet() const
{
    return m_eipStatusHasBeenSet;
}

