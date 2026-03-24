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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBESYSTEMRULEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBESYSTEMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeSystemRule请求参数结构体
                */
                class DescribeSystemRuleRequest : public AbstractModel
                {
                public:
                    DescribeSystemRuleRequest();
                    ~DescribeSystemRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则唯一标识
                     * @return Identifier 规则唯一标识
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置规则唯一标识
                     * @param _identifier 规则唯一标识
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                private:

                    /**
                     * 规则唯一标识
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBESYSTEMRULEREQUEST_H_
