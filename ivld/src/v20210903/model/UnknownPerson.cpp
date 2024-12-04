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

#include <tencentcloud/ivld/v20210903/model/UnknownPerson.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

UnknownPerson::UnknownPerson() :
    m_videoAppearSetHasBeenSet(false),
    m_putLibraryAllowedHasBeenSet(false),
    m_auditClassHasBeenSet(false)
{
}

CoreInternalOutcome UnknownPerson::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoAppearSet") && !value["VideoAppearSet"].IsNull())
    {
        if (!value["VideoAppearSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnknownPerson.VideoAppearSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoAppearSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoAppearInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoAppearSet.push_back(item);
        }
        m_videoAppearSetHasBeenSet = true;
    }

    if (value.HasMember("PutLibraryAllowed") && !value["PutLibraryAllowed"].IsNull())
    {
        if (!value["PutLibraryAllowed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UnknownPerson.PutLibraryAllowed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_putLibraryAllowed = value["PutLibraryAllowed"].GetBool();
        m_putLibraryAllowedHasBeenSet = true;
    }

    if (value.HasMember("AuditClass") && !value["AuditClass"].IsNull())
    {
        if (!value["AuditClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnknownPerson.AuditClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditClass = value["AuditClass"].GetInt64();
        m_auditClassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnknownPerson::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoAppearSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoAppearSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoAppearSet.begin(); itr != m_videoAppearSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_putLibraryAllowedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PutLibraryAllowed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_putLibraryAllowed, allocator);
    }

    if (m_auditClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditClass, allocator);
    }

}


vector<VideoAppearInfo> UnknownPerson::GetVideoAppearSet() const
{
    return m_videoAppearSet;
}

void UnknownPerson::SetVideoAppearSet(const vector<VideoAppearInfo>& _videoAppearSet)
{
    m_videoAppearSet = _videoAppearSet;
    m_videoAppearSetHasBeenSet = true;
}

bool UnknownPerson::VideoAppearSetHasBeenSet() const
{
    return m_videoAppearSetHasBeenSet;
}

bool UnknownPerson::GetPutLibraryAllowed() const
{
    return m_putLibraryAllowed;
}

void UnknownPerson::SetPutLibraryAllowed(const bool& _putLibraryAllowed)
{
    m_putLibraryAllowed = _putLibraryAllowed;
    m_putLibraryAllowedHasBeenSet = true;
}

bool UnknownPerson::PutLibraryAllowedHasBeenSet() const
{
    return m_putLibraryAllowedHasBeenSet;
}

int64_t UnknownPerson::GetAuditClass() const
{
    return m_auditClass;
}

void UnknownPerson::SetAuditClass(const int64_t& _auditClass)
{
    m_auditClass = _auditClass;
    m_auditClassHasBeenSet = true;
}

bool UnknownPerson::AuditClassHasBeenSet() const
{
    return m_auditClassHasBeenSet;
}

