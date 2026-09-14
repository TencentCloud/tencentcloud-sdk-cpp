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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_USERREPLYEVENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_USERREPLYEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 用户发言事件
                */
                class UserReplyEvent : public AbstractModel
                {
                public:
                    UserReplyEvent();
                    ~UserReplyEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ASR语音识别引擎将用户语音转换成的原始文本结果</p>
                     * @return ASRTranscript <p>ASR语音识别引擎将用户语音转换成的原始文本结果</p>
                     * 
                     */
                    std::string GetASRTranscript() const;

                    /**
                     * 设置<p>ASR语音识别引擎将用户语音转换成的原始文本结果</p>
                     * @param _aSRTranscript <p>ASR语音识别引擎将用户语音转换成的原始文本结果</p>
                     * 
                     */
                    void SetASRTranscript(const std::string& _aSRTranscript);

                    /**
                     * 判断参数 ASRTranscript 是否已赋值
                     * @return ASRTranscript 是否已赋值
                     * 
                     */
                    bool ASRTranscriptHasBeenSet() const;

                    /**
                     * 获取<p>命中画布中该对话节点配置的回复分类</p>
                     * @return MatchedIntent <p>命中画布中该对话节点配置的回复分类</p>
                     * 
                     */
                    std::string GetMatchedIntent() const;

                    /**
                     * 设置<p>命中画布中该对话节点配置的回复分类</p>
                     * @param _matchedIntent <p>命中画布中该对话节点配置的回复分类</p>
                     * 
                     */
                    void SetMatchedIntent(const std::string& _matchedIntent);

                    /**
                     * 判断参数 MatchedIntent 是否已赋值
                     * @return MatchedIntent 是否已赋值
                     * 
                     */
                    bool MatchedIntentHasBeenSet() const;

                    /**
                     * 获取<p>本轮收集到的词槽列表（TagType 为 2 或 3），json 序列化后的字符串。数组元素含 TagName（词槽名）、TagValue（词槽值）、TagType（词槽类型，2 表示必填词槽，3 表示选填词槽）三个字段；无词槽时为空字符串。</p>
                     * @return ExtractedSlots <p>本轮收集到的词槽列表（TagType 为 2 或 3），json 序列化后的字符串。数组元素含 TagName（词槽名）、TagValue（词槽值）、TagType（词槽类型，2 表示必填词槽，3 表示选填词槽）三个字段；无词槽时为空字符串。</p>
                     * 
                     */
                    std::string GetExtractedSlots() const;

                    /**
                     * 设置<p>本轮收集到的词槽列表（TagType 为 2 或 3），json 序列化后的字符串。数组元素含 TagName（词槽名）、TagValue（词槽值）、TagType（词槽类型，2 表示必填词槽，3 表示选填词槽）三个字段；无词槽时为空字符串。</p>
                     * @param _extractedSlots <p>本轮收集到的词槽列表（TagType 为 2 或 3），json 序列化后的字符串。数组元素含 TagName（词槽名）、TagValue（词槽值）、TagType（词槽类型，2 表示必填词槽，3 表示选填词槽）三个字段；无词槽时为空字符串。</p>
                     * 
                     */
                    void SetExtractedSlots(const std::string& _extractedSlots);

                    /**
                     * 判断参数 ExtractedSlots 是否已赋值
                     * @return ExtractedSlots 是否已赋值
                     * 
                     */
                    bool ExtractedSlotsHasBeenSet() const;

                    /**
                     * 获取<p>用户回复命中的分支类型</p><p>枚举值：</p><ul><li>Intent： 用户意图</li><li>Fallback： 兜底分支</li><li>NoResponse： 无响应跳转分支</li><li>SlotCollectionSuccess： 词槽收集完成跳转分支</li><li>SlotCollectionFail： 词槽收集失败跳转分支</li><li>GlobalIntent： 全局节点意图</li><li>LogicAnd： 逻辑判断节点 and</li><li>LogicOr： 逻辑判断节点 or</li><li>DTMFSuccess： DTMF 收号成功</li><li>DTMFFail： DTMF 收号失败</li><li>DTMFNavigation： DTMF 导航</li><li>DTMFExtension： DTMF 分机</li><li>DTMFCollection： DTMF 收号</li><li>TransferAgentFail： 转接智能体节点失败</li><li>Other： 其他分支类型</li></ul>
                     * @return BranchType <p>用户回复命中的分支类型</p><p>枚举值：</p><ul><li>Intent： 用户意图</li><li>Fallback： 兜底分支</li><li>NoResponse： 无响应跳转分支</li><li>SlotCollectionSuccess： 词槽收集完成跳转分支</li><li>SlotCollectionFail： 词槽收集失败跳转分支</li><li>GlobalIntent： 全局节点意图</li><li>LogicAnd： 逻辑判断节点 and</li><li>LogicOr： 逻辑判断节点 or</li><li>DTMFSuccess： DTMF 收号成功</li><li>DTMFFail： DTMF 收号失败</li><li>DTMFNavigation： DTMF 导航</li><li>DTMFExtension： DTMF 分机</li><li>DTMFCollection： DTMF 收号</li><li>TransferAgentFail： 转接智能体节点失败</li><li>Other： 其他分支类型</li></ul>
                     * 
                     */
                    std::string GetBranchType() const;

                    /**
                     * 设置<p>用户回复命中的分支类型</p><p>枚举值：</p><ul><li>Intent： 用户意图</li><li>Fallback： 兜底分支</li><li>NoResponse： 无响应跳转分支</li><li>SlotCollectionSuccess： 词槽收集完成跳转分支</li><li>SlotCollectionFail： 词槽收集失败跳转分支</li><li>GlobalIntent： 全局节点意图</li><li>LogicAnd： 逻辑判断节点 and</li><li>LogicOr： 逻辑判断节点 or</li><li>DTMFSuccess： DTMF 收号成功</li><li>DTMFFail： DTMF 收号失败</li><li>DTMFNavigation： DTMF 导航</li><li>DTMFExtension： DTMF 分机</li><li>DTMFCollection： DTMF 收号</li><li>TransferAgentFail： 转接智能体节点失败</li><li>Other： 其他分支类型</li></ul>
                     * @param _branchType <p>用户回复命中的分支类型</p><p>枚举值：</p><ul><li>Intent： 用户意图</li><li>Fallback： 兜底分支</li><li>NoResponse： 无响应跳转分支</li><li>SlotCollectionSuccess： 词槽收集完成跳转分支</li><li>SlotCollectionFail： 词槽收集失败跳转分支</li><li>GlobalIntent： 全局节点意图</li><li>LogicAnd： 逻辑判断节点 and</li><li>LogicOr： 逻辑判断节点 or</li><li>DTMFSuccess： DTMF 收号成功</li><li>DTMFFail： DTMF 收号失败</li><li>DTMFNavigation： DTMF 导航</li><li>DTMFExtension： DTMF 分机</li><li>DTMFCollection： DTMF 收号</li><li>TransferAgentFail： 转接智能体节点失败</li><li>Other： 其他分支类型</li></ul>
                     * 
                     */
                    void SetBranchType(const std::string& _branchType);

                    /**
                     * 判断参数 BranchType 是否已赋值
                     * @return BranchType 是否已赋值
                     * 
                     */
                    bool BranchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>ASR语音识别引擎将用户语音转换成的原始文本结果</p>
                     */
                    std::string m_aSRTranscript;
                    bool m_aSRTranscriptHasBeenSet;

                    /**
                     * <p>命中画布中该对话节点配置的回复分类</p>
                     */
                    std::string m_matchedIntent;
                    bool m_matchedIntentHasBeenSet;

                    /**
                     * <p>本轮收集到的词槽列表（TagType 为 2 或 3），json 序列化后的字符串。数组元素含 TagName（词槽名）、TagValue（词槽值）、TagType（词槽类型，2 表示必填词槽，3 表示选填词槽）三个字段；无词槽时为空字符串。</p>
                     */
                    std::string m_extractedSlots;
                    bool m_extractedSlotsHasBeenSet;

                    /**
                     * <p>用户回复命中的分支类型</p><p>枚举值：</p><ul><li>Intent： 用户意图</li><li>Fallback： 兜底分支</li><li>NoResponse： 无响应跳转分支</li><li>SlotCollectionSuccess： 词槽收集完成跳转分支</li><li>SlotCollectionFail： 词槽收集失败跳转分支</li><li>GlobalIntent： 全局节点意图</li><li>LogicAnd： 逻辑判断节点 and</li><li>LogicOr： 逻辑判断节点 or</li><li>DTMFSuccess： DTMF 收号成功</li><li>DTMFFail： DTMF 收号失败</li><li>DTMFNavigation： DTMF 导航</li><li>DTMFExtension： DTMF 分机</li><li>DTMFCollection： DTMF 收号</li><li>TransferAgentFail： 转接智能体节点失败</li><li>Other： 其他分支类型</li></ul>
                     */
                    std::string m_branchType;
                    bool m_branchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_USERREPLYEVENT_H_
