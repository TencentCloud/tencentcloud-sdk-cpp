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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Aigc生文明细数据
                */
                class AigcTextDetailData : public AbstractModel
                {
                public:
                    AigcTextDetailData();
                    ~AigcTextDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求开始时间(RFC3339)</p>
                     * @return Timestamp <p>请求开始时间(RFC3339)</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>请求开始时间(RFC3339)</p>
                     * @param _timestamp <p>请求开始时间(RFC3339)</p>
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>网关层请求 ID</p>
                     * @return ReqId <p>网关层请求 ID</p>
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置<p>网关层请求 ID</p>
                     * @param _reqId <p>网关层请求 ID</p>
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                    /**
                     * 获取<p>后端模型返回的对话 ID</p>
                     * @return ChatId <p>后端模型返回的对话 ID</p>
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置<p>后端模型返回的对话 ID</p>
                     * @param _chatId <p>后端模型返回的对话 ID</p>
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取<p>返回给客户端的 HTTP 状态码</p>
                     * @return StatusCode <p>返回给客户端的 HTTP 状态码</p>
                     * 
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置<p>返回给客户端的 HTTP 状态码</p>
                     * @param _statusCode <p>返回给客户端的 HTTP 状态码</p>
                     * 
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>模型名</p>
                     * @return Model <p>模型名</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名</p>
                     * @param _model <p>模型名</p>
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
                     * 获取<p>应用ID</p>
                     * @return SubAppId <p>应用ID</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _subAppId <p>应用ID</p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>脱敏后的 api_key:前 8 位 + ****(长度 ≤ 8 时原样返回)</p>
                     * @return ApiKey <p>脱敏后的 api_key:前 8 位 + ****(长度 ≤ 8 时原样返回)</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>脱敏后的 api_key:前 8 位 + ****(长度 ≤ 8 时原样返回)</p>
                     * @param _apiKey <p>脱敏后的 api_key:前 8 位 + ****(长度 ≤ 8 时原样返回)</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>是否流式返回</p>
                     * @return Stream <p>是否流式返回</p>
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置<p>是否流式返回</p>
                     * @param _stream <p>是否流式返回</p>
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取<p>输入 token 数</p>
                     * @return InputTokens <p>输入 token 数</p>
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入 token 数</p>
                     * @param _inputTokens <p>输入 token 数</p>
                     * 
                     */
                    void SetInputTokens(const int64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出 token 数</p>
                     * @return OutputTokens <p>输出 token 数</p>
                     * 
                     */
                    int64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出 token 数</p>
                     * @param _outputTokens <p>输出 token 数</p>
                     * 
                     */
                    void SetOutputTokens(const int64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>命中 prompt 缓存的 token 数</p>
                     * @return CacheInputTokens <p>命中 prompt 缓存的 token 数</p>
                     * 
                     */
                    int64_t GetCacheInputTokens() const;

                    /**
                     * 设置<p>命中 prompt 缓存的 token 数</p>
                     * @param _cacheInputTokens <p>命中 prompt 缓存的 token 数</p>
                     * 
                     */
                    void SetCacheInputTokens(const int64_t& _cacheInputTokens);

                    /**
                     * 判断参数 CacheInputTokens 是否已赋值
                     * @return CacheInputTokens 是否已赋值
                     * 
                     */
                    bool CacheInputTokensHasBeenSet() const;

                    /**
                     * 获取<p>总 token 数</p>
                     * @return TotalTokens <p>总 token 数</p>
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置<p>总 token 数</p>
                     * @param _totalTokens <p>总 token 数</p>
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>生成阶段的tokens/秒</p>
                     * @return TPS <p>生成阶段的tokens/秒</p>
                     * 
                     */
                    double GetTPS() const;

                    /**
                     * 设置<p>生成阶段的tokens/秒</p>
                     * @param _tPS <p>生成阶段的tokens/秒</p>
                     * 
                     */
                    void SetTPS(const double& _tPS);

                    /**
                     * 判断参数 TPS 是否已赋值
                     * @return TPS 是否已赋值
                     * 
                     */
                    bool TPSHasBeenSet() const;

                    /**
                     * 获取<p>首字延迟(Time To First Token)</p><p>单位：秒</p>
                     * @return TTFT <p>首字延迟(Time To First Token)</p><p>单位：秒</p>
                     * 
                     */
                    double GetTTFT() const;

                    /**
                     * 设置<p>首字延迟(Time To First Token)</p><p>单位：秒</p>
                     * @param _tTFT <p>首字延迟(Time To First Token)</p><p>单位：秒</p>
                     * 
                     */
                    void SetTTFT(const double& _tTFT);

                    /**
                     * 判断参数 TTFT 是否已赋值
                     * @return TTFT 是否已赋值
                     * 
                     */
                    bool TTFTHasBeenSet() const;

                    /**
                     * 获取<p>端到端总耗时</p><p>单位：秒</p>
                     * @return Total <p>端到端总耗时</p><p>单位：秒</p>
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置<p>端到端总耗时</p><p>单位：秒</p>
                     * @param _total <p>端到端总耗时</p><p>单位：秒</p>
                     * 
                     */
                    void SetTotal(const double& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>入口协议:completions / responses / anthropic</p>
                     * @return ApiType <p>入口协议:completions / responses / anthropic</p>
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置<p>入口协议:completions / responses / anthropic</p>
                     * @param _apiType <p>入口协议:completions / responses / anthropic</p>
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                private:

                    /**
                     * <p>请求开始时间(RFC3339)</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>网关层请求 ID</p>
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                    /**
                     * <p>后端模型返回的对话 ID</p>
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * <p>返回给客户端的 HTTP 状态码</p>
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>模型名</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>脱敏后的 api_key:前 8 位 + ****(长度 ≤ 8 时原样返回)</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>是否流式返回</p>
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * <p>输入 token 数</p>
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出 token 数</p>
                     */
                    int64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>命中 prompt 缓存的 token 数</p>
                     */
                    int64_t m_cacheInputTokens;
                    bool m_cacheInputTokensHasBeenSet;

                    /**
                     * <p>总 token 数</p>
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>生成阶段的tokens/秒</p>
                     */
                    double m_tPS;
                    bool m_tPSHasBeenSet;

                    /**
                     * <p>首字延迟(Time To First Token)</p><p>单位：秒</p>
                     */
                    double m_tTFT;
                    bool m_tTFTHasBeenSet;

                    /**
                     * <p>端到端总耗时</p><p>单位：秒</p>
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>入口协议:completions / responses / anthropic</p>
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_
