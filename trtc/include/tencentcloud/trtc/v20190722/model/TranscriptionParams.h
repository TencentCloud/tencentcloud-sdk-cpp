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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AI转录参数
                */
                class TranscriptionParams : public AbstractModel
                {
                public:
                    TranscriptionParams();
                    ~TranscriptionParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转录机器人的UserId，用于进房发起转录任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个转录任务时，机器人的userid也不能相互重复，否则会中断前一个任务。需要保证转录机器人UserId在房间内唯一。
                     * @return UserId 转录机器人的UserId，用于进房发起转录任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个转录任务时，机器人的userid也不能相互重复，否则会中断前一个任务。需要保证转录机器人UserId在房间内唯一。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置转录机器人的UserId，用于进房发起转录任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个转录任务时，机器人的userid也不能相互重复，否则会中断前一个任务。需要保证转录机器人UserId在房间内唯一。
                     * @param _userId 转录机器人的UserId，用于进房发起转录任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个转录任务时，机器人的userid也不能相互重复，否则会中断前一个任务。需要保证转录机器人UserId在房间内唯一。
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
                     * 获取转录机器人UserId对应的校验签名，即UserId和UserSig相当于转录机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @return UserSig 转录机器人UserId对应的校验签名，即UserId和UserSig相当于转录机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置转录机器人UserId对应的校验签名，即UserId和UserSig相当于转录机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @param _userSig 转录机器人UserId对应的校验签名，即UserId和UserSig相当于转录机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取IM[管理员账户](
https://cloud.tencent.com/document/product/269/31999#app-.E7.AE.A1.E7.90.86.E5.91.98)，如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。
                     * @return IMAdminUserId IM[管理员账户](
https://cloud.tencent.com/document/product/269/31999#app-.E7.AE.A1.E7.90.86.E5.91.98)，如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。
                     * @deprecated
                     */
                    std::string GetIMAdminUserId() const;

                    /**
                     * 设置IM[管理员账户](
https://cloud.tencent.com/document/product/269/31999#app-.E7.AE.A1.E7.90.86.E5.91.98)，如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。
                     * @param _iMAdminUserId IM[管理员账户](
https://cloud.tencent.com/document/product/269/31999#app-.E7.AE.A1.E7.90.86.E5.91.98)，如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。
                     * @deprecated
                     */
                    void SetIMAdminUserId(const std::string& _iMAdminUserId);

                    /**
                     * 判断参数 IMAdminUserId 是否已赋值
                     * @return IMAdminUserId 是否已赋值
                     * @deprecated
                     */
                    bool IMAdminUserIdHasBeenSet() const;

                    /**
                     * 获取IM管理员账户生成的签名，用于向特定群组发送消息。如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。必须和IM管理员的UserId一起填写。
                     * @return IMAdminUserSig IM管理员账户生成的签名，用于向特定群组发送消息。如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。必须和IM管理员的UserId一起填写。
                     * @deprecated
                     */
                    std::string GetIMAdminUserSig() const;

                    /**
                     * 设置IM管理员账户生成的签名，用于向特定群组发送消息。如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。必须和IM管理员的UserId一起填写。
                     * @param _iMAdminUserSig IM管理员账户生成的签名，用于向特定群组发送消息。如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。必须和IM管理员的UserId一起填写。
                     * @deprecated
                     */
                    void SetIMAdminUserSig(const std::string& _iMAdminUserSig);

                    /**
                     * 判断参数 IMAdminUserSig 是否已赋值
                     * @return IMAdminUserSig 是否已赋值
                     * @deprecated
                     */
                    bool IMAdminUserSigHasBeenSet() const;

                    /**
                     * 获取房间内推流用户全部退出后超过MaxIdleTime秒，后台自动关闭转录任务，默认值是60s。
                     * @return MaxIdleTime 房间内推流用户全部退出后超过MaxIdleTime秒，后台自动关闭转录任务，默认值是60s。
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置房间内推流用户全部退出后超过MaxIdleTime秒，后台自动关闭转录任务，默认值是60s。
                     * @param _maxIdleTime 房间内推流用户全部退出后超过MaxIdleTime秒，后台自动关闭转录任务，默认值是60s。
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取1表示机器人只订阅单个人的流，0表示机器人订阅整个房间的流，如果不填默认订阅整个房间的流。
                     * @return TranscriptionMode 1表示机器人只订阅单个人的流，0表示机器人订阅整个房间的流，如果不填默认订阅整个房间的流。
                     * 
                     */
                    uint64_t GetTranscriptionMode() const;

                    /**
                     * 设置1表示机器人只订阅单个人的流，0表示机器人订阅整个房间的流，如果不填默认订阅整个房间的流。
                     * @param _transcriptionMode 1表示机器人只订阅单个人的流，0表示机器人订阅整个房间的流，如果不填默认订阅整个房间的流。
                     * 
                     */
                    void SetTranscriptionMode(const uint64_t& _transcriptionMode);

                    /**
                     * 判断参数 TranscriptionMode 是否已赋值
                     * @return TranscriptionMode 是否已赋值
                     * 
                     */
                    bool TranscriptionModeHasBeenSet() const;

                    /**
                     * 获取TranscriptionMode为1时必填，机器人只会拉该userid的流，忽略房间里其他用户。
                     * @return TargetUserId TranscriptionMode为1时必填，机器人只会拉该userid的流，忽略房间里其他用户。
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置TranscriptionMode为1时必填，机器人只会拉该userid的流，忽略房间里其他用户。
                     * @param _targetUserId TranscriptionMode为1时必填，机器人只会拉该userid的流，忽略房间里其他用户。
                     * 
                     */
                    void SetTargetUserId(const std::string& _targetUserId);

                    /**
                     * 判断参数 TargetUserId 是否已赋值
                     * @return TargetUserId 是否已赋值
                     * 
                     */
                    bool TargetUserIdHasBeenSet() const;

                    /**
                     * 获取机器人订阅的用户列表
仅 TranscriptionMode 为 1或者 TranscriptionMode 为无限上麦模式支持传入多个用户列表
                     * @return TargetUserIdList 机器人订阅的用户列表
仅 TranscriptionMode 为 1或者 TranscriptionMode 为无限上麦模式支持传入多个用户列表
                     * 
                     */
                    std::vector<std::string> GetTargetUserIdList() const;

                    /**
                     * 设置机器人订阅的用户列表
仅 TranscriptionMode 为 1或者 TranscriptionMode 为无限上麦模式支持传入多个用户列表
                     * @param _targetUserIdList 机器人订阅的用户列表
仅 TranscriptionMode 为 1或者 TranscriptionMode 为无限上麦模式支持传入多个用户列表
                     * 
                     */
                    void SetTargetUserIdList(const std::vector<std::string>& _targetUserIdList);

                    /**
                     * 判断参数 TargetUserIdList 是否已赋值
                     * @return TargetUserIdList 是否已赋值
                     * 
                     */
                    bool TargetUserIdListHasBeenSet() const;

                private:

                    /**
                     * 转录机器人的UserId，用于进房发起转录任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个转录任务时，机器人的userid也不能相互重复，否则会中断前一个任务。需要保证转录机器人UserId在房间内唯一。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 转录机器人UserId对应的校验签名，即UserId和UserSig相当于转录机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * IM[管理员账户](
https://cloud.tencent.com/document/product/269/31999#app-.E7.AE.A1.E7.90.86.E5.91.98)，如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。
                     */
                    std::string m_iMAdminUserId;
                    bool m_iMAdminUserIdHasBeenSet;

                    /**
                     * IM管理员账户生成的签名，用于向特定群组发送消息。如果填写，后台下发消息会使用IM通道，而不是TRTC自定义消息。必须和IM管理员的UserId一起填写。
                     */
                    std::string m_iMAdminUserSig;
                    bool m_iMAdminUserSigHasBeenSet;

                    /**
                     * 房间内推流用户全部退出后超过MaxIdleTime秒，后台自动关闭转录任务，默认值是60s。
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 1表示机器人只订阅单个人的流，0表示机器人订阅整个房间的流，如果不填默认订阅整个房间的流。
                     */
                    uint64_t m_transcriptionMode;
                    bool m_transcriptionModeHasBeenSet;

                    /**
                     * TranscriptionMode为1时必填，机器人只会拉该userid的流，忽略房间里其他用户。
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * 机器人订阅的用户列表
仅 TranscriptionMode 为 1或者 TranscriptionMode 为无限上麦模式支持传入多个用户列表
                     */
                    std::vector<std::string> m_targetUserIdList;
                    bool m_targetUserIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_
