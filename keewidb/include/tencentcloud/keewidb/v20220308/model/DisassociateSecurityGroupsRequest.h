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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
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
                     * 获取数据库引擎名称：keewidb。
                     * @return Product 数据库引擎名称：keewidb。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据库引擎名称：keewidb。
                     * @param _product 数据库引擎名称：keewidb。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取要绑定的安全组 ID，类似sg-efil****。
                     * @return SecurityGroupId 要绑定的安全组 ID，类似sg-efil****。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置要绑定的安全组 ID，类似sg-efil****。
                     * @param _securityGroupId 要绑定的安全组 ID，类似sg-efil****。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取实例 ID，格式如：kee-c1nl****，支持指定多个实例。
                     * @return InstanceIds 实例 ID，格式如：kee-c1nl****，支持指定多个实例。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID，格式如：kee-c1nl****，支持指定多个实例。
                     * @param _instanceIds 实例 ID，格式如：kee-c1nl****，支持指定多个实例。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎名称：keewidb。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 要绑定的安全组 ID，类似sg-efil****。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 实例 ID，格式如：kee-c1nl****，支持指定多个实例。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
