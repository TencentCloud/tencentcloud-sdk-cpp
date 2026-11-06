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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AI对话的任务参数。
                */
                class VoiceConversationConfig : public AbstractModel
                {
                public:
                    VoiceConversationConfig();
                    ~VoiceConversationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>对话服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者对话服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     * @return UserId <p>对话服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者对话服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>对话服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者对话服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     * @param _userId <p>对话服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者对话服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
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
                     * 获取<p>对话服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     * @return UserSig <p>对话服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置<p>对话服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     * @param _userSig <p>对话服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
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
                     * 获取<p>对话服务订阅的主播名，订阅指定真实用户的音频，只能填写一个订阅主播。</p>
                     * @return TargetUserId <p>对话服务订阅的主播名，订阅指定真实用户的音频，只能填写一个订阅主播。</p>
                     * 
                     */
                    std::vector<std::string> GetTargetUserId() const;

                    /**
                     * 设置<p>对话服务订阅的主播名，订阅指定真实用户的音频，只能填写一个订阅主播。</p>
                     * @param _targetUserId <p>对话服务订阅的主播名，订阅指定真实用户的音频，只能填写一个订阅主播。</p>
                     * 
                     */
                    void SetTargetUserId(const std::vector<std::string>& _targetUserId);

                    /**
                     * 判断参数 TargetUserId 是否已赋值
                     * @return TargetUserId 是否已赋值
                     * 
                     */
                    bool TargetUserIdHasBeenSet() const;

                    /**
                     * 获取<p>回推机器人参数。</p>
                     * @return TTSPushRoomParams <p>回推机器人参数。</p>
                     * 
                     */
                    TranscriptionUserInfoParams GetTTSPushRoomParams() const;

                    /**
                     * 设置<p>回推机器人参数。</p>
                     * @param _tTSPushRoomParams <p>回推机器人参数。</p>
                     * 
                     */
                    void SetTTSPushRoomParams(const TranscriptionUserInfoParams& _tTSPushRoomParams);

                    /**
                     * 判断参数 TTSPushRoomParams 是否已赋值
                     * @return TTSPushRoomParams 是否已赋值
                     * 
                     */
                    bool TTSPushRoomParamsHasBeenSet() const;

                    /**
                     * 获取<p>参与对话的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止对话任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p><p>单位：秒</p>
                     * @return MaxIdleTime <p>参与对话的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止对话任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置<p>参与对话的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止对话任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p><p>单位：秒</p>
                     * @param _maxIdleTime <p>参与对话的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止对话任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p><p>单位：秒</p>
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
                     * 获取<p>用于过滤LLM返回内容，不播放括号中的内容。1：中文括号（）2：英文括号() 3：中文方括号【】4：英文方括号[] 5：英文花括号{} 。默认值为空，表示不进行过滤。 示例值：1取值范围：[1, 5]。S2S 模式不支持填写该参数。</p>
                     * @return FilterBracketsContent <p>用于过滤LLM返回内容，不播放括号中的内容。1：中文括号（）2：英文括号() 3：中文方括号【】4：英文方括号[] 5：英文花括号{} 。默认值为空，表示不进行过滤。 示例值：1取值范围：[1, 5]。S2S 模式不支持填写该参数。</p>
                     * 
                     */
                    std::vector<uint64_t> GetFilterBracketsContent() const;

                    /**
                     * 设置<p>用于过滤LLM返回内容，不播放括号中的内容。1：中文括号（）2：英文括号() 3：中文方括号【】4：英文方括号[] 5：英文花括号{} 。默认值为空，表示不进行过滤。 示例值：1取值范围：[1, 5]。S2S 模式不支持填写该参数。</p>
                     * @param _filterBracketsContent <p>用于过滤LLM返回内容，不播放括号中的内容。1：中文括号（）2：英文括号() 3：中文方括号【】4：英文方括号[] 5：英文花括号{} 。默认值为空，表示不进行过滤。 示例值：1取值范围：[1, 5]。S2S 模式不支持填写该参数。</p>
                     * 
                     */
                    void SetFilterBracketsContent(const std::vector<uint64_t>& _filterBracketsContent);

                    /**
                     * 判断参数 FilterBracketsContent 是否已赋值
                     * @return FilterBracketsContent 是否已赋值
                     * 
                     */
                    bool FilterBracketsContentHasBeenSet() const;

                    /**
                     * 获取<p>字幕显示模式。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>0： 尽快显示</li><li>1： 句子级别实时显示</li></ul>
                     * @return SubtitleMode <p>字幕显示模式。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>0： 尽快显示</li><li>1： 句子级别实时显示</li></ul>
                     * 
                     */
                    uint64_t GetSubtitleMode() const;

                    /**
                     * 设置<p>字幕显示模式。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>0： 尽快显示</li><li>1： 句子级别实时显示</li></ul>
                     * @param _subtitleMode <p>字幕显示模式。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>0： 尽快显示</li><li>1： 句子级别实时显示</li></ul>
                     * 
                     */
                    void SetSubtitleMode(const uint64_t& _subtitleMode);

                    /**
                     * 判断参数 SubtitleMode 是否已赋值
                     * @return SubtitleMode 是否已赋值
                     * 
                     */
                    bool SubtitleModeHasBeenSet() const;

                    /**
                     * 获取<p>控制新一轮对话的触发方式，默认为&quot;auto&quot;。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>&quot;auto&quot;： 后台自动识别断句触发LLM(基于静音时长)</li></ul>
                     * @return TurnDetectionMode <p>控制新一轮对话的触发方式，默认为&quot;auto&quot;。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>&quot;auto&quot;： 后台自动识别断句触发LLM(基于静音时长)</li></ul>
                     * 
                     */
                    std::string GetTurnDetectionMode() const;

                    /**
                     * 设置<p>控制新一轮对话的触发方式，默认为&quot;auto&quot;。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>&quot;auto&quot;： 后台自动识别断句触发LLM(基于静音时长)</li></ul>
                     * @param _turnDetectionMode <p>控制新一轮对话的触发方式，默认为&quot;auto&quot;。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>&quot;auto&quot;： 后台自动识别断句触发LLM(基于静音时长)</li></ul>
                     * 
                     */
                    void SetTurnDetectionMode(const std::string& _turnDetectionMode);

                    /**
                     * 判断参数 TurnDetectionMode 是否已赋值
                     * @return TurnDetectionMode 是否已赋值
                     * 
                     */
                    bool TurnDetectionModeHasBeenSet() const;

                private:

                    /**
                     * <p>对话服务在TRTC房间使用的<a href="https://cloud.tencent.com/document/product/647/46351#userid">UserId</a>，注意这个userId不能与其他TRTC或者对话服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>对话服务加入TRTC房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算<a href="https://cloud.tencent.com/document/product/647/45910#UserSig">UserSig</a>的方案。</p>
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * <p>对话服务订阅的主播名，订阅指定真实用户的音频，只能填写一个订阅主播。</p>
                     */
                    std::vector<std::string> m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * <p>回推机器人参数。</p>
                     */
                    TranscriptionUserInfoParams m_tTSPushRoomParams;
                    bool m_tTSPushRoomParamsHasBeenSet;

                    /**
                     * <p>参与对话的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止对话任务，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。</p><p>单位：秒</p>
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * <p>用于过滤LLM返回内容，不播放括号中的内容。1：中文括号（）2：英文括号() 3：中文方括号【】4：英文方括号[] 5：英文花括号{} 。默认值为空，表示不进行过滤。 示例值：1取值范围：[1, 5]。S2S 模式不支持填写该参数。</p>
                     */
                    std::vector<uint64_t> m_filterBracketsContent;
                    bool m_filterBracketsContentHasBeenSet;

                    /**
                     * <p>字幕显示模式。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>0： 尽快显示</li><li>1： 句子级别实时显示</li></ul>
                     */
                    uint64_t m_subtitleMode;
                    bool m_subtitleModeHasBeenSet;

                    /**
                     * <p>控制新一轮对话的触发方式，默认为&quot;auto&quot;。S2S 模式不支持填写该参数。</p><p>枚举值：</p><ul><li>&quot;auto&quot;： 后台自动识别断句触发LLM(基于静音时长)</li></ul>
                     */
                    std::string m_turnDetectionMode;
                    bool m_turnDetectionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONCONFIG_H_
