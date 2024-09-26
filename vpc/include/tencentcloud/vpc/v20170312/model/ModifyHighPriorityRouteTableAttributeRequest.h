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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHIGHPRIORITYROUTETABLEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHIGHPRIORITYROUTETABLEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyHighPriorityRouteTableAttribute请求参数结构体
                */
                class ModifyHighPriorityRouteTableAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHighPriorityRouteTableAttributeRequest();
                    ~ModifyHighPriorityRouteTableAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高优路由表表唯一ID 
                     * @return HighPriorityRouteTableId 高优路由表表唯一ID 
                     * 
                     */
                    std::string GetHighPriorityRouteTableId() const;

                    /**
                     * 设置高优路由表表唯一ID 
                     * @param _highPriorityRouteTableId 高优路由表表唯一ID 
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
                     * 获取高优路由表表名称
                     * @return Name 高优路由表表名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置高优路由表表名称
                     * @param _name 高优路由表表名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 高优路由表表唯一ID 
                     */
                    std::string m_highPriorityRouteTableId;
                    bool m_highPriorityRouteTableIdHasBeenSet;

                    /**
                     * 高优路由表表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHIGHPRIORITYROUTETABLEATTRIBUTEREQUEST_H_
