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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCLUSTERSUMMARYREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCLUSTERSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetClusterSummary请求参数结构体
                */
                class GetClusterSummaryRequest : public AbstractModel
                {
                public:
                    GetClusterSummaryRequest();
                    ~GetClusterSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名称，固定字段：cluster_mng
                     * @return Module 模块名称，固定字段：cluster_mng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名称，固定字段：cluster_mng
                     * @param _module 模块名称，固定字段：cluster_mng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名称，固定字段：cluster_summary
                     * @return Operation 操作名称，固定字段：cluster_summary
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名称，固定字段：cluster_summary
                     * @param _operation 操作名称，固定字段：cluster_summary
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取区块链网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置区块链网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取组织ID，固定字段：0
                     * @return GroupId 组织ID，固定字段：0
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置组织ID，固定字段：0
                     * @param _groupId 组织ID，固定字段：0
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取调用接口的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @return GroupName 调用接口的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置调用接口的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @param _groupName 调用接口的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 模块名称，固定字段：cluster_mng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名称，固定字段：cluster_summary
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 组织ID，固定字段：0
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 调用接口的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCLUSTERSUMMARYREQUEST_H_
