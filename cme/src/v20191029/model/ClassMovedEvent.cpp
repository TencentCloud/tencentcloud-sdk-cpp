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

#include <tencentcloud/cme/v20191029/model/ClassMovedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ClassMovedEvent::ClassMovedEvent() :
    m_sourceOwnerHasBeenSet(false),
    m_sourceClassPathSetHasBeenSet(false),
    m_destinationOwnerHasBeenSet(false),
    m_destinationClassPathHasBeenSet(false)
{
}

CoreInternalOutcome ClassMovedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceOwner") && !value["SourceOwner"].IsNull())
    {
        if (!value["SourceOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClassMovedEvent.SourceOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceOwner.Deserialize(value["SourceOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceOwnerHasBeenSet = true;
    }

    if (value.HasMember("SourceClassPathSet") && !value["SourceClassPathSet"].IsNull())
    {
        if (!value["SourceClassPathSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClassMovedEvent.SourceClassPathSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceClassPathSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceClassPathSet.push_back((*itr).GetString());
        }
        m_sourceClassPathSetHasBeenSet = true;
    }

    if (value.HasMember("DestinationOwner") && !value["DestinationOwner"].IsNull())
    {
        if (!value["DestinationOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClassMovedEvent.DestinationOwner` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ClassMovedEvent.DestinationClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationClassPath = string(value["DestinationClassPath"].GetString());
        m_destinationClassPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassMovedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceClassPathSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClassPathSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceClassPathSet.begin(); itr != m_sourceClassPathSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


Entity ClassMovedEvent::GetSourceOwner() const
{
    return m_sourceOwner;
}

void ClassMovedEvent::SetSourceOwner(const Entity& _sourceOwner)
{
    m_sourceOwner = _sourceOwner;
    m_sourceOwnerHasBeenSet = true;
}

bool ClassMovedEvent::SourceOwnerHasBeenSet() const
{
    return m_sourceOwnerHasBeenSet;
}

vector<string> ClassMovedEvent::GetSourceClassPathSet() const
{
    return m_sourceClassPathSet;
}

void ClassMovedEvent::SetSourceClassPathSet(const vector<string>& _sourceClassPathSet)
{
    m_sourceClassPathSet = _sourceClassPathSet;
    m_sourceClassPathSetHasBeenSet = true;
}

bool ClassMovedEvent::SourceClassPathSetHasBeenSet() const
{
    return m_sourceClassPathSetHasBeenSet;
}

Entity ClassMovedEvent::GetDestinationOwner() const
{
    return m_destinationOwner;
}

void ClassMovedEvent::SetDestinationOwner(const Entity& _destinationOwner)
{
    m_destinationOwner = _destinationOwner;
    m_destinationOwnerHasBeenSet = true;
}

bool ClassMovedEvent::DestinationOwnerHasBeenSet() const
{
    return m_destinationOwnerHasBeenSet;
}

string ClassMovedEvent::GetDestinationClassPath() const
{
    return m_destinationClassPath;
}

void ClassMovedEvent::SetDestinationClassPath(const string& _destinationClassPath)
{
    m_destinationClassPath = _destinationClassPath;
    m_destinationClassPathHasBeenSet = true;
}

bool ClassMovedEvent::DestinationClassPathHasBeenSet() const
{
    return m_destinationClassPathHasBeenSet;
}

