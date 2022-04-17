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

#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyWafAutoDenyStatusRequest::ModifyWafAutoDenyStatusRequest() :
    m_wafAutoDenyDetailsHasBeenSet(false)
{
}

string ModifyWafAutoDenyStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_wafAutoDenyDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafAutoDenyDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafAutoDenyDetails.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


AutoDenyDetail ModifyWafAutoDenyStatusRequest::GetWafAutoDenyDetails() const
{
    return m_wafAutoDenyDetails;
}

void ModifyWafAutoDenyStatusRequest::SetWafAutoDenyDetails(const AutoDenyDetail& _wafAutoDenyDetails)
{
    m_wafAutoDenyDetails = _wafAutoDenyDetails;
    m_wafAutoDenyDetailsHasBeenSet = true;
}

bool ModifyWafAutoDenyStatusRequest::WafAutoDenyDetailsHasBeenSet() const
{
    return m_wafAutoDenyDetailsHasBeenSet;
}


