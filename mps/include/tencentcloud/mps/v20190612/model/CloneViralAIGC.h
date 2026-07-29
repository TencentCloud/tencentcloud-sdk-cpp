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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALAIGC_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALAIGC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 爆款复刻 AIGC 生视频相关参数
                */
                class CloneViralAIGC : public AbstractModel
                {
                public:
                    CloneViralAIGC();
                    ~CloneViralAIGC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频时长</p><p>取值范围：[4, 15]</p>
                     * @return Duration <p>视频时长</p><p>取值范围：[4, 15]</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>视频时长</p><p>取值范围：[4, 15]</p>
                     * @param _duration <p>视频时长</p><p>取值范围：[4, 15]</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>宽高比。可选 16:9/4:3/1:1/3:4/9:16/21:9/adaptive</p>
                     * @return AspectRatio <p>宽高比。可选 16:9/4:3/1:1/3:4/9:16/21:9/adaptive</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>宽高比。可选 16:9/4:3/1:1/3:4/9:16/21:9/adaptive</p>
                     * @param _aspectRatio <p>宽高比。可选 16:9/4:3/1:1/3:4/9:16/21:9/adaptive</p>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取<p>分辨率。支持720p（默认）/1080p/2k/4k</p>
                     * @return Resolution <p>分辨率。支持720p（默认）/1080p/2k/4k</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>分辨率。支持720p（默认）/1080p/2k/4k</p>
                     * @param _resolution <p>分辨率。支持720p（默认）/1080p/2k/4k</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>模型等级。flagship（默认）、standard</p>
                     * @return ModelTier <p>模型等级。flagship（默认）、standard</p>
                     * 
                     */
                    std::string GetModelTier() const;

                    /**
                     * 设置<p>模型等级。flagship（默认）、standard</p>
                     * @param _modelTier <p>模型等级。flagship（默认）、standard</p>
                     * 
                     */
                    void SetModelTier(const std::string& _modelTier);

                    /**
                     * 判断参数 ModelTier 是否已赋值
                     * @return ModelTier 是否已赋值
                     * 
                     */
                    bool ModelTierHasBeenSet() const;

                private:

                    /**
                     * <p>视频时长</p><p>取值范围：[4, 15]</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>宽高比。可选 16:9/4:3/1:1/3:4/9:16/21:9/adaptive</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>分辨率。支持720p（默认）/1080p/2k/4k</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>模型等级。flagship（默认）、standard</p>
                     */
                    std::string m_modelTier;
                    bool m_modelTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALAIGC_H_
