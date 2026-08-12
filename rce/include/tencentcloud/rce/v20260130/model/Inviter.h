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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_INVITER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_INVITER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 邀请人信息
                */
                class Inviter : public AbstractModel
                {
                public:
                    Inviter();
                    ~Inviter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>邀请人ID</p>
                     * @return InviterUserId <p>邀请人ID</p>
                     * 
                     */
                    std::string GetInviterUserId() const;

                    /**
                     * 设置<p>邀请人ID</p>
                     * @param _inviterUserId <p>邀请人ID</p>
                     * 
                     */
                    void SetInviterUserId(const std::string& _inviterUserId);

                    /**
                     * 判断参数 InviterUserId 是否已赋值
                     * @return InviterUserId 是否已赋值
                     * 
                     */
                    bool InviterUserIdHasBeenSet() const;

                    /**
                     * 获取<p>邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @return InviterPhone <p>邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    std::string GetInviterPhone() const;

                    /**
                     * 设置<p>邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @param _inviterPhone <p>邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    void SetInviterPhone(const std::string& _inviterPhone);

                    /**
                     * 判断参数 InviterPhone 是否已赋值
                     * @return InviterPhone 是否已赋值
                     * 
                     */
                    bool InviterPhoneHasBeenSet() const;

                    /**
                     * 获取<p>邀请码</p>
                     * @return InviteCode <p>邀请码</p>
                     * 
                     */
                    std::string GetInviteCode() const;

                    /**
                     * 设置<p>邀请码</p>
                     * @param _inviteCode <p>邀请码</p>
                     * 
                     */
                    void SetInviteCode(const std::string& _inviteCode);

                    /**
                     * 判断参数 InviteCode 是否已赋值
                     * @return InviteCode 是否已赋值
                     * 
                     */
                    bool InviteCodeHasBeenSet() const;

                    /**
                     * 获取<p>邀请渠道</p>
                     * @return InviteChannel <p>邀请渠道</p>
                     * 
                     */
                    std::string GetInviteChannel() const;

                    /**
                     * 设置<p>邀请渠道</p>
                     * @param _inviteChannel <p>邀请渠道</p>
                     * 
                     */
                    void SetInviteChannel(const std::string& _inviteChannel);

                    /**
                     * 判断参数 InviteChannel 是否已赋值
                     * @return InviteChannel 是否已赋值
                     * 
                     */
                    bool InviteChannelHasBeenSet() const;

                private:

                    /**
                     * <p>邀请人ID</p>
                     */
                    std::string m_inviterUserId;
                    bool m_inviterUserIdHasBeenSet;

                    /**
                     * <p>邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     */
                    std::string m_inviterPhone;
                    bool m_inviterPhoneHasBeenSet;

                    /**
                     * <p>邀请码</p>
                     */
                    std::string m_inviteCode;
                    bool m_inviteCodeHasBeenSet;

                    /**
                     * <p>邀请渠道</p>
                     */
                    std::string m_inviteChannel;
                    bool m_inviteChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_INVITER_H_
