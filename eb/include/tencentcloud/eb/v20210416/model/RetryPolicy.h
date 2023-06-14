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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_RETRYPOLICY_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_RETRYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 用来描述一个ckafka投递目标的重试策略
                */
                class RetryPolicy : public AbstractModel
                {
                public:
                    RetryPolicy();
                    ~RetryPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重试间隔 单位:秒
                     * @return RetryInterval 重试间隔 单位:秒
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 设置重试间隔 单位:秒
                     * @param _retryInterval 重试间隔 单位:秒
                     * 
                     */
                    void SetRetryInterval(const uint64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取最大重试次数
                     * @return MaxRetryAttempts 最大重试次数
                     * 
                     */
                    uint64_t GetMaxRetryAttempts() const;

                    /**
                     * 设置最大重试次数
                     * @param _maxRetryAttempts 最大重试次数
                     * 
                     */
                    void SetMaxRetryAttempts(const uint64_t& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * 
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                private:

                    /**
                     * 重试间隔 单位:秒
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 最大重试次数
                     */
                    uint64_t m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_RETRYPOLICY_H_
