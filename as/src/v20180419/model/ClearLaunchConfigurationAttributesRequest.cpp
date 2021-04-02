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

#include <tencentcloud/as/v20180419/model/ClearLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ClearLaunchConfigurationAttributesRequest::ClearLaunchConfigurationAttributesRequest() :
    m_launchConfigurationIdHasBeenSet(false),
    m_clearDataDisksHasBeenSet(false)
{
}

string ClearLaunchConfigurationAttributesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchConfigurationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_clearDataDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClearDataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearDataDisks, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ClearLaunchConfigurationAttributesRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void ClearLaunchConfigurationAttributesRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

bool ClearLaunchConfigurationAttributesRequest::GetClearDataDisks() const
{
    return m_clearDataDisks;
}

void ClearLaunchConfigurationAttributesRequest::SetClearDataDisks(const bool& _clearDataDisks)
{
    m_clearDataDisks = _clearDataDisks;
    m_clearDataDisksHasBeenSet = true;
}

bool ClearLaunchConfigurationAttributesRequest::ClearDataDisksHasBeenSet() const
{
    return m_clearDataDisksHasBeenSet;
}


