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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 挂载点信息
                */
                class MountInfo : public AbstractModel
                {
                public:
                    MountInfo();
                    ~MountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件系统 ID</p>
                     * @return FileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID</p>
                     * @param _fileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>挂载点 ID</p>
                     * @return MountTargetId <p>挂载点 ID</p>
                     * 
                     */
                    std::string GetMountTargetId() const;

                    /**
                     * 设置<p>挂载点 ID</p>
                     * @param _mountTargetId <p>挂载点 ID</p>
                     * 
                     */
                    void SetMountTargetId(const std::string& _mountTargetId);

                    /**
                     * 判断参数 MountTargetId 是否已赋值
                     * @return MountTargetId 是否已赋值
                     * 
                     */
                    bool MountTargetIdHasBeenSet() const;

                    /**
                     * 获取<p>挂载点 IP</p>
                     * @return IpAddress <p>挂载点 IP</p>
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置<p>挂载点 IP</p>
                     * @param _ipAddress <p>挂载点 IP</p>
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取<p>挂载根目录</p>
                     * @return FSID <p>挂载根目录</p>
                     * 
                     */
                    std::string GetFSID() const;

                    /**
                     * 设置<p>挂载根目录</p>
                     * @param _fSID <p>挂载根目录</p>
                     * 
                     */
                    void SetFSID(const std::string& _fSID);

                    /**
                     * 判断参数 FSID 是否已赋值
                     * @return FSID 是否已赋值
                     * 
                     */
                    bool FSIDHasBeenSet() const;

                    /**
                     * 获取<p>挂载点状态，包括creating：创建中；available：运行中；<br>deleting：删除中；<br>create_failed： 创建失败</p>
                     * @return LifeCycleState <p>挂载点状态，包括creating：创建中；available：运行中；<br>deleting：删除中；<br>create_failed： 创建失败</p>
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置<p>挂载点状态，包括creating：创建中；available：运行中；<br>deleting：删除中；<br>create_failed： 创建失败</p>
                     * @param _lifeCycleState <p>挂载点状态，包括creating：创建中；available：运行中；<br>deleting：删除中；<br>create_failed： 创建失败</p>
                     * 
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取<p>网络类型，包括VPC,CCN</p>
                     * @return NetworkInterface <p>网络类型，包括VPC,CCN</p>
                     * 
                     */
                    std::string GetNetworkInterface() const;

                    /**
                     * 设置<p>网络类型，包括VPC,CCN</p>
                     * @param _networkInterface <p>网络类型，包括VPC,CCN</p>
                     * 
                     */
                    void SetNetworkInterface(const std::string& _networkInterface);

                    /**
                     * 判断参数 NetworkInterface 是否已赋值
                     * @return NetworkInterface 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceHasBeenSet() const;

                    /**
                     * 获取<p>私有网络 ID</p>
                     * @return VpcId <p>私有网络 ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络 ID</p>
                     * @param _vpcId <p>私有网络 ID</p>
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
                     * 获取<p>私有网络名称</p>
                     * @return VpcName <p>私有网络名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>私有网络名称</p>
                     * @param _vpcName <p>私有网络名称</p>
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
                     * 获取<p>子网 Id</p>
                     * @return SubnetId <p>子网 Id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 Id</p>
                     * @param _subnetId <p>子网 Id</p>
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
                     * 获取<p>子网名称</p>
                     * @return SubnetName <p>子网名称</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称</p>
                     * @param _subnetName <p>子网名称</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>CFS Turbo使用的云联网ID</p>
                     * @return CcnID <p>CFS Turbo使用的云联网ID</p>
                     * 
                     */
                    std::string GetCcnID() const;

                    /**
                     * 设置<p>CFS Turbo使用的云联网ID</p>
                     * @param _ccnID <p>CFS Turbo使用的云联网ID</p>
                     * 
                     */
                    void SetCcnID(const std::string& _ccnID);

                    /**
                     * 判断参数 CcnID 是否已赋值
                     * @return CcnID 是否已赋值
                     * 
                     */
                    bool CcnIDHasBeenSet() const;

                    /**
                     * 获取<p>云联网中CFS Turbo使用的网段</p>
                     * @return CidrBlock <p>云联网中CFS Turbo使用的网段</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>云联网中CFS Turbo使用的网段</p>
                     * @param _cidrBlock <p>云联网中CFS Turbo使用的网段</p>
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>占用用户ip列表</p>
                     * @return ServerList <p>占用用户ip列表</p>
                     * 
                     */
                    std::vector<std::string> GetServerList() const;

                    /**
                     * 设置<p>占用用户ip列表</p>
                     * @param _serverList <p>占用用户ip列表</p>
                     * 
                     */
                    void SetServerList(const std::vector<std::string>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取<p>是否占用超过200个ip</p>
                     * @return ServerListTruncated <p>是否占用超过200个ip</p>
                     * 
                     */
                    bool GetServerListTruncated() const;

                    /**
                     * 设置<p>是否占用超过200个ip</p>
                     * @param _serverListTruncated <p>是否占用超过200个ip</p>
                     * 
                     */
                    void SetServerListTruncated(const bool& _serverListTruncated);

                    /**
                     * 判断参数 ServerListTruncated 是否已赋值
                     * @return ServerListTruncated 是否已赋值
                     * 
                     */
                    bool ServerListTruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统 ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>挂载点 ID</p>
                     */
                    std::string m_mountTargetId;
                    bool m_mountTargetIdHasBeenSet;

                    /**
                     * <p>挂载点 IP</p>
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * <p>挂载根目录</p>
                     */
                    std::string m_fSID;
                    bool m_fSIDHasBeenSet;

                    /**
                     * <p>挂载点状态，包括creating：创建中；available：运行中；<br>deleting：删除中；<br>create_failed： 创建失败</p>
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * <p>网络类型，包括VPC,CCN</p>
                     */
                    std::string m_networkInterface;
                    bool m_networkInterfaceHasBeenSet;

                    /**
                     * <p>私有网络 ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>子网 Id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>子网名称</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>CFS Turbo使用的云联网ID</p>
                     */
                    std::string m_ccnID;
                    bool m_ccnIDHasBeenSet;

                    /**
                     * <p>云联网中CFS Turbo使用的网段</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>占用用户ip列表</p>
                     */
                    std::vector<std::string> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * <p>是否占用超过200个ip</p>
                     */
                    bool m_serverListTruncated;
                    bool m_serverListTruncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_
