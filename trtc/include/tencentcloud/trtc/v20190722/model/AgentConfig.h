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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AmbientSound.h>
#include <tencentcloud/trtc/v20190722/model/VoicePrint.h>
#include <tencentcloud/trtc/v20190722/model/TurnDetection.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 机器人参数
                */
                class AgentConfig : public AbstractModel
                {
                public:
                    AgentConfig();
                    ~AgentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器人的UserId，用于进房发起任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个任务时，机器人的UserId也不能相互重复，否则会中断前一个任务。需要保证机器人UserId在房间内唯一。
                     * @return UserId 机器人的UserId，用于进房发起任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个任务时，机器人的UserId也不能相互重复，否则会中断前一个任务。需要保证机器人UserId在房间内唯一。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置机器人的UserId，用于进房发起任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个任务时，机器人的UserId也不能相互重复，否则会中断前一个任务。需要保证机器人UserId在房间内唯一。
                     * @param _userId 机器人的UserId，用于进房发起任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个任务时，机器人的UserId也不能相互重复，否则会中断前一个任务。需要保证机器人UserId在房间内唯一。
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
                     * 获取机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @return UserSig 机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @param _userSig 机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
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
                     * 获取机器人拉流的UserId, 填写后，机器人会拉取该UserId的流进行实时处理
                     * @return TargetUserId 机器人拉流的UserId, 填写后，机器人会拉取该UserId的流进行实时处理
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置机器人拉流的UserId, 填写后，机器人会拉取该UserId的流进行实时处理
                     * @param _targetUserId 机器人拉流的UserId, 填写后，机器人会拉取该UserId的流进行实时处理
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
                     * 获取房间内超过MaxIdleTime 没有推流，后台自动关闭任务，默认值是60s。
                     * @return MaxIdleTime 房间内超过MaxIdleTime 没有推流，后台自动关闭任务，默认值是60s。
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置房间内超过MaxIdleTime 没有推流，后台自动关闭任务，默认值是60s。
                     * @param _maxIdleTime 房间内超过MaxIdleTime 没有推流，后台自动关闭任务，默认值是60s。
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
                     * 获取机器人的欢迎语
                     * @return WelcomeMessage 机器人的欢迎语
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置机器人的欢迎语
                     * @param _welcomeMessage 机器人的欢迎语
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                    /**
                     * 获取智能打断模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * @return InterruptMode 智能打断模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置智能打断模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * @param _interruptMode 智能打断模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * 
                     */
                    void SetInterruptMode(const uint64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * @return InterruptSpeechDuration InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * @param _interruptSpeechDuration InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * 
                     */
                    void SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

                    /**
                     * 获取控制新一轮对话的触发方式，默认为0。
- 0表示当服务端语音识别检测出的完整一句话后，自动触发一轮新的对话。
- 1表示客户端在收到字幕消息后，自行决定是否手动发送聊天信令触发一轮新的对话。
                     * @return TurnDetectionMode 控制新一轮对话的触发方式，默认为0。
- 0表示当服务端语音识别检测出的完整一句话后，自动触发一轮新的对话。
- 1表示客户端在收到字幕消息后，自行决定是否手动发送聊天信令触发一轮新的对话。
                     * 
                     */
                    uint64_t GetTurnDetectionMode() const;

                    /**
                     * 设置控制新一轮对话的触发方式，默认为0。
- 0表示当服务端语音识别检测出的完整一句话后，自动触发一轮新的对话。
- 1表示客户端在收到字幕消息后，自行决定是否手动发送聊天信令触发一轮新的对话。
                     * @param _turnDetectionMode 控制新一轮对话的触发方式，默认为0。
- 0表示当服务端语音识别检测出的完整一句话后，自动触发一轮新的对话。
- 1表示客户端在收到字幕消息后，自行决定是否手动发送聊天信令触发一轮新的对话。
                     * 
                     */
                    void SetTurnDetectionMode(const uint64_t& _turnDetectionMode);

                    /**
                     * 判断参数 TurnDetectionMode 是否已赋值
                     * @return TurnDetectionMode 是否已赋值
                     * 
                     */
                    bool TurnDetectionModeHasBeenSet() const;

                    /**
                     * 获取是否过滤掉用户只说了一个字的句子，true表示过滤，false表示不过滤，默认值为true
                     * @return FilterOneWord 是否过滤掉用户只说了一个字的句子，true表示过滤，false表示不过滤，默认值为true
                     * 
                     */
                    bool GetFilterOneWord() const;

                    /**
                     * 设置是否过滤掉用户只说了一个字的句子，true表示过滤，false表示不过滤，默认值为true
                     * @param _filterOneWord 是否过滤掉用户只说了一个字的句子，true表示过滤，false表示不过滤，默认值为true
                     * 
                     */
                    void SetFilterOneWord(const bool& _filterOneWord);

                    /**
                     * 判断参数 FilterOneWord 是否已赋值
                     * @return FilterOneWord 是否已赋值
                     * 
                     */
                    bool FilterOneWordHasBeenSet() const;

                    /**
                     * 获取欢迎消息优先级，0默认，1高优，高优不能被打断。
                     * @return WelcomeMessagePriority 欢迎消息优先级，0默认，1高优，高优不能被打断。
                     * 
                     */
                    uint64_t GetWelcomeMessagePriority() const;

                    /**
                     * 设置欢迎消息优先级，0默认，1高优，高优不能被打断。
                     * @param _welcomeMessagePriority 欢迎消息优先级，0默认，1高优，高优不能被打断。
                     * 
                     */
                    void SetWelcomeMessagePriority(const uint64_t& _welcomeMessagePriority);

                    /**
                     * 判断参数 WelcomeMessagePriority 是否已赋值
                     * @return WelcomeMessagePriority 是否已赋值
                     * 
                     */
                    bool WelcomeMessagePriorityHasBeenSet() const;

                    /**
                     * 获取用于过滤LLM返回内容，不播放括号中的内容。
1：中文括号（）
2：英文括号()
3：中文方括号【】
4：英文方括号[]
5：英文花括号{}
默认值为空，表示不进行过滤。
                     * @return FilterBracketsContent 用于过滤LLM返回内容，不播放括号中的内容。
1：中文括号（）
2：英文括号()
3：中文方括号【】
4：英文方括号[]
5：英文花括号{}
默认值为空，表示不进行过滤。
                     * 
                     */
                    uint64_t GetFilterBracketsContent() const;

                    /**
                     * 设置用于过滤LLM返回内容，不播放括号中的内容。
1：中文括号（）
2：英文括号()
3：中文方括号【】
4：英文方括号[]
5：英文花括号{}
默认值为空，表示不进行过滤。
                     * @param _filterBracketsContent 用于过滤LLM返回内容，不播放括号中的内容。
1：中文括号（）
2：英文括号()
3：中文方括号【】
4：英文方括号[]
5：英文花括号{}
默认值为空，表示不进行过滤。
                     * 
                     */
                    void SetFilterBracketsContent(const uint64_t& _filterBracketsContent);

                    /**
                     * 判断参数 FilterBracketsContent 是否已赋值
                     * @return FilterBracketsContent 是否已赋值
                     * 
                     */
                    bool FilterBracketsContentHasBeenSet() const;

                    /**
                     * 获取环境音设置
                     * @return AmbientSound 环境音设置
                     * 
                     */
                    AmbientSound GetAmbientSound() const;

                    /**
                     * 设置环境音设置
                     * @param _ambientSound 环境音设置
                     * 
                     */
                    void SetAmbientSound(const AmbientSound& _ambientSound);

                    /**
                     * 判断参数 AmbientSound 是否已赋值
                     * @return AmbientSound 是否已赋值
                     * 
                     */
                    bool AmbientSoundHasBeenSet() const;

                    /**
                     * 获取声纹配置
                     * @return VoicePrint 声纹配置
                     * 
                     */
                    VoicePrint GetVoicePrint() const;

                    /**
                     * 设置声纹配置
                     * @param _voicePrint 声纹配置
                     * 
                     */
                    void SetVoicePrint(const VoicePrint& _voicePrint);

                    /**
                     * 判断参数 VoicePrint 是否已赋值
                     * @return VoicePrint 是否已赋值
                     * 
                     */
                    bool VoicePrintHasBeenSet() const;

                    /**
                     * 获取语义断句检测
                     * @return TurnDetection 语义断句检测
                     * 
                     */
                    TurnDetection GetTurnDetection() const;

                    /**
                     * 设置语义断句检测
                     * @param _turnDetection 语义断句检测
                     * 
                     */
                    void SetTurnDetection(const TurnDetection& _turnDetection);

                    /**
                     * 判断参数 TurnDetection 是否已赋值
                     * @return TurnDetection 是否已赋值
                     * 
                     */
                    bool TurnDetectionHasBeenSet() const;

                private:

                    /**
                     * 机器人的UserId，用于进房发起任务。【注意】这个UserId不能与当前房间内的主播观众[UserId](https://cloud.tencent.com/document/product/647/46351#userid)重复。如果一个房间发起多个任务时，机器人的UserId也不能相互重复，否则会中断前一个任务。需要保证机器人UserId在房间内唯一。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * 机器人拉流的UserId, 填写后，机器人会拉取该UserId的流进行实时处理
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * 房间内超过MaxIdleTime 没有推流，后台自动关闭任务，默认值是60s。
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 机器人的欢迎语
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * 智能打断模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * 控制新一轮对话的触发方式，默认为0。
- 0表示当服务端语音识别检测出的完整一句话后，自动触发一轮新的对话。
- 1表示客户端在收到字幕消息后，自行决定是否手动发送聊天信令触发一轮新的对话。
                     */
                    uint64_t m_turnDetectionMode;
                    bool m_turnDetectionModeHasBeenSet;

                    /**
                     * 是否过滤掉用户只说了一个字的句子，true表示过滤，false表示不过滤，默认值为true
                     */
                    bool m_filterOneWord;
                    bool m_filterOneWordHasBeenSet;

                    /**
                     * 欢迎消息优先级，0默认，1高优，高优不能被打断。
                     */
                    uint64_t m_welcomeMessagePriority;
                    bool m_welcomeMessagePriorityHasBeenSet;

                    /**
                     * 用于过滤LLM返回内容，不播放括号中的内容。
1：中文括号（）
2：英文括号()
3：中文方括号【】
4：英文方括号[]
5：英文花括号{}
默认值为空，表示不进行过滤。
                     */
                    uint64_t m_filterBracketsContent;
                    bool m_filterBracketsContentHasBeenSet;

                    /**
                     * 环境音设置
                     */
                    AmbientSound m_ambientSound;
                    bool m_ambientSoundHasBeenSet;

                    /**
                     * 声纹配置
                     */
                    VoicePrint m_voicePrint;
                    bool m_voicePrintHasBeenSet;

                    /**
                     * 语义断句检测
                     */
                    TurnDetection m_turnDetection;
                    bool m_turnDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_
