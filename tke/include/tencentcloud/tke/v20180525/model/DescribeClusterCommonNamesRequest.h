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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCOMMONNAMESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCOMMONNAMESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterCommonNames请求参数结构体
                */
                class DescribeClusterCommonNamesRequest : public AbstractModel
                {
                public:
                    DescribeClusterCommonNamesRequest();
                    ~DescribeClusterCommonNamesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取子账户列表，不可超出最大值50
                     * @return SubaccountUins 子账户列表，不可超出最大值50
                     * 
                     */
                    std::vector<std::string> GetSubaccountUins() const;

                    /**
                     * 设置子账户列表，不可超出最大值50
                     * @param _subaccountUins 子账户列表，不可超出最大值50
                     * 
                     */
                    void SetSubaccountUins(const std::vector<std::string>& _subaccountUins);

                    /**
                     * 判断参数 SubaccountUins 是否已赋值
                     * @return SubaccountUins 是否已赋值
                     * 
                     */
                    bool SubaccountUinsHasBeenSet() const;

                    /**
                     * 获取角色ID列表，不可超出最大值50
                     * @return RoleIds 角色ID列表，不可超出最大值50
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置角色ID列表，不可超出最大值50
                     * @param _roleIds 角色ID列表，不可超出最大值50
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 子账户列表，不可超出最大值50
                     */
                    std::vector<std::string> m_subaccountUins;
                    bool m_subaccountUinsHasBeenSet;

                    /**
                     * 角色ID列表，不可超出最大值50
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCOMMONNAMESREQUEST_H_
