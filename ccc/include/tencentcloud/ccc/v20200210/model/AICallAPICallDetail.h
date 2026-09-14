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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLDETAIL_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallAPICallAttempt.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 接口调用节点的调用详情
                */
                class AICallAPICallDetail : public AbstractModel
                {
                public:
                    AICallAPICallDetail();
                    ~AICallAPICallDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否异步上报。节点配置「等待接口返回」关闭时为 true，此时不处理响应也不影响流程走向，Status、StatusCode、CostMS 等结果字段均为空，只记录 Attempts 中的请求详情。</p>
                     * @return Async <p>是否异步上报。节点配置「等待接口返回」关闭时为 true，此时不处理响应也不影响流程走向，Status、StatusCode、CostMS 等结果字段均为空，只记录 Attempts 中的请求详情。</p>
                     * 
                     */
                    bool GetAsync() const;

                    /**
                     * 设置<p>是否异步上报。节点配置「等待接口返回」关闭时为 true，此时不处理响应也不影响流程走向，Status、StatusCode、CostMS 等结果字段均为空，只记录 Attempts 中的请求详情。</p>
                     * @param _async <p>是否异步上报。节点配置「等待接口返回」关闭时为 true，此时不处理响应也不影响流程走向，Status、StatusCode、CostMS 等结果字段均为空，只记录 Attempts 中的请求详情。</p>
                     * 
                     */
                    void SetAsync(const bool& _async);

                    /**
                     * 判断参数 Async 是否已赋值
                     * @return Async 是否已赋值
                     * 
                     */
                    bool AsyncHasBeenSet() const;

                    /**
                     * 获取<p>本次接口调用的最终状态，重试场景为最后一次尝试的状态，Async 为 true 时为空。后续可能新增取值，请做好兼容。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * @return Status <p>本次接口调用的最终状态，重试场景为最后一次尝试的状态，Async 为 true 时为空。后续可能新增取值，请做好兼容。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>本次接口调用的最终状态，重试场景为最后一次尝试的状态，Async 为 true 时为空。后续可能新增取值，请做好兼容。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * @param _status <p>本次接口调用的最终状态，重试场景为最后一次尝试的状态，Async 为 true 时为空。后续可能新增取值，请做好兼容。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>最终 HTTP 状态码。调不通或异步上报时为 0。</p>
                     * @return StatusCode <p>最终 HTTP 状态码。调不通或异步上报时为 0。</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置<p>最终 HTTP 状态码。调不通或异步上报时为 0。</p>
                     * @param _statusCode <p>最终 HTTP 状态码。调不通或异步上报时为 0。</p>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>失败摘要，格式为 {状态码或错误类型}：{错误信息}。调用成功时为空。</p>
                     * @return Summary <p>失败摘要，格式为 {状态码或错误类型}：{错误信息}。调用成功时为空。</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>失败摘要，格式为 {状态码或错误类型}：{错误信息}。调用成功时为空。</p>
                     * @param _summary <p>失败摘要，格式为 {状态码或错误类型}：{错误信息}。调用成功时为空。</p>
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>接口调用总耗时，包含全部重试。异步上报时为 0。</p><p>单位：ms</p>
                     * @return CostMS <p>接口调用总耗时，包含全部重试。异步上报时为 0。</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetCostMS() const;

                    /**
                     * 设置<p>接口调用总耗时，包含全部重试。异步上报时为 0。</p><p>单位：ms</p>
                     * @param _costMS <p>接口调用总耗时，包含全部重试。异步上报时为 0。</p><p>单位：ms</p>
                     * 
                     */
                    void SetCostMS(const int64_t& _costMS);

                    /**
                     * 判断参数 CostMS 是否已赋值
                     * @return CostMS 是否已赋值
                     * 
                     */
                    bool CostMSHasBeenSet() const;

                    /**
                     * 获取<p>重试次数。0 表示首次调用即结束，未发生重试。</p>
                     * @return RetryCount <p>重试次数。0 表示首次调用即结束，未发生重试。</p>
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置<p>重试次数。0 表示首次调用即结束，未发生重试。</p>
                     * @param _retryCount <p>重试次数。0 表示首次调用即结束，未发生重试。</p>
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>每次尝试的明细，按时间顺序排列，至少包含首次调用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attempts <p>每次尝试的明细，按时间顺序排列，至少包含首次调用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AICallAPICallAttempt> GetAttempts() const;

                    /**
                     * 设置<p>每次尝试的明细，按时间顺序排列，至少包含首次调用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attempts <p>每次尝试的明细，按时间顺序排列，至少包含首次调用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttempts(const std::vector<AICallAPICallAttempt>& _attempts);

                    /**
                     * 判断参数 Attempts 是否已赋值
                     * @return Attempts 是否已赋值
                     * 
                     */
                    bool AttemptsHasBeenSet() const;

                private:

                    /**
                     * <p>是否异步上报。节点配置「等待接口返回」关闭时为 true，此时不处理响应也不影响流程走向，Status、StatusCode、CostMS 等结果字段均为空，只记录 Attempts 中的请求详情。</p>
                     */
                    bool m_async;
                    bool m_asyncHasBeenSet;

                    /**
                     * <p>本次接口调用的最终状态，重试场景为最后一次尝试的状态，Async 为 true 时为空。后续可能新增取值，请做好兼容。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>最终 HTTP 状态码。调不通或异步上报时为 0。</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>失败摘要，格式为 {状态码或错误类型}：{错误信息}。调用成功时为空。</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>接口调用总耗时，包含全部重试。异步上报时为 0。</p><p>单位：ms</p>
                     */
                    int64_t m_costMS;
                    bool m_costMSHasBeenSet;

                    /**
                     * <p>重试次数。0 表示首次调用即结束，未发生重试。</p>
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>每次尝试的明细，按时间顺序排列，至少包含首次调用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AICallAPICallAttempt> m_attempts;
                    bool m_attemptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLDETAIL_H_
