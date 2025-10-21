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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEDBSECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEDBSECURITYGROUPSREQUEST_H_

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
                * DescribeDBSecurityGroups请求参数结构体
                */
                class DescribeDBSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDBSecurityGroupsRequest();
                    ~DescribeDBSecurityGroupsRequest() = default;
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
                     * 获取实例ID，格式如：kee-c1nl9***。
                     * @return InstanceId 实例ID，格式如：kee-c1nl9***。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：kee-c1nl9***。
                     * @param _instanceId 实例ID，格式如：kee-c1nl9***。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎名称：keewidb。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 实例ID，格式如：kee-c1nl9***。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEDBSECURITYGROUPSREQUEST_H_
