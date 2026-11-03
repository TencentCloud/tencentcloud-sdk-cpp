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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILBEHAVIORCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILBEHAVIORCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 自定义安全护栏处理行为配置
                */
                class CustomGuardrailBehaviorConfig : public AbstractModel
                {
                public:
                    CustomGuardrailBehaviorConfig();
                    ~CustomGuardrailBehaviorConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>审核方向：input 只审核业务请求，output 只审核业务响应，both 两者均审核；创建默认 input。送审包及审核日志使用 request/response 表示方向，不使用 input/output。</p>
                     * @return Direction <p>审核方向：input 只审核业务请求，output 只审核业务响应，both 两者均审核；创建默认 input。送审包及审核日志使用 request/response 表示方向，不使用 input/output。</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>审核方向：input 只审核业务请求，output 只审核业务响应，both 两者均审核；创建默认 input。送审包及审核日志使用 request/response 表示方向，不使用 input/output。</p>
                     * @param _direction <p>审核方向：input 只审核业务请求，output 只审核业务响应，both 两者均审核；创建默认 input。送审包及审核日志使用 request/response 表示方向，不使用 input/output。</p>
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
                     * 获取<p>命中后的处理：block 执行阻断或符合条件的输出替换；observe 仅观察记录命中，不执行命中阻断或替换。创建默认 block。审核调用异常另由 FailureMode 处理，不应把 observe 当作所有故障无条件放行。</p>
                     * @return HandleAction <p>命中后的处理：block 执行阻断或符合条件的输出替换；observe 仅观察记录命中，不执行命中阻断或替换。创建默认 block。审核调用异常另由 FailureMode 处理，不应把 observe 当作所有故障无条件放行。</p>
                     * 
                     */
                    std::string GetHandleAction() const;

                    /**
                     * 设置<p>命中后的处理：block 执行阻断或符合条件的输出替换；observe 仅观察记录命中，不执行命中阻断或替换。创建默认 block。审核调用异常另由 FailureMode 处理，不应把 observe 当作所有故障无条件放行。</p>
                     * @param _handleAction <p>命中后的处理：block 执行阻断或符合条件的输出替换；observe 仅观察记录命中，不执行命中阻断或替换。创建默认 block。审核调用异常另由 FailureMode 处理，不应把 observe 当作所有故障无条件放行。</p>
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
                     * 获取<p>审核调用超时，单位毫秒，范围 50～5000，创建默认 500。不是整个模型生成/SSE 连接的总时长限制；流式多批次分别发生审核 HTTP 调用。应按引擎网络及处理耗时设置，示例中的 5000 是显式测试值，不是默认值。</p>
                     * @return TimeoutMs <p>审核调用超时，单位毫秒，范围 50～5000，创建默认 500。不是整个模型生成/SSE 连接的总时长限制；流式多批次分别发生审核 HTTP 调用。应按引擎网络及处理耗时设置，示例中的 5000 是显式测试值，不是默认值。</p>
                     * 
                     */
                    int64_t GetTimeoutMs() const;

                    /**
                     * 设置<p>审核调用超时，单位毫秒，范围 50～5000，创建默认 500。不是整个模型生成/SSE 连接的总时长限制；流式多批次分别发生审核 HTTP 调用。应按引擎网络及处理耗时设置，示例中的 5000 是显式测试值，不是默认值。</p>
                     * @param _timeoutMs <p>审核调用超时，单位毫秒，范围 50～5000，创建默认 500。不是整个模型生成/SSE 连接的总时长限制；流式多批次分别发生审核 HTTP 调用。应按引擎网络及处理耗时设置，示例中的 5000 是显式测试值，不是默认值。</p>
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
                     * 获取<p>审核失败时的策略：open 尝试失败放行（创建默认值，有内容未审核即放行风险）；closed 失败关闭。此项处理网络、超时、响应契约等异常，不改变正常 block 判定。open 不能绕过所有 Relay 安全/生命周期错误，也不保证已派发业务请求可安全重放。</p>
                     * @return FailureMode <p>审核失败时的策略：open 尝试失败放行（创建默认值，有内容未审核即放行风险）；closed 失败关闭。此项处理网络、超时、响应契约等异常，不改变正常 block 判定。open 不能绕过所有 Relay 安全/生命周期错误，也不保证已派发业务请求可安全重放。</p>
                     * 
                     */
                    std::string GetFailureMode() const;

                    /**
                     * 设置<p>审核失败时的策略：open 尝试失败放行（创建默认值，有内容未审核即放行风险）；closed 失败关闭。此项处理网络、超时、响应契约等异常，不改变正常 block 判定。open 不能绕过所有 Relay 安全/生命周期错误，也不保证已派发业务请求可安全重放。</p>
                     * @param _failureMode <p>审核失败时的策略：open 尝试失败放行（创建默认值，有内容未审核即放行风险）；closed 失败关闭。此项处理网络、超时、响应契约等异常，不改变正常 block 判定。open 不能绕过所有 Relay 安全/生命周期错误，也不保证已派发业务请求可安全重放。</p>
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
                     * <p>审核方向：input 只审核业务请求，output 只审核业务响应，both 两者均审核；创建默认 input。送审包及审核日志使用 request/response 表示方向，不使用 input/output。</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>命中后的处理：block 执行阻断或符合条件的输出替换；observe 仅观察记录命中，不执行命中阻断或替换。创建默认 block。审核调用异常另由 FailureMode 处理，不应把 observe 当作所有故障无条件放行。</p>
                     */
                    std::string m_handleAction;
                    bool m_handleActionHasBeenSet;

                    /**
                     * <p>审核调用超时，单位毫秒，范围 50～5000，创建默认 500。不是整个模型生成/SSE 连接的总时长限制；流式多批次分别发生审核 HTTP 调用。应按引擎网络及处理耗时设置，示例中的 5000 是显式测试值，不是默认值。</p>
                     */
                    int64_t m_timeoutMs;
                    bool m_timeoutMsHasBeenSet;

                    /**
                     * <p>审核失败时的策略：open 尝试失败放行（创建默认值，有内容未审核即放行风险）；closed 失败关闭。此项处理网络、超时、响应契约等异常，不改变正常 block 判定。open 不能绕过所有 Relay 安全/生命周期错误，也不保证已派发业务请求可安全重放。</p>
                     */
                    std::string m_failureMode;
                    bool m_failureModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILBEHAVIORCONFIG_H_
