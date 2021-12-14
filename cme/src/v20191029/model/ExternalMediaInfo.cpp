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

#include <tencentcloud/cme/v20191029/model/ExternalMediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ExternalMediaInfo::ExternalMediaInfo() :
    m_mediaKeyHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_storageIdHasBeenSet(false)
{
}

CoreInternalOutcome ExternalMediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaKey") && !value["MediaKey"].IsNull())
    {
        if (!value["MediaKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalMediaInfo.MediaKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaKey = string(value["MediaKey"].GetString());
        m_mediaKeyHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalMediaInfo.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalMediaInfo.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalMediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaKey.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

}


string ExternalMediaInfo::GetMediaKey() const
{
    return m_mediaKey;
}

void ExternalMediaInfo::SetMediaKey(const string& _mediaKey)
{
    m_mediaKey = _mediaKey;
    m_mediaKeyHasBeenSet = true;
}

bool ExternalMediaInfo::MediaKeyHasBeenSet() const
{
    return m_mediaKeyHasBeenSet;
}

int64_t ExternalMediaInfo::GetDefinition() const
{
    return m_definition;
}

void ExternalMediaInfo::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ExternalMediaInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ExternalMediaInfo::GetStorageId() const
{
    return m_storageId;
}

void ExternalMediaInfo::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool ExternalMediaInfo::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

