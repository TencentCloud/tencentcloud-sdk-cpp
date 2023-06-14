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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/SecurityGroup.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeDBSecurityGroups返回参数结构体
                */
                class DescribeDBSecurityGroupsResponse : public AbstractModel
                {
                public:
                    DescribeDBSecurityGroupsResponse();
                    ~DescribeDBSecurityGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组规则。
                     * @return Groups 安全组规则。
                     * 
                     */
                    std::vector<SecurityGroup> GetGroups() const;

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取安全组生效内网地址。
                     * @return VIP 安全组生效内网地址。
                     * 
                     */
                    std::string GetVIP() const;

                    /**
                     * 判断参数 VIP 是否已赋值
                     * @return VIP 是否已赋值
                     * 
                     */
                    bool VIPHasBeenSet() const;

                    /**
                     * 获取安全组生效内网端口。
                     * @return VPort 安全组生效内网端口。
                     * 
                     */
                    std::string GetVPort() const;

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                private:

                    /**
                     * 安全组规则。
                     */
                    std::vector<SecurityGroup> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 安全组生效内网地址。
                     */
                    std::string m_vIP;
                    bool m_vIPHasBeenSet;

                    /**
                     * 安全组生效内网端口。
                     */
                    std::string m_vPort;
                    bool m_vPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_
