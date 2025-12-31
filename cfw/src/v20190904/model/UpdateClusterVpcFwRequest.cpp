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

#include <tencentcloud/cfw/v20190904/model/UpdateClusterVpcFwRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

UpdateClusterVpcFwRequest::UpdateClusterVpcFwRequest() :
    m_ccnSwitchHasBeenSet(false)
{
}

string UpdateClusterVpcFwRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ccnSwitch.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


CcnSwitchInfo UpdateClusterVpcFwRequest::GetCcnSwitch() const
{
    return m_ccnSwitch;
}

void UpdateClusterVpcFwRequest::SetCcnSwitch(const CcnSwitchInfo& _ccnSwitch)
{
    m_ccnSwitch = _ccnSwitch;
    m_ccnSwitchHasBeenSet = true;
}

bool UpdateClusterVpcFwRequest::CcnSwitchHasBeenSet() const
{
    return m_ccnSwitchHasBeenSet;
}


