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

#include <tencentcloud/cme/v20191029/model/MaterialMovedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialMovedEvent::MaterialMovedEvent() :
    m_materialIdSetHasBeenSet(false),
    m_sourceOwnerHasBeenSet(false),
    m_sourceClassPathHasBeenSet(false),
    m_destinationOwnerHasBeenSet(false),
    m_destinationClassPathHasBeenSet(false)
{
}

CoreInternalOutcome MaterialMovedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialIdSet") && !value["MaterialIdSet"].IsNull())
    {
        if (!value["MaterialIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialMovedEvent.MaterialIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MaterialIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_materialIdSet.push_back((*itr).GetString());
        }
        m_materialIdSetHasBeenSet = true;
    }

    if (value.HasMember("SourceOwner") && !value["SourceOwner"].IsNull())
    {
        if (!value["SourceOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialMovedEvent.SourceOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceOwner.Deserialize(value["SourceOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceOwnerHasBeenSet = true;
    }

    if (value.HasMember("SourceClassPath") && !value["SourceClassPath"].IsNull())
    {
        if (!value["SourceClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialMovedEvent.SourceClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceClassPath = string(value["SourceClassPath"].GetString());
        m_sourceClassPathHasBeenSet = true;
    }

    if (value.HasMember("DestinationOwner") && !value["DestinationOwner"].IsNull())
    {
        if (!value["DestinationOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialMovedEvent.DestinationOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destinationOwner.Deserialize(value["DestinationOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destinationOwnerHasBeenSet = true;
    }

    if (value.HasMember("DestinationClassPath") && !value["DestinationClassPath"].IsNull())
    {
        if (!value["DestinationClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialMovedEvent.DestinationClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationClassPath = string(value["DestinationClassPath"].GetString());
        m_destinationClassPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialMovedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_materialIdSet.begin(); itr != m_materialIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceClassPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceClassPath.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_destinationClassPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationClassPath.c_str(), allocator).Move(), allocator);
    }

}


vector<string> MaterialMovedEvent::GetMaterialIdSet() const
{
    return m_materialIdSet;
}

void MaterialMovedEvent::SetMaterialIdSet(const vector<string>& _materialIdSet)
{
    m_materialIdSet = _materialIdSet;
    m_materialIdSetHasBeenSet = true;
}

bool MaterialMovedEvent::MaterialIdSetHasBeenSet() const
{
    return m_materialIdSetHasBeenSet;
}

Entity MaterialMovedEvent::GetSourceOwner() const
{
    return m_sourceOwner;
}

void MaterialMovedEvent::SetSourceOwner(const Entity& _sourceOwner)
{
    m_sourceOwner = _sourceOwner;
    m_sourceOwnerHasBeenSet = true;
}

bool MaterialMovedEvent::SourceOwnerHasBeenSet() const
{
    return m_sourceOwnerHasBeenSet;
}

string MaterialMovedEvent::GetSourceClassPath() const
{
    return m_sourceClassPath;
}

void MaterialMovedEvent::SetSourceClassPath(const string& _sourceClassPath)
{
    m_sourceClassPath = _sourceClassPath;
    m_sourceClassPathHasBeenSet = true;
}

bool MaterialMovedEvent::SourceClassPathHasBeenSet() const
{
    return m_sourceClassPathHasBeenSet;
}

Entity MaterialMovedEvent::GetDestinationOwner() const
{
    return m_destinationOwner;
}

void MaterialMovedEvent::SetDestinationOwner(const Entity& _destinationOwner)
{
    m_destinationOwner = _destinationOwner;
    m_destinationOwnerHasBeenSet = true;
}

bool MaterialMovedEvent::DestinationOwnerHasBeenSet() const
{
    return m_destinationOwnerHasBeenSet;
}

string MaterialMovedEvent::GetDestinationClassPath() const
{
    return m_destinationClassPath;
}

void MaterialMovedEvent::SetDestinationClassPath(const string& _destinationClassPath)
{
    m_destinationClassPath = _destinationClassPath;
    m_destinationClassPathHasBeenSet = true;
}

bool MaterialMovedEvent::DestinationClassPathHasBeenSet() const
{
    return m_destinationClassPathHasBeenSet;
}

