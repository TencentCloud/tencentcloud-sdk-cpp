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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODECONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生API网关节点配置。
                */
                class CloudNativeAPIGatewayNodeConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayNodeConfig();
                    ~CloudNativeAPIGatewayNodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点配置, 1c2g|2c4g|4c8g|8c16g。
                     * @return Specification 节点配置, 1c2g|2c4g|4c8g|8c16g。
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置节点配置, 1c2g|2c4g|4c8g|8c16g。
                     * @param _specification 节点配置, 1c2g|2c4g|4c8g|8c16g。
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取节点数量，2-9。
                     * @return Number 节点数量，2-9。
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置节点数量，2-9。
                     * @param _number 节点数量，2-9。
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 节点配置, 1c2g|2c4g|4c8g|8c16g。
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 节点数量，2-9。
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODECONFIG_H_
