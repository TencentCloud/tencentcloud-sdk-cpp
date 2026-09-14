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

#include <tencentcloud/adp/v20260520/model/KnowledgeSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KnowledgeSource::KnowledgeSource() :
    m_isBigDataHasBeenSet(false),
    m_isSharedHasBeenSet(false),
    m_kbNameHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsBigData") && !value["IsBigData"].IsNull())
    {
        if (!value["IsBigData"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSource.IsBigData` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBigData = value["IsBigData"].GetBool();
        m_isBigDataHasBeenSet = true;
    }

    if (value.HasMember("IsShared") && !value["IsShared"].IsNull())
    {
        if (!value["IsShared"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSource.IsShared` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShared = value["IsShared"].GetBool();
        m_isSharedHasBeenSet = true;
    }

    if (value.HasMember("KbName") && !value["KbName"].IsNull())
    {
        if (!value["KbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSource.KbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbName = string(value["KbName"].GetString());
        m_kbNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isBigDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBigData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBigData, allocator);
    }

    if (m_isSharedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShared";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShared, allocator);
    }

    if (m_kbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbName.c_str(), allocator).Move(), allocator);
    }

}


bool KnowledgeSource::GetIsBigData() const
{
    return m_isBigData;
}

void KnowledgeSource::SetIsBigData(const bool& _isBigData)
{
    m_isBigData = _isBigData;
    m_isBigDataHasBeenSet = true;
}

bool KnowledgeSource::IsBigDataHasBeenSet() const
{
    return m_isBigDataHasBeenSet;
}

bool KnowledgeSource::GetIsShared() const
{
    return m_isShared;
}

void KnowledgeSource::SetIsShared(const bool& _isShared)
{
    m_isShared = _isShared;
    m_isSharedHasBeenSet = true;
}

bool KnowledgeSource::IsSharedHasBeenSet() const
{
    return m_isSharedHasBeenSet;
}

string KnowledgeSource::GetKbName() const
{
    return m_kbName;
}

void KnowledgeSource::SetKbName(const string& _kbName)
{
    m_kbName = _kbName;
    m_kbNameHasBeenSet = true;
}

bool KnowledgeSource::KbNameHasBeenSet() const
{
    return m_kbNameHasBeenSet;
}

