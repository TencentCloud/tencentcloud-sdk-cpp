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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LINUXNODEATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LINUXNODEATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 添加删除客户端节点列表
                */
                class LinuxNodeAttribute : public AbstractModel
                {
                public:
                    LinuxNodeAttribute();
                    ~LinuxNodeAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cvmId
                     * @return InstanceId cvmId
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置cvmId
                     * @param _instanceId cvmId
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
                     * 获取节点所属vpcid
                     * @return VpcId 节点所属vpcid
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置节点所属vpcid
                     * @param _vpcId 节点所属vpcid
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
                     * 获取节点所属子网id
                     * @return SubnetId 节点所属子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置节点所属子网id
                     * @param _subnetId 节点所属子网id
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
                     * 获取linux客户端节点地址
                     * @return LinuxClientNodeIp linux客户端节点地址
                     * 
                     */
                    std::string GetLinuxClientNodeIp() const;

                    /**
                     * 设置linux客户端节点地址
                     * @param _linuxClientNodeIp linux客户端节点地址
                     * 
                     */
                    void SetLinuxClientNodeIp(const std::string& _linuxClientNodeIp);

                    /**
                     * 判断参数 LinuxClientNodeIp 是否已赋值
                     * @return LinuxClientNodeIp 是否已赋值
                     * 
                     */
                    bool LinuxClientNodeIpHasBeenSet() const;

                    /**
                     * 获取自定义挂载点
                     * @return MountPoint 自定义挂载点
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置自定义挂载点
                     * @param _mountPoint 自定义挂载点
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                private:

                    /**
                     * cvmId
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点所属vpcid
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 节点所属子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * linux客户端节点地址
                     */
                    std::string m_linuxClientNodeIp;
                    bool m_linuxClientNodeIpHasBeenSet;

                    /**
                     * 自定义挂载点
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LINUXNODEATTRIBUTE_H_
