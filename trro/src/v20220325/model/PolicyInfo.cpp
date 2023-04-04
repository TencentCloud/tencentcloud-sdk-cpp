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

#include <tencentcloud/trro/v20220325/model/PolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

PolicyInfo::PolicyInfo() :
    m_remoteDeviceIdHasBeenSet(false),
    m_fieldDeviceIdsHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome PolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RemoteDeviceId") && !value["RemoteDeviceId"].IsNull())
    {
        if (!value["RemoteDeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyInfo.RemoteDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDeviceId = string(value["RemoteDeviceId"].GetString());
        m_remoteDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("FieldDeviceIds") && !value["FieldDeviceIds"].IsNull())
    {
        if (!value["FieldDeviceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyInfo.FieldDeviceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldDeviceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldDeviceIds.push_back((*itr).GetString());
        }
        m_fieldDeviceIdsHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remoteDeviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteDeviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldDeviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDeviceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldDeviceIds.begin(); itr != m_fieldDeviceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string PolicyInfo::GetRemoteDeviceId() const
{
    return m_remoteDeviceId;
}

void PolicyInfo::SetRemoteDeviceId(const string& _remoteDeviceId)
{
    m_remoteDeviceId = _remoteDeviceId;
    m_remoteDeviceIdHasBeenSet = true;
}

bool PolicyInfo::RemoteDeviceIdHasBeenSet() const
{
    return m_remoteDeviceIdHasBeenSet;
}

vector<string> PolicyInfo::GetFieldDeviceIds() const
{
    return m_fieldDeviceIds;
}

void PolicyInfo::SetFieldDeviceIds(const vector<string>& _fieldDeviceIds)
{
    m_fieldDeviceIds = _fieldDeviceIds;
    m_fieldDeviceIdsHasBeenSet = true;
}

bool PolicyInfo::FieldDeviceIdsHasBeenSet() const
{
    return m_fieldDeviceIdsHasBeenSet;
}

string PolicyInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void PolicyInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool PolicyInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

