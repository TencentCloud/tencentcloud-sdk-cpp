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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSecurityGroup请求参数结构体
                */
                class ModifyDBInstanceSecurityGroupRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupRequest();
                    ~ModifyDBInstanceSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。例如：cmgo-7pje****。
                     * @return InstanceId 实例 ID。例如：cmgo-7pje****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。例如：cmgo-7pje****。
                     * @param _instanceId 实例 ID。例如：cmgo-7pje****。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取目标安全组 ID。请通过接口[DescribeSecurityGroup](https://cloud.tencent.com/document/product/240/55675)查看具体的安全组 ID。
                     * @return SecurityGroupIds 目标安全组 ID。请通过接口[DescribeSecurityGroup](https://cloud.tencent.com/document/product/240/55675)查看具体的安全组 ID。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置目标安全组 ID。请通过接口[DescribeSecurityGroup](https://cloud.tencent.com/document/product/240/55675)查看具体的安全组 ID。
                     * @param _securityGroupIds 目标安全组 ID。请通过接口[DescribeSecurityGroup](https://cloud.tencent.com/document/product/240/55675)查看具体的安全组 ID。
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
                     * 实例 ID。例如：cmgo-7pje****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标安全组 ID。请通过接口[DescribeSecurityGroup](https://cloud.tencent.com/document/product/240/55675)查看具体的安全组 ID。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESECURITYGROUPREQUEST_H_
