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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CFSINSINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CFSINSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 云函数关联的cfs配置信息
                */
                class CfsInsInfo : public AbstractModel
                {
                public:
                    CfsInsInfo();
                    ~CfsInsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户id
                     * @return UserId 用户id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id
                     * @param _userId 用户id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户组id
                     * @return UserGroupId 用户组id
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置用户组id
                     * @param _userGroupId 用户组id
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取文件系统实例id
                     * @return CfsId 文件系统实例id
                     * 
                     */
                    std::string GetCfsId() const;

                    /**
                     * 设置文件系统实例id
                     * @param _cfsId 文件系统实例id
                     * 
                     */
                    void SetCfsId(const std::string& _cfsId);

                    /**
                     * 判断参数 CfsId 是否已赋值
                     * @return CfsId 是否已赋值
                     * 
                     */
                    bool CfsIdHasBeenSet() const;

                    /**
                     * 获取文件系统挂载点id
                     * @return MountInsId 文件系统挂载点id
                     * 
                     */
                    std::string GetMountInsId() const;

                    /**
                     * 设置文件系统挂载点id
                     * @param _mountInsId 文件系统挂载点id
                     * 
                     */
                    void SetMountInsId(const std::string& _mountInsId);

                    /**
                     * 判断参数 MountInsId 是否已赋值
                     * @return MountInsId 是否已赋值
                     * 
                     */
                    bool MountInsIdHasBeenSet() const;

                    /**
                     * 获取本地挂载点
                     * @return LocalMountDir 本地挂载点
                     * 
                     */
                    std::string GetLocalMountDir() const;

                    /**
                     * 设置本地挂载点
                     * @param _localMountDir 本地挂载点
                     * 
                     */
                    void SetLocalMountDir(const std::string& _localMountDir);

                    /**
                     * 判断参数 LocalMountDir 是否已赋值
                     * @return LocalMountDir 是否已赋值
                     * 
                     */
                    bool LocalMountDirHasBeenSet() const;

                    /**
                     * 获取远程挂载点
                     * @return RemoteMountDir 远程挂载点
                     * 
                     */
                    std::string GetRemoteMountDir() const;

                    /**
                     * 设置远程挂载点
                     * @param _remoteMountDir 远程挂载点
                     * 
                     */
                    void SetRemoteMountDir(const std::string& _remoteMountDir);

                    /**
                     * 判断参数 RemoteMountDir 是否已赋值
                     * @return RemoteMountDir 是否已赋值
                     * 
                     */
                    bool RemoteMountDirHasBeenSet() const;

                    /**
                     * 获取文件系统ip，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpAddress 文件系统ip，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置文件系统ip，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipAddress 文件系统ip，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件系统所在的私有网络id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountVpcId 文件系统所在的私有网络id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountVpcId() const;

                    /**
                     * 设置文件系统所在的私有网络id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountVpcId 文件系统所在的私有网络id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountVpcId(const std::string& _mountVpcId);

                    /**
                     * 判断参数 MountVpcId 是否已赋值
                     * @return MountVpcId 是否已赋值
                     * 
                     */
                    bool MountVpcIdHasBeenSet() const;

                    /**
                     * 获取文件系统所在私有网络的子网id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountSubnetId 文件系统所在私有网络的子网id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountSubnetId() const;

                    /**
                     * 设置文件系统所在私有网络的子网id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountSubnetId 文件系统所在私有网络的子网id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountSubnetId(const std::string& _mountSubnetId);

                    /**
                     * 判断参数 MountSubnetId 是否已赋值
                     * @return MountSubnetId 是否已赋值
                     * 
                     */
                    bool MountSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 用户id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户组id
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * 文件系统实例id
                     */
                    std::string m_cfsId;
                    bool m_cfsIdHasBeenSet;

                    /**
                     * 文件系统挂载点id
                     */
                    std::string m_mountInsId;
                    bool m_mountInsIdHasBeenSet;

                    /**
                     * 本地挂载点
                     */
                    std::string m_localMountDir;
                    bool m_localMountDirHasBeenSet;

                    /**
                     * 远程挂载点
                     */
                    std::string m_remoteMountDir;
                    bool m_remoteMountDirHasBeenSet;

                    /**
                     * 文件系统ip，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 文件系统所在的私有网络id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountVpcId;
                    bool m_mountVpcIdHasBeenSet;

                    /**
                     * 文件系统所在私有网络的子网id，配置 cfs 时无需填写。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountSubnetId;
                    bool m_mountSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CFSINSINFO_H_
