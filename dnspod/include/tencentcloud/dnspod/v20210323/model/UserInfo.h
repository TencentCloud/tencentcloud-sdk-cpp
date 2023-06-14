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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_USERINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户昵称
                     * @return Nick 用户昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
                     * @param _nick 用户昵称
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
                     * 获取用户ID
                     * @return Id 用户ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置用户ID
                     * @param _id 用户ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户账号, 邮箱格式
                     * @return Email 用户账号, 邮箱格式
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户账号, 邮箱格式
                     * @param _email 用户账号, 邮箱格式
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
                     * 获取账号状态：”enabled”: 正常；”disabled”: 被封禁
                     * @return Status 账号状态：”enabled”: 正常；”disabled”: 被封禁
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置账号状态：”enabled”: 正常；”disabled”: 被封禁
                     * @param _status 账号状态：”enabled”: 正常；”disabled”: 被封禁
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return Telephone 电话号码
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置电话号码
                     * @param _telephone 电话号码
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取邮箱是否通过验证：”yes”: 通过；”no”: 未通过
                     * @return EmailVerified 邮箱是否通过验证：”yes”: 通过；”no”: 未通过
                     * 
                     */
                    std::string GetEmailVerified() const;

                    /**
                     * 设置邮箱是否通过验证：”yes”: 通过；”no”: 未通过
                     * @param _emailVerified 邮箱是否通过验证：”yes”: 通过；”no”: 未通过
                     * 
                     */
                    void SetEmailVerified(const std::string& _emailVerified);

                    /**
                     * 判断参数 EmailVerified 是否已赋值
                     * @return EmailVerified 是否已赋值
                     * 
                     */
                    bool EmailVerifiedHasBeenSet() const;

                    /**
                     * 获取手机是否通过验证：”yes”: 通过；”no”: 未通过
                     * @return TelephoneVerified 手机是否通过验证：”yes”: 通过；”no”: 未通过
                     * 
                     */
                    std::string GetTelephoneVerified() const;

                    /**
                     * 设置手机是否通过验证：”yes”: 通过；”no”: 未通过
                     * @param _telephoneVerified 手机是否通过验证：”yes”: 通过；”no”: 未通过
                     * 
                     */
                    void SetTelephoneVerified(const std::string& _telephoneVerified);

                    /**
                     * 判断参数 TelephoneVerified 是否已赋值
                     * @return TelephoneVerified 是否已赋值
                     * 
                     */
                    bool TelephoneVerifiedHasBeenSet() const;

                    /**
                     * 获取账号等级, 按照用户账号下域名等级排序, 选取一个最高等级为账号等级, 具体对应情况参见域名等级。
                     * @return UserGrade 账号等级, 按照用户账号下域名等级排序, 选取一个最高等级为账号等级, 具体对应情况参见域名等级。
                     * 
                     */
                    std::string GetUserGrade() const;

                    /**
                     * 设置账号等级, 按照用户账号下域名等级排序, 选取一个最高等级为账号等级, 具体对应情况参见域名等级。
                     * @param _userGrade 账号等级, 按照用户账号下域名等级排序, 选取一个最高等级为账号等级, 具体对应情况参见域名等级。
                     * 
                     */
                    void SetUserGrade(const std::string& _userGrade);

                    /**
                     * 判断参数 UserGrade 是否已赋值
                     * @return UserGrade 是否已赋值
                     * 
                     */
                    bool UserGradeHasBeenSet() const;

                    /**
                     * 获取用户名称, 企业用户对应为公司名称
                     * @return RealName 用户名称, 企业用户对应为公司名称
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置用户名称, 企业用户对应为公司名称
                     * @param _realName 用户名称, 企业用户对应为公司名称
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取是否绑定微信：”yes”: 通过；”no”: 未通过
                     * @return WechatBinded 是否绑定微信：”yes”: 通过；”no”: 未通过
                     * 
                     */
                    std::string GetWechatBinded() const;

                    /**
                     * 设置是否绑定微信：”yes”: 通过；”no”: 未通过
                     * @param _wechatBinded 是否绑定微信：”yes”: 通过；”no”: 未通过
                     * 
                     */
                    void SetWechatBinded(const std::string& _wechatBinded);

                    /**
                     * 判断参数 WechatBinded 是否已赋值
                     * @return WechatBinded 是否已赋值
                     * 
                     */
                    bool WechatBindedHasBeenSet() const;

                    /**
                     * 获取用户UIN
                     * @return Uin 用户UIN
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置用户UIN
                     * @param _uin 用户UIN
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
                     * 获取所属 DNS 服务器
                     * @return FreeNs 所属 DNS 服务器
                     * 
                     */
                    std::vector<std::string> GetFreeNs() const;

                    /**
                     * 设置所属 DNS 服务器
                     * @param _freeNs 所属 DNS 服务器
                     * 
                     */
                    void SetFreeNs(const std::vector<std::string>& _freeNs);

                    /**
                     * 判断参数 FreeNs 是否已赋值
                     * @return FreeNs 是否已赋值
                     * 
                     */
                    bool FreeNsHasBeenSet() const;

                private:

                    /**
                     * 用户昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户账号, 邮箱格式
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 账号状态：”enabled”: 正常；”disabled”: 被封禁
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 电话号码
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 邮箱是否通过验证：”yes”: 通过；”no”: 未通过
                     */
                    std::string m_emailVerified;
                    bool m_emailVerifiedHasBeenSet;

                    /**
                     * 手机是否通过验证：”yes”: 通过；”no”: 未通过
                     */
                    std::string m_telephoneVerified;
                    bool m_telephoneVerifiedHasBeenSet;

                    /**
                     * 账号等级, 按照用户账号下域名等级排序, 选取一个最高等级为账号等级, 具体对应情况参见域名等级。
                     */
                    std::string m_userGrade;
                    bool m_userGradeHasBeenSet;

                    /**
                     * 用户名称, 企业用户对应为公司名称
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 是否绑定微信：”yes”: 通过；”no”: 未通过
                     */
                    std::string m_wechatBinded;
                    bool m_wechatBindedHasBeenSet;

                    /**
                     * 用户UIN
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 所属 DNS 服务器
                     */
                    std::vector<std::string> m_freeNs;
                    bool m_freeNsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_USERINFO_H_
