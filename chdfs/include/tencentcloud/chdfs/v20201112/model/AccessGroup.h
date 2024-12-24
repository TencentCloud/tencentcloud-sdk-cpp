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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSGROUP_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 权限组
                */
                class AccessGroup : public AbstractModel
                {
                public:
                    AccessGroup();
                    ~AccessGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限组ID
                     * @return AccessGroupId 权限组ID
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置权限组ID
                     * @param _accessGroupId 权限组ID
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

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
                     * 获取权限组描述
                     * @return Description 权限组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置权限组描述
                     * @param _description 权限组描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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

                private:

                    /**
                     * 权限组ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * 权限组名称
                     */
                    std::string m_accessGroupName;
                    bool m_accessGroupNameHasBeenSet;

                    /**
                     * 权限组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSGROUP_H_
