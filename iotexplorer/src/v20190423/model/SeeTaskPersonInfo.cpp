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

#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskPersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeTaskPersonInfo::SeeTaskPersonInfo() :
    m_facesHasBeenSet(false),
    m_isRememberedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome SeeTaskPersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Faces") && !value["Faces"].IsNull())
    {
        if (!value["Faces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeTaskPersonInfo.Faces` is not array type"));

        const rapidjson::Value &tmpValue = value["Faces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SeeTaskFaceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faces.push_back(item);
        }
        m_facesHasBeenSet = true;
    }

    if (value.HasMember("IsRemembered") && !value["IsRemembered"].IsNull())
    {
        if (!value["IsRemembered"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskPersonInfo.IsRemembered` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRemembered = value["IsRemembered"].GetBool();
        m_isRememberedHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskPersonInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskPersonInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskPersonInfo.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeTaskPersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_facesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Faces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faces.begin(); itr != m_faces.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isRememberedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemembered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRemembered, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

}


vector<SeeTaskFaceInfo> SeeTaskPersonInfo::GetFaces() const
{
    return m_faces;
}

void SeeTaskPersonInfo::SetFaces(const vector<SeeTaskFaceInfo>& _faces)
{
    m_faces = _faces;
    m_facesHasBeenSet = true;
}

bool SeeTaskPersonInfo::FacesHasBeenSet() const
{
    return m_facesHasBeenSet;
}

bool SeeTaskPersonInfo::GetIsRemembered() const
{
    return m_isRemembered;
}

void SeeTaskPersonInfo::SetIsRemembered(const bool& _isRemembered)
{
    m_isRemembered = _isRemembered;
    m_isRememberedHasBeenSet = true;
}

bool SeeTaskPersonInfo::IsRememberedHasBeenSet() const
{
    return m_isRememberedHasBeenSet;
}

string SeeTaskPersonInfo::GetName() const
{
    return m_name;
}

void SeeTaskPersonInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SeeTaskPersonInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SeeTaskPersonInfo::GetPersonId() const
{
    return m_personId;
}

void SeeTaskPersonInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool SeeTaskPersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t SeeTaskPersonInfo::GetSource() const
{
    return m_source;
}

void SeeTaskPersonInfo::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SeeTaskPersonInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

