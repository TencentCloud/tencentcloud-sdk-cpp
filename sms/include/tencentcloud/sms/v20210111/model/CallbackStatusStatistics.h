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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_CALLBACKSTATUSSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_CALLBACKSTATUSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * 回执数据统计响应包体
                */
                class CallbackStatusStatistics : public AbstractModel
                {
                public:
                    CallbackStatusStatistics();
                    ~CallbackStatusStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>短信回执量统计。</p><p>单位：数</p>
                     * @return CallbackCount <p>短信回执量统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetCallbackCount() const;

                    /**
                     * 设置<p>短信回执量统计。</p><p>单位：数</p>
                     * @param _callbackCount <p>短信回执量统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetCallbackCount(const uint64_t& _callbackCount);

                    /**
                     * 判断参数 CallbackCount 是否已赋值
                     * @return CallbackCount 是否已赋值
                     * 
                     */
                    bool CallbackCountHasBeenSet() const;

                    /**
                     * 获取<p>短信提交成功量统计。</p><p>单位：数</p>
                     * @return RequestSuccessCount <p>短信提交成功量统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetRequestSuccessCount() const;

                    /**
                     * 设置<p>短信提交成功量统计。</p><p>单位：数</p>
                     * @param _requestSuccessCount <p>短信提交成功量统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetRequestSuccessCount(const uint64_t& _requestSuccessCount);

                    /**
                     * 判断参数 RequestSuccessCount 是否已赋值
                     * @return RequestSuccessCount 是否已赋值
                     * 
                     */
                    bool RequestSuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>短信回执失败量统计。</p><p>单位：数</p>
                     * @return CallbackFailCount <p>短信回执失败量统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetCallbackFailCount() const;

                    /**
                     * 设置<p>短信回执失败量统计。</p><p>单位：数</p>
                     * @param _callbackFailCount <p>短信回执失败量统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetCallbackFailCount(const uint64_t& _callbackFailCount);

                    /**
                     * 判断参数 CallbackFailCount 是否已赋值
                     * @return CallbackFailCount 是否已赋值
                     * 
                     */
                    bool CallbackFailCountHasBeenSet() const;

                    /**
                     * 获取<p>短信回执成功量统计。</p><p>单位：数</p>
                     * @return CallbackSuccessCount <p>短信回执成功量统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetCallbackSuccessCount() const;

                    /**
                     * 设置<p>短信回执成功量统计。</p><p>单位：数</p>
                     * @param _callbackSuccessCount <p>短信回执成功量统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetCallbackSuccessCount(const uint64_t& _callbackSuccessCount);

                    /**
                     * 判断参数 CallbackSuccessCount 是否已赋值
                     * @return CallbackSuccessCount 是否已赋值
                     * 
                     */
                    bool CallbackSuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>运营商内部错误统计。</p><p>单位：数</p>
                     * @return InternalErrorCount <p>运营商内部错误统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetInternalErrorCount() const;

                    /**
                     * 设置<p>运营商内部错误统计。</p><p>单位：数</p>
                     * @param _internalErrorCount <p>运营商内部错误统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetInternalErrorCount(const uint64_t& _internalErrorCount);

                    /**
                     * 判断参数 InternalErrorCount 是否已赋值
                     * @return InternalErrorCount 是否已赋值
                     * 
                     */
                    bool InternalErrorCountHasBeenSet() const;

                    /**
                     * 获取<p>号码无效或空号统计。</p><p>单位：数</p>
                     * @return InvalidNumberCount <p>号码无效或空号统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetInvalidNumberCount() const;

                    /**
                     * 设置<p>号码无效或空号统计。</p><p>单位：数</p>
                     * @param _invalidNumberCount <p>号码无效或空号统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetInvalidNumberCount(const uint64_t& _invalidNumberCount);

                    /**
                     * 判断参数 InvalidNumberCount 是否已赋值
                     * @return InvalidNumberCount 是否已赋值
                     * 
                     */
                    bool InvalidNumberCountHasBeenSet() const;

                    /**
                     * 获取<p>停机、关机等错误统计。</p><p>单位：数</p>
                     * @return ShutdownErrorCount <p>停机、关机等错误统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetShutdownErrorCount() const;

                    /**
                     * 设置<p>停机、关机等错误统计。</p><p>单位：数</p>
                     * @param _shutdownErrorCount <p>停机、关机等错误统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetShutdownErrorCount(const uint64_t& _shutdownErrorCount);

                    /**
                     * 判断参数 ShutdownErrorCount 是否已赋值
                     * @return ShutdownErrorCount 是否已赋值
                     * 
                     */
                    bool ShutdownErrorCountHasBeenSet() const;

                    /**
                     * 获取<p>号码拉入免打扰名单统计。</p><p>单位：数</p>
                     * @return BlackListCount <p>号码拉入免打扰名单统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetBlackListCount() const;

                    /**
                     * 设置<p>号码拉入免打扰名单统计。</p><p>单位：数</p>
                     * @param _blackListCount <p>号码拉入免打扰名单统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetBlackListCount(const uint64_t& _blackListCount);

                    /**
                     * 判断参数 BlackListCount 是否已赋值
                     * @return BlackListCount 是否已赋值
                     * 
                     */
                    bool BlackListCountHasBeenSet() const;

                    /**
                     * 获取<p>运营商频率限制统计。</p><p>单位：数</p>
                     * @return FrequencyLimitCount <p>运营商频率限制统计。</p><p>单位：数</p>
                     * 
                     */
                    uint64_t GetFrequencyLimitCount() const;

                    /**
                     * 设置<p>运营商频率限制统计。</p><p>单位：数</p>
                     * @param _frequencyLimitCount <p>运营商频率限制统计。</p><p>单位：数</p>
                     * 
                     */
                    void SetFrequencyLimitCount(const uint64_t& _frequencyLimitCount);

                    /**
                     * 判断参数 FrequencyLimitCount 是否已赋值
                     * @return FrequencyLimitCount 是否已赋值
                     * 
                     */
                    bool FrequencyLimitCountHasBeenSet() const;

                private:

                    /**
                     * <p>短信回执量统计。</p><p>单位：数</p>
                     */
                    uint64_t m_callbackCount;
                    bool m_callbackCountHasBeenSet;

                    /**
                     * <p>短信提交成功量统计。</p><p>单位：数</p>
                     */
                    uint64_t m_requestSuccessCount;
                    bool m_requestSuccessCountHasBeenSet;

                    /**
                     * <p>短信回执失败量统计。</p><p>单位：数</p>
                     */
                    uint64_t m_callbackFailCount;
                    bool m_callbackFailCountHasBeenSet;

                    /**
                     * <p>短信回执成功量统计。</p><p>单位：数</p>
                     */
                    uint64_t m_callbackSuccessCount;
                    bool m_callbackSuccessCountHasBeenSet;

                    /**
                     * <p>运营商内部错误统计。</p><p>单位：数</p>
                     */
                    uint64_t m_internalErrorCount;
                    bool m_internalErrorCountHasBeenSet;

                    /**
                     * <p>号码无效或空号统计。</p><p>单位：数</p>
                     */
                    uint64_t m_invalidNumberCount;
                    bool m_invalidNumberCountHasBeenSet;

                    /**
                     * <p>停机、关机等错误统计。</p><p>单位：数</p>
                     */
                    uint64_t m_shutdownErrorCount;
                    bool m_shutdownErrorCountHasBeenSet;

                    /**
                     * <p>号码拉入免打扰名单统计。</p><p>单位：数</p>
                     */
                    uint64_t m_blackListCount;
                    bool m_blackListCountHasBeenSet;

                    /**
                     * <p>运营商频率限制统计。</p><p>单位：数</p>
                     */
                    uint64_t m_frequencyLimitCount;
                    bool m_frequencyLimitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_CALLBACKSTATUSSTATISTICS_H_
