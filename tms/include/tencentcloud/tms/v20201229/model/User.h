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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_USER_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 用于表示业务用户的账号相关信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段表示业务用户ID,填写后，系统可根据账号过往违规历史优化审核结果判定，有利于存在可疑违规风险时的辅助判断。<br>
备注：该字段可传入微信openid、QQopenid、字符串等账号信息，与账号类别参数（AccountType）配合使用可确定唯一账号。
                     * @return UserId 该字段表示业务用户ID,填写后，系统可根据账号过往违规历史优化审核结果判定，有利于存在可疑违规风险时的辅助判断。<br>
备注：该字段可传入微信openid、QQopenid、字符串等账号信息，与账号类别参数（AccountType）配合使用可确定唯一账号。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置该字段表示业务用户ID,填写后，系统可根据账号过往违规历史优化审核结果判定，有利于存在可疑违规风险时的辅助判断。<br>
备注：该字段可传入微信openid、QQopenid、字符串等账号信息，与账号类别参数（AccountType）配合使用可确定唯一账号。
                     * @param _userId 该字段表示业务用户ID,填写后，系统可根据账号过往违规历史优化审核结果判定，有利于存在可疑违规风险时的辅助判断。<br>
备注：该字段可传入微信openid、QQopenid、字符串等账号信息，与账号类别参数（AccountType）配合使用可确定唯一账号。
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
                     * 获取该字段表示业务用户对应的账号昵称信息。
                     * @return Nickname 该字段表示业务用户对应的账号昵称信息。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置该字段表示业务用户对应的账号昵称信息。
                     * @param _nickname 该字段表示业务用户对应的账号昵称信息。
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
                     * 获取该字段表示业务用户ID对应的账号类型，取值：**1**-微信uin，**2**-QQ号，**3**-微信群uin，**4**-qq群号，**5**-微信openid，**6**-QQopenid，**7**-其它string。<br>
该字段与账号ID参数（UserId）配合使用可确定唯一账号。
                     * @return AccountType 该字段表示业务用户ID对应的账号类型，取值：**1**-微信uin，**2**-QQ号，**3**-微信群uin，**4**-qq群号，**5**-微信openid，**6**-QQopenid，**7**-其它string。<br>
该字段与账号ID参数（UserId）配合使用可确定唯一账号。
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置该字段表示业务用户ID对应的账号类型，取值：**1**-微信uin，**2**-QQ号，**3**-微信群uin，**4**-qq群号，**5**-微信openid，**6**-QQopenid，**7**-其它string。<br>
该字段与账号ID参数（UserId）配合使用可确定唯一账号。
                     * @param _accountType 该字段表示业务用户ID对应的账号类型，取值：**1**-微信uin，**2**-QQ号，**3**-微信群uin，**4**-qq群号，**5**-微信openid，**6**-QQopenid，**7**-其它string。<br>
该字段与账号ID参数（UserId）配合使用可确定唯一账号。
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取该字段表示业务用户对应账号的性别信息。<br>
取值：**0**（默认值，代表性别未知）、**1**（男性）、**2**（女性）。
                     * @return Gender 该字段表示业务用户对应账号的性别信息。<br>
取值：**0**（默认值，代表性别未知）、**1**（男性）、**2**（女性）。
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置该字段表示业务用户对应账号的性别信息。<br>
取值：**0**（默认值，代表性别未知）、**1**（男性）、**2**（女性）。
                     * @param _gender 该字段表示业务用户对应账号的性别信息。<br>
取值：**0**（默认值，代表性别未知）、**1**（男性）、**2**（女性）。
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取该字段表示业务用户对应账号的年龄信息。<br>
取值：**0**（默认值，代表年龄未知）-（**自定义年龄上限**）之间的整数。
                     * @return Age 该字段表示业务用户对应账号的年龄信息。<br>
取值：**0**（默认值，代表年龄未知）-（**自定义年龄上限**）之间的整数。
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置该字段表示业务用户对应账号的年龄信息。<br>
取值：**0**（默认值，代表年龄未知）-（**自定义年龄上限**）之间的整数。
                     * @param _age 该字段表示业务用户对应账号的年龄信息。<br>
取值：**0**（默认值，代表年龄未知）-（**自定义年龄上限**）之间的整数。
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取该字段表示业务用户对应账号的等级信息。<br>
取值：**0**（默认值，代表等级未知）、**1**（等级较低）、**2**（等级中等）、**3**（等级较高），目前**暂不支持自定义等级**。
                     * @return Level 该字段表示业务用户对应账号的等级信息。<br>
取值：**0**（默认值，代表等级未知）、**1**（等级较低）、**2**（等级中等）、**3**（等级较高），目前**暂不支持自定义等级**。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置该字段表示业务用户对应账号的等级信息。<br>
取值：**0**（默认值，代表等级未知）、**1**（等级较低）、**2**（等级中等）、**3**（等级较高），目前**暂不支持自定义等级**。
                     * @param _level 该字段表示业务用户对应账号的等级信息。<br>
取值：**0**（默认值，代表等级未知）、**1**（等级较低）、**2**（等级中等）、**3**（等级较高），目前**暂不支持自定义等级**。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取该字段表示业务用户对应账号的手机号信息，支持全球各地区手机号的记录。<br>
备注：请保持手机号格式的统一，如区号格式（086/+86）等。
                     * @return Phone 该字段表示业务用户对应账号的手机号信息，支持全球各地区手机号的记录。<br>
