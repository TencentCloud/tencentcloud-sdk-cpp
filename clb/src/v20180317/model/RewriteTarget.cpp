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

#include <tencentcloud/clb/v20180317/model/RewriteTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RewriteTarget::RewriteTarget() :
    m_targetListenerIdHasBeenSet(false),
    m_targetLocationIdHasBeenSet(false),
    m_rewriteCodeHasBeenSet(false),
    m_takeUrlHasBeenSet(false),
    m_rewriteTypeHasBeenSet(false)
{
}

CoreInternalOutcome RewriteTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetListenerId") && !value["TargetListenerId"].IsNull())
    {
        if (!value["TargetListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteTarget.TargetListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetListenerId = string(value["TargetListenerId"].GetString());
        m_targetListenerIdHasBeenSet = true;
    }

    if (value.HasMember("TargetLocationId") && !value["TargetLocationId"].IsNull())
    {
        if (!value["TargetLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteTarget.TargetLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLocationId = string(value["TargetLocationId"].GetString());
        m_targetLocationIdHasBeenSet = true;
    }

    if (value.HasMember("RewriteCode") && !value["RewriteCode"].IsNull())
    {
        if (!value["RewriteCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteTarget.RewriteCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteCode = value["RewriteCode"].GetInt64();
        m_rewriteCodeHasBeenSet = true;
    }

    if (value.HasMember("TakeUrl") && !value["TakeUrl"].IsNull())
    {
        if (!value["TakeUrl"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteTarget.TakeUrl` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_takeUrl = value["TakeUrl"].GetBool();
        m_takeUrlHasBeenSet = true;
    }

    if (value.HasMember("RewriteType") && !value["RewriteType"].IsNull())
    {
        if (!value["RewriteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RewriteTarget.RewriteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteType = string(value["RewriteType"].GetString());
        m_rewriteTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RewriteTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetListenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetListenerId.c_str(), allocator).Move(), allocator);
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

    if (m_rewriteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewriteType.c_str(), allocator).Move(), allocator);
    }

}


string RewriteTarget::GetTargetListenerId() const
{
    return m_targetListenerId;
}

void RewriteTarget::SetTargetListenerId(const string& _targetListenerId)
{
    m_targetListenerId = _targetListenerId;
    m_targetListenerIdHasBeenSet = true;
}

bool RewriteTarget::TargetListenerIdHasBeenSet() const
{
    return m_targetListenerIdHasBeenSet;
}

string RewriteTarget::GetTargetLocationId() const
{
    return m_targetLocationId;
}

void RewriteTarget::SetTargetLocationId(const string& _targetLocationId)
{
    m_targetLocationId = _targetLocationId;
    m_targetLocationIdHasBeenSet = true;
}

bool RewriteTarget::TargetLocationIdHasBeenSet() const
{
    return m_targetLocationIdHasBeenSet;
}

int64_t RewriteTarget::GetRewriteCode() const
{
    return m_rewriteCode;
}

void RewriteTarget::SetRewriteCode(const int64_t& _rewriteCode)
{
    m_rewriteCode = _rewriteCode;
    m_rewriteCodeHasBeenSet = true;
}

bool RewriteTarget::RewriteCodeHasBeenSet() const
{
    return m_rewriteCodeHasBeenSet;
}

bool RewriteTarget::GetTakeUrl() const
{
    return m_takeUrl;
}

void RewriteTarget::SetTakeUrl(const bool& _takeUrl)
{
    m_takeUrl = _takeUrl;
    m_takeUrlHasBeenSet = true;
}

bool RewriteTarget::TakeUrlHasBeenSet() const
{
    return m_takeUrlHasBeenSet;
}

string RewriteTarget::GetRewriteType() const
{
    return m_rewriteType;
}

void RewriteTarget::SetRewriteType(const string& _rewriteType)
{
    m_rewriteType = _rewriteType;
    m_rewriteTypeHasBeenSet = true;
}

bool RewriteTarget::RewriteTypeHasBeenSet() const
{
    return m_rewriteTypeHasBeenSet;
}

