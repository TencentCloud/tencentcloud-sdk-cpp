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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_RETRYPOLICY_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_RETRYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 重试策略
                */
                class RetryPolicy : public AbstractModel
                {
                public:
                    RetryPolicy();
                    ~RetryPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重试策略类型，枚举值如下：

- EXPONENTIAL：固定间隔
- CUSTOMIZED：阶梯退避
                     * @return PolicyType 重试策略类型，枚举值如下：

- EXPONENTIAL：固定间隔
- CUSTOMIZED：阶梯退避
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置重试策略类型，枚举值如下：

- EXPONENTIAL：固定间隔
- CUSTOMIZED：阶梯退避
                     * @param _policyType 重试策略类型，枚举值如下：

- EXPONENTIAL：固定间隔
- CUSTOMIZED：阶梯退避
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取固定重试间隔，仅在重试策略为固定间隔时生效
                     * @return RetryInterval 固定重试间隔，仅在重试策略为固定间隔时生效
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 设置固定重试间隔，仅在重试策略为固定间隔时生效
                     * @param _retryInterval 固定重试间隔，仅在重试策略为固定间隔时生效
                     * 
                     */
                    void SetRetryInterval(const int64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                private:

                    /**
                     * 重试策略类型，枚举值如下：

- EXPONENTIAL：固定间隔
- CUSTOMIZED：阶梯退避
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 固定重试间隔，仅在重试策略为固定间隔时生效
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_RETRYPOLICY_H_
