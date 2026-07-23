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

#include <tencentcloud/cfw/v20190904/model/CheckClusterVpcFwPreAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CheckClusterVpcFwPreAccessRequest::CheckClusterVpcFwPreAccessRequest() :
    m_ccnSwitchHasBeenSet(false),
    m_checkModeHasBeenSet(false)
{
}

string CheckClusterVpcFwPreAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccnSwitch.begin(); itr != m_ccnSwitch.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_checkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<CcnSwitchInfo> CheckClusterVpcFwPreAccessRequest::GetCcnSwitch() const
{
    return m_ccnSwitch;
}

void CheckClusterVpcFwPreAccessRequest::SetCcnSwitch(const vector<CcnSwitchInfo>& _ccnSwitch)
{
    m_ccnSwitch = _ccnSwitch;
    m_ccnSwitchHasBeenSet = true;
}

bool CheckClusterVpcFwPreAccessRequest::CcnSwitchHasBeenSet() const
{
    return m_ccnSwitchHasBeenSet;
}

string CheckClusterVpcFwPreAccessRequest::GetCheckMode() const
{
    return m_checkMode;
}

void CheckClusterVpcFwPreAccessRequest::SetCheckMode(const string& _checkMode)
{
    m_checkMode = _checkMode;
    m_checkModeHasBeenSet = true;
}

bool CheckClusterVpcFwPreAccessRequest::CheckModeHasBeenSet() const
{
    return m_checkModeHasBeenSet;
}


