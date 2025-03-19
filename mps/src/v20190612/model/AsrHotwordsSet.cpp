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

#include <tencentcloud/mps/v20190612/model/AsrHotwordsSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AsrHotwordsSet::AsrHotwordsSet() :
    m_hotwordsIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_wordCountHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome AsrHotwordsSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HotwordsId") && !value["HotwordsId"].IsNull())
    {
        if (!value["HotwordsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.HotwordsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hotwordsId = string(value["HotwordsId"].GetString());
        m_hotwordsIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("WordCount") && !value["WordCount"].IsNull())
    {
        if (!value["WordCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.WordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wordCount = value["WordCount"].GetUint64();
        m_wordCountHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrHotwordsSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hotwordsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hotwordsId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_wordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordCount, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string AsrHotwordsSet::GetHotwordsId() const
{
    return m_hotwordsId;
}

void AsrHotwordsSet::SetHotwordsId(const string& _hotwordsId)
{
    m_hotwordsId = _hotwordsId;
    m_hotwordsIdHasBeenSet = true;
}

bool AsrHotwordsSet::HotwordsIdHasBeenSet() const
{
    return m_hotwordsIdHasBeenSet;
}

uint64_t AsrHotwordsSet::GetStatus() const
{
    return m_status;
}

void AsrHotwordsSet::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AsrHotwordsSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AsrHotwordsSet::GetName() const
{
    return m_name;
}

void AsrHotwordsSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AsrHotwordsSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AsrHotwordsSet::GetWordCount() const
{
    return m_wordCount;
}

void AsrHotwordsSet::SetWordCount(const uint64_t& _wordCount)
{
    m_wordCount = _wordCount;
    m_wordCountHasBeenSet = true;
}

bool AsrHotwordsSet::WordCountHasBeenSet() const
{
    return m_wordCountHasBeenSet;
}

string AsrHotwordsSet::GetFileName() const
{
    return m_fileName;
}

void AsrHotwordsSet::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AsrHotwordsSet::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AsrHotwordsSet::GetCreateTime() const
{
    return m_createTime;
}

void AsrHotwordsSet::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AsrHotwordsSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AsrHotwordsSet::GetUpdateTime() const
{
    return m_updateTime;
}

void AsrHotwordsSet::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AsrHotwordsSet::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t AsrHotwordsSet::GetType() const
{
    return m_type;
}

void AsrHotwordsSet::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AsrHotwordsSet::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

