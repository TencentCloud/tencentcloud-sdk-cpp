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

#include <tencentcloud/live/v20180801/model/CMSBizInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CMSBizInfo::CMSBizInfo() :
    m_strategyTypeHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_strategyConfigHasBeenSet(false)
{
}

CoreInternalOutcome CMSBizInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMSBizInfo.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMSBizInfo.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CMSBizInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StrategyConfig") && !value["StrategyConfig"].IsNull())
    {
        if (!value["StrategyConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMSBizInfo.StrategyConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyConfig = string(value["StrategyConfig"].GetString());
        m_strategyConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CMSBizInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_strategyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyConfig.c_str(), allocator).Move(), allocator);
    }

}


string CMSBizInfo::GetStrategyType() const
{
    return m_strategyType;
}

void CMSBizInfo::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool CMSBizInfo::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string CMSBizInfo::GetBizType() const
{
    return m_bizType;
}

void CMSBizInfo::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CMSBizInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

bool CMSBizInfo::GetStatus() const
{
    return m_status;
}

void CMSBizInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CMSBizInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CMSBizInfo::GetStrategyConfig() const
{
    return m_strategyConfig;
}

void CMSBizInfo::SetStrategyConfig(const string& _strategyConfig)
{
    m_strategyConfig = _strategyConfig;
    m_strategyConfigHasBeenSet = true;
}

bool CMSBizInfo::StrategyConfigHasBeenSet() const
{
    return m_strategyConfigHasBeenSet;
}

