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

#include <tencentcloud/vod/v20180717/model/SetDrmKeyProviderInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SetDrmKeyProviderInfoRequest::SetDrmKeyProviderInfoRequest() :
    m_sDMCInfoHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string SetDrmKeyProviderInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sDMCInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SDMCInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sDMCInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SDMCDrmKeyProviderInfo SetDrmKeyProviderInfoRequest::GetSDMCInfo() const
{
    return m_sDMCInfo;
}

void SetDrmKeyProviderInfoRequest::SetSDMCInfo(const SDMCDrmKeyProviderInfo& _sDMCInfo)
{
    m_sDMCInfo = _sDMCInfo;
    m_sDMCInfoHasBeenSet = true;
}

bool SetDrmKeyProviderInfoRequest::SDMCInfoHasBeenSet() const
{
    return m_sDMCInfoHasBeenSet;
}

uint64_t SetDrmKeyProviderInfoRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SetDrmKeyProviderInfoRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SetDrmKeyProviderInfoRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


