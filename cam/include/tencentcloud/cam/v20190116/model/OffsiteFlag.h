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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_OFFSITEFLAG_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_OFFSITEFLAG_H_

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
                * 异地登录设置
                */
                class OffsiteFlag : public AbstractModel
                {
                public:
                    OffsiteFlag();
                    ~OffsiteFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取验证标识
                     * @return VerifyFlag 验证标识
                     * 
                     */
                    uint64_t GetVerifyFlag() const;

                    /**
                     * 设置验证标识
                     * @param _verifyFlag 验证标识
                     * 
                     */
                    void SetVerifyFlag(const uint64_t& _verifyFlag);

                    /**
                     * 判断参数 VerifyFlag 是否已赋值
                     * @return VerifyFlag 是否已赋值
                     * 
                     */
                    bool VerifyFlagHasBeenSet() const;

                    /**
                     * 获取手机通知
                     * @return NotifyPhone 手机通知
                     * 
                     */
                    uint64_t GetNotifyPhone() const;

                    /**
                     * 设置手机通知
                     * @param _notifyPhone 手机通知
                     * 
                     */
                    void SetNotifyPhone(const uint64_t& _notifyPhone);

                    /**
                     * 判断参数 NotifyPhone 是否已赋值
                     * @return NotifyPhone 是否已赋值
                     * 
                     */
                    bool NotifyPhoneHasBeenSet() const;

                    /**
                     * 获取邮箱通知
                     * @return NotifyEmail 邮箱通知
                     * 
                     */
                    int64_t GetNotifyEmail() const;

                    /**
                     * 设置邮箱通知
                     * @param _notifyEmail 邮箱通知
                     * 
                     */
                    void SetNotifyEmail(const int64_t& _notifyEmail);

                    /**
                     * 判断参数 NotifyEmail 是否已赋值
                     * @return NotifyEmail 是否已赋值
                     * 
                     */
                    bool NotifyEmailHasBeenSet() const;

                    /**
                     * 获取微信通知
                     * @return NotifyWechat 微信通知
                     * 
                     */
                    uint64_t GetNotifyWechat() const;

                    /**
                     * 设置微信通知
                     * @param _notifyWechat 微信通知
                     * 
                     */
                    void SetNotifyWechat(const uint64_t& _notifyWechat);

                    /**
                     * 判断参数 NotifyWechat 是否已赋值
                     * @return NotifyWechat 是否已赋值
                     * 
                     */
                    bool NotifyWechatHasBeenSet() const;

                    /**
                     * 获取提示
                     * @return Tips 提示
                     * 
                     */
                    uint64_t GetTips() const;

                    /**
                     * 设置提示
                     * @param _tips 提示
                     * 
                     */
                    void SetTips(const uint64_t& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                private:

                    /**
                     * 验证标识
                     */
                    uint64_t m_verifyFlag;
                    bool m_verifyFlagHasBeenSet;

                    /**
                     * 手机通知
                     */
                    uint64_t m_notifyPhone;
                    bool m_notifyPhoneHasBeenSet;

                    /**
                     * 邮箱通知
                     */
                    int64_t m_notifyEmail;
                    bool m_notifyEmailHasBeenSet;

                    /**
                     * 微信通知
                     */
                    uint64_t m_notifyWechat;
                    bool m_notifyWechatHasBeenSet;

                    /**
                     * 提示
                     */
                    uint64_t m_tips;
                    bool m_tipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_OFFSITEFLAG_H_
