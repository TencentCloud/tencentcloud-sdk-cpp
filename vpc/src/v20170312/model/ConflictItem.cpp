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

#include <tencentcloud/vpc/v20170312/model/ConflictItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ConflictItem::ConflictItem() :
    m_confilctIdHasBeenSet(false),
    m_destinationItemHasBeenSet(false),
    m_conflictIdHasBeenSet(false)
{
}

CoreInternalOutcome ConflictItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfilctId") && !value["ConfilctId"].IsNull())
    {
        if (!value["ConfilctId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictItem.ConfilctId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confilctId = string(value["ConfilctId"].GetString());
        m_confilctIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationItem") && !value["DestinationItem"].IsNull())
    {
        if (!value["DestinationItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictItem.DestinationItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationItem = string(value["DestinationItem"].GetString());
        m_destinationItemHasBeenSet = true;
    }

    if (value.HasMember("ConflictId") && !value["ConflictId"].IsNull())
    {
        if (!value["ConflictId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictItem.ConflictId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictId = string(value["ConflictId"].GetString());
        m_conflictIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConflictItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confilctIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfilctId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confilctId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationItem.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictId.c_str(), allocator).Move(), allocator);
    }

}


string ConflictItem::GetConfilctId() const
{
    return m_confilctId;
}

void ConflictItem::SetConfilctId(const string& _confilctId)
{
    m_confilctId = _confilctId;
    m_confilctIdHasBeenSet = true;
}

bool ConflictItem::ConfilctIdHasBeenSet() const
{
    return m_confilctIdHasBeenSet;
}

string ConflictItem::GetDestinationItem() const
{
    return m_destinationItem;
}

void ConflictItem::SetDestinationItem(const string& _destinationItem)
{
    m_destinationItem = _destinationItem;
    m_destinationItemHasBeenSet = true;
}

bool ConflictItem::DestinationItemHasBeenSet() const
{
    return m_destinationItemHasBeenSet;
}

string ConflictItem::GetConflictId() const
{
    return m_conflictId;
}

void ConflictItem::SetConflictId(const string& _conflictId)
{
    m_conflictId = _conflictId;
    m_conflictIdHasBeenSet = true;
}

bool ConflictItem::ConflictIdHasBeenSet() const
{
    return m_conflictIdHasBeenSet;
}

