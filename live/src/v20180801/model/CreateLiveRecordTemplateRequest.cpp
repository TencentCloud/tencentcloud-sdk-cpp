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

#include <tencentcloud/live/v20180801/model/CreateLiveRecordTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveRecordTemplateRequest::CreateLiveRecordTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_flvParamHasBeenSet(false),
    m_hlsParamHasBeenSet(false),
    m_mp4ParamHasBeenSet(false),
    m_aacParamHasBeenSet(false),
    m_isDelayLiveHasBeenSet(false),
    m_hlsSpecialParamHasBeenSet(false),
    m_mp3ParamHasBeenSet(false),
    m_cosStoreHasBeenSet(false),
    m_removeWatermarkHasBeenSet(false),
    m_flvSpecialParamHasBeenSet(false)
{
}

string CreateLiveRecordTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_flvParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlvParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flvParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hlsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hlsParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mp4ParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mp4Param";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mp4Param.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aacParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AacParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aacParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isDelayLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelayLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelayLive, allocator);
    }

    if (m_hlsSpecialParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsSpecialParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hlsSpecialParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mp3ParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mp3Param";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mp3Param.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cosStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosStore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cosStore, allocator);
    }

    if (m_removeWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveWatermark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeWatermark, allocator);
    }

    if (m_flvSpecialParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlvSpecialParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flvSpecialParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveRecordTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateLiveRecordTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string CreateLiveRecordTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveRecordTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

RecordParam CreateLiveRecordTemplateRequest::GetFlvParam() const
{
    return m_flvParam;
}

void CreateLiveRecordTemplateRequest::SetFlvParam(const RecordParam& _flvParam)
{
    m_flvParam = _flvParam;
    m_flvParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::FlvParamHasBeenSet() const
{
    return m_flvParamHasBeenSet;
}

RecordParam CreateLiveRecordTemplateRequest::GetHlsParam() const
{
    return m_hlsParam;
}

void CreateLiveRecordTemplateRequest::SetHlsParam(const RecordParam& _hlsParam)
{
    m_hlsParam = _hlsParam;
    m_hlsParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::HlsParamHasBeenSet() const
{
    return m_hlsParamHasBeenSet;
}

RecordParam CreateLiveRecordTemplateRequest::GetMp4Param() const
{
    return m_mp4Param;
}

void CreateLiveRecordTemplateRequest::SetMp4Param(const RecordParam& _mp4Param)
{
    m_mp4Param = _mp4Param;
    m_mp4ParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::Mp4ParamHasBeenSet() const
{
    return m_mp4ParamHasBeenSet;
}

RecordParam CreateLiveRecordTemplateRequest::GetAacParam() const
{
    return m_aacParam;
}

void CreateLiveRecordTemplateRequest::SetAacParam(const RecordParam& _aacParam)
{
    m_aacParam = _aacParam;
    m_aacParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::AacParamHasBeenSet() const
{
    return m_aacParamHasBeenSet;
}

int64_t CreateLiveRecordTemplateRequest::GetIsDelayLive() const
{
    return m_isDelayLive;
}

void CreateLiveRecordTemplateRequest::SetIsDelayLive(const int64_t& _isDelayLive)
{
    m_isDelayLive = _isDelayLive;
    m_isDelayLiveHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::IsDelayLiveHasBeenSet() const
{
    return m_isDelayLiveHasBeenSet;
}

HlsSpecialParam CreateLiveRecordTemplateRequest::GetHlsSpecialParam() const
{
    return m_hlsSpecialParam;
}

void CreateLiveRecordTemplateRequest::SetHlsSpecialParam(const HlsSpecialParam& _hlsSpecialParam)
{
    m_hlsSpecialParam = _hlsSpecialParam;
    m_hlsSpecialParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::HlsSpecialParamHasBeenSet() const
{
    return m_hlsSpecialParamHasBeenSet;
}

RecordParam CreateLiveRecordTemplateRequest::GetMp3Param() const
{
    return m_mp3Param;
}

void CreateLiveRecordTemplateRequest::SetMp3Param(const RecordParam& _mp3Param)
{
    m_mp3Param = _mp3Param;
    m_mp3ParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::Mp3ParamHasBeenSet() const
{
    return m_mp3ParamHasBeenSet;
}

int64_t CreateLiveRecordTemplateRequest::GetCosStore() const
{
    return m_cosStore;
}

void CreateLiveRecordTemplateRequest::SetCosStore(const int64_t& _cosStore)
{
    m_cosStore = _cosStore;
    m_cosStoreHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::CosStoreHasBeenSet() const
{
    return m_cosStoreHasBeenSet;
}

bool CreateLiveRecordTemplateRequest::GetRemoveWatermark() const
{
    return m_removeWatermark;
}

void CreateLiveRecordTemplateRequest::SetRemoveWatermark(const bool& _removeWatermark)
{
    m_removeWatermark = _removeWatermark;
    m_removeWatermarkHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::RemoveWatermarkHasBeenSet() const
{
    return m_removeWatermarkHasBeenSet;
}

FlvSpecialParam CreateLiveRecordTemplateRequest::GetFlvSpecialParam() const
{
    return m_flvSpecialParam;
}

void CreateLiveRecordTemplateRequest::SetFlvSpecialParam(const FlvSpecialParam& _flvSpecialParam)
{
    m_flvSpecialParam = _flvSpecialParam;
    m_flvSpecialParamHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::FlvSpecialParamHasBeenSet() const
{
    return m_flvSpecialParamHasBeenSet;
}


