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

#include <tencentcloud/tcm/v20210413/model/SmartDNSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

SmartDNSConfig::SmartDNSConfig() :
    m_istioMetaDNSCaptureHasBeenSet(false),
    m_istioMetaDNSAutoAllocateHasBeenSet(false)
{
}

CoreInternalOutcome SmartDNSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IstioMetaDNSCapture") && !value["IstioMetaDNSCapture"].IsNull())
    {
        if (!value["IstioMetaDNSCapture"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDNSConfig.IstioMetaDNSCapture` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_istioMetaDNSCapture = value["IstioMetaDNSCapture"].GetBool();
        m_istioMetaDNSCaptureHasBeenSet = true;
    }

    if (value.HasMember("IstioMetaDNSAutoAllocate") && !value["IstioMetaDNSAutoAllocate"].IsNull())
    {
        if (!value["IstioMetaDNSAutoAllocate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDNSConfig.IstioMetaDNSAutoAllocate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_istioMetaDNSAutoAllocate = value["IstioMetaDNSAutoAllocate"].GetBool();
        m_istioMetaDNSAutoAllocateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartDNSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_istioMetaDNSCaptureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMetaDNSCapture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_istioMetaDNSCapture, allocator);
    }

    if (m_istioMetaDNSAutoAllocateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMetaDNSAutoAllocate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_istioMetaDNSAutoAllocate, allocator);
    }

}


bool SmartDNSConfig::GetIstioMetaDNSCapture() const
{
    return m_istioMetaDNSCapture;
}

void SmartDNSConfig::SetIstioMetaDNSCapture(const bool& _istioMetaDNSCapture)
{
    m_istioMetaDNSCapture = _istioMetaDNSCapture;
    m_istioMetaDNSCaptureHasBeenSet = true;
}

bool SmartDNSConfig::IstioMetaDNSCaptureHasBeenSet() const
{
    return m_istioMetaDNSCaptureHasBeenSet;
}

bool SmartDNSConfig::GetIstioMetaDNSAutoAllocate() const
{
    return m_istioMetaDNSAutoAllocate;
}

void SmartDNSConfig::SetIstioMetaDNSAutoAllocate(const bool& _istioMetaDNSAutoAllocate)
{
    m_istioMetaDNSAutoAllocate = _istioMetaDNSAutoAllocate;
    m_istioMetaDNSAutoAllocateHasBeenSet = true;
}

bool SmartDNSConfig::IstioMetaDNSAutoAllocateHasBeenSet() const
{
    return m_istioMetaDNSAutoAllocateHasBeenSet;
}

