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

#include <tencentcloud/adp/v20260520/model/AppSharedKbInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppSharedKbInfo::AppSharedKbInfo() :
    m_kbIdHasBeenSet(false),
    m_kbNameHasBeenSet(false)
{
}

CoreInternalOutcome AppSharedKbInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSharedKbInfo.KbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = string(value["KbId"].GetString());
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("KbName") && !value["KbName"].IsNull())
    {
        if (!value["KbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSharedKbInfo.KbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbName = string(value["KbName"].GetString());
        m_kbNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppSharedKbInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_kbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbName.c_str(), allocator).Move(), allocator);
    }

}


string AppSharedKbInfo::GetKbId() const
{
    return m_kbId;
}

void AppSharedKbInfo::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool AppSharedKbInfo::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string AppSharedKbInfo::GetKbName() const
{
    return m_kbName;
}

void AppSharedKbInfo::SetKbName(const string& _kbName)
{
    m_kbName = _kbName;
    m_kbNameHasBeenSet = true;
}

bool AppSharedKbInfo::KbNameHasBeenSet() const
{
    return m_kbNameHasBeenSet;
}

