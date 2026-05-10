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

#include <tencentcloud/vod/v20180717/model/MPSUpdateSmartEraseSubtitleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSUpdateSmartEraseSubtitleConfig::MPSUpdateSmartEraseSubtitleConfig() :
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

CoreInternalOutcome MPSUpdateSmartEraseSubtitleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleEraseMethod") && !value["SubtitleEraseMethod"].IsNull())
    {
        if (!value["SubtitleEraseMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.SubtitleEraseMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleEraseMethod = string(value["SubtitleEraseMethod"].GetString());
        m_subtitleEraseMethodHasBeenSet = true;
    }

    if (value.HasMember("SubtitleModel") && !value["SubtitleModel"].IsNull())
    {
        if (!value["SubtitleModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.SubtitleModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleModel = string(value["SubtitleModel"].GetString());
        m_subtitleModelHasBeenSet = true;
    }

    if (value.HasMember("OcrSwitch") && !value["OcrSwitch"].IsNull())
    {
        if (!value["OcrSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.OcrSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrSwitch = string(value["OcrSwitch"].GetString());
        m_ocrSwitchHasBeenSet = true;
    }

    if (value.HasMember("SubtitleLang") && !value["SubtitleLang"].IsNull())
    {
        if (!value["SubtitleLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.SubtitleLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleLang = string(value["SubtitleLang"].GetString());
        m_subtitleLangHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("TransSwitch") && !value["TransSwitch"].IsNull())
    {
        if (!value["TransSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.TransSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transSwitch = string(value["TransSwitch"].GetString());
        m_transSwitchHasBeenSet = true;
    }

    if (value.HasMember("TransDstLang") && !value["TransDstLang"].IsNull())
    {
        if (!value["TransDstLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.TransDstLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDstLang = string(value["TransDstLang"].GetString());
        m_transDstLangHasBeenSet = true;
    }

    if (value.HasMember("AutoAreas") && !value["AutoAreas"].IsNull())
    {
        if (!value["AutoAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.AutoAreas` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `MPSUpdateSmartEraseSubtitleConfig.CustomAreas` is not array type"));

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

void MPSUpdateSmartEraseSubtitleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string MPSUpdateSmartEraseSubtitleConfig::GetSubtitleEraseMethod() const
{
    return m_subtitleEraseMethod;
}

void MPSUpdateSmartEraseSubtitleConfig::SetSubtitleEraseMethod(const string& _subtitleEraseMethod)
{
    m_subtitleEraseMethod = _subtitleEraseMethod;
    m_subtitleEraseMethodHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::SubtitleEraseMethodHasBeenSet() const
{
    return m_subtitleEraseMethodHasBeenSet;
}

string MPSUpdateSmartEraseSubtitleConfig::GetSubtitleModel() const
{
    return m_subtitleModel;
}

void MPSUpdateSmartEraseSubtitleConfig::SetSubtitleModel(const string& _subtitleModel)
{
    m_subtitleModel = _subtitleModel;
    m_subtitleModelHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::SubtitleModelHasBeenSet() const
{
    return m_subtitleModelHasBeenSet;
}

string MPSUpdateSmartEraseSubtitleConfig::GetOcrSwitch() const
{
    return m_ocrSwitch;
}

void MPSUpdateSmartEraseSubtitleConfig::SetOcrSwitch(const string& _ocrSwitch)
{
    m_ocrSwitch = _ocrSwitch;
    m_ocrSwitchHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::OcrSwitchHasBeenSet() const
{
    return m_ocrSwitchHasBeenSet;
}

string MPSUpdateSmartEraseSubtitleConfig::GetSubtitleLang() const
{
    return m_subtitleLang;
}

void MPSUpdateSmartEraseSubtitleConfig::SetSubtitleLang(const string& _subtitleLang)
{
    m_subtitleLang = _subtitleLang;
    m_subtitleLangHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::SubtitleLangHasBeenSet() const
{
    return m_subtitleLangHasBeenSet;
}

string MPSUpdateSmartEraseSubtitleConfig::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void MPSUpdateSmartEraseSubtitleConfig::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string MPSUpdateSmartEraseSubtitleConfig::GetTransSwitch() const
{
    return m_transSwitch;
}

void MPSUpdateSmartEraseSubtitleConfig::SetTransSwitch(const string& _transSwitch)
{
    m_transSwitch = _transSwitch;
    m_transSwitchHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::TransSwitchHasBeenSet() const
{
    return m_transSwitchHasBeenSet;
}

string MPSUpdateSmartEraseSubtitleConfig::GetTransDstLang() const
{
    return m_transDstLang;
}

void MPSUpdateSmartEraseSubtitleConfig::SetTransDstLang(const string& _transDstLang)
{
    m_transDstLang = _transDstLang;
    m_transDstLangHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::TransDstLangHasBeenSet() const
{
    return m_transDstLangHasBeenSet;
}

vector<MPSEraseArea> MPSUpdateSmartEraseSubtitleConfig::GetAutoAreas() const
{
    return m_autoAreas;
}

void MPSUpdateSmartEraseSubtitleConfig::SetAutoAreas(const vector<MPSEraseArea>& _autoAreas)
{
    m_autoAreas = _autoAreas;
    m_autoAreasHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::AutoAreasHasBeenSet() const
{
    return m_autoAreasHasBeenSet;
}

vector<MPSEraseTimeArea> MPSUpdateSmartEraseSubtitleConfig::GetCustomAreas() const
{
    return m_customAreas;
}

void MPSUpdateSmartEraseSubtitleConfig::SetCustomAreas(const vector<MPSEraseTimeArea>& _customAreas)
{
    m_customAreas = _customAreas;
    m_customAreasHasBeenSet = true;
}

bool MPSUpdateSmartEraseSubtitleConfig::CustomAreasHasBeenSet() const
{
    return m_customAreasHasBeenSet;
}

