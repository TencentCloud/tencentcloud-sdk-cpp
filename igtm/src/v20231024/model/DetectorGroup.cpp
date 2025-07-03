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

#include <tencentcloud/igtm/v20231024/model/DetectorGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

DetectorGroup::DetectorGroup() :
    m_gidHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_internetFamilyHasBeenSet(false),
    m_packageSetHasBeenSet(false)
{
}

CoreInternalOutcome DetectorGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Gid") && !value["Gid"].IsNull())
    {
        if (!value["Gid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectorGroup.Gid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gid = value["Gid"].GetUint64();
        m_gidHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectorGroup.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectorGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InternetFamily") && !value["InternetFamily"].IsNull())
    {
        if (!value["InternetFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectorGroup.InternetFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetFamily = string(value["InternetFamily"].GetString());
        m_internetFamilyHasBeenSet = true;
    }

    if (value.HasMember("PackageSet") && !value["PackageSet"].IsNull())
    {
        if (!value["PackageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectorGroup.PackageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PackageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_packageSet.push_back((*itr).GetString());
        }
        m_packageSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectorGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gid, allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_internetFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_packageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageSet.begin(); itr != m_packageSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t DetectorGroup::GetGid() const
{
    return m_gid;
}

void DetectorGroup::SetGid(const uint64_t& _gid)
{
    m_gid = _gid;
    m_gidHasBeenSet = true;
}

bool DetectorGroup::GidHasBeenSet() const
{
    return m_gidHasBeenSet;
}

string DetectorGroup::GetGroupType() const
{
    return m_groupType;
}

void DetectorGroup::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool DetectorGroup::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string DetectorGroup::GetGroupName() const
{
    return m_groupName;
}

void DetectorGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DetectorGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DetectorGroup::GetInternetFamily() const
{
    return m_internetFamily;
}

void DetectorGroup::SetInternetFamily(const string& _internetFamily)
{
    m_internetFamily = _internetFamily;
    m_internetFamilyHasBeenSet = true;
}

bool DetectorGroup::InternetFamilyHasBeenSet() const
{
    return m_internetFamilyHasBeenSet;
}

vector<string> DetectorGroup::GetPackageSet() const
{
    return m_packageSet;
}

void DetectorGroup::SetPackageSet(const vector<string>& _packageSet)
{
    m_packageSet = _packageSet;
    m_packageSetHasBeenSet = true;
}

bool DetectorGroup::PackageSetHasBeenSet() const
{
    return m_packageSetHasBeenSet;
}

