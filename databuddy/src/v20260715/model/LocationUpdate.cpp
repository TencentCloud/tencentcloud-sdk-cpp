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

#include <tencentcloud/databuddy/v20260715/model/LocationUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

LocationUpdate::LocationUpdate() :
    m_updateTypeHasBeenSet(false),
    m_newCommentHasBeenSet(false),
    m_setPropertiesHasBeenSet(false),
    m_removePropertiesHasBeenSet(false),
    m_newNameHasBeenSet(false)
{
}

CoreInternalOutcome LocationUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpdateType") && !value["UpdateType"].IsNull())
    {
        if (!value["UpdateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationUpdate.UpdateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateType = string(value["UpdateType"].GetString());
        m_updateTypeHasBeenSet = true;
    }

    if (value.HasMember("NewComment") && !value["NewComment"].IsNull())
    {
        if (!value["NewComment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationUpdate.NewComment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newComment = string(value["NewComment"].GetString());
        m_newCommentHasBeenSet = true;
    }

    if (value.HasMember("SetProperties") && !value["SetProperties"].IsNull())
    {
        if (!value["SetProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LocationUpdate.SetProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["SetProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_setProperties.push_back(item);
        }
        m_setPropertiesHasBeenSet = true;
    }

    if (value.HasMember("RemoveProperties") && !value["RemoveProperties"].IsNull())
    {
        if (!value["RemoveProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LocationUpdate.RemoveProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoveProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_removeProperties.push_back((*itr).GetString());
        }
        m_removePropertiesHasBeenSet = true;
    }

    if (value.HasMember("NewName") && !value["NewName"].IsNull())
    {
        if (!value["NewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationUpdate.NewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newName = string(value["NewName"].GetString());
        m_newNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocationUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateType.c_str(), allocator).Move(), allocator);
    }

    if (m_newCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewComment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newComment.c_str(), allocator).Move(), allocator);
    }

    if (m_setPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_setProperties.begin(); itr != m_setProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_removePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_removeProperties.begin(); itr != m_removeProperties.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newName.c_str(), allocator).Move(), allocator);
    }

}


string LocationUpdate::GetUpdateType() const
{
    return m_updateType;
}

void LocationUpdate::SetUpdateType(const string& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool LocationUpdate::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

string LocationUpdate::GetNewComment() const
{
    return m_newComment;
}

void LocationUpdate::SetNewComment(const string& _newComment)
{
    m_newComment = _newComment;
    m_newCommentHasBeenSet = true;
}

bool LocationUpdate::NewCommentHasBeenSet() const
{
    return m_newCommentHasBeenSet;
}

vector<KVPair> LocationUpdate::GetSetProperties() const
{
    return m_setProperties;
}

void LocationUpdate::SetSetProperties(const vector<KVPair>& _setProperties)
{
    m_setProperties = _setProperties;
    m_setPropertiesHasBeenSet = true;
}

bool LocationUpdate::SetPropertiesHasBeenSet() const
{
    return m_setPropertiesHasBeenSet;
}

vector<string> LocationUpdate::GetRemoveProperties() const
{
    return m_removeProperties;
}

void LocationUpdate::SetRemoveProperties(const vector<string>& _removeProperties)
{
    m_removeProperties = _removeProperties;
    m_removePropertiesHasBeenSet = true;
}

bool LocationUpdate::RemovePropertiesHasBeenSet() const
{
    return m_removePropertiesHasBeenSet;
}

string LocationUpdate::GetNewName() const
{
    return m_newName;
}

void LocationUpdate::SetNewName(const string& _newName)
{
    m_newName = _newName;
    m_newNameHasBeenSet = true;
}

bool LocationUpdate::NewNameHasBeenSet() const
{
    return m_newNameHasBeenSet;
}

