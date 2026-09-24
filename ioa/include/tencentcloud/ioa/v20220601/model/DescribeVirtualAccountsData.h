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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALACCOUNTSDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALACCOUNTSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAccountAccountGroupsData.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 列表虚拟组的账户分页数据集合
                */
                class DescribeVirtualAccountsData : public AbstractModel
                {
                public:
                    DescribeVirtualAccountsData();
                    ~DescribeVirtualAccountsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>用户账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId <p>用户账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId <p>用户账号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>账户分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId <p>账户分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAccountGroupId() const;

                    /**
                     * 设置<p>账户分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupId <p>账户分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupId(const uint64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>账户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName <p>账户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>账户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName <p>账户组名称</p>
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
                     * 获取<p>关联服务器名称(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountId <p>关联服务器名称(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAccountId() const;

                    /**
                     * 设置<p>关联服务器名称(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountId <p>关联服务器名称(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountId(const uint64_t& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取<p>账户源(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source <p>账户源(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>账户源(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source <p>账户源(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>账户namepath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamePath <p>账户namepath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置<p>账户namepath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namePath <p>账户namepath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamePath(const std::string& _namePath);

                    /**
                     * 判断参数 NamePath 是否已赋值
                     * @return NamePath 是否已赋值
                     * 
                     */
                    bool NamePathHasBeenSet() const;

                    /**
                     * 获取<p>账户扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo <p>账户扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>账户扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo <p>账户扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Itime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Utime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _utime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                    /**
                     * 获取<p>多OU组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroups <p>多OU组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeAccountAccountGroupsData> GetAccountGroups() const;

                    /**
                     * 设置<p>多OU组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroups <p>多OU组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroups(const std::vector<DescribeAccountAccountGroupsData>& _accountGroups);

                    /**
                     * 判断参数 AccountGroups 是否已赋值
                     * @return AccountGroups 是否已赋值
                     * 
                     */
                    bool AccountGroupsHasBeenSet() const;

                    /**
                     * 获取<p>绑定PC端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PcBindNum <p>绑定PC端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPcBindNum() const;

                    /**
                     * 设置<p>绑定PC端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pcBindNum <p>绑定PC端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPcBindNum(const int64_t& _pcBindNum);

                    /**
                     * 判断参数 PcBindNum 是否已赋值
                     * @return PcBindNum 是否已赋值
                     * 
                     */
                    bool PcBindNumHasBeenSet() const;

                    /**
                     * 获取<p>绑定移动端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MobileBindNum <p>绑定移动端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMobileBindNum() const;

                    /**
                     * 设置<p>绑定移动端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mobileBindNum <p>绑定移动端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMobileBindNum(const int64_t& _mobileBindNum);

                    /**
                     * 判断参数 MobileBindNum 是否已赋值
                     * @return MobileBindNum 是否已赋值
                     * 
                     */
                    bool MobileBindNumHasBeenSet() const;

                private:

                    /**
                     * <p>Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>用户账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>账户分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>账户组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>关联服务器名称(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * <p>账户源(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>账户namepath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * <p>账户扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * <p>多OU组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeAccountAccountGroupsData> m_accountGroups;
                    bool m_accountGroupsHasBeenSet;

                    /**
                     * <p>绑定PC端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pcBindNum;
                    bool m_pcBindNumHasBeenSet;

                    /**
                     * <p>绑定移动端数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mobileBindNum;
                    bool m_mobileBindNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALACCOUNTSDATA_H_
