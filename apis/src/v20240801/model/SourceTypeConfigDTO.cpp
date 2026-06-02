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

#include <tencentcloud/apis/v20240801/model/SourceTypeConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

SourceTypeConfigDTO::SourceTypeConfigDTO() :
    m_reqSourceTypeHasBeenSet(false),
    m_reqTargetTypeHasBeenSet(false),
    m_resSourceTypeHasBeenSet(false),
    m_resTargetTypeHasBeenSet(false)
{
}

CoreInternalOutcome SourceTypeConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReqSourceType") && !value["ReqSourceType"].IsNull())
    {
        if (!value["ReqSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceTypeConfigDTO.ReqSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqSourceType = string(value["ReqSourceType"].GetString());
        m_reqSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ReqTargetType") && !value["ReqTargetType"].IsNull())
    {
        if (!value["ReqTargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceTypeConfigDTO.ReqTargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqTargetType = string(value["ReqTargetType"].GetString());
        m_reqTargetTypeHasBeenSet = true;
    }

    if (value.HasMember("ResSourceType") && !value["ResSourceType"].IsNull())
    {
        if (!value["ResSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceTypeConfigDTO.ResSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resSourceType = string(value["ResSourceType"].GetString());
        m_resSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResTargetType") && !value["ResTargetType"].IsNull())
    {
        if (!value["ResTargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceTypeConfigDTO.ResTargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resTargetType = string(value["ResTargetType"].GetString());
        m_resTargetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceTypeConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reqSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTargetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqTargetType.c_str(), allocator).Move(), allocator);
    }

    if (m_resSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resTargetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResTargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resTargetType.c_str(), allocator).Move(), allocator);
    }

}


string SourceTypeConfigDTO::GetReqSourceType() const
{
    return m_reqSourceType;
}

void SourceTypeConfigDTO::SetReqSourceType(const string& _reqSourceType)
{
    m_reqSourceType = _reqSourceType;
    m_reqSourceTypeHasBeenSet = true;
}

bool SourceTypeConfigDTO::ReqSourceTypeHasBeenSet() const
{
    return m_reqSourceTypeHasBeenSet;
}

string SourceTypeConfigDTO::GetReqTargetType() const
{
    return m_reqTargetType;
}

void SourceTypeConfigDTO::SetReqTargetType(const string& _reqTargetType)
{
    m_reqTargetType = _reqTargetType;
    m_reqTargetTypeHasBeenSet = true;
}

bool SourceTypeConfigDTO::ReqTargetTypeHasBeenSet() const
{
    return m_reqTargetTypeHasBeenSet;
}

string SourceTypeConfigDTO::GetResSourceType() const
{
    return m_resSourceType;
}

void SourceTypeConfigDTO::SetResSourceType(const string& _resSourceType)
{
    m_resSourceType = _resSourceType;
    m_resSourceTypeHasBeenSet = true;
}

bool SourceTypeConfigDTO::ResSourceTypeHasBeenSet() const
{
    return m_resSourceTypeHasBeenSet;
}

string SourceTypeConfigDTO::GetResTargetType() const
{
    return m_resTargetType;
}

void SourceTypeConfigDTO::SetResTargetType(const string& _resTargetType)
{
    m_resTargetType = _resTargetType;
    m_resTargetTypeHasBeenSet = true;
}

bool SourceTypeConfigDTO::ResTargetTypeHasBeenSet() const
{
    return m_resTargetTypeHasBeenSet;
}

