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

#include <tencentcloud/ims/v20200713/model/ObjectDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20200713::Model;
using namespace std;

ObjectDetail::ObjectDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_objectIdHasBeenSet(false)
{
}

CoreInternalOutcome ObjectDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectDetail.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObjectDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ObjectDetail::GetId() const
{
    return m_id;
}

void ObjectDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ObjectDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ObjectDetail::GetName() const
{
    return m_name;
}

void ObjectDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ObjectDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ObjectDetail::GetValue() const
{
    return m_value;
}

void ObjectDetail::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ObjectDetail::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t ObjectDetail::GetScore() const
{
    return m_score;
}

void ObjectDetail::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ObjectDetail::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

Location ObjectDetail::GetLocation() const
{
    return m_location;
}

void ObjectDetail::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool ObjectDetail::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string ObjectDetail::GetSubLabel() const
{
    return m_subLabel;
}

void ObjectDetail::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool ObjectDetail::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

string ObjectDetail::GetGroupId() const
{
    return m_groupId;
}

void ObjectDetail::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ObjectDetail::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ObjectDetail::GetObjectId() const
{
    return m_objectId;
}

void ObjectDetail::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool ObjectDetail::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

