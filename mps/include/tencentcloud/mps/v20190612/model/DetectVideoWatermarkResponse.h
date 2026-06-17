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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOWATERMARKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOWATERMARKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DetectVideoWatermark返回参数结构体
                */
                class DetectVideoWatermarkResponse : public AbstractModel
                {
                public:
                    DetectVideoWatermarkResponse();
                    ~DetectVideoWatermarkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否存在水印的置信度</p><p>取值范围：[0, 100]</p>
                     * @return Confidence <p>是否存在水印的置信度</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>视频中是否存在水印</p>
                     * @return HasWatermark <p>视频中是否存在水印</p>
                     * 
                     */
                    bool GetHasWatermark() const;

                    /**
                     * 判断参数 HasWatermark 是否已赋值
                     * @return HasWatermark 是否已赋值
                     * 
                     */
                    bool HasWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>关于水印的一些描述性说明</p>
                     * @return Description <p>关于水印的一些描述性说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>是否存在水印的置信度</p><p>取值范围：[0, 100]</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>视频中是否存在水印</p>
                     */
                    bool m_hasWatermark;
                    bool m_hasWatermarkHasBeenSet;

                    /**
                     * <p>关于水印的一些描述性说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOWATERMARKRESPONSE_H_
