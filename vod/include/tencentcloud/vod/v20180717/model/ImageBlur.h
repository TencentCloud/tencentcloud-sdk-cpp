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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBLUR_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBLUR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片模糊处理。
                */
                class ImageBlur : public AbstractModel
                {
                public:
                    ImageBlur();
                    ~ImageBlur() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片模糊的操作类型。可选模式有：
<li>Gaussian : 高斯模糊。</li>
                     * @return Type 图片模糊的操作类型。可选模式有：
<li>Gaussian : 高斯模糊。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置图片模糊的操作类型。可选模式有：
<li>Gaussian : 高斯模糊。</li>
                     * @param _type 图片模糊的操作类型。可选模式有：
<li>Gaussian : 高斯模糊。</li>
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
                     * 获取模糊半径，取值范围为1 - 50。当 Type 取值为 Gaussian 时此字段有效。
                     * @return Radius 模糊半径，取值范围为1 - 50。当 Type 取值为 Gaussian 时此字段有效。
                     * 
                     */
                    int64_t GetRadius() const;

                    /**
                     * 设置模糊半径，取值范围为1 - 50。当 Type 取值为 Gaussian 时此字段有效。
                     * @param _radius 模糊半径，取值范围为1 - 50。当 Type 取值为 Gaussian 时此字段有效。
                     * 
                     */
                    void SetRadius(const int64_t& _radius);

                    /**
                     * 判断参数 Radius 是否已赋值
                     * @return Radius 是否已赋值
                     * 
                     */
                    bool RadiusHasBeenSet() const;

                    /**
                     * 获取正态分布的标准差，必须大于0。当 Type 取值为 Gaussian 时此字段有效。
                     * @return Sigma 正态分布的标准差，必须大于0。当 Type 取值为 Gaussian 时此字段有效。
                     * 
                     */
                    int64_t GetSigma() const;

                    /**
                     * 设置正态分布的标准差，必须大于0。当 Type 取值为 Gaussian 时此字段有效。
                     * @param _sigma 正态分布的标准差，必须大于0。当 Type 取值为 Gaussian 时此字段有效。
                     * 
                     */
                    void SetSigma(const int64_t& _sigma);

                    /**
                     * 判断参数 Sigma 是否已赋值
                     * @return Sigma 是否已赋值
                     * 
                     */
                    bool SigmaHasBeenSet() const;

                private:

                    /**
                     * 图片模糊的操作类型。可选模式有：
<li>Gaussian : 高斯模糊。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 模糊半径，取值范围为1 - 50。当 Type 取值为 Gaussian 时此字段有效。
                     */
                    int64_t m_radius;
                    bool m_radiusHasBeenSet;

                    /**
                     * 正态分布的标准差，必须大于0。当 Type 取值为 Gaussian 时此字段有效。
                     */
                    int64_t m_sigma;
                    bool m_sigmaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBLUR_H_
