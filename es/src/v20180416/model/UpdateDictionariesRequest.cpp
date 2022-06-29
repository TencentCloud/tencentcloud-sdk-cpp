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

#include <tencentcloud/es/v20180416/model/UpdateDictionariesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateDictionariesRequest::UpdateDictionariesRequest() :
    m_instanceIdHasBeenSet(false),
    m_ikMainDictsHasBeenSet(false),
    m_ikStopwordsHasBeenSet(false),
    m_synonymHasBeenSet(false),
    m_qQDictHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_forceRestartHasBeenSet(false)
{
}

string UpdateDictionariesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ikMainDictsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IkMainDicts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ikMainDicts.begin(); itr != m_ikMainDicts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ikStopwordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IkStopwords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ikStopwords.begin(); itr != m_ikStopwords.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_synonymHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Synonym";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_synonym.begin(); itr != m_synonym.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_qQDictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQDict";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qQDict.begin(); itr != m_qQDict.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDictionariesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateDictionariesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateDictionariesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> UpdateDictionariesRequest::GetIkMainDicts() const
{
    return m_ikMainDicts;
}

void UpdateDictionariesRequest::SetIkMainDicts(const vector<string>& _ikMainDicts)
{
    m_ikMainDicts = _ikMainDicts;
    m_ikMainDictsHasBeenSet = true;
}

bool UpdateDictionariesRequest::IkMainDictsHasBeenSet() const
{
    return m_ikMainDictsHasBeenSet;
}

vector<string> UpdateDictionariesRequest::GetIkStopwords() const
{
    return m_ikStopwords;
}

void UpdateDictionariesRequest::SetIkStopwords(const vector<string>& _ikStopwords)
{
    m_ikStopwords = _ikStopwords;
    m_ikStopwordsHasBeenSet = true;
}

bool UpdateDictionariesRequest::IkStopwordsHasBeenSet() const
{
    return m_ikStopwordsHasBeenSet;
}

vector<string> UpdateDictionariesRequest::GetSynonym() const
{
    return m_synonym;
}

void UpdateDictionariesRequest::SetSynonym(const vector<string>& _synonym)
{
    m_synonym = _synonym;
    m_synonymHasBeenSet = true;
}

bool UpdateDictionariesRequest::SynonymHasBeenSet() const
{
    return m_synonymHasBeenSet;
}

vector<string> UpdateDictionariesRequest::GetQQDict() const
{
    return m_qQDict;
}

void UpdateDictionariesRequest::SetQQDict(const vector<string>& _qQDict)
{
    m_qQDict = _qQDict;
    m_qQDictHasBeenSet = true;
}

bool UpdateDictionariesRequest::QQDictHasBeenSet() const
{
    return m_qQDictHasBeenSet;
}

int64_t UpdateDictionariesRequest::GetUpdateType() const
{
    return m_updateType;
}

void UpdateDictionariesRequest::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool UpdateDictionariesRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

bool UpdateDictionariesRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void UpdateDictionariesRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool UpdateDictionariesRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}


