/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICS_H_

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
        namespace V20190711
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
                     * 获取短信回执量统计。
                     * @return CallbackCount 短信回执量统计。
                     * 
                     */
                    uint64_t GetCallbackCount() const;

                    /**
                     * 设置短信回执量统计。
                     * @param _callbackCount 短信回执量统计。
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
                     * 获取短信提交成功量统计。
                     * @return RequestSuccessCount 短信提交成功量统计。
                     * 
                     */
                    uint64_t GetRequestSuccessCount() const;

                    /**
                     * 设置短信提交成功量统计。
                     * @param _requestSuccessCount 短信提交成功量统计。
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
                     * 获取短信回执失败量统计。
                     * @return CallbackFailCount 短信回执失败量统计。
                     * 
                     */
                    uint64_t GetCallbackFailCount() const;

                    /**
                     * 设置短信回执失败量统计。
                     * @param _callbackFailCount 短信回执失败量统计。
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
                     * 获取短信回执成功量统计。
                     * @return CallbackSuccessCount 短信回执成功量统计。
                     * 
                     */
                    uint64_t GetCallbackSuccessCount() const;

                    /**
                     * 设置短信回执成功量统计。
                     * @param _callbackSuccessCount 短信回执成功量统计。
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
                     * 获取运营商内部错误统计。
                     * @return InternalErrorCount 运营商内部错误统计。
                     * 
                     */
                    uint64_t GetInternalErrorCount() const;

                    /**
                     * 设置运营商内部错误统计。
                     * @param _internalErrorCount 运营商内部错误统计。
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
                     * 获取号码无效或空号统计。
                     * @return InvalidNumberCount 号码无效或空号统计。
                     * 
                     */
                    uint64_t GetInvalidNumberCount() const;

                    /**
                     * 设置号码无效或空号统计。
                     * @param _invalidNumberCount 号码无效或空号统计。
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
                     * 获取停机、关机等错误统计。
                     * @return ShutdownErrorCount 停机、关机等错误统计。
                     * 
                     */
                    uint64_t GetShutdownErrorCount() const;

                    /**
                     * 设置停机、关机等错误统计。
                     * @param _shutdownErrorCount 停机、关机等错误统计。
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
                     * 获取号码拉入黑名单统计。
                     * @return BlackListCount 号码拉入黑名单统计。
                     * 
                     */
                    uint64_t GetBlackListCount() const;

                    /**
                     * 设置号码拉入黑名单统计。
                     * @param _blackListCount 号码拉入黑名单统计。
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
                     * 获取运营商频率限制统计。
                     * @return FrequencyLimitCount 运营商频率限制统计。
                     * 
                     */
                    uint64_t GetFrequencyLimitCount() const;

                    /**
                     * 设置运营商频率限制统计。
                     * @param _frequencyLimitCount 运营商频率限制统计。
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
                     * 短信回执量统计。
                     */
                    uint64_t m_callbackCount;
                    bool m_callbackCountHasBeenSet;

                    /**
                     * 短信提交成功量统计。
                     */
                    uint64_t m_requestSuccessCount;
                    bool m_requestSuccessCountHasBeenSet;

                    /**
                     * 短信回执失败量统计。
                     */
                    uint64_t m_callbackFailCount;
                    bool m_callbackFailCountHasBeenSet;

                    /**
                     * 短信回执成功量统计。
                     */
                    uint64_t m_callbackSuccessCount;
                    bool m_callbackSuccessCountHasBeenSet;

                    /**
                     * 运营商内部错误统计。
                     */
                    uint64_t m_internalErrorCount;
                    bool m_internalErrorCountHasBeenSet;

                    /**
                     * 号码无效或空号统计。
                     */
                    uint64_t m_invalidNumberCount;
                    bool m_invalidNumberCountHasBeenSet;

                    /**
                     * 停机、关机等错误统计。
                     */
                    uint64_t m_shutdownErrorCount;
                    bool m_shutdownErrorCountHasBeenSet;

                    /**
                     * 号码拉入黑名单统计。
                     */
                    uint64_t m_blackListCount;
                    bool m_blackListCountHasBeenSet;

                    /**
                     * 运营商频率限制统计。
                     */
                    uint64_t m_frequencyLimitCount;
                    bool m_frequencyLimitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICS_H_
