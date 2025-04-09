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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYROUTETABLE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYROUTETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HighPriorityRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 高优路由表信息
                */
                class HighPriorityRouteTable : public AbstractModel
                {
                public:
                    HighPriorityRouteTable();
                    ~HighPriorityRouteTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取高优路由表名称。
                     * @return Name 高优路由表名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置高优路由表名称。
                     * @param _name 高优路由表名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取高优路由表关联的子网列表。
                     * @return SubnetSet 高优路由表关联的子网列表。
                     * 
                     */
                    std::vector<std::string> GetSubnetSet() const;

                    /**
                     * 设置高优路由表关联的子网列表。
                     * @param _subnetSet 高优路由表关联的子网列表。
                     * 
                     */
                    void SetSubnetSet(const std::vector<std::string>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                    /**
                     * 获取高优路由表条目信息
                     * @return HighPriorityRouteSet 高优路由表条目信息
                     * 
                     */
                    std::vector<HighPriorityRoute> GetHighPriorityRouteSet() const;

                    /**
                     * 设置高优路由表条目信息
                     * @param _highPriorityRouteSet 高优路由表条目信息
                     * 
                     */
                    void SetHighPriorityRouteSet(const std::vector<HighPriorityRoute>& _highPriorityRouteSet);

                    /**
                     * 判断参数 HighPriorityRouteSet 是否已赋值
                     * @return HighPriorityRouteSet 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteSetHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 高优路由表唯一 ID。
                     */
                    std::string m_highPriorityRouteTableId;
                    bool m_highPriorityRouteTableIdHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 高优路由表名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 高优路由表关联的子网列表。
                     */
                    std::vector<std::string> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                    /**
                     * 高优路由表条目信息
                     */
                    std::vector<HighPriorityRoute> m_highPriorityRouteSet;
                    bool m_highPriorityRouteSetHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYROUTETABLE_H_
