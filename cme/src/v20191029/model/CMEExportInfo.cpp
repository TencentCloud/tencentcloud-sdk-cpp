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

#include <tencentcloud/cme/v20191029/model/CMEExportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

CMEExportInfo::CMEExportInfo() :
    m_ownerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_thirdPartyPublishInfosHasBeenSet(false)
{
}

CoreInternalOutcome CMEExportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CMEExportInfo.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMEExportInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMEExportInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMEExportInfo.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CMEExportInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("ThirdPartyPublishInfos") && !value["ThirdPartyPublishInfos"].IsNull())
    {
        if (!value["ThirdPartyPublishInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CMEExportInfo.ThirdPartyPublishInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ThirdPartyPublishInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThirdPartyPublishInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_thirdPartyPublishInfos.push_back(item);
        }
        m_thirdPartyPublishInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CMEExportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_classPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classPath.c_str(), allocator).Move(), allocator);
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

    if (m_thirdPartyPublishInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPartyPublishInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_thirdPartyPublishInfos.begin(); itr != m_thirdPartyPublishInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Entity CMEExportInfo::GetOwner() const
{
    return m_owner;
}

void CMEExportInfo::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CMEExportInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string CMEExportInfo::GetName() const
{
    return m_name;
}

void CMEExportInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CMEExportInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CMEExportInfo::GetDescription() const
{
    return m_description;
}

void CMEExportInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CMEExportInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CMEExportInfo::GetClassPath() const
{
    return m_classPath;
}

void CMEExportInfo::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool CMEExportInfo::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

vector<string> CMEExportInfo::GetTagSet() const
{
    return m_tagSet;
}

void CMEExportInfo::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CMEExportInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

vector<ThirdPartyPublishInfo> CMEExportInfo::GetThirdPartyPublishInfos() const
{
    return m_thirdPartyPublishInfos;
}

void CMEExportInfo::SetThirdPartyPublishInfos(const vector<ThirdPartyPublishInfo>& _thirdPartyPublishInfos)
{
    m_thirdPartyPublishInfos = _thirdPartyPublishInfos;
    m_thirdPartyPublishInfosHasBeenSet = true;
}

bool CMEExportInfo::ThirdPartyPublishInfosHasBeenSet() const
{
    return m_thirdPartyPublishInfosHasBeenSet;
}

