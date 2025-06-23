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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SkillGroupItem.h>
#include <tencentcloud/ccc/v20200210/model/ForwardingConfig.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 带有技能组优先级的座席信息
                */
                class StaffInfo : public AbstractModel
                {
                public:
                    StaffInfo();
                    ~StaffInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席名称
                     * @return Name 座席名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置座席名称
                     * @param _name 座席名称
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
                     * 获取座席邮箱
                     * @return Mail 座席邮箱
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置座席邮箱
                     * @param _mail 座席邮箱
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取座席电话号码
                     * @return Phone 座席电话号码
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置座席电话号码
                     * @param _phone 座席电话号码
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
                     * 获取座席昵称
                     * @return Nick 座席昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置座席昵称
                     * @param _nick 座席昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取座席工号
                     * @return StaffNumber 座席工号
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置座席工号
                     * @param _staffNumber 座席工号
                     * 
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     * 
                     */
                    bool StaffNumberHasBeenSet() const;

                    /**
                     * 获取用户角色 ID，一个用户绑定了多个角色时以RoleIdList为准
                     * @return RoleId 用户角色 ID，一个用户绑定了多个角色时以RoleIdList为准
                     * @deprecated
                     */
                    uint64_t GetRoleId() const;

                    /**
                     * 设置用户角色 ID，一个用户绑定了多个角色时以RoleIdList为准
                     * @param _roleId 用户角色 ID，一个用户绑定了多个角色时以RoleIdList为准
                     * @deprecated
                     */
                    void SetRoleId(const uint64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * @deprecated
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取用户角色id列表
                     * @return RoleIdList 用户角色id列表
                     * @deprecated
                     */
                    uint64_t GetRoleIdList() const;

                    /**
                     * 设置用户角色id列表
                     * @param _roleIdList 用户角色id列表
                     * @deprecated
                     */
                    void SetRoleIdList(const uint64_t& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * @deprecated
                     */
                    bool RoleIdListHasBeenSet() const;

                    /**
                     * 获取用户角色id列表
                     * @return RoleList 用户角色id列表
                     * 
                     */
                    std::vector<uint64_t> GetRoleList() const;

                    /**
                     * 设置用户角色id列表
                     * @param _roleList 用户角色id列表
                     * 
                     */
                    void SetRoleList(const std::vector<uint64_t>& _roleList);

                    /**
                     * 判断参数 RoleList 是否已赋值
                     * @return RoleList 是否已赋值
                     * 
                     */
                    bool RoleListHasBeenSet() const;

                    /**
                     * 获取所属技能组列表
                     * @return SkillGroupList 所属技能组列表
                     * 
                     */
                    std::vector<SkillGroupItem> GetSkillGroupList() const;

                    /**
                     * 设置所属技能组列表
                     * @param _skillGroupList 所属技能组列表
                     * 
                     */
                    void SetSkillGroupList(const std::vector<SkillGroupItem>& _skillGroupList);

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     * 
                     */
                    bool SkillGroupListHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return LastModifyTimestamp 最后修改时间
                     * 
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置最后修改时间
                     * @param _lastModifyTimestamp 最后修改时间
                     * 
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     * 
                     */
                    bool LastModifyTimestampHasBeenSet() const;

                    /**
                     * 获取座席分机号（1 到 8 打头，4 - 6 位）
                     * @return ExtensionNumber 座席分机号（1 到 8 打头，4 - 6 位）
                     * 
                     */
                    std::string GetExtensionNumber() const;

                    /**
                     * 设置座席分机号（1 到 8 打头，4 - 6 位）
                     * @param _extensionNumber 座席分机号（1 到 8 打头，4 - 6 位）
                     * 
                     */
                    void SetExtensionNumber(const std::string& _extensionNumber);

                    /**
                     * 判断参数 ExtensionNumber 是否已赋值
                     * @return ExtensionNumber 是否已赋值
                     * 
                     */
                    bool ExtensionNumberHasBeenSet() const;

                    /**
                     * 获取呼叫转移配置
                     * @return ForwardingConfig 呼叫转移配置
                     * 
                     */
                    ForwardingConfig GetForwardingConfig() const;

                    /**
                     * 设置呼叫转移配置
                     * @param _forwardingConfig 呼叫转移配置
                     * 
                     */
                    void SetForwardingConfig(const ForwardingConfig& _forwardingConfig);

                    /**
                     * 判断参数 ForwardingConfig 是否已赋值
                     * @return ForwardingConfig 是否已赋值
                     * 
                     */
                    bool ForwardingConfigHasBeenSet() const;

                private:

                    /**
                     * 座席名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 座席邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 座席电话号码
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 座席昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 座席工号
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * 用户角色 ID，一个用户绑定了多个角色时以RoleIdList为准
                     */
                    uint64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 用户角色id列表
                     */
                    uint64_t m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * 用户角色id列表
                     */
                    std::vector<uint64_t> m_roleList;
                    bool m_roleListHasBeenSet;

                    /**
                     * 所属技能组列表
                     */
                    std::vector<SkillGroupItem> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                    /**
                     * 座席分机号（1 到 8 打头，4 - 6 位）
                     */
                    std::string m_extensionNumber;
                    bool m_extensionNumberHasBeenSet;

                    /**
                     * 呼叫转移配置
                     */
                    ForwardingConfig m_forwardingConfig;
                    bool m_forwardingConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
