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

#include <tencentcloud/alb/v20251030/model/RuleCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

RuleCondition::RuleCondition() :
    m_typeHasBeenSet(false),
    m_cookieConfigHasBeenSet(false),
    m_headerConfigHasBeenSet(false),
    m_hostConfigHasBeenSet(false),
    m_methodConfigHasBeenSet(false),
    m_pathConfigHasBeenSet(false),
    m_queryStringConfigHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false)
{
}

CoreInternalOutcome RuleCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CookieConfig") && !value["CookieConfig"].IsNull())
    {
        if (!value["CookieConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.CookieConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["CookieConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPCookieInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cookieConfig.push_back(item);
        }
        m_cookieConfigHasBeenSet = true;
    }

    if (value.HasMember("HeaderConfig") && !value["HeaderConfig"].IsNull())
    {
        if (!value["HeaderConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.HeaderConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headerConfig.Deserialize(value["HeaderConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headerConfigHasBeenSet = true;
    }

    if (value.HasMember("HostConfig") && !value["HostConfig"].IsNull())
    {
        if (!value["HostConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.HostConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["HostConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostConfig.push_back((*itr).GetString());
        }
        m_hostConfigHasBeenSet = true;
    }

    if (value.HasMember("MethodConfig") && !value["MethodConfig"].IsNull())
    {
        if (!value["MethodConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.MethodConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["MethodConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_methodConfig.push_back((*itr).GetString());
        }
        m_methodConfigHasBeenSet = true;
    }

    if (value.HasMember("PathConfig") && !value["PathConfig"].IsNull())
    {
        if (!value["PathConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.PathConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["PathConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pathConfig.push_back((*itr).GetString());
        }
        m_pathConfigHasBeenSet = true;
    }

    if (value.HasMember("QueryStringConfig") && !value["QueryStringConfig"].IsNull())
    {
        if (!value["QueryStringConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.QueryStringConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryStringConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPQueryStringInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryStringConfig.push_back(item);
        }
        m_queryStringConfigHasBeenSet = true;
    }

    if (value.HasMember("SourceIpConfig") && !value["SourceIpConfig"].IsNull())
    {
        if (!value["SourceIpConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.SourceIpConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceIpConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceIpConfig.push_back((*itr).GetString());
        }
        m_sourceIpConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CookieConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cookieConfig.begin(); itr != m_cookieConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_headerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headerConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostConfig.begin(); itr != m_hostConfig.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MethodConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methodConfig.begin(); itr != m_methodConfig.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pathConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pathConfig.begin(); itr != m_pathConfig.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_queryStringConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStringConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryStringConfig.begin(); itr != m_queryStringConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceIpConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceIpConfig.begin(); itr != m_sourceIpConfig.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RuleCondition::GetType() const
{
    return m_type;
}

void RuleCondition::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuleCondition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<HTTPCookieInfo> RuleCondition::GetCookieConfig() const
{
    return m_cookieConfig;
}

void RuleCondition::SetCookieConfig(const vector<HTTPCookieInfo>& _cookieConfig)
{
    m_cookieConfig = _cookieConfig;
    m_cookieConfigHasBeenSet = true;
}

bool RuleCondition::CookieConfigHasBeenSet() const
{
    return m_cookieConfigHasBeenSet;
}

HTTPHeaderInfo RuleCondition::GetHeaderConfig() const
{
    return m_headerConfig;
}

void RuleCondition::SetHeaderConfig(const HTTPHeaderInfo& _headerConfig)
{
    m_headerConfig = _headerConfig;
    m_headerConfigHasBeenSet = true;
}

bool RuleCondition::HeaderConfigHasBeenSet() const
{
    return m_headerConfigHasBeenSet;
}

vector<string> RuleCondition::GetHostConfig() const
{
    return m_hostConfig;
}

void RuleCondition::SetHostConfig(const vector<string>& _hostConfig)
{
    m_hostConfig = _hostConfig;
    m_hostConfigHasBeenSet = true;
}

bool RuleCondition::HostConfigHasBeenSet() const
{
    return m_hostConfigHasBeenSet;
}

vector<string> RuleCondition::GetMethodConfig() const
{
    return m_methodConfig;
}

void RuleCondition::SetMethodConfig(const vector<string>& _methodConfig)
{
    m_methodConfig = _methodConfig;
    m_methodConfigHasBeenSet = true;
}

bool RuleCondition::MethodConfigHasBeenSet() const
{
    return m_methodConfigHasBeenSet;
}

vector<string> RuleCondition::GetPathConfig() const
{
    return m_pathConfig;
}

void RuleCondition::SetPathConfig(const vector<string>& _pathConfig)
{
    m_pathConfig = _pathConfig;
    m_pathConfigHasBeenSet = true;
}

bool RuleCondition::PathConfigHasBeenSet() const
{
    return m_pathConfigHasBeenSet;
}

vector<HTTPQueryStringInfo> RuleCondition::GetQueryStringConfig() const
{
    return m_queryStringConfig;
}

void RuleCondition::SetQueryStringConfig(const vector<HTTPQueryStringInfo>& _queryStringConfig)
{
    m_queryStringConfig = _queryStringConfig;
    m_queryStringConfigHasBeenSet = true;
}

bool RuleCondition::QueryStringConfigHasBeenSet() const
{
    return m_queryStringConfigHasBeenSet;
}

vector<string> RuleCondition::GetSourceIpConfig() const
{
    return m_sourceIpConfig;
}

void RuleCondition::SetSourceIpConfig(const vector<string>& _sourceIpConfig)
{
    m_sourceIpConfig = _sourceIpConfig;
    m_sourceIpConfigHasBeenSet = true;
}

bool RuleCondition::SourceIpConfigHasBeenSet() const
{
    return m_sourceIpConfigHasBeenSet;
}

