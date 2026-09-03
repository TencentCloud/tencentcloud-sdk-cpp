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
                     * 获取<p>账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>账号名</p>
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
                     * 获取<p>计算机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputerName <p>计算机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputerName() const;

                    /**
                     * 设置<p>计算机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computerName <p>计算机名</p>
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
                     * 获取<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
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
                     * 获取<p>用户组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupIdPath <p>用户组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupIdPath() const;

                    /**
                     * 设置<p>用户组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupIdPath <p>用户组IdPath</p>
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
                     * 获取<p>用户组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId <p>用户组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置<p>用户组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupId <p>用户组id(只支持32位)</p>
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
                     * 获取<p>终端组名path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNamePath <p>终端组名path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置<p>终端组名path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupNamePath <p>终端组名path</p>
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
                     * 获取<p>Ip地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip <p>Ip地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Ip地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip <p>Ip地址</p>
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
                     * 获取<p>用户组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupName <p>用户组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置<p>用户组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupName <p>用户组名</p>
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
                     * 获取<p>终端组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupIdPath <p>终端组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupIdPath() const;

                    /**
                     * 设置<p>终端组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupIdPath <p>终端组IdPath</p>
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
                     * 获取<p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mid <p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置<p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mid <p>唯一标识Mid</p>
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
                     * 获取<p>IOA账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoaUserName <p>IOA账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIoaUserName() const;

                    /**
                     * 设置<p>IOA账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioaUserName <p>IOA账号名</p>
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
                     * 获取<p>所在分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId <p>所在分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>所在分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId <p>所在分组Id(只支持32位)</p>
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
                     * 获取<p>所在分组Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName <p>所在分组Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>所在分组Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName <p>所在分组Name</p>
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
                     * 获取<p>Mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mac <p>Mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置<p>Mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mac <p>Mac地址</p>
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
                     * 获取<p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>软件版本</p>
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
                     * 获取<p>用户组名Path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupNamePath <p>用户组名Path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupNamePath() const;

                    /**
                     * 设置<p>用户组名Path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupNamePath <p>用户组名Path</p>
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
                     * 获取<p>列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>列表Id(只支持32位)</p>
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
                     * <p>账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>计算机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computerName;
                    bool m_computerNameHasBeenSet;

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupIdPath;
                    bool m_accountGroupIdPathHasBeenSet;

                    /**
                     * <p>用户组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>终端组名path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * <p>Ip地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>用户组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * <p>终端组IdPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupIdPath;
                    bool m_groupIdPathHasBeenSet;

                    /**
                     * <p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * <p>IOA账号名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ioaUserName;
                    bool m_ioaUserNameHasBeenSet;

                    /**
                     * <p>所在分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>所在分组Name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * <p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>用户组名Path</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupNamePath;
                    bool m_accountGroupNamePathHasBeenSet;

                    /**
                     * <p>列表Id(只支持32位)</p>
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
