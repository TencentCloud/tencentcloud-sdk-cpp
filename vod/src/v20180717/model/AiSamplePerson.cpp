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

#include <tencentcloud/vod/v20180717/model/AiSamplePerson.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiSamplePerson::AiSamplePerson() :
    m_personIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_faceInfoSetHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_usageSetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiSamplePerson::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FaceInfoSet") && !value["FaceInfoSet"].IsNull())
    {
        if (!value["FaceInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.FaceInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiSampleFaceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceInfoSet.push_back(item);
        }
        m_faceInfoSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("UsageSet") && !value["UsageSet"].IsNull())
    {
        if (!value["UsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.UsageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UsageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_usageSet.push_back((*itr).GetString());
        }
        m_usageSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSamplePerson.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiSamplePerson::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_faceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceInfoSet.begin(); itr != m_faceInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_usageSet.begin(); itr != m_usageSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

}


string AiSamplePerson::GetPersonId() const
{
    return m_personId;
}

void AiSamplePerson::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool AiSamplePerson::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string AiSamplePerson::GetName() const
{
    return m_name;
}

void AiSamplePerson::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AiSamplePerson::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AiSamplePerson::GetDescription() const
{
    return m_description;
}

void AiSamplePerson::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AiSamplePerson::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<AiSampleFaceInfo> AiSamplePerson::GetFaceInfoSet() const
{
    return m_faceInfoSet;
}

void AiSamplePerson::SetFaceInfoSet(const vector<AiSampleFaceInfo>& _faceInfoSet)
{
    m_faceInfoSet = _faceInfoSet;
    m_faceInfoSetHasBeenSet = true;
}

bool AiSamplePerson::FaceInfoSetHasBeenSet() const
{
    return m_faceInfoSetHasBeenSet;
}

vector<string> AiSamplePerson::GetTagSet() const
{
    return m_tagSet;
}

void AiSamplePerson::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool AiSamplePerson::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

vector<string> AiSamplePerson::GetUsageSet() const
{
    return m_usageSet;
}

void AiSamplePerson::SetUsageSet(const vector<string>& _usageSet)
{
    m_usageSet = _usageSet;
    m_usageSetHasBeenSet = true;
}

bool AiSamplePerson::UsageSetHasBeenSet() const
{
    return m_usageSetHasBeenSet;
}

string AiSamplePerson::GetCreateTime() const
{
    return m_createTime;
}

void AiSamplePerson::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AiSamplePerson::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AiSamplePerson::GetUpdateTime() const
{
    return m_updateTime;
}

void AiSamplePerson::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AiSamplePerson::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

