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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取安全组 ID。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/api/236/15854) 接口获取。
                     * @return SecurityGroupId 安全组 ID。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/api/236/15854) 接口获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组 ID。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/api/236/15854) 接口获取。
                     * @param _securityGroupId 安全组 ID。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/api/236/15854) 接口获取。
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
                     * 获取实例 ID 列表，一个或者多个实例 ID 组成的数组。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @return InstanceIds 实例 ID 列表，一个或者多个实例 ID 组成的数组。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表，一个或者多个实例 ID 组成的数组。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @param _instanceIds 实例 ID 列表，一个或者多个实例 ID 组成的数组。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
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
                     * 获取当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组，需要将该入参置为 True，默认为 False。
                     * @return ForReadonlyInstance 当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组，需要将该入参置为 True，默认为 False。
                     * 
                     */
                    bool GetForReadonlyInstance() const;

                    /**
                     * 设置当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组，需要将该入参置为 True，默认为 False。
                     * @param _forReadonlyInstance 当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组，需要将该入参置为 True，默认为 False。
                     * 
                     */
                    void SetForReadonlyInstance(const bool& _forReadonlyInstance);

                    /**
                     * 判断参数 ForReadonlyInstance 是否已赋值
                     * @return ForReadonlyInstance 是否已赋值
                     * 
                     */
                    bool ForReadonlyInstanceHasBeenSet() const;

                private:

                    /**
                     * 安全组 ID。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/api/236/15854) 接口获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 实例 ID 列表，一个或者多个实例 ID 组成的数组。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组，需要将该入参置为 True，默认为 False。
                     */
                    bool m_forReadonlyInstance;
                    bool m_forReadonlyInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
