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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_BINDAUTOSCALERRESOURCESTRATEGYTOGROUPSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_BINDAUTOSCALERRESOURCESTRATEGYTOGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * BindAutoScalerResourceStrategyToGroups请求参数结构体
                */
                class BindAutoScalerResourceStrategyToGroupsRequest : public AbstractModel
                {
                public:
                    BindAutoScalerResourceStrategyToGroupsRequest();
                    ~BindAutoScalerResourceStrategyToGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例ID
                     * @return GatewayId 网关实例ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayId 网关实例ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return StrategyId 策略ID
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略ID
                     * @param _strategyId 策略ID
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取网关分组ID列表
                     * @return GroupIds 网关分组ID列表
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置网关分组ID列表
                     * @param _groupIds 网关分组ID列表
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 网关分组ID列表
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_BINDAUTOSCALERRESOURCESTRATEGYTOGROUPSREQUEST_H_
