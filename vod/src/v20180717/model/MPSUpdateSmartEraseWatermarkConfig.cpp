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

#include <tencentcloud/vod/v20180717/model/MPSUpdateSmartEraseWatermarkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSUpdateSmartEraseWatermarkConfig::MPSUpdateSmartEraseWatermarkConfig() :
    m_watermarkEraseMethodHasBeenSet(false),
    m_watermarkModelHasBeenSet(false),
    m_autoAreasHasBeenSet(false),
    m_customAreasHasBeenSet(false)
{
}

CoreInternalOutcome MPSUpdateSmartEraseWatermarkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WatermarkEraseMethod") && !value["WatermarkEraseMethod"].IsNull())
    {
        if (!value["WatermarkEraseMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseWatermarkConfig.WatermarkEraseMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkEraseMethod = string(value["WatermarkEraseMethod"].GetString());
        m_watermarkEraseMethodHasBeenSet = true;
    }

    if (value.HasMember("WatermarkModel") && !value["WatermarkModel"].IsNull())
    {
        if (!value["WatermarkModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseWatermarkConfig.WatermarkModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkModel = string(value["WatermarkModel"].GetString());
        m_watermarkModelHasBeenSet = true;
    }

    if (value.HasMember("AutoAreas") && !value["AutoAreas"].IsNull())
    {
        if (!value["AutoAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseWatermarkConfig.AutoAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MPSEraseArea item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_autoAreas.push_back(item);
        }
        m_autoAreasHasBeenSet = true;
    }

    if (value.HasMember("CustomAreas") && !value["CustomAreas"].IsNull())
    {
        if (!value["CustomAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseWatermarkConfig.CustomAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MPSEraseTimeArea item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customAreas.push_back(item);
        }
        m_customAreasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSUpdateSmartEraseWatermarkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_watermarkEraseMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkEraseMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watermarkEraseMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_watermarkModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watermarkModel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoAreas.begin(); itr != m_autoAreas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomAreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customAreas.begin(); itr != m_customAreas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MPSUpdateSmartEraseWatermarkConfig::GetWatermarkEraseMethod() const
{
    return m_watermarkEraseMethod;
}

void MPSUpdateSmartEraseWatermarkConfig::SetWatermarkEraseMethod(const string& _watermarkEraseMethod)
{
    m_watermarkEraseMethod = _watermarkEraseMethod;
    m_watermarkEraseMethodHasBeenSet = true;
}

bool MPSUpdateSmartEraseWatermarkConfig::WatermarkEraseMethodHasBeenSet() const
{
    return m_watermarkEraseMethodHasBeenSet;
}

string MPSUpdateSmartEraseWatermarkConfig::GetWatermarkModel() const
{
    return m_watermarkModel;
}

void MPSUpdateSmartEraseWatermarkConfig::SetWatermarkModel(const string& _watermarkModel)
{
    m_watermarkModel = _watermarkModel;
    m_watermarkModelHasBeenSet = true;
}

bool MPSUpdateSmartEraseWatermarkConfig::WatermarkModelHasBeenSet() const
{
    return m_watermarkModelHasBeenSet;
}

vector<MPSEraseArea> MPSUpdateSmartEraseWatermarkConfig::GetAutoAreas() const
{
    return m_autoAreas;
}

void MPSUpdateSmartEraseWatermarkConfig::SetAutoAreas(const vector<MPSEraseArea>& _autoAreas)
{
    m_autoAreas = _autoAreas;
    m_autoAreasHasBeenSet = true;
}

bool MPSUpdateSmartEraseWatermarkConfig::AutoAreasHasBeenSet() const
{
    return m_autoAreasHasBeenSet;
}

vector<MPSEraseTimeArea> MPSUpdateSmartEraseWatermarkConfig::GetCustomAreas() const
{
    return m_customAreas;
}

void MPSUpdateSmartEraseWatermarkConfig::SetCustomAreas(const vector<MPSEraseTimeArea>& _customAreas)
{
    m_customAreas = _customAreas;
    m_customAreasHasBeenSet = true;
}

bool MPSUpdateSmartEraseWatermarkConfig::CustomAreasHasBeenSet() const
{
    return m_customAreasHasBeenSet;
}

