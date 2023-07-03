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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CORPUSERINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CORPUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 企业成员信息
                */
                class CorpUserInfo : public AbstractModel
                {
                public:
                    CorpUserInfo();
                    ~CorpUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业成员UserId
                     * @return UserId 企业成员UserId
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置企业成员UserId
                     * @param _userId 企业成员UserId
                     * 
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取企业成员在SaaS名片内填写的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 企业成员在SaaS名片内填写的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置企业成员在SaaS名片内填写的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 企业成员在SaaS名片内填写的姓名
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
                     * 获取企业成员在企微原生通讯录内的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserOpenId 企业成员在企微原生通讯录内的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserOpenId() const;

                    /**
                     * 设置企业成员在企微原生通讯录内的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userOpenId 企业成员在企微原生通讯录内的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserOpenId(const std::string& _userOpenId);

                    /**
                     * 判断参数 UserOpenId 是否已赋值
                     * @return UserOpenId 是否已赋值
                     * 
                     */
                    bool UserOpenIdHasBeenSet() const;

                    /**
                     * 获取成员所属经销商id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealerId 成员所属经销商id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDealerId() const;

                    /**
                     * 设置成员所属经销商id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dealerId 成员所属经销商id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDealerId(const uint64_t& _dealerId);

                    /**
                     * 判断参数 DealerId 是否已赋值
                     * @return DealerId 是否已赋值
                     * 
                     */
                    bool DealerIdHasBeenSet() const;

                    /**
                     * 获取成员所属门店id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopId 成员所属门店id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 设置成员所属门店id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopId 成员所属门店id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopId(const uint64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取企业成员手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 企业成员手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置企业成员手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 企业成员手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取成员所属部门id列表，仅返回该应用有查看权限的部门id；成员授权模式下，固定返回根部门id，即固定为1；多个部门使用逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgIds 成员所属部门id列表，仅返回该应用有查看权限的部门id；成员授权模式下，固定返回根部门id，即固定为1；多个部门使用逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgIds() const;

                    /**
                     * 设置成员所属部门id列表，仅返回该应用有查看权限的部门id；成员授权模式下，固定返回根部门id，即固定为1；多个部门使用逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgIds 成员所属部门id列表，仅返回该应用有查看权限的部门id；成员授权模式下，固定返回根部门id，即固定为1；多个部门使用逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgIds(const std::string& _orgIds);

                    /**
                     * 判断参数 OrgIds 是否已赋值
                     * @return OrgIds 是否已赋值
                     * 
                     */
                    bool OrgIdsHasBeenSet() const;

                    /**
                     * 获取主部门，仅当应用对主部门有查看权限时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainDepartment 主部门，仅当应用对主部门有查看权限时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainDepartment() const;

                    /**
                     * 设置主部门，仅当应用对主部门有查看权限时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainDepartment 主部门，仅当应用对主部门有查看权限时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainDepartment(const std::string& _mainDepartment);

                    /**
                     * 判断参数 MainDepartment 是否已赋值
                     * @return MainDepartment 是否已赋值
                     * 
                     */
                    bool MainDepartmentHasBeenSet() const;

                    /**
                     * 获取是否为部门负责人，第三方应用可为空。与orgIds值一一对应，多个部门使用逗号隔开，0-否， 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLeaderInDept 是否为部门负责人，第三方应用可为空。与orgIds值一一对应，多个部门使用逗号隔开，0-否， 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsLeaderInDept() const;

                    /**
                     * 设置是否为部门负责人，第三方应用可为空。与orgIds值一一对应，多个部门使用逗号隔开，0-否， 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLeaderInDept 是否为部门负责人，第三方应用可为空。与orgIds值一一对应，多个部门使用逗号隔开，0-否， 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLeaderInDept(const std::string& _isLeaderInDept);

                    /**
                     * 判断参数 IsLeaderInDept 是否已赋值
                     * @return IsLeaderInDept 是否已赋值
                     * 
                     */
                    bool IsLeaderInDeptHasBeenSet() const;

                    /**
                     * 获取激活状态: 0=已激活，1=已禁用，-1=退出企业"
                     * @return Status 激活状态: 0=已激活，1=已禁用，-1=退出企业"
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置激活状态: 0=已激活，1=已禁用，-1=退出企业"
                     * @param _status 激活状态: 0=已激活，1=已禁用，-1=退出企业"
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
                     * 获取工号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobNumber 工号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobNumber() const;

                    /**
                     * 设置工号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobNumber 工号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobNumber(const std::string& _jobNumber);

                    /**
                     * 判断参数 JobNumber 是否已赋值
                     * @return JobNumber 是否已赋值
                     * 
                     */
                    bool JobNumberHasBeenSet() const;

                private:

                    /**
                     * 企业成员UserId
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 企业成员在SaaS名片内填写的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 企业成员在企微原生通讯录内的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userOpenId;
                    bool m_userOpenIdHasBeenSet;

                    /**
                     * 成员所属经销商id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_dealerId;
                    bool m_dealerIdHasBeenSet;

                    /**
                     * 成员所属门店id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 企业成员手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 成员所属部门id列表，仅返回该应用有查看权限的部门id；成员授权模式下，固定返回根部门id，即固定为1；多个部门使用逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgIds;
                    bool m_orgIdsHasBeenSet;

                    /**
                     * 主部门，仅当应用对主部门有查看权限时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainDepartment;
                    bool m_mainDepartmentHasBeenSet;

                    /**
                     * 是否为部门负责人，第三方应用可为空。与orgIds值一一对应，多个部门使用逗号隔开，0-否， 1-是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isLeaderInDept;
                    bool m_isLeaderInDeptHasBeenSet;

                    /**
                     * 激活状态: 0=已激活，1=已禁用，-1=退出企业"
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobNumber;
                    bool m_jobNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CORPUSERINFO_H_
