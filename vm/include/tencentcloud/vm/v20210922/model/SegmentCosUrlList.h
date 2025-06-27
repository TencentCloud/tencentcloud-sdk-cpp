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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_SEGMENTCOSURLLIST_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_SEGMENTCOSURLLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 明细数据相关的cos url
                */
                class SegmentCosUrlList : public AbstractModel
                {
                public:
                    SegmentCosUrlList();
                    ~SegmentCosUrlList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全量图片片段的cos url
                     * @return ImageAllUrl 全量图片片段的cos url
                     * 
                     */
                    std::string GetImageAllUrl() const;

                    /**
                     * 设置全量图片片段的cos url
                     * @param _imageAllUrl 全量图片片段的cos url
                     * 
                     */
                    void SetImageAllUrl(const std::string& _imageAllUrl);

                    /**
                     * 判断参数 ImageAllUrl 是否已赋值
                     * @return ImageAllUrl 是否已赋值
                     * 
                     */
                    bool ImageAllUrlHasBeenSet() const;

                    /**
                     * 获取全量音频片段的cos url
                     * @return AudioAllUrl 全量音频片段的cos url
                     * 
                     */
                    std::string GetAudioAllUrl() const;

                    /**
                     * 设置全量音频片段的cos url
                     * @param _audioAllUrl 全量音频片段的cos url
                     * 
                     */
                    void SetAudioAllUrl(const std::string& _audioAllUrl);

                    /**
                     * 判断参数 AudioAllUrl 是否已赋值
                     * @return AudioAllUrl 是否已赋值
                     * 
                     */
                    bool AudioAllUrlHasBeenSet() const;

                    /**
                     * 获取违规图片片段的cos url
                     * @return ImageBlockUrl 违规图片片段的cos url
                     * 
                     */
                    std::string GetImageBlockUrl() const;

                    /**
                     * 设置违规图片片段的cos url
                     * @param _imageBlockUrl 违规图片片段的cos url
                     * 
                     */
                    void SetImageBlockUrl(const std::string& _imageBlockUrl);

                    /**
                     * 判断参数 ImageBlockUrl 是否已赋值
                     * @return ImageBlockUrl 是否已赋值
                     * 
                     */
                    bool ImageBlockUrlHasBeenSet() const;

                    /**
                     * 获取违规音频片段的cos url
                     * @return AudioBlockUrl 违规音频片段的cos url
                     * 
                     */
                    std::string GetAudioBlockUrl() const;

                    /**
                     * 设置违规音频片段的cos url
                     * @param _audioBlockUrl 违规音频片段的cos url
                     * 
                     */
                    void SetAudioBlockUrl(const std::string& _audioBlockUrl);

                    /**
                     * 判断参数 AudioBlockUrl 是否已赋值
                     * @return AudioBlockUrl 是否已赋值
                     * 
                     */
                    bool AudioBlockUrlHasBeenSet() const;

                    /**
                     * 获取全量音频识别文本的cos url
                     * @return AsrUrl 全量音频识别文本的cos url
                     * 
                     */
                    std::string GetAsrUrl() const;

                    /**
                     * 设置全量音频识别文本的cos url
                     * @param _asrUrl 全量音频识别文本的cos url
                     * 
                     */
                    void SetAsrUrl(const std::string& _asrUrl);

                    /**
                     * 判断参数 AsrUrl 是否已赋值
                     * @return AsrUrl 是否已赋值
                     * 
                     */
                    bool AsrUrlHasBeenSet() const;

                private:

                    /**
                     * 全量图片片段的cos url
                     */
                    std::string m_imageAllUrl;
                    bool m_imageAllUrlHasBeenSet;

                    /**
                     * 全量音频片段的cos url
                     */
                    std::string m_audioAllUrl;
                    bool m_audioAllUrlHasBeenSet;

                    /**
                     * 违规图片片段的cos url
                     */
                    std::string m_imageBlockUrl;
                    bool m_imageBlockUrlHasBeenSet;

                    /**
                     * 违规音频片段的cos url
                     */
                    std::string m_audioBlockUrl;
                    bool m_audioBlockUrlHasBeenSet;

                    /**
                     * 全量音频识别文本的cos url
                     */
                    std::string m_asrUrl;
                    bool m_asrUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_SEGMENTCOSURLLIST_H_
