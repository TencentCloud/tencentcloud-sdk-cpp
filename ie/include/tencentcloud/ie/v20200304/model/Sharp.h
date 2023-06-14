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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SHARP_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SHARP_H_

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
                * 细节增强参数
                */
                class Sharp : public AbstractModel
                {
                public:
                    Sharp();
                    ~Sharp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取细节增强方式,取值：normal。
                     * @return Type 细节增强方式,取值：normal。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置细节增强方式,取值：normal。
                     * @param _type 细节增强方式,取值：normal。
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
                     * 获取细节增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @return Ratio 细节增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置细节增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @param _ratio 细节增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * 细节增强方式,取值：normal。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 细节增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SHARP_H_
