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

#include <tencentcloud/lke/v20231130/model/FileCollection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

FileCollection::FileCollection() :
    m_maxFileCountHasBeenSet(false),
    m_supportedFileTypesHasBeenSet(false)
{
}

CoreInternalOutcome FileCollection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxFileCount") && !value["MaxFileCount"].IsNull())
    {
        if (!value["MaxFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileCollection.MaxFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFileCount = value["MaxFileCount"].GetInt64();
        m_maxFileCountHasBeenSet = true;
    }

    if (value.HasMember("SupportedFileTypes") && !value["SupportedFileTypes"].IsNull())
    {
        if (!value["SupportedFileTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileCollection.SupportedFileTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedFileTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedFileTypes.push_back((*itr).GetString());
        }
        m_supportedFileTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileCollection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFileCount, allocator);
    }

    if (m_supportedFileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedFileTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedFileTypes.begin(); itr != m_supportedFileTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t FileCollection::GetMaxFileCount() const
{
    return m_maxFileCount;
}

void FileCollection::SetMaxFileCount(const int64_t& _maxFileCount)
{
    m_maxFileCount = _maxFileCount;
    m_maxFileCountHasBeenSet = true;
}

bool FileCollection::MaxFileCountHasBeenSet() const
{
    return m_maxFileCountHasBeenSet;
}

vector<string> FileCollection::GetSupportedFileTypes() const
{
    return m_supportedFileTypes;
}

void FileCollection::SetSupportedFileTypes(const vector<string>& _supportedFileTypes)
{
    m_supportedFileTypes = _supportedFileTypes;
    m_supportedFileTypesHasBeenSet = true;
}

bool FileCollection::SupportedFileTypesHasBeenSet() const
{
    return m_supportedFileTypesHasBeenSet;
}

