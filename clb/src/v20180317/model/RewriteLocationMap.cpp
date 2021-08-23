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

#include <tencentcloud/clb/v20180317/model/RewriteLocationMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RewriteLocationMap::RewriteLocationMap() :
    m_sourceLocationIdHasBeenSet(false),
    m_targetLocationIdHasBeenSet(false),
    m_rewriteCodeHasBeenSet(false),
    m_takeUrlHasBeenSet(false),
    m_sourceDomainHasBeenSet(false)
{
}

CoreInternalOutcome RewriteLocationMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceLocationId") && !value["SourceLocationId"].IsNull())
    {
        if (!value["SourceLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteLocationMap.SourceLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationId = string(value["SourceLocationId"].GetString());
        m_sourceLocationIdHasBeenSet = true;
    }

    if (value.HasMember("TargetLocationId") && !value["TargetLocationId"].IsNull())
    {
        if (!value["TargetLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteLocationMap.TargetLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLocationId = string(value["TargetLocationId"].GetString());
        m_targetLocationIdHasBeenSet = true;
    }

    if (value.HasMember("RewriteCode") && !value["RewriteCode"].IsNull())
    {
        if (!value["RewriteCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteLocationMap.RewriteCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteCode = value["RewriteCode"].GetInt64();
        m_rewriteCodeHasBeenSet = true;
    }

    if (value.HasMember("TakeUrl") && !value["TakeUrl"].IsNull())
    {
        if (!value["TakeUrl"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteLocationMap.TakeUrl` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_takeUrl = value["TakeUrl"].GetBool();
        m_takeUrlHasBeenSet = true;
    }

    if (value.HasMember("SourceDomain") && !value["SourceDomain"].IsNull())
    {
        if (!value["SourceDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteLocationMap.SourceDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDomain = string(value["SourceDomain"].GetString());
        m_sourceDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RewriteLocationMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewriteCode, allocator);
    }

    if (m_takeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TakeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_takeUrl, allocator);
    }

    if (m_sourceDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDomain.c_str(), allocator).Move(), allocator);
    }

}


string RewriteLocationMap::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void RewriteLocationMap::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool RewriteLocationMap::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

string RewriteLocationMap::GetTargetLocationId() const
{
    return m_targetLocationId;
}

void RewriteLocationMap::SetTargetLocationId(const string& _targetLocationId)
{
    m_targetLocationId = _targetLocationId;
    m_targetLocationIdHasBeenSet = true;
}

bool RewriteLocationMap::TargetLocationIdHasBeenSet() const
{
    return m_targetLocationIdHasBeenSet;
}

int64_t RewriteLocationMap::GetRewriteCode() const
{
    return m_rewriteCode;
}

void RewriteLocationMap::SetRewriteCode(const int64_t& _rewriteCode)
{
    m_rewriteCode = _rewriteCode;
    m_rewriteCodeHasBeenSet = true;
}

bool RewriteLocationMap::RewriteCodeHasBeenSet() const
{
    return m_rewriteCodeHasBeenSet;
}

bool RewriteLocationMap::GetTakeUrl() const
{
    return m_takeUrl;
}

void RewriteLocationMap::SetTakeUrl(const bool& _takeUrl)
{
    m_takeUrl = _takeUrl;
    m_takeUrlHasBeenSet = true;
}

bool RewriteLocationMap::TakeUrlHasBeenSet() const
{
    return m_takeUrlHasBeenSet;
}

string RewriteLocationMap::GetSourceDomain() const
{
    return m_sourceDomain;
}

void RewriteLocationMap::SetSourceDomain(const string& _sourceDomain)
{
    m_sourceDomain = _sourceDomain;
    m_sourceDomainHasBeenSet = true;
}

bool RewriteLocationMap::SourceDomainHasBeenSet() const
{
    return m_sourceDomainHasBeenSet;
}

