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

#include <tencentcloud/ba/v20200720/model/SyncIcpOrderWebInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ba::V20200720::Model;
using namespace std;

SyncIcpOrderWebInfoRequest::SyncIcpOrderWebInfoRequest() :
    m_icpOrderIdHasBeenSet(false),
    m_sourceWebIdHasBeenSet(false),
    m_targetWebIdsHasBeenSet(false),
    m_syncFieldsHasBeenSet(false),
    m_checkSamePersonHasBeenSet(false)
{
}

string SyncIcpOrderWebInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_icpOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IcpOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_icpOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceWebIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceWebId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceWebId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetWebIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetWebIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetWebIds.begin(); itr != m_targetWebIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_syncFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_syncFields.begin(); itr != m_syncFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_checkSamePersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckSamePerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkSamePerson, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SyncIcpOrderWebInfoRequest::GetIcpOrderId() const
{
    return m_icpOrderId;
}

void SyncIcpOrderWebInfoRequest::SetIcpOrderId(const string& _icpOrderId)
{
    m_icpOrderId = _icpOrderId;
    m_icpOrderIdHasBeenSet = true;
}

bool SyncIcpOrderWebInfoRequest::IcpOrderIdHasBeenSet() const
{
    return m_icpOrderIdHasBeenSet;
}

string SyncIcpOrderWebInfoRequest::GetSourceWebId() const
{
    return m_sourceWebId;
}

void SyncIcpOrderWebInfoRequest::SetSourceWebId(const string& _sourceWebId)
{
    m_sourceWebId = _sourceWebId;
    m_sourceWebIdHasBeenSet = true;
}

bool SyncIcpOrderWebInfoRequest::SourceWebIdHasBeenSet() const
{
    return m_sourceWebIdHasBeenSet;
}

vector<string> SyncIcpOrderWebInfoRequest::GetTargetWebIds() const
{
    return m_targetWebIds;
}

void SyncIcpOrderWebInfoRequest::SetTargetWebIds(const vector<string>& _targetWebIds)
{
    m_targetWebIds = _targetWebIds;
    m_targetWebIdsHasBeenSet = true;
}

bool SyncIcpOrderWebInfoRequest::TargetWebIdsHasBeenSet() const
{
    return m_targetWebIdsHasBeenSet;
}

vector<string> SyncIcpOrderWebInfoRequest::GetSyncFields() const
{
    return m_syncFields;
}

void SyncIcpOrderWebInfoRequest::SetSyncFields(const vector<string>& _syncFields)
{
    m_syncFields = _syncFields;
    m_syncFieldsHasBeenSet = true;
}

bool SyncIcpOrderWebInfoRequest::SyncFieldsHasBeenSet() const
{
    return m_syncFieldsHasBeenSet;
}

bool SyncIcpOrderWebInfoRequest::GetCheckSamePerson() const
{
    return m_checkSamePerson;
}

void SyncIcpOrderWebInfoRequest::SetCheckSamePerson(const bool& _checkSamePerson)
{
    m_checkSamePerson = _checkSamePerson;
    m_checkSamePersonHasBeenSet = true;
}

bool SyncIcpOrderWebInfoRequest::CheckSamePersonHasBeenSet() const
{
    return m_checkSamePersonHasBeenSet;
}


