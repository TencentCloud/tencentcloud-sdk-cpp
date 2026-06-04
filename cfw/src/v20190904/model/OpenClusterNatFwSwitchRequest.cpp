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

#include <tencentcloud/cfw/v20190904/model/OpenClusterNatFwSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OpenClusterNatFwSwitchRequest::OpenClusterNatFwSwitchRequest() :
    m_natCcnSwitchHasBeenSet(false)
{
}

string OpenClusterNatFwSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natCcnSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatCcnSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_natCcnSwitch.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


NatCcnSwitchConfig OpenClusterNatFwSwitchRequest::GetNatCcnSwitch() const
{
    return m_natCcnSwitch;
}

void OpenClusterNatFwSwitchRequest::SetNatCcnSwitch(const NatCcnSwitchConfig& _natCcnSwitch)
{
    m_natCcnSwitch = _natCcnSwitch;
    m_natCcnSwitchHasBeenSet = true;
}

bool OpenClusterNatFwSwitchRequest::NatCcnSwitchHasBeenSet() const
{
    return m_natCcnSwitchHasBeenSet;
}


