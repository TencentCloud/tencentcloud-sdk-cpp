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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLATTEMPT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLATTEMPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallAPICallRequestDetail.h>
#include <tencentcloud/ccc/v20200210/model/AICallAPICallResponseDetail.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 接口调用的单次尝试明细
                */
                class AICallAPICallAttempt : public AbstractModel
                {
                public:
                    AICallAPICallAttempt();
                    ~AICallAPICallAttempt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>尝试序号，从 1 开始，1 表示首次调用。</p>
                     * @return Index <p>尝试序号，从 1 开始，1 表示首次调用。</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>尝试序号，从 1 开始，1 表示首次调用。</p>
                     * @param _index <p>尝试序号，从 1 开始，1 表示首次调用。</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>本次尝试的发起时间戳，Unix 毫秒级时间戳。</p><p>单位：ms</p>
                     * @return Timestamp <p>本次尝试的发起时间戳，Unix 毫秒级时间戳。</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>本次尝试的发起时间戳，Unix 毫秒级时间戳。</p><p>单位：ms</p>
                     * @param _timestamp <p>本次尝试的发起时间戳，Unix 毫秒级时间戳。</p><p>单位：ms</p>
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>本次尝试的结果状态，取值同 APICall.Status。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>internal_fail： 内部调用失败</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * @return Status <p>本次尝试的结果状态，取值同 APICall.Status。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>internal_fail： 内部调用失败</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>本次尝试的结果状态，取值同 APICall.Status。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>internal_fail： 内部调用失败</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     * @param _status <p>本次尝试的结果状态，取值同 APICall.Status。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>internal_fail： 内部调用失败</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
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
                     * 获取<p>本次尝试的 HTTP 状态码。调不通时为 0。</p>
                     * @return StatusCode <p>本次尝试的 HTTP 状态码。调不通时为 0。</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置<p>本次尝试的 HTTP 状态码。调不通时为 0。</p>
                     * @param _statusCode <p>本次尝试的 HTTP 状态码。调不通时为 0。</p>
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
                     * 获取<p>本次尝试调不通时的错误类型，取值同 APICall.ErrorType。</p><p>枚举值：</p><ul><li>timeout： 请求超时</li><li>connect_failed： 建立连接失败</li><li>dns_failed： DNS 解析失败</li><li>tls_failed： TLS 证书校验失败</li><li>other： 其他错误</li></ul>
                     * @return ErrorType <p>本次尝试调不通时的错误类型，取值同 APICall.ErrorType。</p><p>枚举值：</p><ul><li>timeout： 请求超时</li><li>connect_failed： 建立连接失败</li><li>dns_failed： DNS 解析失败</li><li>tls_failed： TLS 证书校验失败</li><li>other： 其他错误</li></ul>
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 设置<p>本次尝试调不通时的错误类型，取值同 APICall.ErrorType。</p><p>枚举值：</p><ul><li>timeout： 请求超时</li><li>connect_failed： 建立连接失败</li><li>dns_failed： DNS 解析失败</li><li>tls_failed： TLS 证书校验失败</li><li>other： 其他错误</li></ul>
                     * @param _errorType <p>本次尝试调不通时的错误类型，取值同 APICall.ErrorType。</p><p>枚举值：</p><ul><li>timeout： 请求超时</li><li>connect_failed： 建立连接失败</li><li>dns_failed： DNS 解析失败</li><li>tls_failed： TLS 证书校验失败</li><li>other： 其他错误</li></ul>
                     * 
                     */
                    void SetErrorType(const std::string& _errorType);

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取<p>本次尝试的失败摘要，格式为 {状态码或错误类型}：{错误信息}。本次尝试成功时为空。</p>
                     * @return Summary <p>本次尝试的失败摘要，格式为 {状态码或错误类型}：{错误信息}。本次尝试成功时为空。</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>本次尝试的失败摘要，格式为 {状态码或错误类型}：{错误信息}。本次尝试成功时为空。</p>
                     * @param _summary <p>本次尝试的失败摘要，格式为 {状态码或错误类型}：{错误信息}。本次尝试成功时为空。</p>
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
                     * 获取<p>本次尝试耗时。</p><p>单位：ms</p>
                     * @return CostMS <p>本次尝试耗时。</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetCostMS() const;

                    /**
                     * 设置<p>本次尝试耗时。</p><p>单位：ms</p>
                     * @param _costMS <p>本次尝试耗时。</p><p>单位：ms</p>
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
                     * 获取<p>本次尝试的请求详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Request <p>本次尝试的请求详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AICallAPICallRequestDetail GetRequest() const;

                    /**
                     * 设置<p>本次尝试的请求详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _request <p>本次尝试的请求详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequest(const AICallAPICallRequestDetail& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取<p>本次尝试的响应详情。调不通（Status 为 unreachable）或异步上报时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Response <p>本次尝试的响应详情。调不通（Status 为 unreachable）或异步上报时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AICallAPICallResponseDetail GetResponse() const;

                    /**
                     * 设置<p>本次尝试的响应详情。调不通（Status 为 unreachable）或异步上报时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _response <p>本次尝试的响应详情。调不通（Status 为 unreachable）或异步上报时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponse(const AICallAPICallResponseDetail& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     * 
                     */
                    bool ResponseHasBeenSet() const;

                private:

                    /**
                     * <p>尝试序号，从 1 开始，1 表示首次调用。</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>本次尝试的发起时间戳，Unix 毫秒级时间戳。</p><p>单位：ms</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>本次尝试的结果状态，取值同 APICall.Status。</p><p>枚举值：</p><ul><li>success： 调通且返回 2xx，进入成功分支</li><li>failed： 调用失败或返回非 2xx，进入失败分支</li><li>internal_fail： 内部调用失败</li><li>terminated： 调用过程中被用户新意图打断，无最终结果</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>本次尝试的 HTTP 状态码。调不通时为 0。</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>本次尝试调不通时的错误类型，取值同 APICall.ErrorType。</p><p>枚举值：</p><ul><li>timeout： 请求超时</li><li>connect_failed： 建立连接失败</li><li>dns_failed： DNS 解析失败</li><li>tls_failed： TLS 证书校验失败</li><li>other： 其他错误</li></ul>
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * <p>本次尝试的失败摘要，格式为 {状态码或错误类型}：{错误信息}。本次尝试成功时为空。</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>本次尝试耗时。</p><p>单位：ms</p>
                     */
                    int64_t m_costMS;
                    bool m_costMSHasBeenSet;

                    /**
                     * <p>本次尝试的请求详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AICallAPICallRequestDetail m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * <p>本次尝试的响应详情。调不通（Status 为 unreachable）或异步上报时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AICallAPICallResponseDetail m_response;
                    bool m_responseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLATTEMPT_H_
