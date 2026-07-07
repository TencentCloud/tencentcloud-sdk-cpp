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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERLOG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由日志
                */
                class ModelRouterLog : public AbstractModel
                {
                public:
                    ModelRouterLog();
                    ~ModelRouterLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API Key的ID</p>
                     * @return KeyId <p>API Key的ID</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>API Key的ID</p>
                     * @param _keyId <p>API Key的ID</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>模型</p>
                     * @return Model <p>模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型</p>
                     * @param _model <p>模型</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>所属厂商</p>
                     * @return Provider <p>所属厂商</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>所属厂商</p>
                     * @param _provider <p>所属厂商</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>请求状态</p><p>枚举值：</p><ul><li>failure： 失败</li><li>success： 成功</li></ul>
                     * @return Status <p>请求状态</p><p>枚举值：</p><ul><li>failure： 失败</li><li>success： 成功</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>请求状态</p><p>枚举值：</p><ul><li>failure： 失败</li><li>success： 成功</li></ul>
                     * @param _status <p>请求状态</p><p>枚举值：</p><ul><li>failure： 失败</li><li>success： 成功</li></ul>
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
                     * 获取<p>最大重试次数</p>
                     * @return MaxRetries <p>最大重试次数</p>
                     * 
                     */
                    uint64_t GetMaxRetries() const;

                    /**
                     * 设置<p>最大重试次数</p>
                     * @param _maxRetries <p>最大重试次数</p>
                     * 
                     */
                    void SetMaxRetries(const uint64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     * 
                     */
                    bool MaxRetriesHasBeenSet() const;

                    /**
                     * 获取<p>单次请求消耗的总Token数量</p>
                     * @return TotalTokens <p>单次请求消耗的总Token数量</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>单次请求消耗的总Token数量</p>
                     * @param _totalTokens <p>单次请求消耗的总Token数量</p>
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>单次请求输入消耗的Token数量</p>
                     * @return InputTokens <p>单次请求输入消耗的Token数量</p>
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>单次请求输入消耗的Token数量</p>
                     * @param _inputTokens <p>单次请求输入消耗的Token数量</p>
                     * 
                     */
                    void SetInputTokens(const uint64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>单次请求输出消耗的Token数量</p>
                     * @return OutputTokens <p>单次请求输出消耗的Token数量</p>
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>单次请求输出消耗的Token数量</p>
                     * @param _outputTokens <p>单次请求输出消耗的Token数量</p>
                     * 
                     */
                    void SetOutputTokens(const uint64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>请求耗时</p><p>单位：ms</p>
                     * @return RequestDuration <p>请求耗时</p><p>单位：ms</p>
                     * 
                     */
                    uint64_t GetRequestDuration() const;

                    /**
                     * 设置<p>请求耗时</p><p>单位：ms</p>
                     * @param _requestDuration <p>请求耗时</p><p>单位：ms</p>
                     * 
                     */
                    void SetRequestDuration(const uint64_t& _requestDuration);

                    /**
                     * 判断参数 RequestDuration 是否已赋值
                     * @return RequestDuration 是否已赋值
                     * 
                     */
                    bool RequestDurationHasBeenSet() const;

                    /**
                     * 获取<p>请求IP</p>
                     * @return RequesterIp <p>请求IP</p>
                     * 
                     */
                    std::string GetRequesterIp() const;

                    /**
                     * 设置<p>请求IP</p>
                     * @param _requesterIp <p>请求IP</p>
                     * 
                     */
                    void SetRequesterIp(const std::string& _requesterIp);

                    /**
                     * 判断参数 RequesterIp 是否已赋值
                     * @return RequesterIp 是否已赋值
                     * 
                     */
                    bool RequesterIpHasBeenSet() const;

                    /**
                     * 获取<p>日志查询起始时间</p>
                     * @return StartTime <p>日志查询起始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>日志查询起始时间</p>
                     * @param _startTime <p>日志查询起始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>日志查询结束时间</p>
                     * @return EndTime <p>日志查询结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>日志查询结束时间</p>
                     * @param _endTime <p>日志查询结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>API Key的ID</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>所属厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>请求状态</p><p>枚举值：</p><ul><li>failure： 失败</li><li>success： 成功</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>最大重试次数</p>
                     */
                    uint64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * <p>单次请求消耗的总Token数量</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>单次请求输入消耗的Token数量</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>单次请求输出消耗的Token数量</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>请求耗时</p><p>单位：ms</p>
                     */
                    uint64_t m_requestDuration;
                    bool m_requestDurationHasBeenSet;

                    /**
                     * <p>请求IP</p>
                     */
                    std::string m_requesterIp;
                    bool m_requesterIpHasBeenSet;

                    /**
                     * <p>日志查询起始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>日志查询结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERLOG_H_
