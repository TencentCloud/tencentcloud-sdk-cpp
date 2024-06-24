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

#include <tencentcloud/asr/v20190614/model/VoicePrintDeleteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintDeleteRequest::VoicePrintDeleteRequest() :
    m_voicePrintIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_delModHasBeenSet(false)
{
}

string VoicePrintDeleteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_delModHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelMod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delMod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VoicePrintDeleteRequest::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void VoicePrintDeleteRequest::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool VoicePrintDeleteRequest::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

string VoicePrintDeleteRequest::GetGroupId() const
{
    return m_groupId;
}

void VoicePrintDeleteRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VoicePrintDeleteRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t VoicePrintDeleteRequest::GetDelMod() const
{
    return m_delMod;
}

void VoicePrintDeleteRequest::SetDelMod(const int64_t& _delMod)
{
    m_delMod = _delMod;
    m_delModHasBeenSet = true;
}

bool VoicePrintDeleteRequest::DelModHasBeenSet() const
{
    return m_delModHasBeenSet;
}


