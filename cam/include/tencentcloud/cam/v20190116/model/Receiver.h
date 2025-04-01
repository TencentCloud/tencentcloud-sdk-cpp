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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_RECEIVER_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_RECEIVER_H_

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
                * 消息接收人信息
                */
                class Receiver : public AbstractModel
                {
                public:
                    Receiver();
                    ~Receiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Uid id
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置id
                     * @param _uid id
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
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
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取手机号码
                     * @return PhoneNumber 手机号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码
                     * @param _phoneNumber 手机号码
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取手机号码是否验证
                     * @return PhoneFlag 手机号码是否验证
                     * 
                     */
                    int64_t GetPhoneFlag() const;

                    /**
                     * 设置手机号码是否验证
                     * @param _phoneFlag 手机号码是否验证
                     * 
                     */
                    void SetPhoneFlag(const int64_t& _phoneFlag);

                    /**
                     * 判断参数 PhoneFlag 是否已赋值
                     * @return PhoneFlag 是否已赋值
                     * 
                     */
                    bool PhoneFlagHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
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
                     * 获取邮箱是否验证
                     * @return EmailFlag 邮箱是否验证
                     * 
                     */
                    int64_t GetEmailFlag() const;

                    /**
                     * 设置邮箱是否验证
                     * @param _emailFlag 邮箱是否验证
                     * 
                     */
                    void SetEmailFlag(const int64_t& _emailFlag);

                    /**
                     * 判断参数 EmailFlag 是否已赋值
                     * @return EmailFlag 是否已赋值
                     * 
                     */
                    bool EmailFlagHasBeenSet() const;

                    /**
                     * 获取是否主联系人
                     * @return IsReceiverOwner 是否主联系人
                     * 
                     */
                    int64_t GetIsReceiverOwner() const;

                    /**
                     * 设置是否主联系人
                     * @param _isReceiverOwner 是否主联系人
                     * 
                     */
                    void SetIsReceiverOwner(const int64_t& _isReceiverOwner);

                    /**
                     * 判断参数 IsReceiverOwner 是否已赋值
                     * @return IsReceiverOwner 是否已赋值
                     * 
                     */
                    bool IsReceiverOwnerHasBeenSet() const;

                    /**
                     * 获取是否允许微信接收通知
                     * @return WechatFlag 是否允许微信接收通知
                     * 
                     */
                    int64_t GetWechatFlag() const;

                    /**
                     * 设置是否允许微信接收通知
                     * @param _wechatFlag 是否允许微信接收通知
                     * 
                     */
                    void SetWechatFlag(const int64_t& _wechatFlag);

                    /**
                     * 判断参数 WechatFlag 是否已赋值
                     * @return WechatFlag 是否已赋值
                     * 
                     */
                    bool WechatFlagHasBeenSet() const;

                    /**
                     * 获取账号uin
                     * @return Uin 账号uin
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置账号uin
                     * @param _uin 账号uin
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 手机号码是否验证
                     */
                    int64_t m_phoneFlag;
                    bool m_phoneFlagHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 邮箱是否验证
                     */
                    int64_t m_emailFlag;
                    bool m_emailFlagHasBeenSet;

                    /**
                     * 是否主联系人
                     */
                    int64_t m_isReceiverOwner;
                    bool m_isReceiverOwnerHasBeenSet;

                    /**
                     * 是否允许微信接收通知
                     */
                    int64_t m_wechatFlag;
                    bool m_wechatFlagHasBeenSet;

                    /**
                     * 账号uin
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_RECEIVER_H_
