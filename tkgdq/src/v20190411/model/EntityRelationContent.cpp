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

#include <tencentcloud/tkgdq/v20190411/model/EntityRelationContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tkgdq::V20190411::Model;
using namespace std;

EntityRelationContent::EntityRelationContent() :
    m_objectHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_relationHasBeenSet(false)
{
}

CoreInternalOutcome EntityRelationContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EntityRelationContent.Object` is not array type"));

        const rapidjson::Value &tmpValue = value["Object"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EntityRelationObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_object.push_back(item);
        }
        m_objectHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EntityRelationContent.Subject` is not array type"));

        const rapidjson::Value &tmpValue = value["Subject"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EntityRelationSubject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subject.push_back(item);
        }
        m_subjectHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityRelationContent.Relation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relation = string(value["Relation"].GetString());
        m_relationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EntityRelationContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_object.begin(); itr != m_object.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subject.begin(); itr != m_subject.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }

}


vector<EntityRelationObject> EntityRelationContent::GetObject() const
{
    return m_object;
}

void EntityRelationContent::SetObject(const vector<EntityRelationObject>& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool EntityRelationContent::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

vector<EntityRelationSubject> EntityRelationContent::GetSubject() const
{
    return m_subject;
}

void EntityRelationContent::SetSubject(const vector<EntityRelationSubject>& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool EntityRelationContent::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

string EntityRelationContent::GetRelation() const
{
    return m_relation;
}

void EntityRelationContent::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool EntityRelationContent::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

