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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_RECEIVEACCOUNT_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_RECEIVEACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 账号信息
                */
                class ReceiveAccount : public AbstractModel
                {
                public:
                    ReceiveAccount();
                    ~ReceiveAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户 uin
                     * @return Uin 租户 uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户 uin
                     * @param _uin 租户 uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取租户名称
                     * @return Nickname 租户名称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置租户名称
                     * @param _nickname 租户名称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取0=账号uin，1=账号组
                     * @return ReceiverType 0=账号uin，1=账号组
                     * 
                     */
                    int64_t GetReceiverType() const;

                    /**
                     * 设置0=账号uin，1=账号组
                     * @param _receiverType 0=账号uin，1=账号组
                     * 
                     */
                    void SetReceiverType(const int64_t& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取只有ReceiverType 是 1 时 才返回账号列表
                     * @return Members 只有ReceiverType 是 1 时 才返回账号列表
                     * 
                     */
                    std::vector<MemberInfo> GetMembers() const;

                    /**
                     * 设置只有ReceiverType 是 1 时 才返回账号列表
                     * @param _members 只有ReceiverType 是 1 时 才返回账号列表
                     * 
                     */
                    void SetMembers(const std::vector<MemberInfo>& _members);

                    /**
                     * 判断参数 Members 是否已赋值
                     * @return Members 是否已赋值
                     * 
                     */
                    bool MembersHasBeenSet() const;

                private:

                    /**
                     * 租户 uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 租户名称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 0=账号uin，1=账号组
                     */
                    int64_t m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 只有ReceiverType 是 1 时 才返回账号列表
                     */
                    std::vector<MemberInfo> m_members;
                    bool m_membersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_RECEIVEACCOUNT_H_
