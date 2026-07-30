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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNCONNROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNCONNROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 创建路由添加的指向此通道的路由
                */
                class CreateVpnConnRoute : public AbstractModel
                {
                public:
                    CreateVpnConnRoute();
                    ~CreateVpnConnRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目的端IDC网段</p>
                     * @return DestinationCidrBlock <p>目的端IDC网段</p>
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置<p>目的端IDC网段</p>
                     * @param _destinationCidrBlock <p>目的端IDC网段</p>
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>优先级；可选值0，100。</p>
                     * @return Priority <p>优先级；可选值0，100。</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>优先级；可选值0，100。</p>
                     * @param _priority <p>优先级；可选值0，100。</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>路由备注；可选值</p>
                     * @return Description <p>路由备注；可选值</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>路由备注；可选值</p>
                     * @param _description <p>路由备注；可选值</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>目的端IDC网段</p>
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * <p>优先级；可选值0，100。</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>路由备注；可选值</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNCONNROUTE_H_
