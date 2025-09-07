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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEDETAILLISTDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEDETAILLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 终端详情响应对象集合
                */
                class DescribeDeviceDetailListData : public AbstractModel
                {
                public:
                    DescribeDeviceDetailListData();
                    ~DescribeDeviceDetailListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取计算机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputerName 计算机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputerName() const;

                    /**
                     * 设置计算机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computerName 计算机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputerName(const std::string& _computerName);

                    /**
                     * 判断参数 ComputerName 是否已赋值
                     * @return ComputerName 是否已赋值
                     * 
                     */
                    bool ComputerNameHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupIdPath 用户组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupIdPath() const;

                    /**
                     * 设置用户组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupIdPath 用户组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupIdPath(const std::string& _accountGroupIdPath);

                    /**
                     * 判断参数 AccountGroupIdPath 是否已赋值
                     * @return AccountGroupIdPath 是否已赋值
                     * 
                     */
                    bool AccountGroupIdPathHasBeenSet() const;

                    /**
                     * 获取用户组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId 用户组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置用户组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupId 用户组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupId(const int64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取终端组名path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNamePath 终端组名path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置终端组名path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupNamePath 终端组名path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupNamePath(const std::string& _groupNamePath);

                    /**
                     * 判断参数 GroupNamePath 是否已赋值
                     * @return GroupNamePath 是否已赋值
                     * 
                     */
                    bool GroupNamePathHasBeenSet() const;

                    /**
                     * 获取Ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip Ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip Ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取用户组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupName 用户组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置用户组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupName 用户组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupName(const std::string& _accountGroupName);

                    /**
                     * 判断参数 AccountGroupName 是否已赋值
                     * @return AccountGroupName 是否已赋值
                     * 
                     */
                    bool AccountGroupNameHasBeenSet() const;

                    /**
                     * 获取终端组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupIdPath 终端组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupIdPath() const;

                    /**
                     * 设置终端组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupIdPath 终端组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupIdPath(const std::string& _groupIdPath);

                    /**
                     * 判断参数 GroupIdPath 是否已赋值
                     * @return GroupIdPath 是否已赋值
                     * 
                     */
                    bool GroupIdPathHasBeenSet() const;

                    /**
                     * 获取唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mid 唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mid 唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取IOA账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoaUserName IOA账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIoaUserName() const;

                    /**
                     * 设置IOA账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioaUserName IOA账号名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoaUserName(const std::string& _ioaUserName);

                    /**
                     * 判断参数 IoaUserName 是否已赋值
                     * @return IoaUserName 是否已赋值
                     * 
                     */
                    bool IoaUserNameHasBeenSet() const;

                    /**
                     * 获取所在分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 所在分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置所在分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 所在分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取所在分组Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 所在分组Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置所在分组Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 所在分组Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mac Mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置Mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mac Mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取用户组名Path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupNamePath 用户组名Path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupNamePath() const;

                    /**
                     * 设置用户组名Path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupNamePath 用户组名Path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupNamePath(const std::string& _accountGroupNamePath);

                    /**
                     * 判断参数 AccountGroupNamePath 是否已赋值
                     * @return AccountGroupNamePath 是否已赋值
                     * 
                     */
                    bool AccountGroupNamePathHasBeenSet() const;

                    /**
                     * 获取列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 账号名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 计算机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computerName;
                    bool m_computerNameHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupIdPath;
                    bool m_accountGroupIdPathHasBeenSet;

                    /**
                     * 用户组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 终端组名path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * Ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 用户组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * 终端组IdPath
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupIdPath;
                    bool m_groupIdPathHasBeenSet;

                    /**
                     * 唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * IOA账号名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ioaUserName;
                    bool m_ioaUserNameHasBeenSet;

                    /**
                     * 所在分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 所在分组Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * 软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 用户组名Path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupNamePath;
                    bool m_accountGroupNamePathHasBeenSet;

                    /**
                     * 列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEDETAILLISTDATA_H_
