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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePlanForZone返回参数结构体
                */
                class CreatePlanForZoneResponse : public AbstractModel
                {
                public:
                    CreatePlanForZoneResponse();
                    ~CreatePlanForZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取购买的资源名字列表。
                     * @return ResourceNames 购买的资源名字列表。
                     * 
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     * 
                     */
                    bool ResourceNamesHasBeenSet() const;

                    /**
                     * 获取购买的订单号列表。
                     * @return DealNames 购买的订单号列表。
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 购买的资源名字列表。
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                    /**
                     * 购买的订单号列表。
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONERESPONSE_H_
