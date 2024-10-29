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

#include <tencentcloud/wedata/v20210820/model/DataServicePublishedApiListFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataServicePublishedApiListFilter::DataServicePublishedApiListFilter() :
    m_pathUrlHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_authTypesHasBeenSet(false),
    m_apiStatusHasBeenSet(false),
    m_configTypesHasBeenSet(false)
{
}

CoreInternalOutcome DataServicePublishedApiListFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PathUrl") && !value["PathUrl"].IsNull())
    {
        if (!value["PathUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServicePublishedApiListFilter.PathUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathUrl = string(value["PathUrl"].GetString());
        m_pathUrlHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataServicePublishedApiListFilter.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("AuthTypes") && !value["AuthTypes"].IsNull())
    {
        if (!value["AuthTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataServicePublishedApiListFilter.AuthTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authTypes.push_back((*itr).GetUint64());
        }
        m_authTypesHasBeenSet = true;
    }

    if (value.HasMember("ApiStatus") && !value["ApiStatus"].IsNull())
    {
        if (!value["ApiStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataServicePublishedApiListFilter.ApiStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_apiStatus.push_back((*itr).GetUint64());
        }
        m_apiStatusHasBeenSet = true;
    }

    if (value.HasMember("ConfigTypes") && !value["ConfigTypes"].IsNull())
    {
        if (!value["ConfigTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataServicePublishedApiListFilter.ConfigTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_configTypes.push_back((*itr).GetUint64());
        }
        m_configTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataServicePublishedApiListFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authTypes.begin(); itr != m_authTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_apiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiStatus.begin(); itr != m_apiStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_configTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configTypes.begin(); itr != m_configTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string DataServicePublishedApiListFilter::GetPathUrl() const
{
    return m_pathUrl;
}

void DataServicePublishedApiListFilter::SetPathUrl(const string& _pathUrl)
{
    m_pathUrl = _pathUrl;
    m_pathUrlHasBeenSet = true;
}

bool DataServicePublishedApiListFilter::PathUrlHasBeenSet() const
{
    return m_pathUrlHasBeenSet;
}

string DataServicePublishedApiListFilter::GetKeyword() const
{
    return m_keyword;
}

void DataServicePublishedApiListFilter::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DataServicePublishedApiListFilter::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<uint64_t> DataServicePublishedApiListFilter::GetAuthTypes() const
{
    return m_authTypes;
}

void DataServicePublishedApiListFilter::SetAuthTypes(const vector<uint64_t>& _authTypes)
{
    m_authTypes = _authTypes;
    m_authTypesHasBeenSet = true;
}

bool DataServicePublishedApiListFilter::AuthTypesHasBeenSet() const
{
    return m_authTypesHasBeenSet;
}

vector<uint64_t> DataServicePublishedApiListFilter::GetApiStatus() const
{
    return m_apiStatus;
}

void DataServicePublishedApiListFilter::SetApiStatus(const vector<uint64_t>& _apiStatus)
{
    m_apiStatus = _apiStatus;
    m_apiStatusHasBeenSet = true;
}

bool DataServicePublishedApiListFilter::ApiStatusHasBeenSet() const
{
    return m_apiStatusHasBeenSet;
}

vector<uint64_t> DataServicePublishedApiListFilter::GetConfigTypes() const
{
    return m_configTypes;
}

void DataServicePublishedApiListFilter::SetConfigTypes(const vector<uint64_t>& _configTypes)
{
    m_configTypes = _configTypes;
    m_configTypesHasBeenSet = true;
}

bool DataServicePublishedApiListFilter::ConfigTypesHasBeenSet() const
{
    return m_configTypesHasBeenSet;
}

