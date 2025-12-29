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

#include <tencentcloud/lke/v20231130/model/QaReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

QaReference::QaReference() :
    m_qaBizIdHasBeenSet(false),
    m_referBizIdHasBeenSet(false),
    m_knowledgeBizIdHasBeenSet(false),
    m_knowledgeNameHasBeenSet(false)
{
}

CoreInternalOutcome QaReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QaBizId") && !value["QaBizId"].IsNull())
    {
        if (!value["QaBizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QaReference.QaBizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = value["QaBizId"].GetUint64();
        m_qaBizIdHasBeenSet = true;
    }

    if (value.HasMember("ReferBizId") && !value["ReferBizId"].IsNull())
    {
        if (!value["ReferBizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QaReference.ReferBizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_referBizId = value["ReferBizId"].GetUint64();
        m_referBizIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QaReference.KnowledgeBizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = value["KnowledgeBizId"].GetUint64();
        m_knowledgeBizIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeName") && !value["KnowledgeName"].IsNull())
    {
        if (!value["KnowledgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaReference.KnowledgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeName = string(value["KnowledgeName"].GetString());
        m_knowledgeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QaReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qaBizId, allocator);
    }

    if (m_referBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referBizId, allocator);
    }

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeBizId, allocator);
    }

    if (m_knowledgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QaReference::GetQaBizId() const
{
    return m_qaBizId;
}

void QaReference::SetQaBizId(const uint64_t& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool QaReference::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

uint64_t QaReference::GetReferBizId() const
{
    return m_referBizId;
}

void QaReference::SetReferBizId(const uint64_t& _referBizId)
{
    m_referBizId = _referBizId;
    m_referBizIdHasBeenSet = true;
}

bool QaReference::ReferBizIdHasBeenSet() const
{
    return m_referBizIdHasBeenSet;
}

uint64_t QaReference::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void QaReference::SetKnowledgeBizId(const uint64_t& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool QaReference::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

string QaReference::GetKnowledgeName() const
{
    return m_knowledgeName;
}

void QaReference::SetKnowledgeName(const string& _knowledgeName)
{
    m_knowledgeName = _knowledgeName;
    m_knowledgeNameHasBeenSet = true;
}

bool QaReference::KnowledgeNameHasBeenSet() const
{
    return m_knowledgeNameHasBeenSet;
}

