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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_SESSIONCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_SESSIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 会话参数
                */
                class SessionConfig : public AbstractModel
                {
                public:
                    SessionConfig();
                    ~SessionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取session 来源，三选一：'HEADER', 'COOKIE', 'QUERY_STRING' 
                     * @return SessionSource session 来源，三选一：'HEADER', 'COOKIE', 'QUERY_STRING' 
                     * 
                     */
                    std::string GetSessionSource() const;

                    /**
                     * 设置session 来源，三选一：'HEADER', 'COOKIE', 'QUERY_STRING' 
                     * @param _sessionSource session 来源，三选一：'HEADER', 'COOKIE', 'QUERY_STRING' 
                     * 
                     */
                    void SetSessionSource(const std::string& _sessionSource);

                    /**
                     * 判断参数 SessionSource 是否已赋值
                     * @return SessionSource 是否已赋值
                     * 
                     */
                    bool SessionSourceHasBeenSet() const;

                    /**
                     * 获取session 名称，以字母开头，非首字母可包含数字、字母、下划线、中划线，长度5-40个字符
                     * @return SessionName session 名称，以字母开头，非首字母可包含数字、字母、下划线、中划线，长度5-40个字符
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置session 名称，以字母开头，非首字母可包含数字、字母、下划线、中划线，长度5-40个字符
                     * @param _sessionName session 名称，以字母开头，非首字母可包含数字、字母、下划线、中划线，长度5-40个字符
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取最大并发会话数
                     * @return MaximumConcurrencySessionPerInstance 最大并发会话数
                     * 
                     */
                    uint64_t GetMaximumConcurrencySessionPerInstance() const;

                    /**
                     * 设置最大并发会话数
                     * @param _maximumConcurrencySessionPerInstance 最大并发会话数
                     * 
                     */
                    void SetMaximumConcurrencySessionPerInstance(const uint64_t& _maximumConcurrencySessionPerInstance);

                    /**
                     * 判断参数 MaximumConcurrencySessionPerInstance 是否已赋值
                     * @return MaximumConcurrencySessionPerInstance 是否已赋值
                     * 
                     */
                    bool MaximumConcurrencySessionPerInstanceHasBeenSet() const;

                    /**
                     * 获取生命周期
                     * @return MaximumTTLInSeconds 生命周期
                     * 
                     */
                    uint64_t GetMaximumTTLInSeconds() const;

                    /**
                     * 设置生命周期
                     * @param _maximumTTLInSeconds 生命周期
                     * 
                     */
                    void SetMaximumTTLInSeconds(const uint64_t& _maximumTTLInSeconds);

                    /**
                     * 判断参数 MaximumTTLInSeconds 是否已赋值
                     * @return MaximumTTLInSeconds 是否已赋值
                     * 
                     */
                    bool MaximumTTLInSecondsHasBeenSet() const;

                    /**
                     * 获取空闲时长
                     * @return MaximumIdleTimeInSeconds 空闲时长
                     * 
                     */
                    uint64_t GetMaximumIdleTimeInSeconds() const;

                    /**
                     * 设置空闲时长
                     * @param _maximumIdleTimeInSeconds 空闲时长
                     * 
                     */
                    void SetMaximumIdleTimeInSeconds(const uint64_t& _maximumIdleTimeInSeconds);

                    /**
                     * 判断参数 MaximumIdleTimeInSeconds 是否已赋值
                     * @return MaximumIdleTimeInSeconds 是否已赋值
                     * 
                     */
                    bool MaximumIdleTimeInSecondsHasBeenSet() const;

                    /**
                     * 获取session 对应的路径信息
                     * @return SessionPath session 对应的路径信息
                     * 
                     */
                    std::string GetSessionPath() const;

                    /**
                     * 设置session 对应的路径信息
                     * @param _sessionPath session 对应的路径信息
                     * 
                     */
                    void SetSessionPath(const std::string& _sessionPath);

                    /**
                     * 判断参数 SessionPath 是否已赋值
                     * @return SessionPath 是否已赋值
                     * 
                     */
                    bool SessionPathHasBeenSet() const;

                    /**
                     * 获取自动销毁 FATAL、自动暂停PAUSE， 只有启动安全隔离的时候才会有
                     * @return IdleTimeoutStrategy 自动销毁 FATAL、自动暂停PAUSE， 只有启动安全隔离的时候才会有
                     * 
                     */
                    std::string GetIdleTimeoutStrategy() const;

                    /**
                     * 设置自动销毁 FATAL、自动暂停PAUSE， 只有启动安全隔离的时候才会有
                     * @param _idleTimeoutStrategy 自动销毁 FATAL、自动暂停PAUSE， 只有启动安全隔离的时候才会有
                     * 
                     */
                    void SetIdleTimeoutStrategy(const std::string& _idleTimeoutStrategy);

                    /**
                     * 判断参数 IdleTimeoutStrategy 是否已赋值
                     * @return IdleTimeoutStrategy 是否已赋值
                     * 
                     */
                    bool IdleTimeoutStrategyHasBeenSet() const;

                private:

                    /**
                     * session 来源，三选一：'HEADER', 'COOKIE', 'QUERY_STRING' 
                     */
                    std::string m_sessionSource;
                    bool m_sessionSourceHasBeenSet;

                    /**
                     * session 名称，以字母开头，非首字母可包含数字、字母、下划线、中划线，长度5-40个字符
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * 最大并发会话数
                     */
                    uint64_t m_maximumConcurrencySessionPerInstance;
                    bool m_maximumConcurrencySessionPerInstanceHasBeenSet;

                    /**
                     * 生命周期
                     */
                    uint64_t m_maximumTTLInSeconds;
                    bool m_maximumTTLInSecondsHasBeenSet;

                    /**
                     * 空闲时长
                     */
                    uint64_t m_maximumIdleTimeInSeconds;
                    bool m_maximumIdleTimeInSecondsHasBeenSet;

                    /**
                     * session 对应的路径信息
                     */
                    std::string m_sessionPath;
                    bool m_sessionPathHasBeenSet;

                    /**
                     * 自动销毁 FATAL、自动暂停PAUSE， 只有启动安全隔离的时候才会有
                     */
                    std::string m_idleTimeoutStrategy;
                    bool m_idleTimeoutStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_SESSIONCONFIG_H_
