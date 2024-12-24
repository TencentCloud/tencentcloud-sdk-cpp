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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSGROUPREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateAccessGroup请求参数结构体
                */
                class CreateAccessGroupRequest : public AbstractModel
                {
                public:
                    CreateAccessGroupRequest();
                    ~CreateAccessGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组名称
                     * @return AccessGroupName 权限组名称
                     * 
                     */
                    std::string GetAccessGroupName() const;

                    /**
                     * 设置权限组名称
                     * @param _accessGroupName 权限组名称
                     * 
                     */
                    void SetAccessGroupName(const std::string& _accessGroupName);

                    /**
                     * 判断参数 AccessGroupName 是否已赋值
                     * @return AccessGroupName 是否已赋值
                     * 
                     */
                    bool AccessGroupNameHasBeenSet() const;

                    /**
                     * 获取VPC网络类型（1：CVM）
                     * @return VpcType VPC网络类型（1：CVM）
                     * 
                     */
                    uint64_t GetVpcType() const;

                    /**
                     * 设置VPC网络类型（1：CVM）
                     * @param _vpcType VPC网络类型（1：CVM）
                     * 
                     */
                    void SetVpcType(const uint64_t& _vpcType);

                    /**
                     * 判断参数 VpcType 是否已赋值
                     * @return VpcType 是否已赋值
                     * 
                     */
                    bool VpcTypeHasBeenSet() const;

                    /**
                     * 获取VPC网络ID
                     * @return VpcId VPC网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID
                     * @param _vpcId VPC网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取权限组描述，默认为空字符串
                     * @return Description 权限组描述，默认为空字符串
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置权限组描述，默认为空字符串
                     * @param _description 权限组描述，默认为空字符串
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 权限组名称
                     */
                    std::string m_accessGroupName;
                    bool m_accessGroupNameHasBeenSet;

                    /**
                     * VPC网络类型（1：CVM）
                     */
                    uint64_t m_vpcType;
                    bool m_vpcTypeHasBeenSet;

                    /**
                     * VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 权限组描述，默认为空字符串
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSGROUPREQUEST_H_
