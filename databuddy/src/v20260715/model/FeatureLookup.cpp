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

#include <tencentcloud/databuddy/v20260715/model/FeatureLookup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FeatureLookup::FeatureLookup() :
    m_tableNameHasBeenSet(false),
    m_lookupKeyHasBeenSet(false),
    m_timestampLookupKeyHasBeenSet(false),
    m_featureNamesHasBeenSet(false)
{
}

CoreInternalOutcome FeatureLookup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureLookup.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("LookupKey") && !value["LookupKey"].IsNull())
    {
        if (!value["LookupKey"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeatureLookup.LookupKey` is not array type"));

        const rapidjson::Value &tmpValue = value["LookupKey"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lookupKey.push_back((*itr).GetString());
        }
        m_lookupKeyHasBeenSet = true;
    }

    if (value.HasMember("TimestampLookupKey") && !value["TimestampLookupKey"].IsNull())
    {
        if (!value["TimestampLookupKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureLookup.TimestampLookupKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampLookupKey = string(value["TimestampLookupKey"].GetString());
        m_timestampLookupKeyHasBeenSet = true;
    }

    if (value.HasMember("FeatureNames") && !value["FeatureNames"].IsNull())
    {
        if (!value["FeatureNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeatureLookup.FeatureNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FeatureNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_featureNames.push_back((*itr).GetString());
        }
        m_featureNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeatureLookup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_lookupKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LookupKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lookupKey.begin(); itr != m_lookupKey.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timestampLookupKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampLookupKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampLookupKey.c_str(), allocator).Move(), allocator);
    }

    if (m_featureNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_featureNames.begin(); itr != m_featureNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FeatureLookup::GetTableName() const
{
    return m_tableName;
}

void FeatureLookup::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool FeatureLookup::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<string> FeatureLookup::GetLookupKey() const
{
    return m_lookupKey;
}

void FeatureLookup::SetLookupKey(const vector<string>& _lookupKey)
{
    m_lookupKey = _lookupKey;
    m_lookupKeyHasBeenSet = true;
}

bool FeatureLookup::LookupKeyHasBeenSet() const
{
    return m_lookupKeyHasBeenSet;
}

string FeatureLookup::GetTimestampLookupKey() const
{
    return m_timestampLookupKey;
}

void FeatureLookup::SetTimestampLookupKey(const string& _timestampLookupKey)
{
    m_timestampLookupKey = _timestampLookupKey;
    m_timestampLookupKeyHasBeenSet = true;
}

bool FeatureLookup::TimestampLookupKeyHasBeenSet() const
{
    return m_timestampLookupKeyHasBeenSet;
}

vector<string> FeatureLookup::GetFeatureNames() const
{
    return m_featureNames;
}

void FeatureLookup::SetFeatureNames(const vector<string>& _featureNames)
{
    m_featureNames = _featureNames;
    m_featureNamesHasBeenSet = true;
}

bool FeatureLookup::FeatureNamesHasBeenSet() const
{
    return m_featureNamesHasBeenSet;
}

