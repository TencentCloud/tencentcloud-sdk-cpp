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

#include <tencentcloud/tcb/v20180608/model/CloudBaseSecurityContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseSecurityContext::CloudBaseSecurityContext() :
    m_capabilitiesHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseSecurityContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Capabilities") && !value["Capabilities"].IsNull())
    {
        if (!value["Capabilities"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseSecurityContext.Capabilities` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capabilities.Deserialize(value["Capabilities"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capabilitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseSecurityContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_capabilitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capabilities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capabilities.ToJsonObject(value[key.c_str()], allocator);
    }

}


CloudBaseCapabilities CloudBaseSecurityContext::GetCapabilities() const
{
    return m_capabilities;
}

void CloudBaseSecurityContext::SetCapabilities(const CloudBaseCapabilities& _capabilities)
{
    m_capabilities = _capabilities;
    m_capabilitiesHasBeenSet = true;
}

bool CloudBaseSecurityContext::CapabilitiesHasBeenSet() const
{
    return m_capabilitiesHasBeenSet;
}

