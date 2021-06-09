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

#include <tencentcloud/live/v20180801/model/CreatePullStreamConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreatePullStreamConfigRequest::CreatePullStreamConfigRequest() :
    m_fromUrlHasBeenSet(false),
    m_toUrlHasBeenSet(false),
    m_areaIdHasBeenSet(false),
    m_ispIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string CreatePullStreamConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_toUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_areaId, allocator);
    }

    if (m_ispIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ispId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePullStreamConfigRequest::GetFromUrl() const
{
    return m_fromUrl;
}

void CreatePullStreamConfigRequest::SetFromUrl(const string& _fromUrl)
{
    m_fromUrl = _fromUrl;
    m_fromUrlHasBeenSet = true;
}

bool CreatePullStreamConfigRequest::FromUrlHasBeenSet() const
{
    return m_fromUrlHasBeenSet;
}

string CreatePullStreamConfigRequest::GetToUrl() const
{
    return m_toUrl;
}

void CreatePullStreamConfigRequest::SetToUrl(const string& _toUrl)
{
    m_toUrl = _toUrl;
    m_toUrlHasBeenSet = true;
}

bool CreatePullStreamConfigRequest::ToUrlHasBeenSet() const
{
    return m_toUrlHasBeenSet;
}

int64_t CreatePullStreamConfigRequest::GetAreaId() const
{
    return m_areaId;
}

void CreatePullStreamConfigRequest::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool CreatePullStreamConfigRequest::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

int64_t CreatePullStreamConfigRequest::GetIspId() const
{
    return m_ispId;
}

void CreatePullStreamConfigRequest::SetIspId(const int64_t& _ispId)
{
    m_ispId = _ispId;
    m_ispIdHasBeenSet = true;
}

bool CreatePullStreamConfigRequest::IspIdHasBeenSet() const
{
    return m_ispIdHasBeenSet;
}

string CreatePullStreamConfigRequest::GetStartTime() const
{
    return m_startTime;
}

void CreatePullStreamConfigRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreatePullStreamConfigRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreatePullStreamConfigRequest::GetEndTime() const
{
    return m_endTime;
}

void CreatePullStreamConfigRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreatePullStreamConfigRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


