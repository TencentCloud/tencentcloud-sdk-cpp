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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_

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
                * CreateLiveRecordTemplate请求参数结构体
                */
                class CreateLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveRecordTemplateRequest();
                    ~CreateLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模板名。仅支持中文、英文、数字、_、-。</p>
                     * @return TemplateName <p>模板名。仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名。仅支持中文、英文、数字、_、-。</p>
                     * @param _templateName <p>模板名。仅支持中文、英文、数字、_、-。</p>
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
                     * 获取<p>描述信息。</p>
                     * @return Description <p>描述信息。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息。</p>
                     * @param _description <p>描述信息。</p>
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
                     * 获取<p>Flv录制参数，开启Flv录制时设置。</p>
                     * @return FlvParam <p>Flv录制参数，开启Flv录制时设置。</p>
                     * 
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置<p>Flv录制参数，开启Flv录制时设置。</p>
                     * @param _flvParam <p>Flv录制参数，开启Flv录制时设置。</p>
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
                     * 获取<p>Hls录制参数，开启hls录制时设置。</p>
                     * @return HlsParam <p>Hls录制参数，开启hls录制时设置。</p>
                     * 
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置<p>Hls录制参数，开启hls录制时设置。</p>
                     * @param _hlsParam <p>Hls录制参数，开启hls录制时设置。</p>
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
                     * 获取<p>Mp4录制参数，开启Mp4录制时设置。</p>
                     * @return Mp4Param <p>Mp4录制参数，开启Mp4录制时设置。</p>
                     * 
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置<p>Mp4录制参数，开启Mp4录制时设置。</p>
                     * @param _mp4Param <p>Mp4录制参数，开启Mp4录制时设置。</p>
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
                     * 获取<p>Aac录制参数，开启Aac录制时设置。</p>
                     * @return AacParam <p>Aac录制参数，开启Aac录制时设置。</p>
                     * 
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置<p>Aac录制参数，开启Aac录制时设置。</p>
                     * @param _aacParam <p>Aac录制参数，开启Aac录制时设置。</p>
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
                     * 获取<p>直播类型，默认 0。<br>0：普通直播，<br>1：慢直播。</p>
                     * @return IsDelayLive <p>直播类型，默认 0。<br>0：普通直播，<br>1：慢直播。</p>
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置<p>直播类型，默认 0。<br>0：普通直播，<br>1：慢直播。</p>
                     * @param _isDelayLive <p>直播类型，默认 0。<br>0：普通直播，<br>1：慢直播。</p>
                     * 
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取<p>HLS专属录制参数。</p>
                     * @return HlsSpecialParam <p>HLS专属录制参数。</p>
                     * 
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置<p>HLS专属录制参数。</p>
                     * @param _hlsSpecialParam <p>HLS专属录制参数。</p>
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
                     * 获取<p>Mp3录制参数，开启Mp3录制时设置。</p>
                     * @return Mp3Param <p>Mp3录制参数，开启Mp3录制时设置。</p>
                     * 
                     */
                    RecordParam GetMp3Param() const;

                    /**
                     * 设置<p>Mp3录制参数，开启Mp3录制时设置。</p>
                     * @param _mp3Param <p>Mp3录制参数，开启Mp3录制时设置。</p>
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
                     * 获取<p>是否存储至 cos，值为 1 时表示存储至 cos。</p>
                     * @return CosStore <p>是否存储至 cos，值为 1 时表示存储至 cos。</p>
                     * 
                     */
                    int64_t GetCosStore() const;

                    /**
                     * 设置<p>是否存储至 cos，值为 1 时表示存储至 cos。</p>
                     * @param _cosStore <p>是否存储至 cos，值为 1 时表示存储至 cos。</p>
                     * 
                     */
                    void SetCosStore(const int64_t& _cosStore);

                    /**
                     * 判断参数 CosStore 是否已赋值
                     * @return CosStore 是否已赋值
                     * 
                     */
                    bool CosStoreHasBeenSet() const;

                    /**
                     * 获取<p>是否去除水印，类型为慢直播时此参数无效。<br>如果为false，则录制水印流或转码流；如果为true，则录制原始流。</p>
                     * @return RemoveWatermark <p>是否去除水印，类型为慢直播时此参数无效。<br>如果为false，则录制水印流或转码流；如果为true，则录制原始流。</p>
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置<p>是否去除水印，类型为慢直播时此参数无效。<br>如果为false，则录制水印流或转码流；如果为true，则录制原始流。</p>
                     * @param _removeWatermark <p>是否去除水印，类型为慢直播时此参数无效。<br>如果为false，则录制水印流或转码流；如果为true，则录制原始流。</p>
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
                     * 获取<p>FLV 录制特殊参数。</p>
                     * @return FlvSpecialParam <p>FLV 录制特殊参数。</p>
                     * 
                     */
                    FlvSpecialParam GetFlvSpecialParam() const;

                    /**
                     * 设置<p>FLV 录制特殊参数。</p>
                     * @param _flvSpecialParam <p>FLV 录制特殊参数。</p>
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
                     * <p>模板名。仅支持中文、英文、数字、_、-。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>描述信息。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Flv录制参数，开启Flv录制时设置。</p>
                     */
                    RecordParam m_flvParam;
                    bool m_flvParamHasBeenSet;

                    /**
                     * <p>Hls录制参数，开启hls录制时设置。</p>
                     */
                    RecordParam m_hlsParam;
                    bool m_hlsParamHasBeenSet;

                    /**
                     * <p>Mp4录制参数，开启Mp4录制时设置。</p>
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * <p>Aac录制参数，开启Aac录制时设置。</p>
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * <p>直播类型，默认 0。<br>0：普通直播，<br>1：慢直播。</p>
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * <p>HLS专属录制参数。</p>
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                    /**
                     * <p>Mp3录制参数，开启Mp3录制时设置。</p>
                     */
                    RecordParam m_mp3Param;
                    bool m_mp3ParamHasBeenSet;

                    /**
                     * <p>是否存储至 cos，值为 1 时表示存储至 cos。</p>
                     */
                    int64_t m_cosStore;
                    bool m_cosStoreHasBeenSet;

                    /**
                     * <p>是否去除水印，类型为慢直播时此参数无效。<br>如果为false，则录制水印流或转码流；如果为true，则录制原始流。</p>
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * <p>FLV 录制特殊参数。</p>
                     */
                    FlvSpecialParam m_flvSpecialParam;
                    bool m_flvSpecialParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
