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

#include <tencentcloud/rce/v20201103/model/OnlineScamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OnlineScamInfo::OnlineScamInfo() :
    m_contentLabelHasBeenSet(false),
    m_contentRiskLevelHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_fraudTypeHasBeenSet(false),
    m_fraudAccountHasBeenSet(false)
{
}

CoreInternalOutcome OnlineScamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentLabel") && !value["ContentLabel"].IsNull())
    {
        if (!value["ContentLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineScamInfo.ContentLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentLabel = string(value["ContentLabel"].GetString());
        m_contentLabelHasBeenSet = true;
    }

    if (value.HasMember("ContentRiskLevel") && !value["ContentRiskLevel"].IsNull())
    {
        if (!value["ContentRiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineScamInfo.ContentRiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentRiskLevel = value["ContentRiskLevel"].GetInt64();
        m_contentRiskLevelHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineScamInfo.ContentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = value["ContentType"].GetInt64();
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("FraudType") && !value["FraudType"].IsNull())
    {
        if (!value["FraudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineScamInfo.FraudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fraudType = value["FraudType"].GetInt64();
        m_fraudTypeHasBeenSet = true;
    }

    if (value.HasMember("FraudAccount") && !value["FraudAccount"].IsNull())
    {
        if (!value["FraudAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineScamInfo.FraudAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fraudAccount = string(value["FraudAccount"].GetString());
        m_fraudAccountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OnlineScamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_contentRiskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentRiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentRiskLevel, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentType, allocator);
    }

    if (m_fraudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FraudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fraudType, allocator);
    }

    if (m_fraudAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FraudAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fraudAccount.c_str(), allocator).Move(), allocator);
    }

}


string OnlineScamInfo::GetContentLabel() const
{
    return m_contentLabel;
}

void OnlineScamInfo::SetContentLabel(const string& _contentLabel)
{
    m_contentLabel = _contentLabel;
    m_contentLabelHasBeenSet = true;
}

bool OnlineScamInfo::ContentLabelHasBeenSet() const
{
    return m_contentLabelHasBeenSet;
}

int64_t OnlineScamInfo::GetContentRiskLevel() const
{
    return m_contentRiskLevel;
}

void OnlineScamInfo::SetContentRiskLevel(const int64_t& _contentRiskLevel)
{
    m_contentRiskLevel = _contentRiskLevel;
    m_contentRiskLevelHasBeenSet = true;
}

bool OnlineScamInfo::ContentRiskLevelHasBeenSet() const
{
    return m_contentRiskLevelHasBeenSet;
}

int64_t OnlineScamInfo::GetContentType() const
{
    return m_contentType;
}

void OnlineScamInfo::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool OnlineScamInfo::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

int64_t OnlineScamInfo::GetFraudType() const
{
    return m_fraudType;
}

void OnlineScamInfo::SetFraudType(const int64_t& _fraudType)
{
    m_fraudType = _fraudType;
    m_fraudTypeHasBeenSet = true;
}

bool OnlineScamInfo::FraudTypeHasBeenSet() const
{
    return m_fraudTypeHasBeenSet;
}

string OnlineScamInfo::GetFraudAccount() const
{
    return m_fraudAccount;
}

void OnlineScamInfo::SetFraudAccount(const string& _fraudAccount)
{
    m_fraudAccount = _fraudAccount;
    m_fraudAccountHasBeenSet = true;
}

bool OnlineScamInfo::FraudAccountHasBeenSet() const
{
    return m_fraudAccountHasBeenSet;
}

