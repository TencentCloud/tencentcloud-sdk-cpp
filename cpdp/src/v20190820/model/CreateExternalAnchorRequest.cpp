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

#include <tencentcloud/cpdp/v20190820/model/CreateExternalAnchorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateExternalAnchorRequest::CreateExternalAnchorRequest() :
    m_uidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_idCardFrontHasBeenSet(false),
    m_idCardReverseHasBeenSet(false),
    m_agentIdHasBeenSet(false)
{
}

string CreateExternalAnchorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardFrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardFront";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardFront.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardReverseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardReverse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardReverse.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateExternalAnchorRequest::GetUid() const
{
    return m_uid;
}

void CreateExternalAnchorRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool CreateExternalAnchorRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string CreateExternalAnchorRequest::GetName() const
{
    return m_name;
}

void CreateExternalAnchorRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateExternalAnchorRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateExternalAnchorRequest::GetIdNo() const
{
    return m_idNo;
}

void CreateExternalAnchorRequest::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool CreateExternalAnchorRequest::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string CreateExternalAnchorRequest::GetIdCardFront() const
{
    return m_idCardFront;
}

void CreateExternalAnchorRequest::SetIdCardFront(const string& _idCardFront)
{
    m_idCardFront = _idCardFront;
    m_idCardFrontHasBeenSet = true;
}

bool CreateExternalAnchorRequest::IdCardFrontHasBeenSet() const
{
    return m_idCardFrontHasBeenSet;
}

string CreateExternalAnchorRequest::GetIdCardReverse() const
{
    return m_idCardReverse;
}

void CreateExternalAnchorRequest::SetIdCardReverse(const string& _idCardReverse)
{
    m_idCardReverse = _idCardReverse;
    m_idCardReverseHasBeenSet = true;
}

bool CreateExternalAnchorRequest::IdCardReverseHasBeenSet() const
{
    return m_idCardReverseHasBeenSet;
}

string CreateExternalAnchorRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateExternalAnchorRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateExternalAnchorRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}


