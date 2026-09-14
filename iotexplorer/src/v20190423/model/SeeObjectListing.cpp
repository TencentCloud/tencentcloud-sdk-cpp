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

#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectListing.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeObjectListing::SeeObjectListing() :
    m_contentsHasBeenSet(false),
    m_commonPrefixesHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_isTruncatedHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxKeysHasBeenSet(false),
    m_nextMarkerHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

CoreInternalOutcome SeeObjectListing::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SeeObjectSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }

    if (value.HasMember("CommonPrefixes") && !value["CommonPrefixes"].IsNull())
    {
        if (!value["CommonPrefixes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.CommonPrefixes` is not array type"));

        const rapidjson::Value &tmpValue = value["CommonPrefixes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_commonPrefixes.push_back((*itr).GetString());
        }
        m_commonPrefixesHasBeenSet = true;
    }

    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }

    if (value.HasMember("IsTruncated") && !value["IsTruncated"].IsNull())
    {
        if (!value["IsTruncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.IsTruncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTruncated = value["IsTruncated"].GetBool();
        m_isTruncatedHasBeenSet = true;
    }

    if (value.HasMember("Marker") && !value["Marker"].IsNull())
    {
        if (!value["Marker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.Marker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marker = string(value["Marker"].GetString());
        m_markerHasBeenSet = true;
    }

    if (value.HasMember("MaxKeys") && !value["MaxKeys"].IsNull())
    {
        if (!value["MaxKeys"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.MaxKeys` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxKeys = value["MaxKeys"].GetInt64();
        m_maxKeysHasBeenSet = true;
    }

    if (value.HasMember("NextMarker") && !value["NextMarker"].IsNull())
    {
        if (!value["NextMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.NextMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextMarker = string(value["NextMarker"].GetString());
        m_nextMarkerHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectListing.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeObjectListing::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_commonPrefixesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonPrefixes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commonPrefixes.begin(); itr != m_commonPrefixes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_isTruncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTruncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTruncated, allocator);
    }

    if (m_markerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marker.c_str(), allocator).Move(), allocator);
    }

    if (m_maxKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxKeys, allocator);
    }

    if (m_nextMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextMarker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextMarker.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

}


vector<SeeObjectSummary> SeeObjectListing::GetContents() const
{
    return m_contents;
}

void SeeObjectListing::SetContents(const vector<SeeObjectSummary>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool SeeObjectListing::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

vector<string> SeeObjectListing::GetCommonPrefixes() const
{
    return m_commonPrefixes;
}

void SeeObjectListing::SetCommonPrefixes(const vector<string>& _commonPrefixes)
{
    m_commonPrefixes = _commonPrefixes;
    m_commonPrefixesHasBeenSet = true;
}

bool SeeObjectListing::CommonPrefixesHasBeenSet() const
{
    return m_commonPrefixesHasBeenSet;
}

string SeeObjectListing::GetDelimiter() const
{
    return m_delimiter;
}

void SeeObjectListing::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool SeeObjectListing::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

bool SeeObjectListing::GetIsTruncated() const
{
    return m_isTruncated;
}

void SeeObjectListing::SetIsTruncated(const bool& _isTruncated)
{
    m_isTruncated = _isTruncated;
    m_isTruncatedHasBeenSet = true;
}

bool SeeObjectListing::IsTruncatedHasBeenSet() const
{
    return m_isTruncatedHasBeenSet;
}

string SeeObjectListing::GetMarker() const
{
    return m_marker;
}

void SeeObjectListing::SetMarker(const string& _marker)
{
    m_marker = _marker;
    m_markerHasBeenSet = true;
}

bool SeeObjectListing::MarkerHasBeenSet() const
{
    return m_markerHasBeenSet;
}

int64_t SeeObjectListing::GetMaxKeys() const
{
    return m_maxKeys;
}

void SeeObjectListing::SetMaxKeys(const int64_t& _maxKeys)
{
    m_maxKeys = _maxKeys;
    m_maxKeysHasBeenSet = true;
}

bool SeeObjectListing::MaxKeysHasBeenSet() const
{
    return m_maxKeysHasBeenSet;
}

string SeeObjectListing::GetNextMarker() const
{
    return m_nextMarker;
}

void SeeObjectListing::SetNextMarker(const string& _nextMarker)
{
    m_nextMarker = _nextMarker;
    m_nextMarkerHasBeenSet = true;
}

bool SeeObjectListing::NextMarkerHasBeenSet() const
{
    return m_nextMarkerHasBeenSet;
}

string SeeObjectListing::GetPrefix() const
{
    return m_prefix;
}

void SeeObjectListing::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool SeeObjectListing::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

