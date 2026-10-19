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

#include <tencentcloud/tcb/v20180608/model/LocalizedTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

LocalizedTemplate::LocalizedTemplate() :
    m_zhCNHasBeenSet(false),
    m_enUSHasBeenSet(false),
    m_subjectZhCNHasBeenSet(false),
    m_subjectEnUSHasBeenSet(false),
    m_senderNameZhCNHasBeenSet(false),
    m_senderNameEnUSHasBeenSet(false)
{
}

CoreInternalOutcome LocalizedTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZhCN") && !value["ZhCN"].IsNull())
    {
        if (!value["ZhCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.ZhCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zhCN = string(value["ZhCN"].GetString());
        m_zhCNHasBeenSet = true;
    }

    if (value.HasMember("EnUS") && !value["EnUS"].IsNull())
    {
        if (!value["EnUS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.EnUS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enUS = string(value["EnUS"].GetString());
        m_enUSHasBeenSet = true;
    }

    if (value.HasMember("SubjectZhCN") && !value["SubjectZhCN"].IsNull())
    {
        if (!value["SubjectZhCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.SubjectZhCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectZhCN = string(value["SubjectZhCN"].GetString());
        m_subjectZhCNHasBeenSet = true;
    }

    if (value.HasMember("SubjectEnUS") && !value["SubjectEnUS"].IsNull())
    {
        if (!value["SubjectEnUS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.SubjectEnUS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectEnUS = string(value["SubjectEnUS"].GetString());
        m_subjectEnUSHasBeenSet = true;
    }

    if (value.HasMember("SenderNameZhCN") && !value["SenderNameZhCN"].IsNull())
    {
        if (!value["SenderNameZhCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.SenderNameZhCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_senderNameZhCN = string(value["SenderNameZhCN"].GetString());
        m_senderNameZhCNHasBeenSet = true;
    }

    if (value.HasMember("SenderNameEnUS") && !value["SenderNameEnUS"].IsNull())
    {
        if (!value["SenderNameEnUS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.SenderNameEnUS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_senderNameEnUS = string(value["SenderNameEnUS"].GetString());
        m_senderNameEnUSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalizedTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zhCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZhCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zhCN.c_str(), allocator).Move(), allocator);
    }

    if (m_enUSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnUS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enUS.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectZhCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectZhCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectZhCN.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectEnUSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectEnUS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectEnUS.c_str(), allocator).Move(), allocator);
    }

    if (m_senderNameZhCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderNameZhCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_senderNameZhCN.c_str(), allocator).Move(), allocator);
    }

    if (m_senderNameEnUSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderNameEnUS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_senderNameEnUS.c_str(), allocator).Move(), allocator);
    }

}


string LocalizedTemplate::GetZhCN() const
{
    return m_zhCN;
}

void LocalizedTemplate::SetZhCN(const string& _zhCN)
{
    m_zhCN = _zhCN;
    m_zhCNHasBeenSet = true;
}

bool LocalizedTemplate::ZhCNHasBeenSet() const
{
    return m_zhCNHasBeenSet;
}

string LocalizedTemplate::GetEnUS() const
{
    return m_enUS;
}

void LocalizedTemplate::SetEnUS(const string& _enUS)
{
    m_enUS = _enUS;
    m_enUSHasBeenSet = true;
}

bool LocalizedTemplate::EnUSHasBeenSet() const
{
    return m_enUSHasBeenSet;
}

string LocalizedTemplate::GetSubjectZhCN() const
{
    return m_subjectZhCN;
}

void LocalizedTemplate::SetSubjectZhCN(const string& _subjectZhCN)
{
    m_subjectZhCN = _subjectZhCN;
    m_subjectZhCNHasBeenSet = true;
}

bool LocalizedTemplate::SubjectZhCNHasBeenSet() const
{
    return m_subjectZhCNHasBeenSet;
}

string LocalizedTemplate::GetSubjectEnUS() const
{
    return m_subjectEnUS;
}

void LocalizedTemplate::SetSubjectEnUS(const string& _subjectEnUS)
{
    m_subjectEnUS = _subjectEnUS;
    m_subjectEnUSHasBeenSet = true;
}

bool LocalizedTemplate::SubjectEnUSHasBeenSet() const
{
    return m_subjectEnUSHasBeenSet;
}

string LocalizedTemplate::GetSenderNameZhCN() const
{
    return m_senderNameZhCN;
}

void LocalizedTemplate::SetSenderNameZhCN(const string& _senderNameZhCN)
{
    m_senderNameZhCN = _senderNameZhCN;
    m_senderNameZhCNHasBeenSet = true;
}

bool LocalizedTemplate::SenderNameZhCNHasBeenSet() const
{
    return m_senderNameZhCNHasBeenSet;
}

string LocalizedTemplate::GetSenderNameEnUS() const
{
    return m_senderNameEnUS;
}

void LocalizedTemplate::SetSenderNameEnUS(const string& _senderNameEnUS)
{
    m_senderNameEnUS = _senderNameEnUS;
    m_senderNameEnUSHasBeenSet = true;
}

bool LocalizedTemplate::SenderNameEnUSHasBeenSet() const
{
    return m_senderNameEnUSHasBeenSet;
}

