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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIAPROCESSINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIAPROCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingInfo.h>
#include <tencentcloud/ie/v20200304/model/MediaJoiningInfo.h>
#include <tencentcloud/ie/v20200304/model/MediaRecognitionInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/任务信息
                */
                class MediaProcessInfo : public AbstractModel
                {
                public:
                    MediaProcessInfo();
                    ~MediaProcessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编辑处理任务类型，可选值：
MediaEditing：媒体编辑（待上线）；
MediaCutting：媒体剪切；
MediaJoining：媒体拼接。
MediaRecognition: 媒体识别。
                     * @return Type 编辑处理任务类型，可选值：
MediaEditing：媒体编辑（待上线）；
MediaCutting：媒体剪切；
MediaJoining：媒体拼接。
MediaRecognition: 媒体识别。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置编辑处理任务类型，可选值：
MediaEditing：媒体编辑（待上线）；
MediaCutting：媒体剪切；
MediaJoining：媒体拼接。
MediaRecognition: 媒体识别。
                     * @param _type 编辑处理任务类型，可选值：
MediaEditing：媒体编辑（待上线）；
MediaCutting：媒体剪切；
MediaJoining：媒体拼接。
MediaRecognition: 媒体识别。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取视频剪切任务参数，Type=MediaCutting时必选。
                     * @return MediaCuttingInfo 视频剪切任务参数，Type=MediaCutting时必选。
                     * 
                     */
                    MediaCuttingInfo GetMediaCuttingInfo() const;

                    /**
                     * 设置视频剪切任务参数，Type=MediaCutting时必选。
                     * @param _mediaCuttingInfo 视频剪切任务参数，Type=MediaCutting时必选。
                     * 
                     */
                    void SetMediaCuttingInfo(const MediaCuttingInfo& _mediaCuttingInfo);

                    /**
                     * 判断参数 MediaCuttingInfo 是否已赋值
                     * @return MediaCuttingInfo 是否已赋值
                     * 
                     */
                    bool MediaCuttingInfoHasBeenSet() const;

                    /**
                     * 获取视频拼接任务参数，Type=MediaJoining时必选。
                     * @return MediaJoiningInfo 视频拼接任务参数，Type=MediaJoining时必选。
                     * 
                     */
                    MediaJoiningInfo GetMediaJoiningInfo() const;

                    /**
                     * 设置视频拼接任务参数，Type=MediaJoining时必选。
                     * @param _mediaJoiningInfo 视频拼接任务参数，Type=MediaJoining时必选。
                     * 
                     */
                    void SetMediaJoiningInfo(const MediaJoiningInfo& _mediaJoiningInfo);

                    /**
                     * 判断参数 MediaJoiningInfo 是否已赋值
                     * @return MediaJoiningInfo 是否已赋值
                     * 
                     */
                    bool MediaJoiningInfoHasBeenSet() const;

                    /**
                     * 获取媒体识别任务参数，Type=MediaRecognition时必选
                     * @return MediaRecognitionInfo 媒体识别任务参数，Type=MediaRecognition时必选
                     * 
                     */
                    MediaRecognitionInfo GetMediaRecognitionInfo() const;

                    /**
                     * 设置媒体识别任务参数，Type=MediaRecognition时必选
                     * @param _mediaRecognitionInfo 媒体识别任务参数，Type=MediaRecognition时必选
                     * 
                     */
                    void SetMediaRecognitionInfo(const MediaRecognitionInfo& _mediaRecognitionInfo);

                    /**
                     * 判断参数 MediaRecognitionInfo 是否已赋值
                     * @return MediaRecognitionInfo 是否已赋值
                     * 
                     */
                    bool MediaRecognitionInfoHasBeenSet() const;

                private:

                    /**
                     * 编辑处理任务类型，可选值：
MediaEditing：媒体编辑（待上线）；
MediaCutting：媒体剪切；
MediaJoining：媒体拼接。
MediaRecognition: 媒体识别。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频剪切任务参数，Type=MediaCutting时必选。
                     */
                    MediaCuttingInfo m_mediaCuttingInfo;
                    bool m_mediaCuttingInfoHasBeenSet;

                    /**
                     * 视频拼接任务参数，Type=MediaJoining时必选。
                     */
                    MediaJoiningInfo m_mediaJoiningInfo;
                    bool m_mediaJoiningInfoHasBeenSet;

                    /**
                     * 媒体识别任务参数，Type=MediaRecognition时必选
                     */
                    MediaRecognitionInfo m_mediaRecognitionInfo;
                    bool m_mediaRecognitionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIAPROCESSINFO_H_
