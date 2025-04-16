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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SENDROOMNORMALMESSAGEREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SENDROOMNORMALMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/MsgBody.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * SendRoomNormalMessage请求参数结构体
                */
                class SendRoomNormalMessageRequest : public AbstractModel
                {
                public:
                    SendRoomNormalMessageRequest();
                    ~SendRoomNormalMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取房间ID。
                     * @return RoomId 房间ID。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间ID。
                     * @param _roomId 房间ID。
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取管理员指定消息发送方账号（若需设置 FromAccount 信息，则该参数取值不能为空）
                     * @return FromAccount 管理员指定消息发送方账号（若需设置 FromAccount 信息，则该参数取值不能为空）
                     * 
                     */
                    std::string GetFromAccount() const;

                    /**
                     * 设置管理员指定消息发送方账号（若需设置 FromAccount 信息，则该参数取值不能为空）
                     * @param _fromAccount 管理员指定消息发送方账号（若需设置 FromAccount 信息，则该参数取值不能为空）
                     * 
                     */
                    void SetFromAccount(const std::string& _fromAccount);

                    /**
                     * 判断参数 FromAccount 是否已赋值
                     * @return FromAccount 是否已赋值
                     * 
                     */
                    bool FromAccountHasBeenSet() const;

                    /**
                     * 获取自定义消息
                     * @return MsgBody 自定义消息
                     * 
                     */
                    std::vector<MsgBody> GetMsgBody() const;

                    /**
                     * 设置自定义消息
                     * @param _msgBody 自定义消息
                     * 
                     */
                    void SetMsgBody(const std::vector<MsgBody>& _msgBody);

                    /**
                     * 判断参数 MsgBody 是否已赋值
                     * @return MsgBody 是否已赋值
                     * 
                     */
                    bool MsgBodyHasBeenSet() const;

                    /**
                     * 获取消息自定义数据（云端保存，会发送到对端，程序卸载重装后还能拉取到）。
                     * @return CloudCustomData 消息自定义数据（云端保存，会发送到对端，程序卸载重装后还能拉取到）。
                     * 
                     */
                    std::string GetCloudCustomData() const;

                    /**
                     * 设置消息自定义数据（云端保存，会发送到对端，程序卸载重装后还能拉取到）。
                     * @param _cloudCustomData 消息自定义数据（云端保存，会发送到对端，程序卸载重装后还能拉取到）。
                     * 
                     */
                    void SetCloudCustomData(const std::string& _cloudCustomData);

                    /**
                     * 判断参数 CloudCustomData 是否已赋值
                     * @return CloudCustomData 是否已赋值
                     * 
                     */
                    bool CloudCustomDataHasBeenSet() const;

                    /**
                     * 获取昵称，当FromAccount没有在房间中，需要填写NickName，当FromAccount在房间中，填写NickName无意义
                     * @return NickName 昵称，当FromAccount没有在房间中，需要填写NickName，当FromAccount在房间中，填写NickName无意义
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称，当FromAccount没有在房间中，需要填写NickName，当FromAccount在房间中，填写NickName无意义
                     * @param _nickName 昵称，当FromAccount没有在房间中，需要填写NickName，当FromAccount在房间中，填写NickName无意义
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取消息的优先级，默认优先级 Normal。
可以指定3种优先级，从高到低依次为 High、Normal 和 Low，区分大小写。
                     * @return Priority 消息的优先级，默认优先级 Normal。
可以指定3种优先级，从高到低依次为 High、Normal 和 Low，区分大小写。
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置消息的优先级，默认优先级 Normal。
可以指定3种优先级，从高到低依次为 High、Normal 和 Low，区分大小写。
                     * @param _priority 消息的优先级，默认优先级 Normal。
可以指定3种优先级，从高到低依次为 High、Normal 和 Low，区分大小写。
                     * 
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间ID。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 管理员指定消息发送方账号（若需设置 FromAccount 信息，则该参数取值不能为空）
                     */
                    std::string m_fromAccount;
                    bool m_fromAccountHasBeenSet;

                    /**
                     * 自定义消息
                     */
                    std::vector<MsgBody> m_msgBody;
                    bool m_msgBodyHasBeenSet;

                    /**
                     * 消息自定义数据（云端保存，会发送到对端，程序卸载重装后还能拉取到）。
                     */
                    std::string m_cloudCustomData;
                    bool m_cloudCustomDataHasBeenSet;

                    /**
                     * 昵称，当FromAccount没有在房间中，需要填写NickName，当FromAccount在房间中，填写NickName无意义
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 消息的优先级，默认优先级 Normal。
可以指定3种优先级，从高到低依次为 High、Normal 和 Low，区分大小写。
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SENDROOMNORMALMESSAGEREQUEST_H_
