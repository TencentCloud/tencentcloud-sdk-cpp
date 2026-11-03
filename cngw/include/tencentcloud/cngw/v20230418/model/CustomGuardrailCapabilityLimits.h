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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILCAPABILITYLIMITS_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILCAPABILITYLIMITS_H_

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
                * 自定义安全护栏能力限制
                */
                class CustomGuardrailCapabilityLimits : public AbstractModel
                {
                public:
                    CustomGuardrailCapabilityLimits();
                    ~CustomGuardrailCapabilityLimits() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Header 白名单最大条数。</p>
                     * @return MaxHeaderAllowList <p>Header 白名单最大条数。</p>
                     * 
                     */
                    int64_t GetMaxHeaderAllowList() const;

                    /**
                     * 设置<p>Header 白名单最大条数。</p>
                     * @param _maxHeaderAllowList <p>Header 白名单最大条数。</p>
                     * 
                     */
                    void SetMaxHeaderAllowList(const int64_t& _maxHeaderAllowList);

                    /**
                     * 判断参数 MaxHeaderAllowList 是否已赋值
                     * @return MaxHeaderAllowList 是否已赋值
                     * 
                     */
                    bool MaxHeaderAllowListHasBeenSet() const;

                    /**
                     * 获取<p>单方向关键词最大条数。</p>
                     * @return MaxKeywordsPerDirection <p>单方向关键词最大条数。</p>
                     * 
                     */
                    int64_t GetMaxKeywordsPerDirection() const;

                    /**
                     * 设置<p>单方向关键词最大条数。</p>
                     * @param _maxKeywordsPerDirection <p>单方向关键词最大条数。</p>
                     * 
                     */
                    void SetMaxKeywordsPerDirection(const int64_t& _maxKeywordsPerDirection);

                    /**
                     * 判断参数 MaxKeywordsPerDirection 是否已赋值
                     * @return MaxKeywordsPerDirection 是否已赋值
                     * 
                     */
                    bool MaxKeywordsPerDirectionHasBeenSet() const;

                    /**
                     * 获取<p>直接内联送审的 Body 上限，单位字节。</p>
                     * @return InlineBodyBytes <p>直接内联送审的 Body 上限，单位字节。</p>
                     * 
                     */
                    int64_t GetInlineBodyBytes() const;

                    /**
                     * 设置<p>直接内联送审的 Body 上限，单位字节。</p>
                     * @param _inlineBodyBytes <p>直接内联送审的 Body 上限，单位字节。</p>
                     * 
                     */
                    void SetInlineBodyBytes(const int64_t& _inlineBodyBytes);

                    /**
                     * 判断参数 InlineBodyBytes 是否已赋值
                     * @return InlineBodyBytes 是否已赋值
                     * 
                     */
                    bool InlineBodyBytesHasBeenSet() const;

                    /**
                     * 获取<p>可接受的请求 Body 上限，单位字节。</p>
                     * @return MaxAcceptedBodyBytes <p>可接受的请求 Body 上限，单位字节。</p>
                     * 
                     */
                    int64_t GetMaxAcceptedBodyBytes() const;

                    /**
                     * 设置<p>可接受的请求 Body 上限，单位字节。</p>
                     * @param _maxAcceptedBodyBytes <p>可接受的请求 Body 上限，单位字节。</p>
                     * 
                     */
                    void SetMaxAcceptedBodyBytes(const int64_t& _maxAcceptedBodyBytes);

                    /**
                     * 判断参数 MaxAcceptedBodyBytes 是否已赋值
                     * @return MaxAcceptedBodyBytes 是否已赋值
                     * 
                     */
                    bool MaxAcceptedBodyBytesHasBeenSet() const;

                    /**
                     * 获取<p>超大请求 Body 默认分片大小，单位字节。</p>
                     * @return TransferChunkBytes <p>超大请求 Body 默认分片大小，单位字节。</p>
                     * 
                     */
                    int64_t GetTransferChunkBytes() const;

                    /**
                     * 设置<p>超大请求 Body 默认分片大小，单位字节。</p>
                     * @param _transferChunkBytes <p>超大请求 Body 默认分片大小，单位字节。</p>
                     * 
                     */
                    void SetTransferChunkBytes(const int64_t& _transferChunkBytes);

                    /**
                     * 判断参数 TransferChunkBytes 是否已赋值
                     * @return TransferChunkBytes 是否已赋值
                     * 
                     */
                    bool TransferChunkBytesHasBeenSet() const;

                    /**
                     * 获取<p>超大请求 Body 最大分片大小，单位字节。</p>
                     * @return MaxTransferChunkBytes <p>超大请求 Body 最大分片大小，单位字节。</p>
                     * 
                     */
                    int64_t GetMaxTransferChunkBytes() const;

                    /**
                     * 设置<p>超大请求 Body 最大分片大小，单位字节。</p>
                     * @param _maxTransferChunkBytes <p>超大请求 Body 最大分片大小，单位字节。</p>
                     * 
                     */
                    void SetMaxTransferChunkBytes(const int64_t& _maxTransferChunkBytes);

                    /**
                     * 判断参数 MaxTransferChunkBytes 是否已赋值
                     * @return MaxTransferChunkBytes 是否已赋值
                     * 
                     */
                    bool MaxTransferChunkBytesHasBeenSet() const;

                    /**
                     * 获取<p>分片传输目标最大分片数。</p>
                     * @return TransferTargetMaxChunks <p>分片传输目标最大分片数。</p>
                     * 
                     */
                    int64_t GetTransferTargetMaxChunks() const;

                    /**
                     * 设置<p>分片传输目标最大分片数。</p>
                     * @param _transferTargetMaxChunks <p>分片传输目标最大分片数。</p>
                     * 
                     */
                    void SetTransferTargetMaxChunks(const int64_t& _transferTargetMaxChunks);

                    /**
                     * 判断参数 TransferTargetMaxChunks 是否已赋值
                     * @return TransferTargetMaxChunks 是否已赋值
                     * 
                     */
                    bool TransferTargetMaxChunksHasBeenSet() const;

                    /**
                     * 获取<p>普通响应审核最大 Body 大小，单位字节。</p>
                     * @return MaxResponseBodyBytes <p>普通响应审核最大 Body 大小，单位字节。</p>
                     * 
                     */
                    int64_t GetMaxResponseBodyBytes() const;

                    /**
                     * 设置<p>普通响应审核最大 Body 大小，单位字节。</p>
                     * @param _maxResponseBodyBytes <p>普通响应审核最大 Body 大小，单位字节。</p>
                     * 
                     */
                    void SetMaxResponseBodyBytes(const int64_t& _maxResponseBodyBytes);

                    /**
                     * 判断参数 MaxResponseBodyBytes 是否已赋值
                     * @return MaxResponseBodyBytes 是否已赋值
                     * 
                     */
                    bool MaxResponseBodyBytesHasBeenSet() const;

                    /**
                     * 获取<p>单个流式事件最大字节数，单位字节。</p>
                     * @return MaxStreamEventBytes <p>单个流式事件最大字节数，单位字节。</p>
                     * 
                     */
                    int64_t GetMaxStreamEventBytes() const;

                    /**
                     * 设置<p>单个流式事件最大字节数，单位字节。</p>
                     * @param _maxStreamEventBytes <p>单个流式事件最大字节数，单位字节。</p>
                     * 
                     */
                    void SetMaxStreamEventBytes(const int64_t& _maxStreamEventBytes);

                    /**
                     * 判断参数 MaxStreamEventBytes 是否已赋值
                     * @return MaxStreamEventBytes 是否已赋值
                     * 
                     */
                    bool MaxStreamEventBytesHasBeenSet() const;

                    /**
                     * 获取<p>单数据面实例 Stream Relay 默认并发槽位。</p>
                     * @return StreamRelayMaxConcurrentRequests <p>单数据面实例 Stream Relay 默认并发槽位。</p>
                     * 
                     */
                    int64_t GetStreamRelayMaxConcurrentRequests() const;

                    /**
                     * 设置<p>单数据面实例 Stream Relay 默认并发槽位。</p>
                     * @param _streamRelayMaxConcurrentRequests <p>单数据面实例 Stream Relay 默认并发槽位。</p>
                     * 
                     */
                    void SetStreamRelayMaxConcurrentRequests(const int64_t& _streamRelayMaxConcurrentRequests);

                    /**
                     * 判断参数 StreamRelayMaxConcurrentRequests 是否已赋值
                     * @return StreamRelayMaxConcurrentRequests 是否已赋值
                     * 
                     */
                    bool StreamRelayMaxConcurrentRequestsHasBeenSet() const;

                    /**
                     * 获取<p>审核超时最小值，单位毫秒。</p>
                     * @return MinTimeoutMs <p>审核超时最小值，单位毫秒。</p>
                     * 
                     */
                    int64_t GetMinTimeoutMs() const;

                    /**
                     * 设置<p>审核超时最小值，单位毫秒。</p>
                     * @param _minTimeoutMs <p>审核超时最小值，单位毫秒。</p>
                     * 
                     */
                    void SetMinTimeoutMs(const int64_t& _minTimeoutMs);

                    /**
                     * 判断参数 MinTimeoutMs 是否已赋值
                     * @return MinTimeoutMs 是否已赋值
                     * 
                     */
                    bool MinTimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>审核超时最大值，单位毫秒。</p>
                     * @return MaxTimeoutMs <p>审核超时最大值，单位毫秒。</p>
                     * 
                     */
                    int64_t GetMaxTimeoutMs() const;

                    /**
                     * 设置<p>审核超时最大值，单位毫秒。</p>
                     * @param _maxTimeoutMs <p>审核超时最大值，单位毫秒。</p>
                     * 
                     */
                    void SetMaxTimeoutMs(const int64_t& _maxTimeoutMs);

                    /**
                     * 判断参数 MaxTimeoutMs 是否已赋值
                     * @return MaxTimeoutMs 是否已赋值
                     * 
                     */
                    bool MaxTimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>审核超时默认值，单位毫秒。</p>
                     * @return DefaultTimeoutMs <p>审核超时默认值，单位毫秒。</p>
                     * 
                     */
                    int64_t GetDefaultTimeoutMs() const;

                    /**
                     * 设置<p>审核超时默认值，单位毫秒。</p>
                     * @param _defaultTimeoutMs <p>审核超时默认值，单位毫秒。</p>
                     * 
                     */
                    void SetDefaultTimeoutMs(const int64_t& _defaultTimeoutMs);

                    /**
                     * 判断参数 DefaultTimeoutMs 是否已赋值
                     * @return DefaultTimeoutMs 是否已赋值
                     * 
                     */
                    bool DefaultTimeoutMsHasBeenSet() const;

                private:

                    /**
                     * <p>Header 白名单最大条数。</p>
                     */
                    int64_t m_maxHeaderAllowList;
                    bool m_maxHeaderAllowListHasBeenSet;

                    /**
                     * <p>单方向关键词最大条数。</p>
                     */
                    int64_t m_maxKeywordsPerDirection;
                    bool m_maxKeywordsPerDirectionHasBeenSet;

                    /**
                     * <p>直接内联送审的 Body 上限，单位字节。</p>
                     */
                    int64_t m_inlineBodyBytes;
                    bool m_inlineBodyBytesHasBeenSet;

                    /**
                     * <p>可接受的请求 Body 上限，单位字节。</p>
                     */
                    int64_t m_maxAcceptedBodyBytes;
                    bool m_maxAcceptedBodyBytesHasBeenSet;

                    /**
                     * <p>超大请求 Body 默认分片大小，单位字节。</p>
                     */
                    int64_t m_transferChunkBytes;
                    bool m_transferChunkBytesHasBeenSet;

                    /**
                     * <p>超大请求 Body 最大分片大小，单位字节。</p>
                     */
                    int64_t m_maxTransferChunkBytes;
                    bool m_maxTransferChunkBytesHasBeenSet;

                    /**
                     * <p>分片传输目标最大分片数。</p>
                     */
                    int64_t m_transferTargetMaxChunks;
                    bool m_transferTargetMaxChunksHasBeenSet;

                    /**
                     * <p>普通响应审核最大 Body 大小，单位字节。</p>
                     */
                    int64_t m_maxResponseBodyBytes;
                    bool m_maxResponseBodyBytesHasBeenSet;

                    /**
                     * <p>单个流式事件最大字节数，单位字节。</p>
                     */
                    int64_t m_maxStreamEventBytes;
                    bool m_maxStreamEventBytesHasBeenSet;

                    /**
                     * <p>单数据面实例 Stream Relay 默认并发槽位。</p>
                     */
                    int64_t m_streamRelayMaxConcurrentRequests;
                    bool m_streamRelayMaxConcurrentRequestsHasBeenSet;

                    /**
                     * <p>审核超时最小值，单位毫秒。</p>
                     */
                    int64_t m_minTimeoutMs;
                    bool m_minTimeoutMsHasBeenSet;

                    /**
                     * <p>审核超时最大值，单位毫秒。</p>
                     */
                    int64_t m_maxTimeoutMs;
                    bool m_maxTimeoutMsHasBeenSet;

                    /**
                     * <p>审核超时默认值，单位毫秒。</p>
                     */
                    int64_t m_defaultTimeoutMs;
                    bool m_defaultTimeoutMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILCAPABILITYLIMITS_H_
