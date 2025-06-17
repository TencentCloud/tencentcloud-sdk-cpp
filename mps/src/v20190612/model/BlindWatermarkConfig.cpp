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

#include <tencentcloud/mps/v20190612/model/BlindWatermarkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BlindWatermarkConfig::BlindWatermarkConfig() :
    m_addBlindWatermarkHasBeenSet(false),
    m_extractBlindWatermarkHasBeenSet(false),
    m_removeBlindWatermarkHasBeenSet(false)
{
}

CoreInternalOutcome BlindWatermarkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddBlindWatermark") && !value["AddBlindWatermark"].IsNull())
    {
        if (!value["AddBlindWatermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkConfig.AddBlindWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addBlindWatermark.Deserialize(value["AddBlindWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addBlindWatermarkHasBeenSet = true;
    }

    if (value.HasMember("ExtractBlindWatermark") && !value["ExtractBlindWatermark"].IsNull())
    {
        if (!value["ExtractBlindWatermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkConfig.ExtractBlindWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractBlindWatermark.Deserialize(value["ExtractBlindWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractBlindWatermarkHasBeenSet = true;
    }

    if (value.HasMember("RemoveBlindWatermark") && !value["RemoveBlindWatermark"].IsNull())
    {
        if (!value["RemoveBlindWatermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkConfig.RemoveBlindWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_removeBlindWatermark.Deserialize(value["RemoveBlindWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_removeBlindWatermarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlindWatermarkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addBlindWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddBlindWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addBlindWatermark.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extractBlindWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractBlindWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractBlindWatermark.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removeBlindWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveBlindWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_removeBlindWatermark.ToJsonObject(value[key.c_str()], allocator);
    }

}


AddBlindWatermarkConfig BlindWatermarkConfig::GetAddBlindWatermark() const
{
    return m_addBlindWatermark;
}

void BlindWatermarkConfig::SetAddBlindWatermark(const AddBlindWatermarkConfig& _addBlindWatermark)
{
    m_addBlindWatermark = _addBlindWatermark;
    m_addBlindWatermarkHasBeenSet = true;
}

bool BlindWatermarkConfig::AddBlindWatermarkHasBeenSet() const
{
    return m_addBlindWatermarkHasBeenSet;
}

ExtractBlindWatermarkConfig BlindWatermarkConfig::GetExtractBlindWatermark() const
{
    return m_extractBlindWatermark;
}

void BlindWatermarkConfig::SetExtractBlindWatermark(const ExtractBlindWatermarkConfig& _extractBlindWatermark)
{
    m_extractBlindWatermark = _extractBlindWatermark;
    m_extractBlindWatermarkHasBeenSet = true;
}

bool BlindWatermarkConfig::ExtractBlindWatermarkHasBeenSet() const
{
    return m_extractBlindWatermarkHasBeenSet;
}

RemoveBlindWatermarkConfig BlindWatermarkConfig::GetRemoveBlindWatermark() const
{
    return m_removeBlindWatermark;
}

void BlindWatermarkConfig::SetRemoveBlindWatermark(const RemoveBlindWatermarkConfig& _removeBlindWatermark)
{
    m_removeBlindWatermark = _removeBlindWatermark;
    m_removeBlindWatermarkHasBeenSet = true;
}

bool BlindWatermarkConfig::RemoveBlindWatermarkHasBeenSet() const
{
    return m_removeBlindWatermarkHasBeenSet;
}

