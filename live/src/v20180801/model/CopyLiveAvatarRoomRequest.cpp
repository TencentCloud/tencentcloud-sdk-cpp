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

#include <tencentcloud/live/v20180801/model/CopyLiveAvatarRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CopyLiveAvatarRoomRequest::CopyLiveAvatarRoomRequest() :
    m_nameHasBeenSet(false),
    m_sourceRoomIdHasBeenSet(false),
    m_isCopyScriptHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CopyLiveAvatarRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceRoomId.c_str(), allocator).Move(), allocator);
    }

    if (m_isCopyScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCopyScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCopyScript, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyLiveAvatarRoomRequest::GetName() const
{
    return m_name;
}

void CopyLiveAvatarRoomRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CopyLiveAvatarRoomRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CopyLiveAvatarRoomRequest::GetSourceRoomId() const
{
    return m_sourceRoomId;
}

void CopyLiveAvatarRoomRequest::SetSourceRoomId(const string& _sourceRoomId)
{
    m_sourceRoomId = _sourceRoomId;
    m_sourceRoomIdHasBeenSet = true;
}

bool CopyLiveAvatarRoomRequest::SourceRoomIdHasBeenSet() const
{
    return m_sourceRoomIdHasBeenSet;
}

bool CopyLiveAvatarRoomRequest::GetIsCopyScript() const
{
    return m_isCopyScript;
}

void CopyLiveAvatarRoomRequest::SetIsCopyScript(const bool& _isCopyScript)
{
    m_isCopyScript = _isCopyScript;
    m_isCopyScriptHasBeenSet = true;
}

bool CopyLiveAvatarRoomRequest::IsCopyScriptHasBeenSet() const
{
    return m_isCopyScriptHasBeenSet;
}

string CopyLiveAvatarRoomRequest::GetOperator() const
{
    return m_operator;
}

void CopyLiveAvatarRoomRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CopyLiveAvatarRoomRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


