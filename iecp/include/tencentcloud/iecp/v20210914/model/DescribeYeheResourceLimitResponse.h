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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEYEHERESOURCELIMITRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEYEHERESOURCELIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeYeheResourceLimit返回参数结构体
                */
                class DescribeYeheResourceLimitResponse : public AbstractModel
                {
                public:
                    DescribeYeheResourceLimitResponse();
                    ~DescribeYeheResourceLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户父账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户父账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取允许创建的节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateNodeLimit 允许创建的节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateNodeLimit() const;

                    /**
                     * 判断参数 CreateNodeLimit 是否已赋值
                     * @return CreateNodeLimit 是否已赋值
                     * 
                     */
                    bool CreateNodeLimitHasBeenSet() const;

                    /**
                     * 获取允许创建的集群数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateClusterLimit 允许创建的集群数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateClusterLimit() const;

                    /**
                     * 判断参数 CreateClusterLimit 是否已赋值
                     * @return CreateClusterLimit 是否已赋值
                     * 
                     */
                    bool CreateClusterLimitHasBeenSet() const;

                    /**
                     * 获取是否有监控开启权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnablePermMonitor 是否有监控开启权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnablePermMonitor() const;

                    /**
                     * 判断参数 EnablePermMonitor 是否已赋值
                     * @return EnablePermMonitor 是否已赋值
                     * 
                     */
                    bool EnablePermMonitorHasBeenSet() const;

                    /**
                     * 获取节点是否有admin的所有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnablePermAdminNode 节点是否有admin的所有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnablePermAdminNode() const;

                    /**
                     * 判断参数 EnablePermAdminNode 是否已赋值
                     * @return EnablePermAdminNode 是否已赋值
                     * 
                     */
                    bool EnablePermAdminNodeHasBeenSet() const;

                private:

                    /**
                     * 用户父账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 允许创建的节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createNodeLimit;
                    bool m_createNodeLimitHasBeenSet;

                    /**
                     * 允许创建的集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createClusterLimit;
                    bool m_createClusterLimitHasBeenSet;

                    /**
                     * 是否有监控开启权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enablePermMonitor;
                    bool m_enablePermMonitorHasBeenSet;

                    /**
                     * 节点是否有admin的所有权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enablePermAdminNode;
                    bool m_enablePermAdminNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEYEHERESOURCELIMITRESPONSE_H_
