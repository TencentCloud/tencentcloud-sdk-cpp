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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCTRIGGERCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCTRIGGERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RetryConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 函数的异步重试配置详情
                */
                class AsyncTriggerConfig : public AbstractModel
                {
                public:
                    AsyncTriggerConfig();
                    ~AsyncTriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户错误的异步重试重试配置
                     * @return RetryConfig 用户错误的异步重试重试配置
                     * 
                     */
                    std::vector<RetryConfig> GetRetryConfig() const;

                    /**
                     * 设置用户错误的异步重试重试配置
                     * @param _retryConfig 用户错误的异步重试重试配置
                     * 
                     */
                    void SetRetryConfig(const std::vector<RetryConfig>& _retryConfig);

                    /**
                     * 判断参数 RetryConfig 是否已赋值
                     * @return RetryConfig 是否已赋值
                     * 
                     */
                    bool RetryConfigHasBeenSet() const;

                    /**
                     * 获取消息保留时间
                     * @return MsgTTL 消息保留时间
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置消息保留时间
                     * @param _msgTTL 消息保留时间
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                private:

                    /**
                     * 用户错误的异步重试重试配置
                     */
                    std::vector<RetryConfig> m_retryConfig;
                    bool m_retryConfigHasBeenSet;

                    /**
                     * 消息保留时间
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCTRIGGERCONFIG_H_
