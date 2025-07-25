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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHIGHPRIORITYROUTEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHIGHPRIORITYROUTEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HighPriorityModifyItem.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyHighPriorityRouteAttribute请求参数结构体
                */
                class ModifyHighPriorityRouteAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHighPriorityRouteAttributeRequest();
                    ~ModifyHighPriorityRouteAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高优路由表唯一 ID。
                     * @return HighPriorityRouteTableId 高优路由表唯一 ID。
                     * 
                     */
                    std::string GetHighPriorityRouteTableId() const;

                    /**
                     * 设置高优路由表唯一 ID。
                     * @param _highPriorityRouteTableId 高优路由表唯一 ID。
                     * 
                     */
                    void SetHighPriorityRouteTableId(const std::string& _highPriorityRouteTableId);

                    /**
                     * 判断参数 HighPriorityRouteTableId 是否已赋值
                     * @return HighPriorityRouteTableId 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteTableIdHasBeenSet() const;

                    /**
                     * 获取高优路由表条目修改属性。
                     * @return HighPriorityModifyItems 高优路由表条目修改属性。
                     * 
                     */
                    std::vector<HighPriorityModifyItem> GetHighPriorityModifyItems() const;

                    /**
                     * 设置高优路由表条目修改属性。
                     * @param _highPriorityModifyItems 高优路由表条目修改属性。
                     * 
                     */
                    void SetHighPriorityModifyItems(const std::vector<HighPriorityModifyItem>& _highPriorityModifyItems);

                    /**
                     * 判断参数 HighPriorityModifyItems 是否已赋值
                     * @return HighPriorityModifyItems 是否已赋值
                     * 
                     */
                    bool HighPriorityModifyItemsHasBeenSet() const;

                private:

                    /**
                     * 高优路由表唯一 ID。
                     */
                    std::string m_highPriorityRouteTableId;
                    bool m_highPriorityRouteTableIdHasBeenSet;

                    /**
                     * 高优路由表条目修改属性。
                     */
                    std::vector<HighPriorityModifyItem> m_highPriorityModifyItems;
                    bool m_highPriorityModifyItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHIGHPRIORITYROUTEATTRIBUTEREQUEST_H_
