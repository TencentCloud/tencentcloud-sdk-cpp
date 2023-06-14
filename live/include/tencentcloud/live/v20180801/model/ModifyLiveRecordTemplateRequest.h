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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecordParam.h>
#include <tencentcloud/live/v20180801/model/HlsSpecialParam.h>
#include <tencentcloud/live/v20180801/model/FlvSpecialParam.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveRecordTemplate请求参数结构体
                */
                class ModifyLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLiveRecordTemplateRequest();
                    ~ModifyLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeRecordTemplates接口获取到的模板 ID。
                     * @return TemplateId DescribeRecordTemplates接口获取到的模板 ID。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置DescribeRecordTemplates接口获取到的模板 ID。
                     * @param _templateId DescribeRecordTemplates接口获取到的模板 ID。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _templateName 模板名称。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param _description 描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取FLV 录制参数，开启 FLV 录制时设置。
                     * @return FlvParam FLV 录制参数，开启 FLV 录制时设置。
                     * 
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置FLV 录制参数，开启 FLV 录制时设置。
                     * @param _flvParam FLV 录制参数，开启 FLV 录制时设置。
                     * 
                     */
                    void SetFlvParam(const RecordParam& _flvParam);

                    /**
                     * 判断参数 FlvParam 是否已赋值
                     * @return FlvParam 是否已赋值
                     * 
                     */
                    bool FlvParamHasBeenSet() const;

                    /**
                     * 获取HLS 录制参数，开启 HLS 录制时设置。
                     * @return HlsParam HLS 录制参数，开启 HLS 录制时设置。
                     * 
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置HLS 录制参数，开启 HLS 录制时设置。
                     * @param _hlsParam HLS 录制参数，开启 HLS 录制时设置。
                     * 
                     */
                    void SetHlsParam(const RecordParam& _hlsParam);

                    /**
                     * 判断参数 HlsParam 是否已赋值
                     * @return HlsParam 是否已赋值
                     * 
                     */
                    bool HlsParamHasBeenSet() const;

                    /**
                     * 获取MP4 录制参数，开启 MP4 录制时设置。
                     * @return Mp4Param MP4 录制参数，开启 MP4 录制时设置。
                     * 
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置MP4 录制参数，开启 MP4 录制时设置。
                     * @param _mp4Param MP4 录制参数，开启 MP4 录制时设置。
                     * 
                     */
                    void SetMp4Param(const RecordParam& _mp4Param);

                    /**
                     * 判断参数 Mp4Param 是否已赋值
                     * @return Mp4Param 是否已赋值
                     * 
                     */
                    bool Mp4ParamHasBeenSet() const;

                    /**
                     * 获取AAC 录制参数，开启 AAC 录制时设置。
                     * @return AacParam AAC 录制参数，开启 AAC 录制时设置。
                     * 
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置AAC 录制参数，开启 AAC 录制时设置。
                     * @param _aacParam AAC 录制参数，开启 AAC 录制时设置。
                     * 
                     */
                    void SetAacParam(const RecordParam& _aacParam);

                    /**
                     * 判断参数 AacParam 是否已赋值
                     * @return AacParam 是否已赋值
                     * 
                     */
                    bool AacParamHasBeenSet() const;

                    /**
                     * 获取HLS 录制定制参数。
                     * @return HlsSpecialParam HLS 录制定制参数。
                     * 
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置HLS 录制定制参数。
                     * @param _hlsSpecialParam HLS 录制定制参数。
                     * 
                     */
                    void SetHlsSpecialParam(const HlsSpecialParam& _hlsSpecialParam);

                    /**
                     * 判断参数 HlsSpecialParam 是否已赋值
                     * @return HlsSpecialParam 是否已赋值
                     * 
                     */
                    bool HlsSpecialParamHasBeenSet() const;

                    /**
                     * 获取MP3 录制参数，开启 MP3 录制时设置。
                     * @return Mp3Param MP3 录制参数，开启 MP3 录制时设置。
                     * 
                     */
                    RecordParam GetMp3Param() const;

                    /**
                     * 设置MP3 录制参数，开启 MP3 录制时设置。
                     * @param _mp3Param MP3 录制参数，开启 MP3 录制时设置。
                     * 
                     */
                    void SetMp3Param(const RecordParam& _mp3Param);

                    /**
                     * 判断参数 Mp3Param 是否已赋值
                     * @return Mp3Param 是否已赋值
                     * 
                     */
                    bool Mp3ParamHasBeenSet() const;

                    /**
                     * 获取是否去除水印，类型为慢直播时此参数无效。
                     * @return RemoveWatermark 是否去除水印，类型为慢直播时此参数无效。
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置是否去除水印，类型为慢直播时此参数无效。
                     * @param _removeWatermark 是否去除水印，类型为慢直播时此参数无效。
                     * 
                     */
                    void SetRemoveWatermark(const bool& _removeWatermark);

                    /**
                     * 判断参数 RemoveWatermark 是否已赋值
                     * @return RemoveWatermark 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkHasBeenSet() const;

                    /**
                     * 获取FLV 录制定制参数。
                     * @return FlvSpecialParam FLV 录制定制参数。
                     * 
                     */
                    FlvSpecialParam GetFlvSpecialParam() const;

                    /**
                     * 设置FLV 录制定制参数。
                     * @param _flvSpecialParam FLV 录制定制参数。
                     * 
                     */
                    void SetFlvSpecialParam(const FlvSpecialParam& _flvSpecialParam);

                    /**
                     * 判断参数 FlvSpecialParam 是否已赋值
                     * @return FlvSpecialParam 是否已赋值
                     * 
                     */
                    bool FlvSpecialParamHasBeenSet() const;

                private:

                    /**
                     * DescribeRecordTemplates接口获取到的模板 ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * FLV 录制参数，开启 FLV 录制时设置。
                     */
                    RecordParam m_flvParam;
                    bool m_flvParamHasBeenSet;

                    /**
                     * HLS 录制参数，开启 HLS 录制时设置。
                     */
                    RecordParam m_hlsParam;
                    bool m_hlsParamHasBeenSet;

                    /**
                     * MP4 录制参数，开启 MP4 录制时设置。
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * AAC 录制参数，开启 AAC 录制时设置。
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * HLS 录制定制参数。
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                    /**
                     * MP3 录制参数，开启 MP3 录制时设置。
                     */
                    RecordParam m_mp3Param;
                    bool m_mp3ParamHasBeenSet;

                    /**
                     * 是否去除水印，类型为慢直播时此参数无效。
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * FLV 录制定制参数。
                     */
                    FlvSpecialParam m_flvSpecialParam;
                    bool m_flvSpecialParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
