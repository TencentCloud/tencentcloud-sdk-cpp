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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEQPSPERCLIENT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEQPSPERCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * http访问服务客户端限频
                */
                class HTTPServiceQPSPerClient : public AbstractModel
                {
                public:
                    HTTPServiceQPSPerClient();
                    ~HTTPServiceQPSPerClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端维度限频标识。限制当前资源被单个客户端调用的频率，客户端标识支持 用户ID（UserID） 或 客户端 IP（ClientIP）。UserID 包括 云开发用户 ID 或 微信 openid，如果请求无 UserID 信息，则不会限制。
                     * @return LimitBy 客户端维度限频标识。限制当前资源被单个客户端调用的频率，客户端标识支持 用户ID（UserID） 或 客户端 IP（ClientIP）。UserID 包括 云开发用户 ID 或 微信 openid，如果请求无 UserID 信息，则不会限制。
                     * 
                     */
                    std::string GetLimitBy() const;

                    /**
                     * 设置客户端维度限频标识。限制当前资源被单个客户端调用的频率，客户端标识支持 用户ID（UserID） 或 客户端 IP（ClientIP）。UserID 包括 云开发用户 ID 或 微信 openid，如果请求无 UserID 信息，则不会限制。
                     * @param _limitBy 客户端维度限频标识。限制当前资源被单个客户端调用的频率，客户端标识支持 用户ID（UserID） 或 客户端 IP（ClientIP）。UserID 包括 云开发用户 ID 或 微信 openid，如果请求无 UserID 信息，则不会限制。
                     * 
                     */
                    void SetLimitBy(const std::string& _limitBy);

                    /**
                     * 判断参数 LimitBy 是否已赋值
                     * @return LimitBy 是否已赋值
                     * 
                     */
                    bool LimitByHasBeenSet() const;

                    /**
                     * 获取限制QPS值，每秒请求次数
                     * @return LimitValue 限制QPS值，每秒请求次数
                     * 
                     */
                    int64_t GetLimitValue() const;

                    /**
                     * 设置限制QPS值，每秒请求次数
                     * @param _limitValue 限制QPS值，每秒请求次数
                     * 
                     */
                    void SetLimitValue(const int64_t& _limitValue);

                    /**
                     * 判断参数 LimitValue 是否已赋值
                     * @return LimitValue 是否已赋值
                     * 
                     */
                    bool LimitValueHasBeenSet() const;

                private:

                    /**
                     * 客户端维度限频标识。限制当前资源被单个客户端调用的频率，客户端标识支持 用户ID（UserID） 或 客户端 IP（ClientIP）。UserID 包括 云开发用户 ID 或 微信 openid，如果请求无 UserID 信息，则不会限制。
                     */
                    std::string m_limitBy;
                    bool m_limitByHasBeenSet;

                    /**
                     * 限制QPS值，每秒请求次数
                     */
                    int64_t m_limitValue;
                    bool m_limitValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEQPSPERCLIENT_H_
