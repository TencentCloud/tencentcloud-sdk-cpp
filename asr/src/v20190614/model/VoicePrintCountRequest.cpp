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

#include <tencentcloud/asr/v20190614/model/VoicePrintCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintCountRequest::VoicePrintCountRequest() :
    m_groupIdHasBeenSet(false),
    m_countModHasBeenSet(false)
{
}

string VoicePrintCountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_countModHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountMod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_countMod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VoicePrintCountRequest::GetGroupId() const
{
    return m_groupId;
}

void VoicePrintCountRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VoicePrintCountRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t VoicePrintCountRequest::GetCountMod() const
{
    return m_countMod;
}

void VoicePrintCountRequest::SetCountMod(const int64_t& _countMod)
{
    m_countMod = _countMod;
    m_countModHasBeenSet = true;
}

bool VoicePrintCountRequest::CountModHasBeenSet() const
{
    return m_countModHasBeenSet;
}


