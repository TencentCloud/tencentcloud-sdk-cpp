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

#include <tencentcloud/tcb/v20180608/model/DescribeWxCloudBaseRunEnvsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeWxCloudBaseRunEnvsRequest::DescribeWxCloudBaseRunEnvsRequest() :
    m_wxAppIdHasBeenSet(false),
    m_allRegionsHasBeenSet(false)
{
}

string DescribeWxCloudBaseRunEnvsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_allRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allRegions, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWxCloudBaseRunEnvsRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void DescribeWxCloudBaseRunEnvsRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool DescribeWxCloudBaseRunEnvsRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

bool DescribeWxCloudBaseRunEnvsRequest::GetAllRegions() const
{
    return m_allRegions;
}

void DescribeWxCloudBaseRunEnvsRequest::SetAllRegions(const bool& _allRegions)
{
    m_allRegions = _allRegions;
    m_allRegionsHasBeenSet = true;
}

bool DescribeWxCloudBaseRunEnvsRequest::AllRegionsHasBeenSet() const
{
    return m_allRegionsHasBeenSet;
}


