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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_NETWORKACCESS_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_NETWORKACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 网络相关信息。（该数据结构已废弃，网络相关信息使用DBInstanceNetInfo）
                */
                class NetworkAccess : public AbstractModel
                {
                public:
                    NetworkAccess();
                    ~NetworkAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络资源id，实例id或RO组id
                     * @return ResourceId 网络资源id，实例id或RO组id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置网络资源id，实例id或RO组id
                     * @param _resourceId 网络资源id，实例id或RO组id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型，1-实例 2-RO组
                     * @return ResourceType 资源类型，1-实例 2-RO组
                     * 
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置资源类型，1-实例 2-RO组
                     * @param _resourceType 资源类型，1-实例 2-RO组
                     * 
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取IPV4地址
                     * @return Vip IPV4地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IPV4地址
                     * @param _vip IPV4地址
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取IPV6地址
                     * @return Vip6 IPV6地址
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置IPV6地址
                     * @param _vip6 IPV6地址
                     * 
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取访问端口
                     * @return Vport 访问端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置访问端口
                     * @param _vport 访问端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取网络状态，1-申请中，2-使用中，3-删除中，4-已删除
                     * @return VpcStatus 网络状态，1-申请中，2-使用中，3-删除中，4-已删除
                     * 
                     */
                    int64_t GetVpcStatus() const;

                    /**
                     * 设置网络状态，1-申请中，2-使用中，3-删除中，4-已删除
                     * @param _vpcStatus 网络状态，1-申请中，2-使用中，3-删除中，4-已删除
                     * 
                     */
                    void SetVpcStatus(const int64_t& _vpcStatus);

                    /**
                     * 判断参数 VpcStatus 是否已赋值
                     * @return VpcStatus 是否已赋值
                     * 
                     */
                    bool VpcStatusHasBeenSet() const;

                private:

                    /**
                     * 网络资源id，实例id或RO组id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型，1-实例 2-RO组
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * IPV4地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * IPV6地址
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * 访问端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 网络状态，1-申请中，2-使用中，3-删除中，4-已删除
                     */
                    int64_t m_vpcStatus;
                    bool m_vpcStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_NETWORKACCESS_H_
