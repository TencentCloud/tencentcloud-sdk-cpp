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
                     * 获取模板名。仅支持中文、英文、数字、_、-。
                     * @return TemplateName 模板名。仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名。仅支持中文、英文、数字、_、-。
                     * @param _templateName 模板名。仅支持中文、英文、数字、_、-。
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
                     * 获取Flv录制参数，开启Flv录制时设置。
                     * @return FlvParam Flv录制参数，开启Flv录制时设置。
                     * 
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置Flv录制参数，开启Flv录制时设置。
                     * @param _flvParam Flv录制参数，开启Flv录制时设置。
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
                     * 获取Hls录制参数，开启hls录制时设置。
                     * @return HlsParam Hls录制参数，开启hls录制时设置。
                     * 
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置Hls录制参数，开启hls录制时设置。
                     * @param _hlsParam Hls录制参数，开启hls录制时设置。
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
                     * 获取Mp4录制参数，开启Mp4录制时设置。
                     * @return Mp4Param Mp4录制参数，开启Mp4录制时设置。
                     * 
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置Mp4录制参数，开启Mp4录制时设置。
                     * @param _mp4Param Mp4录制参数，开启Mp4录制时设置。
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
                     * 获取Aac录制参数，开启Aac录制时设置。
                     * @return AacParam Aac录制参数，开启Aac录制时设置。
                     * 
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置Aac录制参数，开启Aac录制时设置。
                     * @param _aacParam Aac录制参数，开启Aac录制时设置。
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
                     * 获取直播类型，默认 0。
0：普通直播，
1：慢直播。
                     * @return IsDelayLive 直播类型，默认 0。
0：普通直播，
1：慢直播。
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置直播类型，默认 0。
0：普通直播，
1：慢直播。
                     * @param _isDelayLive 直播类型，默认 0。
0：普通直播，
1：慢直播。
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
                     * 获取HLS专属录制参数。
                     * @return HlsSpecialParam HLS专属录制参数。
                     * 
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置HLS专属录制参数。
                     * @param _hlsSpecialParam HLS专属录制参数。
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
                     * 获取Mp3录制参数，开启Mp3录制时设置。
                     * @return Mp3Param Mp3录制参数，开启Mp3录制时设置。
                     * 
                     */
                    RecordParam GetMp3Param() const;

                    /**
                     * 设置Mp3录制参数，开启Mp3录制时设置。
                     * @param _mp3Param Mp3录制参数，开启Mp3录制时设置。
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
                     * 获取是否存储至 cos，值为 1 时表示存储至 cos。
                     * @return CosStore 是否存储至 cos，值为 1 时表示存储至 cos。
                     * 
                     */
                    int64_t GetCosStore() const;

                    /**
                     * 设置是否存储至 cos，值为 1 时表示存储至 cos。
                     * @param _cosStore 是否存储至 cos，值为 1 时表示存储至 cos。
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
                     * 获取是否去除水印，类型为慢直播时此参数无效。
如果为false，则录制水印流或转码流；如果为true，则录制原始流。
                     * @return RemoveWatermark 是否去除水印，类型为慢直播时此参数无效。
如果为false，则录制水印流或转码流；如果为true，则录制原始流。
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置是否去除水印，类型为慢直播时此参数无效。
如果为false，则录制水印流或转码流；如果为true，则录制原始流。
                     * @param _removeWatermark 是否去除水印，类型为慢直播时此参数无效。
如果为false，则录制水印流或转码流；如果为true，则录制原始流。
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
                     * 获取FLV 录制特殊参数。
                     * @return FlvSpecialParam FLV 录制特殊参数。
                     * 
                     */
                    FlvSpecialParam GetFlvSpecialParam() const;

                    /**
                     * 设置FLV 录制特殊参数。
                     * @param _flvSpecialParam FLV 录制特殊参数。
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
                     * 模板名。仅支持中文、英文、数字、_、-。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Flv录制参数，开启Flv录制时设置。
                     */
                    RecordParam m_flvParam;
                    bool m_flvParamHasBeenSet;

                    /**
                     * Hls录制参数，开启hls录制时设置。
                     */
                    RecordParam m_hlsParam;
                    bool m_hlsParamHasBeenSet;

                    /**
                     * Mp4录制参数，开启Mp4录制时设置。
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * Aac录制参数，开启Aac录制时设置。
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * 直播类型，默认 0。
0：普通直播，
1：慢直播。
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * HLS专属录制参数。
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                    /**
                     * Mp3录制参数，开启Mp3录制时设置。
                     */
                    RecordParam m_mp3Param;
                    bool m_mp3ParamHasBeenSet;

                    /**
                     * 是否存储至 cos，值为 1 时表示存储至 cos。
                     */
                    int64_t m_cosStore;
                    bool m_cosStoreHasBeenSet;

                    /**
                     * 是否去除水印，类型为慢直播时此参数无效。
如果为false，则录制水印流或转码流；如果为true，则录制原始流。
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * FLV 录制特殊参数。
                     */
                    FlvSpecialParam m_flvSpecialParam;
                    bool m_flvSpecialParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
