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

#include <tencentcloud/mps/v20190612/model/UpdateSmartEraseSubtitleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

UpdateSmartEraseSubtitleConfig::UpdateSmartEraseSubtitleConfig() :
    m_subtitleEraseMethodHasBeenSet(false),
    m_subtitleModelHasBeenSet(false),
    m_ocrSwitchHasBeenSet(false),
    m_subtitleLangHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_transSwitchHasBeenSet(false),
    m_transDstLangHasBeenSet(false),
    m_autoAreasHasBeenSet(false),
    m_customAreasHasBeenSet(false)
{
}

CoreInternalOutcome UpdateSmartEraseSubtitleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleEraseMethod") && !value["SubtitleEraseMethod"].IsNull())
    {
        if (!value["SubtitleEraseMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.SubtitleEraseMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleEraseMethod = string(value["SubtitleEraseMethod"].GetString());
        m_subtitleEraseMethodHasBeenSet = true;
    }

    if (value.HasMember("SubtitleModel") && !value["SubtitleModel"].IsNull())
    {
        if (!value["SubtitleModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.SubtitleModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleModel = string(value["SubtitleModel"].GetString());
        m_subtitleModelHasBeenSet = true;
    }

    if (value.HasMember("OcrSwitch") && !value["OcrSwitch"].IsNull())
    {
        if (!value["OcrSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.OcrSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrSwitch = string(value["OcrSwitch"].GetString());
        m_ocrSwitchHasBeenSet = true;
    }

    if (value.HasMember("SubtitleLang") && !value["SubtitleLang"].IsNull())
    {
        if (!value["SubtitleLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.SubtitleLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleLang = string(value["SubtitleLang"].GetString());
        m_subtitleLangHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("TransSwitch") && !value["TransSwitch"].IsNull())
    {
        if (!value["TransSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.TransSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transSwitch = string(value["TransSwitch"].GetString());
        m_transSwitchHasBeenSet = true;
    }

    if (value.HasMember("TransDstLang") && !value["TransDstLang"].IsNull())
    {
        if (!value["TransDstLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.TransDstLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDstLang = string(value["TransDstLang"].GetString());
        m_transDstLangHasBeenSet = true;
    }

    if (value.HasMember("AutoAreas") && !value["AutoAreas"].IsNull())
    {
        if (!value["AutoAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.AutoAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EraseArea item;
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
            return CoreInternalOutcome(Core::Error("response `UpdateSmartEraseSubtitleConfig.CustomAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EraseTimeArea item;
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

void UpdateSmartEraseSubtitleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleEraseMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleEraseMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleEraseMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleModel.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleLang.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_transSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_transDstLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransDstLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transDstLang.c_str(), allocator).Move(), allocator);
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


string UpdateSmartEraseSubtitleConfig::GetSubtitleEraseMethod() const
{
    return m_subtitleEraseMethod;
}

void UpdateSmartEraseSubtitleConfig::SetSubtitleEraseMethod(const string& _subtitleEraseMethod)
{
    m_subtitleEraseMethod = _subtitleEraseMethod;
    m_subtitleEraseMethodHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::SubtitleEraseMethodHasBeenSet() const
{
    return m_subtitleEraseMethodHasBeenSet;
}

string UpdateSmartEraseSubtitleConfig::GetSubtitleModel() const
{
    return m_subtitleModel;
}

void UpdateSmartEraseSubtitleConfig::SetSubtitleModel(const string& _subtitleModel)
{
    m_subtitleModel = _subtitleModel;
    m_subtitleModelHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::SubtitleModelHasBeenSet() const
{
    return m_subtitleModelHasBeenSet;
}

string UpdateSmartEraseSubtitleConfig::GetOcrSwitch() const
{
    return m_ocrSwitch;
}

void UpdateSmartEraseSubtitleConfig::SetOcrSwitch(const string& _ocrSwitch)
{
    m_ocrSwitch = _ocrSwitch;
    m_ocrSwitchHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::OcrSwitchHasBeenSet() const
{
    return m_ocrSwitchHasBeenSet;
}

string UpdateSmartEraseSubtitleConfig::GetSubtitleLang() const
{
    return m_subtitleLang;
}

void UpdateSmartEraseSubtitleConfig::SetSubtitleLang(const string& _subtitleLang)
{
    m_subtitleLang = _subtitleLang;
    m_subtitleLangHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::SubtitleLangHasBeenSet() const
{
    return m_subtitleLangHasBeenSet;
}

string UpdateSmartEraseSubtitleConfig::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void UpdateSmartEraseSubtitleConfig::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string UpdateSmartEraseSubtitleConfig::GetTransSwitch() const
{
    return m_transSwitch;
}

void UpdateSmartEraseSubtitleConfig::SetTransSwitch(const string& _transSwitch)
{
    m_transSwitch = _transSwitch;
    m_transSwitchHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::TransSwitchHasBeenSet() const
{
    return m_transSwitchHasBeenSet;
}

string UpdateSmartEraseSubtitleConfig::GetTransDstLang() const
{
    return m_transDstLang;
}

void UpdateSmartEraseSubtitleConfig::SetTransDstLang(const string& _transDstLang)
{
    m_transDstLang = _transDstLang;
    m_transDstLangHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::TransDstLangHasBeenSet() const
{
    return m_transDstLangHasBeenSet;
}

vector<EraseArea> UpdateSmartEraseSubtitleConfig::GetAutoAreas() const
{
    return m_autoAreas;
}

void UpdateSmartEraseSubtitleConfig::SetAutoAreas(const vector<EraseArea>& _autoAreas)
{
    m_autoAreas = _autoAreas;
    m_autoAreasHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::AutoAreasHasBeenSet() const
{
    return m_autoAreasHasBeenSet;
}

vector<EraseTimeArea> UpdateSmartEraseSubtitleConfig::GetCustomAreas() const
{
    return m_customAreas;
}

void UpdateSmartEraseSubtitleConfig::SetCustomAreas(const vector<EraseTimeArea>& _customAreas)
{
    m_customAreas = _customAreas;
    m_customAreasHasBeenSet = true;
}

bool UpdateSmartEraseSubtitleConfig::CustomAreasHasBeenSet() const
{
    return m_customAreasHasBeenSet;
}

