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

#include <tencentcloud/vod/v20180717/model/AsrTranslateConfigureInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AsrTranslateConfigureInfoForUpdate::AsrTranslateConfigureInfoForUpdate() :
    m_switchHasBeenSet(false),
    m_srcLanguageHasBeenSet(false),
    m_dstLanguageHasBeenSet(false),
    m_subtitleFormatsOperationHasBeenSet(false),
    m_subtitleNameHasBeenSet(false)
{
}

CoreInternalOutcome AsrTranslateConfigureInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfoForUpdate.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("SrcLanguage") && !value["SrcLanguage"].IsNull())
    {
        if (!value["SrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfoForUpdate.SrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcLanguage = string(value["SrcLanguage"].GetString());
        m_srcLanguageHasBeenSet = true;
    }

    if (value.HasMember("DstLanguage") && !value["DstLanguage"].IsNull())
    {
        if (!value["DstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfoForUpdate.DstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstLanguage = string(value["DstLanguage"].GetString());
        m_dstLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormatsOperation") && !value["SubtitleFormatsOperation"].IsNull())
    {
        if (!value["SubtitleFormatsOperation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfoForUpdate.SubtitleFormatsOperation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleFormatsOperation.Deserialize(value["SubtitleFormatsOperation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleFormatsOperationHasBeenSet = true;
    }

    if (value.HasMember("SubtitleName") && !value["SubtitleName"].IsNull())
    {
        if (!value["SubtitleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfoForUpdate.SubtitleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleName = string(value["SubtitleName"].GetString());
        m_subtitleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrTranslateConfigureInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_srcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_dstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatsOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormatsOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleFormatsOperation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleName.c_str(), allocator).Move(), allocator);
    }

}


string AsrTranslateConfigureInfoForUpdate::GetSwitch() const
{
    return m_switch;
}

void AsrTranslateConfigureInfoForUpdate::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AsrTranslateConfigureInfoForUpdate::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AsrTranslateConfigureInfoForUpdate::GetSrcLanguage() const
{
    return m_srcLanguage;
}

void AsrTranslateConfigureInfoForUpdate::SetSrcLanguage(const string& _srcLanguage)
{
    m_srcLanguage = _srcLanguage;
    m_srcLanguageHasBeenSet = true;
}

bool AsrTranslateConfigureInfoForUpdate::SrcLanguageHasBeenSet() const
{
    return m_srcLanguageHasBeenSet;
}

string AsrTranslateConfigureInfoForUpdate::GetDstLanguage() const
{
    return m_dstLanguage;
}

void AsrTranslateConfigureInfoForUpdate::SetDstLanguage(const string& _dstLanguage)
{
    m_dstLanguage = _dstLanguage;
    m_dstLanguageHasBeenSet = true;
}

bool AsrTranslateConfigureInfoForUpdate::DstLanguageHasBeenSet() const
{
    return m_dstLanguageHasBeenSet;
}

SubtitleFormatsOperation AsrTranslateConfigureInfoForUpdate::GetSubtitleFormatsOperation() const
{
    return m_subtitleFormatsOperation;
}

void AsrTranslateConfigureInfoForUpdate::SetSubtitleFormatsOperation(const SubtitleFormatsOperation& _subtitleFormatsOperation)
{
    m_subtitleFormatsOperation = _subtitleFormatsOperation;
    m_subtitleFormatsOperationHasBeenSet = true;
}

bool AsrTranslateConfigureInfoForUpdate::SubtitleFormatsOperationHasBeenSet() const
{
    return m_subtitleFormatsOperationHasBeenSet;
}

string AsrTranslateConfigureInfoForUpdate::GetSubtitleName() const
{
    return m_subtitleName;
}

void AsrTranslateConfigureInfoForUpdate::SetSubtitleName(const string& _subtitleName)
{
    m_subtitleName = _subtitleName;
    m_subtitleNameHasBeenSet = true;
}

bool AsrTranslateConfigureInfoForUpdate::SubtitleNameHasBeenSet() const
{
    return m_subtitleNameHasBeenSet;
}

