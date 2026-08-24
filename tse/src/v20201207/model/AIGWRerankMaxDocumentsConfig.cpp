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

#include <tencentcloud/tse/v20201207/model/AIGWRerankMaxDocumentsConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWRerankMaxDocumentsConfig::AIGWRerankMaxDocumentsConfig() :
    m_enableMaxDocumentsHasBeenSet(false),
    m_maxDocumentValueHasBeenSet(false)
{
}

CoreInternalOutcome AIGWRerankMaxDocumentsConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableMaxDocuments") && !value["EnableMaxDocuments"].IsNull())
    {
        if (!value["EnableMaxDocuments"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWRerankMaxDocumentsConfig.EnableMaxDocuments` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMaxDocuments = value["EnableMaxDocuments"].GetBool();
        m_enableMaxDocumentsHasBeenSet = true;
    }

    if (value.HasMember("MaxDocumentValue") && !value["MaxDocumentValue"].IsNull())
    {
        if (!value["MaxDocumentValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWRerankMaxDocumentsConfig.MaxDocumentValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDocumentValue = value["MaxDocumentValue"].GetInt64();
        m_maxDocumentValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWRerankMaxDocumentsConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableMaxDocumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMaxDocuments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMaxDocuments, allocator);
    }

    if (m_maxDocumentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDocumentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDocumentValue, allocator);
    }

}


bool AIGWRerankMaxDocumentsConfig::GetEnableMaxDocuments() const
{
    return m_enableMaxDocuments;
}

void AIGWRerankMaxDocumentsConfig::SetEnableMaxDocuments(const bool& _enableMaxDocuments)
{
    m_enableMaxDocuments = _enableMaxDocuments;
    m_enableMaxDocumentsHasBeenSet = true;
}

bool AIGWRerankMaxDocumentsConfig::EnableMaxDocumentsHasBeenSet() const
{
    return m_enableMaxDocumentsHasBeenSet;
}

int64_t AIGWRerankMaxDocumentsConfig::GetMaxDocumentValue() const
{
    return m_maxDocumentValue;
}

void AIGWRerankMaxDocumentsConfig::SetMaxDocumentValue(const int64_t& _maxDocumentValue)
{
    m_maxDocumentValue = _maxDocumentValue;
    m_maxDocumentValueHasBeenSet = true;
}

bool AIGWRerankMaxDocumentsConfig::MaxDocumentValueHasBeenSet() const
{
    return m_maxDocumentValueHasBeenSet;
}

