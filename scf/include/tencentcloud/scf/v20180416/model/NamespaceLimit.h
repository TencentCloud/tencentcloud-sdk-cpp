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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACELIMIT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerCount.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 命名空间限制
                */
                class NamespaceLimit : public AbstractModel
                {
                public:
                    NamespaceLimit();
                    ~NamespaceLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数总数
                     * @return FunctionsCount 函数总数
                     * 
                     */
                    int64_t GetFunctionsCount() const;

                    /**
                     * 设置函数总数
                     * @param _functionsCount 函数总数
                     * 
                     */
                    void SetFunctionsCount(const int64_t& _functionsCount);

                    /**
                     * 判断参数 FunctionsCount 是否已赋值
                     * @return FunctionsCount 是否已赋值
                     * 
                     */
                    bool FunctionsCountHasBeenSet() const;

                    /**
                     * 获取Trigger信息
                     * @return Trigger Trigger信息
                     * 
                     */
                    TriggerCount GetTrigger() const;

                    /**
                     * 设置Trigger信息
                     * @param _trigger Trigger信息
                     * 
                     */
                    void SetTrigger(const TriggerCount& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取Namespace名称
                     * @return Namespace Namespace名称
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace名称
                     * @param _namespace Namespace名称
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取并发量
                     * @return ConcurrentExecutions 并发量
                     * 
                     */
                    int64_t GetConcurrentExecutions() const;

                    /**
                     * 设置并发量
                     * @param _concurrentExecutions 并发量
                     * 
                     */
                    void SetConcurrentExecutions(const int64_t& _concurrentExecutions);

                    /**
                     * 判断参数 ConcurrentExecutions 是否已赋值
                     * @return ConcurrentExecutions 是否已赋值
                     * 
                     */
                    bool ConcurrentExecutionsHasBeenSet() const;

                    /**
                     * 获取Timeout限制
                     * @return TimeoutLimit Timeout限制
                     * 
                     */
                    int64_t GetTimeoutLimit() const;

                    /**
                     * 设置Timeout限制
                     * @param _timeoutLimit Timeout限制
                     * 
                     */
                    void SetTimeoutLimit(const int64_t& _timeoutLimit);

                    /**
                     * 判断参数 TimeoutLimit 是否已赋值
                     * @return TimeoutLimit 是否已赋值
                     * 
                     */
                    bool TimeoutLimitHasBeenSet() const;

                    /**
                     * 获取测试事件限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TestModelLimit 测试事件限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTestModelLimit() const;

                    /**
                     * 设置测试事件限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _testModelLimit 测试事件限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTestModelLimit(const int64_t& _testModelLimit);

                    /**
                     * 判断参数 TestModelLimit 是否已赋值
                     * @return TestModelLimit 是否已赋值
                     * 
                     */
                    bool TestModelLimitHasBeenSet() const;

                    /**
                     * 获取初始化超时限制
                     * @return InitTimeoutLimit 初始化超时限制
                     * 
                     */
                    int64_t GetInitTimeoutLimit() const;

                    /**
                     * 设置初始化超时限制
                     * @param _initTimeoutLimit 初始化超时限制
                     * 
                     */
                    void SetInitTimeoutLimit(const int64_t& _initTimeoutLimit);

                    /**
                     * 判断参数 InitTimeoutLimit 是否已赋值
                     * @return InitTimeoutLimit 是否已赋值
                     * 
                     */
                    bool InitTimeoutLimitHasBeenSet() const;

                    /**
                     * 获取异步重试次数限制
                     * @return RetryNumLimit 异步重试次数限制
                     * 
                     */
                    int64_t GetRetryNumLimit() const;

                    /**
                     * 设置异步重试次数限制
                     * @param _retryNumLimit 异步重试次数限制
                     * 
                     */
                    void SetRetryNumLimit(const int64_t& _retryNumLimit);

                    /**
                     * 判断参数 RetryNumLimit 是否已赋值
                     * @return RetryNumLimit 是否已赋值
                     * 
                     */
                    bool RetryNumLimitHasBeenSet() const;

                    /**
                     * 获取异步重试消息保留时间下限
                     * @return MinMsgTTL 异步重试消息保留时间下限
                     * 
                     */
                    int64_t GetMinMsgTTL() const;

                    /**
                     * 设置异步重试消息保留时间下限
                     * @param _minMsgTTL 异步重试消息保留时间下限
                     * 
                     */
                    void SetMinMsgTTL(const int64_t& _minMsgTTL);

                    /**
                     * 判断参数 MinMsgTTL 是否已赋值
                     * @return MinMsgTTL 是否已赋值
                     * 
                     */
                    bool MinMsgTTLHasBeenSet() const;

                    /**
                     * 获取异步重试消息保留时间上限
                     * @return MaxMsgTTL 异步重试消息保留时间上限
                     * 
                     */
                    int64_t GetMaxMsgTTL() const;

                    /**
                     * 设置异步重试消息保留时间上限
                     * @param _maxMsgTTL 异步重试消息保留时间上限
                     * 
                     */
                    void SetMaxMsgTTL(const int64_t& _maxMsgTTL);

                    /**
                     * 判断参数 MaxMsgTTL 是否已赋值
                     * @return MaxMsgTTL 是否已赋值
                     * 
                     */
                    bool MaxMsgTTLHasBeenSet() const;

                private:

                    /**
                     * 函数总数
                     */
                    int64_t m_functionsCount;
                    bool m_functionsCountHasBeenSet;

                    /**
                     * Trigger信息
                     */
                    TriggerCount m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * Namespace名称
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 并发量
                     */
                    int64_t m_concurrentExecutions;
                    bool m_concurrentExecutionsHasBeenSet;

                    /**
                     * Timeout限制
                     */
                    int64_t m_timeoutLimit;
                    bool m_timeoutLimitHasBeenSet;

                    /**
                     * 测试事件限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_testModelLimit;
                    bool m_testModelLimitHasBeenSet;

                    /**
                     * 初始化超时限制
                     */
                    int64_t m_initTimeoutLimit;
                    bool m_initTimeoutLimitHasBeenSet;

                    /**
                     * 异步重试次数限制
                     */
                    int64_t m_retryNumLimit;
                    bool m_retryNumLimitHasBeenSet;

                    /**
                     * 异步重试消息保留时间下限
                     */
                    int64_t m_minMsgTTL;
                    bool m_minMsgTTLHasBeenSet;

                    /**
                     * 异步重试消息保留时间上限
                     */
                    int64_t m_maxMsgTTL;
                    bool m_maxMsgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACELIMIT_H_
