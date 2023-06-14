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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_DENOISING_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_DENOISING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 去噪参数
                */
                class Denoising : public AbstractModel
                {
                public:
                    Denoising();
                    ~Denoising() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取去噪方式，可选项：
templ：时域降噪；
spatial：空域降噪,
fast-spatial：快速空域降噪。
注意：可选择组合方式：
1.type:"templ,spatial" ;
2.type:"templ,fast-spatial"。
                     * @return Type 去噪方式，可选项：
templ：时域降噪；
spatial：空域降噪,
fast-spatial：快速空域降噪。
注意：可选择组合方式：
1.type:"templ,spatial" ;
2.type:"templ,fast-spatial"。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置去噪方式，可选项：
templ：时域降噪；
spatial：空域降噪,
fast-spatial：快速空域降噪。
注意：可选择组合方式：
1.type:"templ,spatial" ;
2.type:"templ,fast-spatial"。
                     * @param _type 去噪方式，可选项：
templ：时域降噪；
spatial：空域降噪,
fast-spatial：快速空域降噪。
注意：可选择组合方式：
1.type:"templ,spatial" ;
2.type:"templ,fast-spatial"。
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
                     * 获取时域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @return TemplStrength 时域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    double GetTemplStrength() const;

                    /**
                     * 设置时域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @param _templStrength 时域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    void SetTemplStrength(const double& _templStrength);

                    /**
                     * 判断参数 TemplStrength 是否已赋值
                     * @return TemplStrength 是否已赋值
                     * 
                     */
                    bool TemplStrengthHasBeenSet() const;

                    /**
                     * 获取空域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @return SpatialStrength 空域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    double GetSpatialStrength() const;

                    /**
                     * 设置空域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @param _spatialStrength 空域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    void SetSpatialStrength(const double& _spatialStrength);

                    /**
                     * 判断参数 SpatialStrength 是否已赋值
                     * @return SpatialStrength 是否已赋值
                     * 
                     */
                    bool SpatialStrengthHasBeenSet() const;

                private:

                    /**
                     * 去噪方式，可选项：
templ：时域降噪；
spatial：空域降噪,
fast-spatial：快速空域降噪。
注意：可选择组合方式：
1.type:"templ,spatial" ;
2.type:"templ,fast-spatial"。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 时域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     */
                    double m_templStrength;
                    bool m_templStrengthHasBeenSet;

                    /**
                     * 空域去噪强度，可选值：0.0-1.0 。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     */
                    double m_spatialStrength;
                    bool m_spatialStrengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_DENOISING_H_
