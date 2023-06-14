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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_LIVESTREAMCLIPPROJECTINPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_LIVESTREAMCLIPPROJECTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 直播剪辑项目输入参数。
                */
                class LiveStreamClipProjectInput : public AbstractModel
                {
                public:
                    LiveStreamClipProjectInput();
                    ~LiveStreamClipProjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播流播放地址，目前仅支持 HLS 和 FLV 格式。
                     * @return Url 直播流播放地址，目前仅支持 HLS 和 FLV 格式。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置直播流播放地址，目前仅支持 HLS 和 FLV 格式。
                     * @param _url 直播流播放地址，目前仅支持 HLS 和 FLV 格式。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取直播流录制时长，单位为秒，最大值为 7200。
                     * @return StreamRecordDuration 直播流录制时长，单位为秒，最大值为 7200。
                     * 
                     */
                    uint64_t GetStreamRecordDuration() const;

                    /**
                     * 设置直播流录制时长，单位为秒，最大值为 7200。
                     * @param _streamRecordDuration 直播流录制时长，单位为秒，最大值为 7200。
                     * 
                     */
                    void SetStreamRecordDuration(const uint64_t& _streamRecordDuration);

                    /**
                     * 判断参数 StreamRecordDuration 是否已赋值
                     * @return StreamRecordDuration 是否已赋值
                     * 
                     */
                    bool StreamRecordDurationHasBeenSet() const;

                private:

                    /**
                     * 直播流播放地址，目前仅支持 HLS 和 FLV 格式。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 直播流录制时长，单位为秒，最大值为 7200。
                     */
                    uint64_t m_streamRecordDuration;
                    bool m_streamRecordDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_LIVESTREAMCLIPPROJECTINPUT_H_
