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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CROSSTARGETS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CROSSTARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 跨域2.0云联网下子机和网卡信息
                */
                class CrossTargets : public AbstractModel
                {
                public:
                    CrossTargets();
                    ~CrossTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本地私有网络ID，即负载均衡的VpcId。
                     * @return LocalVpcId 本地私有网络ID，即负载均衡的VpcId。
                     * 
                     */
                    std::string GetLocalVpcId() const;

                    /**
                     * 设置本地私有网络ID，即负载均衡的VpcId。
                     * @param _localVpcId 本地私有网络ID，即负载均衡的VpcId。
                     * 
                     */
                    void SetLocalVpcId(const std::string& _localVpcId);

                    /**
                     * 判断参数 LocalVpcId 是否已赋值
                     * @return LocalVpcId 是否已赋值
                     * 
                     */
                    bool LocalVpcIdHasBeenSet() const;

                    /**
                     * 获取子机或网卡所属的私有网络ID。
                     * @return VpcId 子机或网卡所属的私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置子机或网卡所属的私有网络ID。
                     * @param _vpcId 子机或网卡所属的私有网络ID。
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
                     * 获取子机或网卡的IP地址
                     * @return IP 子机或网卡的IP地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置子机或网卡的IP地址
                     * @param _iP 子机或网卡的IP地址
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取子机或网卡所属的私有网络名称。
                     * @return VpcName 子机或网卡所属的私有网络名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置子机或网卡所属的私有网络名称。
                     * @param _vpcName 子机或网卡所属的私有网络名称。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取子机的网卡ID。
                     * @return EniId 子机的网卡ID。
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置子机的网卡ID。
                     * @param _eniId 子机的网卡ID。
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                    /**
                     * 获取子机实例ID。
                     * @return InstanceId 子机实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置子机实例ID。
                     * @param _instanceId 子机实例ID。
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
                     * 获取子机实例名称。
                     * @return InstanceName 子机实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置子机实例名称。
                     * @param _instanceName 子机实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取子机或者网卡所属的地域。
                     * @return Region 子机或者网卡所属的地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置子机或者网卡所属的地域。
                     * @param _region 子机或者网卡所属的地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 本地私有网络ID，即负载均衡的VpcId。
                     */
                    std::string m_localVpcId;
                    bool m_localVpcIdHasBeenSet;

                    /**
                     * 子机或网卡所属的私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子机或网卡的IP地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 子机或网卡所属的私有网络名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子机的网卡ID。
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * 子机实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 子机实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 子机或者网卡所属的地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CROSSTARGETS_H_
