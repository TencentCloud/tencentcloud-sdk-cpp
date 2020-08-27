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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTYPARAM_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTYPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * 全局美颜参数，针对所有人脸做美颜。参数全部为0，则为不做美颜
                */
                class BeautyParam : public AbstractModel
                {
                public:
                    BeautyParam();
                    ~BeautyParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     * @return WhitenLevel 美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     */
                    uint64_t GetWhitenLevel() const;

                    /**
                     * 设置美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     * @param WhitenLevel 美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     */
                    void SetWhitenLevel(const uint64_t& _whitenLevel);

                    /**
                     * 判断参数 WhitenLevel 是否已赋值
                     * @return WhitenLevel 是否已赋值
                     */
                    bool WhitenLevelHasBeenSet() const;

                    /**
                     * 获取磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值30。
                     * @return SmoothingLevel 磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值30。
                     */
                    uint64_t GetSmoothingLevel() const;

                    /**
                     * 设置磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值30。
                     * @param SmoothingLevel 磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值30。
                     */
                    void SetSmoothingLevel(const uint64_t& _smoothingLevel);

                    /**
                     * 判断参数 SmoothingLevel 是否已赋值
                     * @return SmoothingLevel 是否已赋值
                     */
                    bool SmoothingLevelHasBeenSet() const;

                    /**
                     * 获取大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     * @return EyeEnlargeLevel 大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     */
                    uint64_t GetEyeEnlargeLevel() const;

                    /**
                     * 设置大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     * @param EyeEnlargeLevel 大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     */
                    void SetEyeEnlargeLevel(const uint64_t& _eyeEnlargeLevel);

                    /**
                     * 判断参数 EyeEnlargeLevel 是否已赋值
                     * @return EyeEnlargeLevel 是否已赋值
                     */
                    bool EyeEnlargeLevelHasBeenSet() const;

                    /**
                     * 获取瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     * @return FaceShrinkLevel 瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     */
                    uint64_t GetFaceShrinkLevel() const;

                    /**
                     * 设置瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     * @param FaceShrinkLevel 瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     */
                    void SetFaceShrinkLevel(const uint64_t& _faceShrinkLevel);

                    /**
                     * 判断参数 FaceShrinkLevel 是否已赋值
                     * @return FaceShrinkLevel 是否已赋值
                     */
                    bool FaceShrinkLevelHasBeenSet() const;

                private:

                    /**
                     * 美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     */
                    uint64_t m_whitenLevel;
                    bool m_whitenLevelHasBeenSet;

                    /**
                     * 磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值30。
                     */
                    uint64_t m_smoothingLevel;
                    bool m_smoothingLevelHasBeenSet;

                    /**
                     * 大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     */
                    uint64_t m_eyeEnlargeLevel;
                    bool m_eyeEnlargeLevelHasBeenSet;

                    /**
                     * 瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     */
                    uint64_t m_faceShrinkLevel;
                    bool m_faceShrinkLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTYPARAM_H_
