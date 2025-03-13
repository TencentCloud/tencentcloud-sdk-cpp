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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 实例网络信息
                */
                class InstanceNetInfo : public AbstractModel
                {
                public:
                    InstanceNetInfo();
                    ~InstanceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络类型
                     * @return InstanceGroupType 网络类型
                     * 
                     */
                    std::string GetInstanceGroupType() const;

                    /**
                     * 设置网络类型
                     * @param _instanceGroupType 网络类型
                     * 
                     */
                    void SetInstanceGroupType(const std::string& _instanceGroupType);

                    /**
                     * 判断参数 InstanceGroupType 是否已赋值
                     * @return InstanceGroupType 是否已赋值
                     * 
                     */
                    bool InstanceGroupTypeHasBeenSet() const;

                    /**
                     * 获取实例组ID
                     * @return InstanceGroupId 实例组ID
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置实例组ID
                     * @param _instanceGroupId 实例组ID
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

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
                     * 获取网络类型, 0-基础网络, 1-vpc网络, 2-黑石网络
                     * @return NetType 网络类型, 0-基础网络, 1-vpc网络, 2-黑石网络
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置网络类型, 0-基础网络, 1-vpc网络, 2-黑石网络
                     * @param _netType 网络类型, 0-基础网络, 1-vpc网络, 2-黑石网络
                     * 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取私有网络IP
                     * @return Vip 私有网络IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置私有网络IP
                     * @param _vip 私有网络IP
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
                     * 获取私有网络端口
                     * @return Vport 私有网络端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置私有网络端口
                     * @param _vport 私有网络端口
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
                     * 获取外网域名
                     * @return WanDomain 外网域名
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网域名
                     * @param _wanDomain 外网域名
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取外网IP
                     * @return WanIP 外网IP
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置外网IP
                     * @param _wanIP 外网IP
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取外网端口
                     * @return WanPort 外网端口
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网端口
                     * @param _wanPort 外网端口
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取外网开启状态
                     * @return WanStatus 外网开启状态
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置外网开启状态
                     * @param _wanStatus 外网开启状态
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                private:

                    /**
                     * 网络类型
                     */
                    std::string m_instanceGroupType;
                    bool m_instanceGroupTypeHasBeenSet;

                    /**
                     * 实例组ID
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 网络类型, 0-基础网络, 1-vpc网络, 2-黑石网络
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 私有网络IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 私有网络端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 外网域名
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 外网端口
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 外网开启状态
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
