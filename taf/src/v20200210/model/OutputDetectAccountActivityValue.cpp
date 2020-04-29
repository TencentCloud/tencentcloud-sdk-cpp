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

#include <tencentcloud/taf/v20200210/model/OutputDetectAccountActivityValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

OutputDetectAccountActivityValue::OutputDetectAccountActivityValue() :
    m_uidHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome OutputDetectAccountActivityValue::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputDetectAccountActivityValue.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputDetectAccountActivityValue.PostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetInt64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputDetectAccountActivityValue.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputDetectAccountActivityValue.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsArray())
            return CoreInternalOutcome(Error("response `OutputDetectAccountActivityValue.Type` is not array type"));

        const Value &tmpValue = value["Type"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_type.push_back((*itr).GetInt64());
        }
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDetectAccountActivityValue::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

    if (m_userIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

}


string OutputDetectAccountActivityValue::GetUid() const
{
    return m_uid;
}

void OutputDetectAccountActivityValue::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool OutputDetectAccountActivityValue::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t OutputDetectAccountActivityValue::GetPostTime() const
{
    return m_postTime;
}

void OutputDetectAccountActivityValue::SetPostTime(const int64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool OutputDetectAccountActivityValue::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string OutputDetectAccountActivityValue::GetUserIp() const
{
    return m_userIp;
}

void OutputDetectAccountActivityValue::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool OutputDetectAccountActivityValue::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

int64_t OutputDetectAccountActivityValue::GetLevel() const
{
    return m_level;
}

void OutputDetectAccountActivityValue::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool OutputDetectAccountActivityValue::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<int64_t> OutputDetectAccountActivityValue::GetType() const
{
    return m_type;
}

void OutputDetectAccountActivityValue::SetType(const vector<int64_t>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OutputDetectAccountActivityValue::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

