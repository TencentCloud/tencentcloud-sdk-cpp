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

#include <tencentcloud/bsca/v20210811/model/Component.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

Component::Component() :
    m_pURLHasBeenSet(false),
    m_homepageHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_nicknameListHasBeenSet(false),
    m_codeLocationListHasBeenSet(false),
    m_licenseExpressionHasBeenSet(false),
    m_versionInfoHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome Component::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PURL") && !value["PURL"].IsNull())
    {
        if (!value["PURL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Component.PURL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pURL.Deserialize(value["PURL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pURLHasBeenSet = true;
    }

    if (value.HasMember("Homepage") && !value["Homepage"].IsNull())
    {
        if (!value["Homepage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Homepage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homepage = string(value["Homepage"].GetString());
        m_homepageHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("NicknameList") && !value["NicknameList"].IsNull())
    {
        if (!value["NicknameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Component.NicknameList` is not array type"));

        const rapidjson::Value &tmpValue = value["NicknameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nicknameList.push_back((*itr).GetString());
        }
        m_nicknameListHasBeenSet = true;
    }

    if (value.HasMember("CodeLocationList") && !value["CodeLocationList"].IsNull())
    {
        if (!value["CodeLocationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Component.CodeLocationList` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeLocationList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_codeLocationList.push_back((*itr).GetString());
        }
        m_codeLocationListHasBeenSet = true;
    }

    if (value.HasMember("LicenseExpression") && !value["LicenseExpression"].IsNull())
    {
        if (!value["LicenseExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.LicenseExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseExpression = string(value["LicenseExpression"].GetString());
        m_licenseExpressionHasBeenSet = true;
    }

    if (value.HasMember("VersionInfo") && !value["VersionInfo"].IsNull())
    {
        if (!value["VersionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Component.VersionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_versionInfo.Deserialize(value["VersionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_versionInfoHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Component.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Component::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pURL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_homepageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Homepage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_homepage.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NicknameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nicknameList.begin(); itr != m_nicknameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_codeLocationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeLocationList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_codeLocationList.begin(); itr != m_codeLocationList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_licenseExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_versionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_versionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


PURL Component::GetPURL() const
{
    return m_pURL;
}

void Component::SetPURL(const PURL& _pURL)
{
    m_pURL = _pURL;
    m_pURLHasBeenSet = true;
}

bool Component::PURLHasBeenSet() const
{
    return m_pURLHasBeenSet;
}

string Component::GetHomepage() const
{
    return m_homepage;
}

void Component::SetHomepage(const string& _homepage)
{
    m_homepage = _homepage;
    m_homepageHasBeenSet = true;
}

bool Component::HomepageHasBeenSet() const
{
    return m_homepageHasBeenSet;
}

string Component::GetSummary() const
{
    return m_summary;
}

void Component::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool Component::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

vector<string> Component::GetNicknameList() const
{
    return m_nicknameList;
}

void Component::SetNicknameList(const vector<string>& _nicknameList)
{
    m_nicknameList = _nicknameList;
    m_nicknameListHasBeenSet = true;
}

bool Component::NicknameListHasBeenSet() const
{
    return m_nicknameListHasBeenSet;
}

vector<string> Component::GetCodeLocationList() const
{
    return m_codeLocationList;
}

void Component::SetCodeLocationList(const vector<string>& _codeLocationList)
{
    m_codeLocationList = _codeLocationList;
    m_codeLocationListHasBeenSet = true;
}

bool Component::CodeLocationListHasBeenSet() const
{
    return m_codeLocationListHasBeenSet;
}

string Component::GetLicenseExpression() const
{
    return m_licenseExpression;
}

void Component::SetLicenseExpression(const string& _licenseExpression)
{
    m_licenseExpression = _licenseExpression;
    m_licenseExpressionHasBeenSet = true;
}

bool Component::LicenseExpressionHasBeenSet() const
{
    return m_licenseExpressionHasBeenSet;
}

ComponentVersionInfo Component::GetVersionInfo() const
{
    return m_versionInfo;
}

void Component::SetVersionInfo(const ComponentVersionInfo& _versionInfo)
{
    m_versionInfo = _versionInfo;
    m_versionInfoHasBeenSet = true;
}

bool Component::VersionInfoHasBeenSet() const
{
    return m_versionInfoHasBeenSet;
}

string Component::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void Component::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool Component::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

vector<string> Component::GetTagList() const
{
    return m_tagList;
}

void Component::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool Component::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

