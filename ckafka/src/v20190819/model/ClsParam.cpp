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

#include <tencentcloud/ckafka/v20190819/model/ClsParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ClsParam::ClsParam() :
    m_decodeJsonHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_contentKeyHasBeenSet(false),
    m_timeFieldHasBeenSet(false)
{
}

CoreInternalOutcome ClsParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DecodeJson") && !value["DecodeJson"].IsNull())
    {
        if (!value["DecodeJson"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClsParam.DecodeJson` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_decodeJson = value["DecodeJson"].GetBool();
        m_decodeJsonHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("LogSet") && !value["LogSet"].IsNull())
    {
        if (!value["LogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsParam.LogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSet = string(value["LogSet"].GetString());
        m_logSetHasBeenSet = true;
    }

    if (value.HasMember("ContentKey") && !value["ContentKey"].IsNull())
    {
        if (!value["ContentKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsParam.ContentKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentKey = string(value["ContentKey"].GetString());
        m_contentKeyHasBeenSet = true;
    }

    if (value.HasMember("TimeField") && !value["TimeField"].IsNull())
    {
        if (!value["TimeField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsParam.TimeField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeField = string(value["TimeField"].GetString());
        m_timeFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClsParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_decodeJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecodeJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_decodeJson, allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_contentKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeField.c_str(), allocator).Move(), allocator);
    }

}


bool ClsParam::GetDecodeJson() const
{
    return m_decodeJson;
}

void ClsParam::SetDecodeJson(const bool& _decodeJson)
{
    m_decodeJson = _decodeJson;
    m_decodeJsonHasBeenSet = true;
}

bool ClsParam::DecodeJsonHasBeenSet() const
{
    return m_decodeJsonHasBeenSet;
}

string ClsParam::GetResource() const
{
    return m_resource;
}

void ClsParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ClsParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ClsParam::GetLogSet() const
{
    return m_logSet;
}

void ClsParam::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool ClsParam::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

string ClsParam::GetContentKey() const
{
    return m_contentKey;
}

void ClsParam::SetContentKey(const string& _contentKey)
{
    m_contentKey = _contentKey;
    m_contentKeyHasBeenSet = true;
}

bool ClsParam::ContentKeyHasBeenSet() const
{
    return m_contentKeyHasBeenSet;
}

string ClsParam::GetTimeField() const
{
    return m_timeField;
}

void ClsParam::SetTimeField(const string& _timeField)
{
    m_timeField = _timeField;
    m_timeFieldHasBeenSet = true;
}

bool ClsParam::TimeFieldHasBeenSet() const
{
    return m_timeFieldHasBeenSet;
}

