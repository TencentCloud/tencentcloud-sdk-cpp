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

#include <tencentcloud/live/v20180801/model/RecordTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

RecordTemplateInfo::RecordTemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_flvParamHasBeenSet(false),
    m_hlsParamHasBeenSet(false),
    m_mp4ParamHasBeenSet(false),
    m_aacParamHasBeenSet(false),
    m_isDelayLiveHasBeenSet(false),
    m_hlsSpecialParamHasBeenSet(false),
    m_mp3ParamHasBeenSet(false),
    m_removeWatermarkHasBeenSet(false),
    m_cosStoreHasBeenSet(false),
    m_flvSpecialParamHasBeenSet(false)
{
}

CoreInternalOutcome RecordTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FlvParam") && !value["FlvParam"].IsNull())
    {
        if (!value["FlvParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.FlvParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_flvParam.Deserialize(value["FlvParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_flvParamHasBeenSet = true;
    }

    if (value.HasMember("HlsParam") && !value["HlsParam"].IsNull())
    {
        if (!value["HlsParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.HlsParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hlsParam.Deserialize(value["HlsParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hlsParamHasBeenSet = true;
    }

    if (value.HasMember("Mp4Param") && !value["Mp4Param"].IsNull())
    {
        if (!value["Mp4Param"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.Mp4Param` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mp4Param.Deserialize(value["Mp4Param"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mp4ParamHasBeenSet = true;
    }

    if (value.HasMember("AacParam") && !value["AacParam"].IsNull())
    {
        if (!value["AacParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.AacParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aacParam.Deserialize(value["AacParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aacParamHasBeenSet = true;
    }

    if (value.HasMember("IsDelayLive") && !value["IsDelayLive"].IsNull())
    {
        if (!value["IsDelayLive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.IsDelayLive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelayLive = value["IsDelayLive"].GetInt64();
        m_isDelayLiveHasBeenSet = true;
    }

    if (value.HasMember("HlsSpecialParam") && !value["HlsSpecialParam"].IsNull())
    {
        if (!value["HlsSpecialParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.HlsSpecialParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hlsSpecialParam.Deserialize(value["HlsSpecialParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hlsSpecialParamHasBeenSet = true;
    }

    if (value.HasMember("Mp3Param") && !value["Mp3Param"].IsNull())
    {
        if (!value["Mp3Param"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.Mp3Param` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mp3Param.Deserialize(value["Mp3Param"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mp3ParamHasBeenSet = true;
    }

    if (value.HasMember("RemoveWatermark") && !value["RemoveWatermark"].IsNull())
    {
        if (!value["RemoveWatermark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.RemoveWatermark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_removeWatermark = value["RemoveWatermark"].GetBool();
        m_removeWatermarkHasBeenSet = true;
    }

    if (value.HasMember("CosStore") && !value["CosStore"].IsNull())
    {
        if (!value["CosStore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.CosStore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cosStore = value["CosStore"].GetInt64();
        m_cosStoreHasBeenSet = true;
    }

    if (value.HasMember("FlvSpecialParam") && !value["FlvSpecialParam"].IsNull())
    {
        if (!value["FlvSpecialParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateInfo.FlvSpecialParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_flvSpecialParam.Deserialize(value["FlvSpecialParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_flvSpecialParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_flvParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlvParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flvParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hlsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hlsParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mp4ParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mp4Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mp4Param.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aacParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AacParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aacParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isDelayLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelayLive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelayLive, allocator);
    }

    if (m_hlsSpecialParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsSpecialParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hlsSpecialParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mp3ParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mp3Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mp3Param.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removeWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeWatermark, allocator);
    }

    if (m_cosStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosStore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosStore, allocator);
    }

    if (m_flvSpecialParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlvSpecialParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flvSpecialParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t RecordTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void RecordTemplateInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool RecordTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string RecordTemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void RecordTemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool RecordTemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string RecordTemplateInfo::GetDescription() const
{
    return m_description;
}

void RecordTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RecordTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

RecordParam RecordTemplateInfo::GetFlvParam() const
{
    return m_flvParam;
}

void RecordTemplateInfo::SetFlvParam(const RecordParam& _flvParam)
{
    m_flvParam = _flvParam;
    m_flvParamHasBeenSet = true;
}

bool RecordTemplateInfo::FlvParamHasBeenSet() const
{
    return m_flvParamHasBeenSet;
}

RecordParam RecordTemplateInfo::GetHlsParam() const
{
    return m_hlsParam;
}

void RecordTemplateInfo::SetHlsParam(const RecordParam& _hlsParam)
{
    m_hlsParam = _hlsParam;
    m_hlsParamHasBeenSet = true;
}

bool RecordTemplateInfo::HlsParamHasBeenSet() const
{
    return m_hlsParamHasBeenSet;
}

RecordParam RecordTemplateInfo::GetMp4Param() const
{
    return m_mp4Param;
}

void RecordTemplateInfo::SetMp4Param(const RecordParam& _mp4Param)
{
    m_mp4Param = _mp4Param;
    m_mp4ParamHasBeenSet = true;
}

bool RecordTemplateInfo::Mp4ParamHasBeenSet() const
{
    return m_mp4ParamHasBeenSet;
}

RecordParam RecordTemplateInfo::GetAacParam() const
{
    return m_aacParam;
}

void RecordTemplateInfo::SetAacParam(const RecordParam& _aacParam)
{
    m_aacParam = _aacParam;
    m_aacParamHasBeenSet = true;
}

bool RecordTemplateInfo::AacParamHasBeenSet() const
{
    return m_aacParamHasBeenSet;
}

int64_t RecordTemplateInfo::GetIsDelayLive() const
{
    return m_isDelayLive;
}

void RecordTemplateInfo::SetIsDelayLive(const int64_t& _isDelayLive)
{
    m_isDelayLive = _isDelayLive;
    m_isDelayLiveHasBeenSet = true;
}

bool RecordTemplateInfo::IsDelayLiveHasBeenSet() const
{
    return m_isDelayLiveHasBeenSet;
}

HlsSpecialParam RecordTemplateInfo::GetHlsSpecialParam() const
{
    return m_hlsSpecialParam;
}

void RecordTemplateInfo::SetHlsSpecialParam(const HlsSpecialParam& _hlsSpecialParam)
{
    m_hlsSpecialParam = _hlsSpecialParam;
    m_hlsSpecialParamHasBeenSet = true;
}

bool RecordTemplateInfo::HlsSpecialParamHasBeenSet() const
{
    return m_hlsSpecialParamHasBeenSet;
}

RecordParam RecordTemplateInfo::GetMp3Param() const
{
    return m_mp3Param;
}

void RecordTemplateInfo::SetMp3Param(const RecordParam& _mp3Param)
{
    m_mp3Param = _mp3Param;
    m_mp3ParamHasBeenSet = true;
}

bool RecordTemplateInfo::Mp3ParamHasBeenSet() const
{
    return m_mp3ParamHasBeenSet;
}

bool RecordTemplateInfo::GetRemoveWatermark() const
{
    return m_removeWatermark;
}

void RecordTemplateInfo::SetRemoveWatermark(const bool& _removeWatermark)
{
    m_removeWatermark = _removeWatermark;
    m_removeWatermarkHasBeenSet = true;
}

bool RecordTemplateInfo::RemoveWatermarkHasBeenSet() const
{
    return m_removeWatermarkHasBeenSet;
}

int64_t RecordTemplateInfo::GetCosStore() const
{
    return m_cosStore;
}

void RecordTemplateInfo::SetCosStore(const int64_t& _cosStore)
{
    m_cosStore = _cosStore;
    m_cosStoreHasBeenSet = true;
}

bool RecordTemplateInfo::CosStoreHasBeenSet() const
{
    return m_cosStoreHasBeenSet;
}

FlvSpecialParam RecordTemplateInfo::GetFlvSpecialParam() const
{
    return m_flvSpecialParam;
}

void RecordTemplateInfo::SetFlvSpecialParam(const FlvSpecialParam& _flvSpecialParam)
{
    m_flvSpecialParam = _flvSpecialParam;
    m_flvSpecialParamHasBeenSet = true;
}

bool RecordTemplateInfo::FlvSpecialParamHasBeenSet() const
{
    return m_flvSpecialParamHasBeenSet;
}

