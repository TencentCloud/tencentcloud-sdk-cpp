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

#include <tencentcloud/vod/v20180717/model/MPSSmartEraseSubtitleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSmartEraseSubtitleConfig::MPSSmartEraseSubtitleConfig() :
    m_subtitleEraseMethodHasBeenSet(false),
    m_subtitleModelHasBeenSet(false),
    m_ocrSwitchHasBeenSet(false),
    m_subtitleLangHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_transSwitchHasBeenSet(false),
    m_transDstLangHasBeenSet(false),
    m_autoAreasHasBeenSet(false),
    m_customAreasHasBeenSet(false),
    m_useOriginalPosHasBeenSet(false),
    m_useOriginalSizeHasBeenSet(false)
{
}

CoreInternalOutcome MPSSmartEraseSubtitleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleEraseMethod") && !value["SubtitleEraseMethod"].IsNull())
    {
        if (!value["SubtitleEraseMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.SubtitleEraseMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleEraseMethod = string(value["SubtitleEraseMethod"].GetString());
        m_subtitleEraseMethodHasBeenSet = true;
    }

    if (value.HasMember("SubtitleModel") && !value["SubtitleModel"].IsNull())
    {
        if (!value["SubtitleModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.SubtitleModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleModel = string(value["SubtitleModel"].GetString());
        m_subtitleModelHasBeenSet = true;
    }

    if (value.HasMember("OcrSwitch") && !value["OcrSwitch"].IsNull())
    {
        if (!value["OcrSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.OcrSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrSwitch = string(value["OcrSwitch"].GetString());
        m_ocrSwitchHasBeenSet = true;
    }

    if (value.HasMember("SubtitleLang") && !value["SubtitleLang"].IsNull())
    {
        if (!value["SubtitleLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.SubtitleLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleLang = string(value["SubtitleLang"].GetString());
        m_subtitleLangHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("TransSwitch") && !value["TransSwitch"].IsNull())
    {
        if (!value["TransSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.TransSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transSwitch = string(value["TransSwitch"].GetString());
        m_transSwitchHasBeenSet = true;
    }

    if (value.HasMember("TransDstLang") && !value["TransDstLang"].IsNull())
    {
        if (!value["TransDstLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.TransDstLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDstLang = string(value["TransDstLang"].GetString());
        m_transDstLangHasBeenSet = true;
    }

    if (value.HasMember("AutoAreas") && !value["AutoAreas"].IsNull())
    {
        if (!value["AutoAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.AutoAreas` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.CustomAreas` is not array type"));

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

    if (value.HasMember("UseOriginalPos") && !value["UseOriginalPos"].IsNull())
    {
        if (!value["UseOriginalPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.UseOriginalPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useOriginalPos = value["UseOriginalPos"].GetInt64();
        m_useOriginalPosHasBeenSet = true;
    }

    if (value.HasMember("UseOriginalSize") && !value["UseOriginalSize"].IsNull())
    {
        if (!value["UseOriginalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartEraseSubtitleConfig.UseOriginalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useOriginalSize = value["UseOriginalSize"].GetInt64();
        m_useOriginalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSmartEraseSubtitleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_useOriginalPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOriginalPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useOriginalPos, allocator);
    }

    if (m_useOriginalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOriginalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useOriginalSize, allocator);
    }

}


string MPSSmartEraseSubtitleConfig::GetSubtitleEraseMethod() const
{
    return m_subtitleEraseMethod;
}

void MPSSmartEraseSubtitleConfig::SetSubtitleEraseMethod(const string& _subtitleEraseMethod)
{
    m_subtitleEraseMethod = _subtitleEraseMethod;
    m_subtitleEraseMethodHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::SubtitleEraseMethodHasBeenSet() const
{
    return m_subtitleEraseMethodHasBeenSet;
}

string MPSSmartEraseSubtitleConfig::GetSubtitleModel() const
{
    return m_subtitleModel;
}

void MPSSmartEraseSubtitleConfig::SetSubtitleModel(const string& _subtitleModel)
{
    m_subtitleModel = _subtitleModel;
    m_subtitleModelHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::SubtitleModelHasBeenSet() const
{
    return m_subtitleModelHasBeenSet;
}

string MPSSmartEraseSubtitleConfig::GetOcrSwitch() const
{
    return m_ocrSwitch;
}

void MPSSmartEraseSubtitleConfig::SetOcrSwitch(const string& _ocrSwitch)
{
    m_ocrSwitch = _ocrSwitch;
    m_ocrSwitchHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::OcrSwitchHasBeenSet() const
{
    return m_ocrSwitchHasBeenSet;
}

string MPSSmartEraseSubtitleConfig::GetSubtitleLang() const
{
    return m_subtitleLang;
}

void MPSSmartEraseSubtitleConfig::SetSubtitleLang(const string& _subtitleLang)
{
    m_subtitleLang = _subtitleLang;
    m_subtitleLangHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::SubtitleLangHasBeenSet() const
{
    return m_subtitleLangHasBeenSet;
}

string MPSSmartEraseSubtitleConfig::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void MPSSmartEraseSubtitleConfig::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string MPSSmartEraseSubtitleConfig::GetTransSwitch() const
{
    return m_transSwitch;
}

void MPSSmartEraseSubtitleConfig::SetTransSwitch(const string& _transSwitch)
{
    m_transSwitch = _transSwitch;
    m_transSwitchHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::TransSwitchHasBeenSet() const
{
    return m_transSwitchHasBeenSet;
}

string MPSSmartEraseSubtitleConfig::GetTransDstLang() const
{
    return m_transDstLang;
}

void MPSSmartEraseSubtitleConfig::SetTransDstLang(const string& _transDstLang)
{
    m_transDstLang = _transDstLang;
    m_transDstLangHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::TransDstLangHasBeenSet() const
{
    return m_transDstLangHasBeenSet;
}

vector<MPSEraseArea> MPSSmartEraseSubtitleConfig::GetAutoAreas() const
{
    return m_autoAreas;
}

void MPSSmartEraseSubtitleConfig::SetAutoAreas(const vector<MPSEraseArea>& _autoAreas)
{
    m_autoAreas = _autoAreas;
    m_autoAreasHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::AutoAreasHasBeenSet() const
{
    return m_autoAreasHasBeenSet;
}

vector<MPSEraseTimeArea> MPSSmartEraseSubtitleConfig::GetCustomAreas() const
{
    return m_customAreas;
}

void MPSSmartEraseSubtitleConfig::SetCustomAreas(const vector<MPSEraseTimeArea>& _customAreas)
{
    m_customAreas = _customAreas;
    m_customAreasHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::CustomAreasHasBeenSet() const
{
    return m_customAreasHasBeenSet;
}

int64_t MPSSmartEraseSubtitleConfig::GetUseOriginalPos() const
{
    return m_useOriginalPos;
}

void MPSSmartEraseSubtitleConfig::SetUseOriginalPos(const int64_t& _useOriginalPos)
{
    m_useOriginalPos = _useOriginalPos;
    m_useOriginalPosHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::UseOriginalPosHasBeenSet() const
{
    return m_useOriginalPosHasBeenSet;
}

int64_t MPSSmartEraseSubtitleConfig::GetUseOriginalSize() const
{
    return m_useOriginalSize;
}

void MPSSmartEraseSubtitleConfig::SetUseOriginalSize(const int64_t& _useOriginalSize)
{
    m_useOriginalSize = _useOriginalSize;
    m_useOriginalSizeHasBeenSet = true;
}

bool MPSSmartEraseSubtitleConfig::UseOriginalSizeHasBeenSet() const
{
    return m_useOriginalSizeHasBeenSet;
}

