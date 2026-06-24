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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTALLUSER_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTALLUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 账号详情
                */
                class ListAllUser : public AbstractModel
                {
                public:
                    ListAllUser();
                    ~ListAllUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子账号账号ID。</p>
                     * @return Uin <p>子账号账号ID。</p>
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置<p>子账号账号ID。</p>
                     * @param _uin <p>子账号账号ID。</p>
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>子账号用户名。</p>
                     * @return Name <p>子账号用户名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>子账号用户名。</p>
                     * @param _name <p>子账号用户名。</p>
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
                     * 获取<p>子账号 UID。</p>
                     * @return Uid <p>子账号 UID。</p>
                     * 
                     */
                    int64_t GetUid() const;

                    /**
                     * 设置<p>子账号 UID。</p>
                     * @param _uid <p>子账号 UID。</p>
                     * 
                     */
                    void SetUid(const int64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>子账号备注。</p>
                     * @return Remark <p>子账号备注。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>子账号备注。</p>
                     * @param _remark <p>子账号备注。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>子账号能否登录控制台。</p>
                     * @return ConsoleLogin <p>子账号能否登录控制台。</p>
                     * 
                     */
                    int64_t GetConsoleLogin() const;

                    /**
                     * 设置<p>子账号能否登录控制台。</p>
                     * @param _consoleLogin <p>子账号能否登录控制台。</p>
                     * 
                     */
                    void SetConsoleLogin(const int64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取<p>手机号。</p>
                     * @return PhoneNum <p>手机号。</p>
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置<p>手机号。</p>
                     * @param _phoneNum <p>手机号。</p>
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取<p>区号。</p>
                     * @return CountryCode <p>区号。</p>
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置<p>区号。</p>
                     * @param _countryCode <p>区号。</p>
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取<p>邮箱。</p>
                     * @return Email <p>邮箱。</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱。</p>
                     * @param _email <p>邮箱。</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>创建时间。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>创建时间。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>账号类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 子用户</li><li>CICUser： CIC 用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li><li>Unknown： 未知</li></ul>
                     * @return UserType <p>账号类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 子用户</li><li>CICUser： CIC 用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li><li>Unknown： 未知</li></ul>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>账号类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 子用户</li><li>CICUser： CIC 用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li><li>Unknown： 未知</li></ul>
                     * @param _userType <p>账号类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 子用户</li><li>CICUser： CIC 用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li><li>Unknown： 未知</li></ul>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * <p>子账号账号ID。</p>
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子账号用户名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>子账号 UID。</p>
                     */
                    int64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>子账号备注。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>子账号能否登录控制台。</p>
                     */
                    int64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * <p>手机号。</p>
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * <p>区号。</p>
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * <p>邮箱。</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>创建时间。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>账号类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 子用户</li><li>CICUser： CIC 用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li><li>Unknown： 未知</li></ul>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTALLUSER_H_
