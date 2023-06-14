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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_RGBAINFO_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_RGBAINFO_H_

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
                * RGBA通道信息
                */
                class RGBAInfo : public AbstractModel
                {
                public:
                    RGBAInfo();
                    ~RGBAInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取R通道数值。[0,255]。
                     * @return R R通道数值。[0,255]。
                     * 
                     */
                    int64_t GetR() const;

                    /**
                     * 设置R通道数值。[0,255]。
                     * @param _r R通道数值。[0,255]。
                     * 
                     */
                    void SetR(const int64_t& _r);

                    /**
                     * 判断参数 R 是否已赋值
                     * @return R 是否已赋值
                     * 
                     */
                    bool RHasBeenSet() const;

                    /**
                     * 获取G通道数值。[0,255]。
                     * @return G G通道数值。[0,255]。
                     * 
                     */
                    int64_t GetG() const;

                    /**
                     * 设置G通道数值。[0,255]。
                     * @param _g G通道数值。[0,255]。
                     * 
                     */
                    void SetG(const int64_t& _g);

                    /**
                     * 判断参数 G 是否已赋值
                     * @return G 是否已赋值
                     * 
                     */
                    bool GHasBeenSet() const;

                    /**
                     * 获取B通道数值。[0,255]。
                     * @return B B通道数值。[0,255]。
                     * 
                     */
                    int64_t GetB() const;

                    /**
                     * 设置B通道数值。[0,255]。
                     * @param _b B通道数值。[0,255]。
                     * 
                     */
                    void SetB(const int64_t& _b);

                    /**
                     * 判断参数 B 是否已赋值
                     * @return B 是否已赋值
                     * 
                     */
                    bool BHasBeenSet() const;

                    /**
                     * 获取A通道数值。[0,100]。建议取值50。
                     * @return A A通道数值。[0,100]。建议取值50。
                     * 
                     */
                    int64_t GetA() const;

                    /**
                     * 设置A通道数值。[0,100]。建议取值50。
                     * @param _a A通道数值。[0,100]。建议取值50。
                     * 
                     */
                    void SetA(const int64_t& _a);

                    /**
                     * 判断参数 A 是否已赋值
                     * @return A 是否已赋值
                     * 
                     */
                    bool AHasBeenSet() const;

                private:

                    /**
                     * R通道数值。[0,255]。
                     */
                    int64_t m_r;
                    bool m_rHasBeenSet;

                    /**
                     * G通道数值。[0,255]。
                     */
                    int64_t m_g;
                    bool m_gHasBeenSet;

                    /**
                     * B通道数值。[0,255]。
                     */
                    int64_t m_b;
                    bool m_bHasBeenSet;

                    /**
                     * A通道数值。[0,100]。建议取值50。
                     */
                    int64_t m_a;
                    bool m_aHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_RGBAINFO_H_
