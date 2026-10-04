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

#include <tencentcloud/databuddy/v20260715/model/FetchOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FetchOption::FetchOption() :
    m_fetchPermissionsHasBeenSet(false),
    m_fetchFeatureTableDetailHasBeenSet(false),
    m_filterPermissionsHasBeenSet(false),
    m_fetchOwnersHasBeenSet(false),
    m_fetchUserInfoHasBeenSet(false),
    m_fetchMaskHasBeenSet(false),
    m_fetchTagsHasBeenSet(false),
    m_fetchDimensionsHasBeenSet(false)
{
}

CoreInternalOutcome FetchOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FetchPermissions") && !value["FetchPermissions"].IsNull())
    {
        if (!value["FetchPermissions"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchPermissions` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchPermissions = value["FetchPermissions"].GetBool();
        m_fetchPermissionsHasBeenSet = true;
    }

    if (value.HasMember("FetchFeatureTableDetail") && !value["FetchFeatureTableDetail"].IsNull())
    {
        if (!value["FetchFeatureTableDetail"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchFeatureTableDetail` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchFeatureTableDetail = value["FetchFeatureTableDetail"].GetBool();
        m_fetchFeatureTableDetailHasBeenSet = true;
    }

    if (value.HasMember("FilterPermissions") && !value["FilterPermissions"].IsNull())
    {
        if (!value["FilterPermissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FetchOption.FilterPermissions` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterPermissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterPermissions.push_back((*itr).GetString());
        }
        m_filterPermissionsHasBeenSet = true;
    }

    if (value.HasMember("FetchOwners") && !value["FetchOwners"].IsNull())
    {
        if (!value["FetchOwners"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchOwners` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchOwners = value["FetchOwners"].GetBool();
        m_fetchOwnersHasBeenSet = true;
    }

    if (value.HasMember("FetchUserInfo") && !value["FetchUserInfo"].IsNull())
    {
        if (!value["FetchUserInfo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchUserInfo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchUserInfo = value["FetchUserInfo"].GetBool();
        m_fetchUserInfoHasBeenSet = true;
    }

    if (value.HasMember("FetchMask") && !value["FetchMask"].IsNull())
    {
        if (!value["FetchMask"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchMask` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchMask = value["FetchMask"].GetBool();
        m_fetchMaskHasBeenSet = true;
    }

    if (value.HasMember("FetchTags") && !value["FetchTags"].IsNull())
    {
        if (!value["FetchTags"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchTags` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchTags = value["FetchTags"].GetBool();
        m_fetchTagsHasBeenSet = true;
    }

    if (value.HasMember("FetchDimensions") && !value["FetchDimensions"].IsNull())
    {
        if (!value["FetchDimensions"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FetchOption.FetchDimensions` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fetchDimensions = value["FetchDimensions"].GetBool();
        m_fetchDimensionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FetchOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fetchPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchPermissions, allocator);
    }

    if (m_fetchFeatureTableDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchFeatureTableDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchFeatureTableDetail, allocator);
    }

    if (m_filterPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterPermissions.begin(); itr != m_filterPermissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fetchOwnersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchOwners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchOwners, allocator);
    }

    if (m_fetchUserInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchUserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchUserInfo, allocator);
    }

    if (m_fetchMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchMask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchMask, allocator);
    }

    if (m_fetchTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchTags, allocator);
    }

    if (m_fetchDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchDimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fetchDimensions, allocator);
    }

}


bool FetchOption::GetFetchPermissions() const
{
    return m_fetchPermissions;
}

void FetchOption::SetFetchPermissions(const bool& _fetchPermissions)
{
    m_fetchPermissions = _fetchPermissions;
    m_fetchPermissionsHasBeenSet = true;
}

bool FetchOption::FetchPermissionsHasBeenSet() const
{
    return m_fetchPermissionsHasBeenSet;
}

bool FetchOption::GetFetchFeatureTableDetail() const
{
    return m_fetchFeatureTableDetail;
}

void FetchOption::SetFetchFeatureTableDetail(const bool& _fetchFeatureTableDetail)
{
    m_fetchFeatureTableDetail = _fetchFeatureTableDetail;
    m_fetchFeatureTableDetailHasBeenSet = true;
}

bool FetchOption::FetchFeatureTableDetailHasBeenSet() const
{
    return m_fetchFeatureTableDetailHasBeenSet;
}

vector<string> FetchOption::GetFilterPermissions() const
{
    return m_filterPermissions;
}

void FetchOption::SetFilterPermissions(const vector<string>& _filterPermissions)
{
    m_filterPermissions = _filterPermissions;
    m_filterPermissionsHasBeenSet = true;
}

bool FetchOption::FilterPermissionsHasBeenSet() const
{
    return m_filterPermissionsHasBeenSet;
}

bool FetchOption::GetFetchOwners() const
{
    return m_fetchOwners;
}

void FetchOption::SetFetchOwners(const bool& _fetchOwners)
{
    m_fetchOwners = _fetchOwners;
    m_fetchOwnersHasBeenSet = true;
}

bool FetchOption::FetchOwnersHasBeenSet() const
{
    return m_fetchOwnersHasBeenSet;
}

bool FetchOption::GetFetchUserInfo() const
{
    return m_fetchUserInfo;
}

void FetchOption::SetFetchUserInfo(const bool& _fetchUserInfo)
{
    m_fetchUserInfo = _fetchUserInfo;
    m_fetchUserInfoHasBeenSet = true;
}

bool FetchOption::FetchUserInfoHasBeenSet() const
{
    return m_fetchUserInfoHasBeenSet;
}

bool FetchOption::GetFetchMask() const
{
    return m_fetchMask;
}

void FetchOption::SetFetchMask(const bool& _fetchMask)
{
    m_fetchMask = _fetchMask;
    m_fetchMaskHasBeenSet = true;
}

bool FetchOption::FetchMaskHasBeenSet() const
{
    return m_fetchMaskHasBeenSet;
}

bool FetchOption::GetFetchTags() const
{
    return m_fetchTags;
}

void FetchOption::SetFetchTags(const bool& _fetchTags)
{
    m_fetchTags = _fetchTags;
    m_fetchTagsHasBeenSet = true;
}

bool FetchOption::FetchTagsHasBeenSet() const
{
    return m_fetchTagsHasBeenSet;
}

bool FetchOption::GetFetchDimensions() const
{
    return m_fetchDimensions;
}

void FetchOption::SetFetchDimensions(const bool& _fetchDimensions)
{
    m_fetchDimensions = _fetchDimensions;
    m_fetchDimensionsHasBeenSet = true;
}

bool FetchOption::FetchDimensionsHasBeenSet() const
{
    return m_fetchDimensionsHasBeenSet;
}

