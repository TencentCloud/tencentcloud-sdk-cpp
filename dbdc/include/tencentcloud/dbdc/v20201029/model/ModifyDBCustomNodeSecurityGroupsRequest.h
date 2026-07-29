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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * ModifyDBCustomNodeSecurityGroups请求参数结构体
                */
                class ModifyDBCustomNodeSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBCustomNodeSecurityGroupsRequest();
                    ~ModifyDBCustomNodeSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点id</p>
                     * @return NodeId <p>节点id</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点id</p>
                     * @param _nodeId <p>节点id</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
                     * @return SecurityGroupIds <p>安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
                     * @param _securityGroupIds <p>安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>节点id</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODESECURITYGROUPSREQUEST_H_
