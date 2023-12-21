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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_USER_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * User结果
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户等级，默认0 未知 1 低 2 中 3 高
                     * @return Level 用户等级，默认0 未知 1 低 2 中 3 高
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置用户等级，默认0 未知 1 低 2 中 3 高
                     * @param _level 用户等级，默认0 未知 1 低 2 中 3 高
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取性别 默认0 未知 1 男性 2 女性
                     * @return Gender 性别 默认0 未知 1 男性 2 女性
                     * 
                     */
                    uint64_t GetGender() const;

                    /**
                     * 设置性别 默认0 未知 1 男性 2 女性
                     * @param _gender 性别 默认0 未知 1 男性 2 女性
                     * 
                     */
                    void SetGender(const uint64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取年龄 默认0 未知
                     * @return Age 年龄 默认0 未知
                     * 
                     */
                    uint64_t GetAge() const;

                    /**
                     * 设置年龄 默认0 未知
                     * @param _age 年龄 默认0 未知
                     * 
                     */
                    void SetAge(const uint64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取业务用户ID 如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     * @return UserId 业务用户ID 如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置业务用户ID 如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     * @param _userId 业务用户ID 如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
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
                     * 获取手机号
                     * @return Phone 手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param _phone 手机号
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
                     * 获取业务用户ID类型 "1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * @return AccountType 业务用户ID类型 "1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置业务用户ID类型 "1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * @param _accountType 业务用户ID类型 "1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取用户昵称
                     * @return Nickname 用户昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置用户昵称
                     * @param _nickname 用户昵称
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
                     * 获取用户头像图片链接
                     * @return HeadUrl 用户头像图片链接
                     * 
                     */
                    std::string GetHeadUrl() const;

                    /**
                     * 设置用户头像图片链接
                     * @param _headUrl 用户头像图片链接
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
                     * 获取用户简介，长度不超过5000字
                     * @return Desc 用户简介，长度不超过5000字
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置用户简介，长度不超过5000字
                     * @param _desc 用户简介，长度不超过5000字
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
                     * 获取群聊场景房间ID
                     * @return RoomId 群聊场景房间ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置群聊场景房间ID
                     * @param _roomId 群聊场景房间ID
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
                     * 获取群聊场景群ID
                     * @return GroupId 群聊场景群ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置群聊场景群ID
                     * @param _groupId 群聊场景群ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取群聊场景群用户数
                     * @return GroupSize 群聊场景群用户数
                     * 
                     */
                    int64_t GetGroupSize() const;

                    /**
                     * 设置群聊场景群用户数
                     * @param _groupSize 群聊场景群用户数
                     * 
                     */
                    void SetGroupSize(const int64_t& _groupSize);

                    /**
                     * 判断参数 GroupSize 是否已赋值
                     * @return GroupSize 是否已赋值
                     * 
                     */
                    bool GroupSizeHasBeenSet() const;

                    /**
                     * 获取消息接收者ID
                     * @return ReceiverId 消息接收者ID
                     * 
                     */
                    std::string GetReceiverId() const;

                    /**
                     * 设置消息接收者ID
                     * @param _receiverId 消息接收者ID
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
                     * 获取消息生成时间，毫秒
                     * @return SendTime 消息生成时间，毫秒
                     * 
                     */
                    std::string GetSendTime() const;

                    /**
                     * 设置消息生成时间，毫秒
                     * @param _sendTime 消息生成时间，毫秒
                     * 
                     */
                    void SetSendTime(const std::string& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                private:

                    /**
                     * 用户等级，默认0 未知 1 低 2 中 3 高
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 性别 默认0 未知 1 男性 2 女性
                     */
                    uint64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 年龄 默认0 未知
                     */
                    uint64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 业务用户ID 如填写，会根据账号历史恶意情况，判定消息有害结果，特别是有利于可疑恶意情况下的辅助判断。账号可以填写微信uin、QQ号、微信openid、QQopenid、字符串等。该字段和账号类别确定唯一账号。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 业务用户ID类型 "1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string"
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 用户头像图片链接
                     */
                    std::string m_headUrl;
                    bool m_headUrlHasBeenSet;

                    /**
                     * 用户简介，长度不超过5000字
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 群聊场景房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 群聊场景群ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 群聊场景群用户数
                     */
                    int64_t m_groupSize;
                    bool m_groupSizeHasBeenSet;

                    /**
                     * 消息接收者ID
                     */
                    std::string m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 消息生成时间，毫秒
                     */
                    std::string m_sendTime;
                    bool m_sendTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_USER_H_