备注：请保持手机号格式的统一，如区号格式（086/+86）等。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置该字段表示业务用户对应账号的手机号信息，支持全球各地区手机号的记录。<br>
备注：请保持手机号格式的统一，如区号格式（086/+86）等。
                     * @param _phone 该字段表示业务用户对应账号的手机号信息，支持全球各地区手机号的记录。<br>
备注：请保持手机号格式的统一，如区号格式（086/+86）等。
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
                     * 获取该字段表示业务用户头像图片的访问链接(URL)，支持PNG、JPG、JPEG、BMP、GIF、WEBP格式。
备注：头像图片大小不超过5MB，建议分辨率不低于256x256；图片下载时间限制为3秒，超过则会返回下载超时。
                     * @return HeadUrl 该字段表示业务用户头像图片的访问链接(URL)，支持PNG、JPG、JPEG、BMP、GIF、WEBP格式。
备注：头像图片大小不超过5MB，建议分辨率不低于256x256；图片下载时间限制为3秒，超过则会返回下载超时。
                     * 
                     */
                    std::string GetHeadUrl() const;

                    /**
                     * 设置该字段表示业务用户头像图片的访问链接(URL)，支持PNG、JPG、JPEG、BMP、GIF、WEBP格式。
备注：头像图片大小不超过5MB，建议分辨率不低于256x256；图片下载时间限制为3秒，超过则会返回下载超时。
                     * @param _headUrl 该字段表示业务用户头像图片的访问链接(URL)，支持PNG、JPG、JPEG、BMP、GIF、WEBP格式。
备注：头像图片大小不超过5MB，建议分辨率不低于256x256；图片下载时间限制为3秒，超过则会返回下载超时。
                     * 
                     */
                    void SetHeadUrl(const std::string& _headUrl);

                    /**
                     * 判断参数 HeadUrl 是否已赋值
                     * @return HeadUrl 是否已赋值
                     * 
                     */
                    bool HeadUrlHasBeenSet() const;

                    /**
                     * 获取该字段表示业务用户的简介信息，支持汉字、英文及特殊符号，长度不超过5000个汉字字符。
                     * @return Desc 该字段表示业务用户的简介信息，支持汉字、英文及特殊符号，长度不超过5000个汉字字符。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置该字段表示业务用户的简介信息，支持汉字、英文及特殊符号，长度不超过5000个汉字字符。
                     * @param _desc 该字段表示业务用户的简介信息，支持汉字、英文及特殊符号，长度不超过5000个汉字字符。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取该字段表示业务群聊场景时的房间ID。
                     * @return RoomId 该字段表示业务群聊场景时的房间ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置该字段表示业务群聊场景时的房间ID。
                     * @param _roomId 该字段表示业务群聊场景时的房间ID。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取该字段表示消息接受者ID
                     * @return ReceiverId 该字段表示消息接受者ID
                     * 
                     */
                    std::string GetReceiverId() const;

                    /**
                     * 设置该字段表示消息接受者ID
                     * @param _receiverId 该字段表示消息接受者ID
                     * 
                     */
                    void SetReceiverId(const std::string& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取消息生成时间，精确到毫秒
                     * @return SendTime 消息生成时间，精确到毫秒
                     * 
                     */
                    int64_t GetSendTime() const;

                    /**
                     * 设置消息生成时间，精确到毫秒
                     * @param _sendTime 消息生成时间，精确到毫秒
                     * 
                     */
                    void SetSendTime(const int64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                private:

                    /**
                     * 该字段表示业务用户ID,填写后，系统可根据账号过往违规历史优化审核结果判定，有利于存在可疑违规风险时的辅助判断。<br>
备注：该字段可传入微信openid、QQopenid、字符串等账号信息，与账号类别参数（AccountType）配合使用可确定唯一账号。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 该字段表示业务用户对应的账号昵称信息。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 该字段表示业务用户ID对应的账号类型，取值：**1**-微信uin，**2**-QQ号，**3**-微信群uin，**4**-qq群号，**5**-微信openid，**6**-QQopenid，**7**-其它string。<br>
该字段与账号ID参数（UserId）配合使用可确定唯一账号。
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 该字段表示业务用户对应账号的性别信息。<br>
取值：**0**（默认值，代表性别未知）、**1**（男性）、**2**（女性）。
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 该字段表示业务用户对应账号的年龄信息。<br>
取值：**0**（默认值，代表年龄未知）-（**自定义年龄上限**）之间的整数。
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 该字段表示业务用户对应账号的等级信息。<br>
取值：**0**（默认值，代表等级未知）、**1**（等级较低）、**2**（等级中等）、**3**（等级较高），目前**暂不支持自定义等级**。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 该字段表示业务用户对应账号的手机号信息，支持全球各地区手机号的记录。<br>
备注：请保持手机号格式的统一，如区号格式（086/+86）等。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 该字段表示业务用户头像图片的访问链接(URL)，支持PNG、JPG、JPEG、BMP、GIF、WEBP格式。
备注：头像图片大小不超过5MB，建议分辨率不低于256x256；图片下载时间限制为3秒，超过则会返回下载超时。
                     */
                    std::string m_headUrl;
                    bool m_headUrlHasBeenSet;

                    /**
                     * 该字段表示业务用户的简介信息，支持汉字、英文及特殊符号，长度不超过5000个汉字字符。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 该字段表示业务群聊场景时的房间ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 该字段表示消息接受者ID
                     */
                    std::string m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 消息生成时间，精确到毫秒
                     */
                    int64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_USER_H_
