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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DisassociateSecurityGroups请求参数结构体
                */
                class DisassociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupsRequest();
                    ~DisassociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例组 ID 数组，cynosdbmysql-grp-前缀开头或集群 ID。
说明：要获取集群的实例组 ID，可通过 [查询集群实例组](https://cloud.tencent.com/document/product/1003/103934) 进行。
                     * @return InstanceIds 实例组 ID 数组，cynosdbmysql-grp-前缀开头或集群 ID。
说明：要获取集群的实例组 ID，可通过 [查询集群实例组](https://cloud.tencent.com/document/product/1003/103934) 进行。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例组 ID 数组，cynosdbmysql-grp-前缀开头或集群 ID。
说明：要获取集群的实例组 ID，可通过 [查询集群实例组](https://cloud.tencent.com/document/product/1003/103934) 进行。
                     * @param _instanceIds 实例组 ID 数组，cynosdbmysql-grp-前缀开头或集群 ID。
说明：要获取集群的实例组 ID，可通过 [查询集群实例组](https://cloud.tencent.com/document/product/1003/103934) 进行。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
                     * @return SecurityGroupIds 要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
                     * @param _securityGroupIds 要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取可用区。
说明：请正确输入集群所在的主可用区，若输入非集群所在的主可用区可能显示调用成功，但实际执行会失败。
                     * @return Zone 可用区。
说明：请正确输入集群所在的主可用区，若输入非集群所在的主可用区可能显示调用成功，但实际执行会失败。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
说明：请正确输入集群所在的主可用区，若输入非集群所在的主可用区可能显示调用成功，但实际执行会失败。
                     * @param _zone 可用区。
说明：请正确输入集群所在的主可用区，若输入非集群所在的主可用区可能显示调用成功，但实际执行会失败。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 实例组 ID 数组，cynosdbmysql-grp-前缀开头或集群 ID。
说明：要获取集群的实例组 ID，可通过 [查询集群实例组](https://cloud.tencent.com/document/product/1003/103934) 进行。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 可用区。
说明：请正确输入集群所在的主可用区，若输入非集群所在的主可用区可能显示调用成功，但实际执行会失败。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
