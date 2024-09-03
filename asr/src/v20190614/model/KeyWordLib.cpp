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

#include <tencentcloud/asr/v20190614/model/KeyWordLib.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

KeyWordLib::KeyWordLib() :
    m_keyWordLibIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_keyWordListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome KeyWordLib::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyWordLibId") && !value["KeyWordLibId"].IsNull())
    {
        if (!value["KeyWordLibId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordLib.KeyWordLibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWordLibId = string(value["KeyWordLibId"].GetString());
        m_keyWordLibIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordLib.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("KeyWordList") && !value["KeyWordList"].IsNull())
    {
        if (!value["KeyWordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyWordLib.KeyWordList` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyWordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyWordList.push_back((*itr).GetString());
        }
        m_keyWordListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordLib.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordLib.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyWordLib::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyWordLibIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWordLibId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyWordList.begin(); itr != m_keyWordList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string KeyWordLib::GetKeyWordLibId() const
{
    return m_keyWordLibId;
}

void KeyWordLib::SetKeyWordLibId(const string& _keyWordLibId)
{
    m_keyWordLibId = _keyWordLibId;
    m_keyWordLibIdHasBeenSet = true;
}

bool KeyWordLib::KeyWordLibIdHasBeenSet() const
{
    return m_keyWordLibIdHasBeenSet;
}

string KeyWordLib::GetName() const
{
    return m_name;
}

void KeyWordLib::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KeyWordLib::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> KeyWordLib::GetKeyWordList() const
{
    return m_keyWordList;
}

void KeyWordLib::SetKeyWordList(const vector<string>& _keyWordList)
{
    m_keyWordList = _keyWordList;
    m_keyWordListHasBeenSet = true;
}

bool KeyWordLib::KeyWordListHasBeenSet() const
{
    return m_keyWordListHasBeenSet;
}

string KeyWordLib::GetCreateTime() const
{
    return m_createTime;
}

void KeyWordLib::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KeyWordLib::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KeyWordLib::GetUpdateTime() const
{
    return m_updateTime;
}

void KeyWordLib::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool KeyWordLib::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

