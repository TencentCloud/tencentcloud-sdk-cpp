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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailFieldMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailFieldMapping::CustomGuardrailFieldMapping() :
    m_hitFieldPathHasBeenSet(false),
    m_hitValueHasBeenSet(false),
    m_messageFieldPathHasBeenSet(false),
    m_rewriteFieldPathHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailFieldMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HitFieldPath") && !value["HitFieldPath"].IsNull())
    {
        if (!value["HitFieldPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFieldMapping.HitFieldPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitFieldPath = string(value["HitFieldPath"].GetString());
        m_hitFieldPathHasBeenSet = true;
    }

    if (value.HasMember("HitValue") && !value["HitValue"].IsNull())
    {
        if (!value["HitValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFieldMapping.HitValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitValue = string(value["HitValue"].GetString());
        m_hitValueHasBeenSet = true;
    }

    if (value.HasMember("MessageFieldPath") && !value["MessageFieldPath"].IsNull())
    {
        if (!value["MessageFieldPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFieldMapping.MessageFieldPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageFieldPath = string(value["MessageFieldPath"].GetString());
        m_messageFieldPathHasBeenSet = true;
    }

    if (value.HasMember("RewriteFieldPath") && !value["RewriteFieldPath"].IsNull())
    {
        if (!value["RewriteFieldPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFieldMapping.RewriteFieldPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteFieldPath = string(value["RewriteFieldPath"].GetString());
        m_rewriteFieldPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailFieldMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitFieldPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFieldPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitFieldPath.c_str(), allocator).Move(), allocator);
    }

    if (m_hitValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitValue.c_str(), allocator).Move(), allocator);
    }

    if (m_messageFieldPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageFieldPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageFieldPath.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteFieldPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteFieldPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewriteFieldPath.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailFieldMapping::GetHitFieldPath() const
{
    return m_hitFieldPath;
}

void CustomGuardrailFieldMapping::SetHitFieldPath(const string& _hitFieldPath)
{
    m_hitFieldPath = _hitFieldPath;
    m_hitFieldPathHasBeenSet = true;
}

bool CustomGuardrailFieldMapping::HitFieldPathHasBeenSet() const
{
    return m_hitFieldPathHasBeenSet;
}

string CustomGuardrailFieldMapping::GetHitValue() const
{
    return m_hitValue;
}

void CustomGuardrailFieldMapping::SetHitValue(const string& _hitValue)
{
    m_hitValue = _hitValue;
    m_hitValueHasBeenSet = true;
}

bool CustomGuardrailFieldMapping::HitValueHasBeenSet() const
{
    return m_hitValueHasBeenSet;
}

string CustomGuardrailFieldMapping::GetMessageFieldPath() const
{
    return m_messageFieldPath;
}

void CustomGuardrailFieldMapping::SetMessageFieldPath(const string& _messageFieldPath)
{
    m_messageFieldPath = _messageFieldPath;
    m_messageFieldPathHasBeenSet = true;
}

bool CustomGuardrailFieldMapping::MessageFieldPathHasBeenSet() const
{
    return m_messageFieldPathHasBeenSet;
}

string CustomGuardrailFieldMapping::GetRewriteFieldPath() const
{
    return m_rewriteFieldPath;
}

void CustomGuardrailFieldMapping::SetRewriteFieldPath(const string& _rewriteFieldPath)
{
    m_rewriteFieldPath = _rewriteFieldPath;
    m_rewriteFieldPathHasBeenSet = true;
}

bool CustomGuardrailFieldMapping::RewriteFieldPathHasBeenSet() const
{
    return m_rewriteFieldPathHasBeenSet;
}

