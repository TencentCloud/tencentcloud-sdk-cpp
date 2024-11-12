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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_EYEBROW_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_EYEBROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 眉毛信息
                */
                class Eyebrow : public AbstractModel
                {
                public:
                    Eyebrow();
                    ~Eyebrow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取眉毛浓密。
- AttributeItem对应的Type为 —— 0：淡眉，1：浓眉。
                     * @return EyebrowDensity 眉毛浓密。
- AttributeItem对应的Type为 —— 0：淡眉，1：浓眉。
                     * 
                     */
                    AttributeItem GetEyebrowDensity() const;

                    /**
                     * 设置眉毛浓密。
- AttributeItem对应的Type为 —— 0：淡眉，1：浓眉。
                     * @param _eyebrowDensity 眉毛浓密。
- AttributeItem对应的Type为 —— 0：淡眉，1：浓眉。
                     * 
                     */
                    void SetEyebrowDensity(const AttributeItem& _eyebrowDensity);

                    /**
                     * 判断参数 EyebrowDensity 是否已赋值
                     * @return EyebrowDensity 是否已赋值
                     * 
                     */
                    bool EyebrowDensityHasBeenSet() const;

                    /**
                     * 获取眉毛弯曲。
- AttributeItem对应的Type为 —— 0：不弯，1：弯眉。
                     * @return EyebrowCurve 眉毛弯曲。
- AttributeItem对应的Type为 —— 0：不弯，1：弯眉。
                     * 
                     */
                    AttributeItem GetEyebrowCurve() const;

                    /**
                     * 设置眉毛弯曲。
- AttributeItem对应的Type为 —— 0：不弯，1：弯眉。
                     * @param _eyebrowCurve 眉毛弯曲。
- AttributeItem对应的Type为 —— 0：不弯，1：弯眉。
                     * 
                     */
                    void SetEyebrowCurve(const AttributeItem& _eyebrowCurve);

                    /**
                     * 判断参数 EyebrowCurve 是否已赋值
                     * @return EyebrowCurve 是否已赋值
                     * 
                     */
                    bool EyebrowCurveHasBeenSet() const;

                    /**
                     * 获取眉毛长短。
- AttributeItem对应的Type为 —— 0：短眉毛，1：长眉毛。
                     * @return EyebrowLength 眉毛长短。
- AttributeItem对应的Type为 —— 0：短眉毛，1：长眉毛。
                     * 
                     */
                    AttributeItem GetEyebrowLength() const;

                    /**
                     * 设置眉毛长短。
- AttributeItem对应的Type为 —— 0：短眉毛，1：长眉毛。
                     * @param _eyebrowLength 眉毛长短。
- AttributeItem对应的Type为 —— 0：短眉毛，1：长眉毛。
                     * 
                     */
                    void SetEyebrowLength(const AttributeItem& _eyebrowLength);

                    /**
                     * 判断参数 EyebrowLength 是否已赋值
                     * @return EyebrowLength 是否已赋值
                     * 
                     */
                    bool EyebrowLengthHasBeenSet() const;

                private:

                    /**
                     * 眉毛浓密。
- AttributeItem对应的Type为 —— 0：淡眉，1：浓眉。
                     */
                    AttributeItem m_eyebrowDensity;
                    bool m_eyebrowDensityHasBeenSet;

                    /**
                     * 眉毛弯曲。
- AttributeItem对应的Type为 —— 0：不弯，1：弯眉。
                     */
                    AttributeItem m_eyebrowCurve;
                    bool m_eyebrowCurveHasBeenSet;

                    /**
                     * 眉毛长短。
- AttributeItem对应的Type为 —— 0：短眉毛，1：长眉毛。
                     */
                    AttributeItem m_eyebrowLength;
                    bool m_eyebrowLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_EYEBROW_H_
