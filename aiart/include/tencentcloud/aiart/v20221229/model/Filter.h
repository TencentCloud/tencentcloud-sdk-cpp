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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_FILTER_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * 训练图像质量过滤开关配置。
支持开启或关闭对训练图像分辨率下限、脸部区域大小、脸部遮挡、脸部角度的过滤，默认开启以上过滤。
如果训练图像内包含多人脸或无人脸、和 Base 人像不为同一人也将被过滤，不可关闭该过滤条件。
建议：关闭以上过滤可能导致写真生成效果受损，建议使用单人、正脸、脸部清晰、无遮挡、无夸张表情、脸部区域占比较大的图像进行训练。
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤不满足分辨率下限的训练图像，默认开启过滤
开启后将过滤横边<512或竖边<720的图片，横、竖边上限均为2000，不支持调整

1：开启过滤
0：关闭过滤
                     * @return Resolution 过滤不满足分辨率下限的训练图像，默认开启过滤
开启后将过滤横边<512或竖边<720的图片，横、竖边上限均为2000，不支持调整

1：开启过滤
0：关闭过滤
                     * 
                     */
                    int64_t GetResolution() const;

                    /**
                     * 设置过滤不满足分辨率下限的训练图像，默认开启过滤
开启后将过滤横边<512或竖边<720的图片，横、竖边上限均为2000，不支持调整

1：开启过滤
0：关闭过滤
                     * @param _resolution 过滤不满足分辨率下限的训练图像，默认开启过滤
开启后将过滤横边<512或竖边<720的图片，横、竖边上限均为2000，不支持调整

1：开启过滤
0：关闭过滤
                     * 
                     */
                    void SetResolution(const int64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取过滤脸部区域过小的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * @return Size 过滤脸部区域过小的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置过滤脸部区域过小的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * @param _size 过滤脸部区域过小的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取过滤脸部存在明显遮挡、偏转角度过大等质量较差的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * @return Occlusion 过滤脸部存在明显遮挡、偏转角度过大等质量较差的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * 
                     */
                    int64_t GetOcclusion() const;

                    /**
                     * 设置过滤脸部存在明显遮挡、偏转角度过大等质量较差的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * @param _occlusion 过滤脸部存在明显遮挡、偏转角度过大等质量较差的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     * 
                     */
                    void SetOcclusion(const int64_t& _occlusion);

                    /**
                     * 判断参数 Occlusion 是否已赋值
                     * @return Occlusion 是否已赋值
                     * 
                     */
                    bool OcclusionHasBeenSet() const;

                private:

                    /**
                     * 过滤不满足分辨率下限的训练图像，默认开启过滤
开启后将过滤横边<512或竖边<720的图片，横、竖边上限均为2000，不支持调整

1：开启过滤
0：关闭过滤
                     */
                    int64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 过滤脸部区域过小的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 过滤脸部存在明显遮挡、偏转角度过大等质量较差的训练图像，默认开启过滤

1：开启过滤
0：关闭过滤
                     */
                    int64_t m_occlusion;
                    bool m_occlusionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_FILTER_H_
