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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETUSERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GetUser返回参数结构体
                */
                class GetUserResponse : public AbstractModel
                {
                public:
                    GetUserResponse();
                    ~GetUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子用户用户 UIN
                     * @return Uin 子用户用户 UIN
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子用户用户名
                     * @return Name 子用户用户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取子用户 UID
                     * @return Uid 子用户 UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取子用户备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 子用户备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取子用户能否登录控制台 0-无法登录控制台，1-可以登录控制台
                     * @return ConsoleLogin 子用户能否登录控制台 0-无法登录控制台，1-可以登录控制台
                     * 
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return PhoneNum 手机号
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取区号
                     * @return CountryCode 区号
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取最近一次登录ip
                     * @return RecentlyLoginIP 最近一次登录ip
                     * 
                     */
                    std::string GetRecentlyLoginIP() const;

                    /**
                     * 判断参数 RecentlyLoginIP 是否已赋值
                     * @return RecentlyLoginIP 是否已赋值
                     * 
                     */
                    bool RecentlyLoginIPHasBeenSet() const;

                    /**
                     * 获取最近一次登录时间
                     * @return RecentlyLoginTime 最近一次登录时间
                     * 
                     */
                    std::string GetRecentlyLoginTime() const;

                    /**
                     * 判断参数 RecentlyLoginTime 是否已赋值
                     * @return RecentlyLoginTime 是否已赋值
                     * 
                     */
                    bool RecentlyLoginTimeHasBeenSet() const;

                private:

                    /**
                     * 子用户用户 UIN
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子用户用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 子用户 UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 子用户备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 子用户能否登录控制台 0-无法登录控制台，1-可以登录控制台
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 区号
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 最近一次登录ip
                     */
                    std::string m_recentlyLoginIP;
                    bool m_recentlyLoginIPHasBeenSet;

                    /**
                     * 最近一次登录时间
                     */
                    std::string m_recentlyLoginTime;
                    bool m_recentlyLoginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETUSERRESPONSE_H_
