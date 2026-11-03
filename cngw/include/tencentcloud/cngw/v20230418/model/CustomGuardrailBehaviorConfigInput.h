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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILBEHAVIORCONFIGINPUT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILBEHAVIORCONFIGINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏处理行为配置
                */
                class CustomGuardrailBehaviorConfigInput : public AbstractModel
                {
                public:
                    CustomGuardrailBehaviorConfigInput();
                    ~CustomGuardrailBehaviorConfigInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>必填，仅允许 input（仅输入）或 both（输入加输出），与控制台一致；不允许 output、空值或省略。送审包方向使用 request/response。</p>
                     * @return Direction <p>必填，仅允许 input（仅输入）或 both（输入加输出），与控制台一致；不允许 output、空值或省略。送审包方向使用 request/response。</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>必填，仅允许 input（仅输入）或 both（输入加输出），与控制台一致；不允许 output、空值或省略。送审包方向使用 request/response。</p>
                     * @param _direction <p>必填，仅允许 input（仅输入）或 both（输入加输出），与控制台一致；不允许 output、空值或省略。送审包方向使用 request/response。</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>必填，observe 只观察记录，block 执行命中阻断或符合条件的输出替换。不再自动补默认值。审核异常另由 FailureMode 处理。</p>
                     * @return HandleAction <p>必填，observe 只观察记录，block 执行命中阻断或符合条件的输出替换。不再自动补默认值。审核异常另由 FailureMode 处理。</p>
                     * 
                     */
                    std::string GetHandleAction() const;

                    /**
                     * 设置<p>必填，observe 只观察记录，block 执行命中阻断或符合条件的输出替换。不再自动补默认值。审核异常另由 FailureMode 处理。</p>
                     * @param _handleAction <p>必填，observe 只观察记录，block 执行命中阻断或符合条件的输出替换。不再自动补默认值。审核异常另由 FailureMode 处理。</p>
                     * 
                     */
                    void SetHandleAction(const std::string& _handleAction);

                    /**
                     * 判断参数 HandleAction 是否已赋值
                     * @return HandleAction 是否已赋值
                     * 
                     */
                    bool HandleActionHasBeenSet() const;

                    /**
                     * 获取<p>必填整数，50～5000 毫秒，0 无效且不再代表默认值。控制台初始显示 500，但 API 调用方仍须传入。这是每次审核 HTTP 调用的超时，不是整个模型生成或 SSE 连接时长。</p>
                     * @return TimeoutMs <p>必填整数，50～5000 毫秒，0 无效且不再代表默认值。控制台初始显示 500，但 API 调用方仍须传入。这是每次审核 HTTP 调用的超时，不是整个模型生成或 SSE 连接时长。</p>
                     * 
                     */
                    int64_t GetTimeoutMs() const;

                    /**
                     * 设置<p>必填整数，50～5000 毫秒，0 无效且不再代表默认值。控制台初始显示 500，但 API 调用方仍须传入。这是每次审核 HTTP 调用的超时，不是整个模型生成或 SSE 连接时长。</p>
                     * @param _timeoutMs <p>必填整数，50～5000 毫秒，0 无效且不再代表默认值。控制台初始显示 500，但 API 调用方仍须传入。这是每次审核 HTTP 调用的超时，不是整个模型生成或 SSE 连接时长。</p>
                     * 
                     */
                    void SetTimeoutMs(const int64_t& _timeoutMs);

                    /**
                     * 判断参数 TimeoutMs 是否已赋值
                     * @return TimeoutMs 是否已赋值
                     * 
                     */
                    bool TimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>必填，open 为异常时尝试放行（存在未审核内容放行风险），closed 为异常时拦截；不得省略或为空。不改变正常命中结论，open 不能绕过所有 Relay 安全或生命周期错误。</p>
                     * @return FailureMode <p>必填，open 为异常时尝试放行（存在未审核内容放行风险），closed 为异常时拦截；不得省略或为空。不改变正常命中结论，open 不能绕过所有 Relay 安全或生命周期错误。</p>
                     * 
                     */
                    std::string GetFailureMode() const;

                    /**
                     * 设置<p>必填，open 为异常时尝试放行（存在未审核内容放行风险），closed 为异常时拦截；不得省略或为空。不改变正常命中结论，open 不能绕过所有 Relay 安全或生命周期错误。</p>
                     * @param _failureMode <p>必填，open 为异常时尝试放行（存在未审核内容放行风险），closed 为异常时拦截；不得省略或为空。不改变正常命中结论，open 不能绕过所有 Relay 安全或生命周期错误。</p>
                     * 
                     */
                    void SetFailureMode(const std::string& _failureMode);

                    /**
                     * 判断参数 FailureMode 是否已赋值
                     * @return FailureMode 是否已赋值
                     * 
                     */
                    bool FailureModeHasBeenSet() const;

                private:

                    /**
                     * <p>必填，仅允许 input（仅输入）或 both（输入加输出），与控制台一致；不允许 output、空值或省略。送审包方向使用 request/response。</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>必填，observe 只观察记录，block 执行命中阻断或符合条件的输出替换。不再自动补默认值。审核异常另由 FailureMode 处理。</p>
                     */
                    std::string m_handleAction;
                    bool m_handleActionHasBeenSet;

                    /**
                     * <p>必填整数，50～5000 毫秒，0 无效且不再代表默认值。控制台初始显示 500，但 API 调用方仍须传入。这是每次审核 HTTP 调用的超时，不是整个模型生成或 SSE 连接时长。</p>
                     */
                    int64_t m_timeoutMs;
                    bool m_timeoutMsHasBeenSet;

                    /**
                     * <p>必填，open 为异常时尝试放行（存在未审核内容放行风险），closed 为异常时拦截；不得省略或为空。不改变正常命中结论，open 不能绕过所有 Relay 安全或生命周期错误。</p>
                     */
                    std::string m_failureMode;
                    bool m_failureModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILBEHAVIORCONFIGINPUT_H_
