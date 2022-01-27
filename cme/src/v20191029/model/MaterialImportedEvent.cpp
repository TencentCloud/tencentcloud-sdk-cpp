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

#include <tencentcloud/cme/v20191029/model/MaterialImportedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialImportedEvent::MaterialImportedEvent() :
    m_mediaInfoSetHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_classPathHasBeenSet(false)
{
}

CoreInternalOutcome MaterialImportedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaInfoSet") && !value["MediaInfoSet"].IsNull())
    {
        if (!value["MediaInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialImportedEvent.MediaInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImportMediaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mediaInfoSet.push_back(item);
        }
        m_mediaInfoSetHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialImportedEvent.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialImportedEvent.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialImportedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mediaInfoSet.begin(); itr != m_mediaInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

}


vector<ImportMediaInfo> MaterialImportedEvent::GetMediaInfoSet() const
{
    return m_mediaInfoSet;
}

void MaterialImportedEvent::SetMediaInfoSet(const vector<ImportMediaInfo>& _mediaInfoSet)
{
    m_mediaInfoSet = _mediaInfoSet;
    m_mediaInfoSetHasBeenSet = true;
}

bool MaterialImportedEvent::MediaInfoSetHasBeenSet() const
{
    return m_mediaInfoSetHasBeenSet;
}

Entity MaterialImportedEvent::GetOwner() const
{
    return m_owner;
}

void MaterialImportedEvent::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool MaterialImportedEvent::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string MaterialImportedEvent::GetClassPath() const
{
    return m_classPath;
}

void MaterialImportedEvent::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool MaterialImportedEvent::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

