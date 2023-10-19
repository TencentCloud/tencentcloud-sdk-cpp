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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCONSUMERCONNECTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCONSUMERCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 在线消费者情况
                */
                class RocketMQConsumerConnection : public AbstractModel
                {
                public:
                    RocketMQConsumerConnection();
                    ~RocketMQConsumerConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者实例ID
                     * @return ClientId 消费者实例ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置消费者实例ID
                     * @param _clientId 消费者实例ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取消费者实例的地址和端口
                     * @return ClientAddr 消费者实例的地址和端口
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置消费者实例的地址和端口
                     * @param _clientAddr 消费者实例的地址和端口
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取消费者应用的语言版本
                     * @return Language 消费者应用的语言版本
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置消费者应用的语言版本
                     * @param _language 消费者应用的语言版本
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取消息堆积量
                     * @return Accumulative 消息堆积量
                     * 
                     */
                    int64_t GetAccumulative() const;

                    /**
                     * 设置消息堆积量
                     * @param _accumulative 消息堆积量
                     * 
                     */
                    void SetAccumulative(const int64_t& _accumulative);

                    /**
                     * 判断参数 Accumulative 是否已赋值
                     * @return Accumulative 是否已赋值
                     * 
                     */
                    bool AccumulativeHasBeenSet() const;

                    /**
                     * 获取消费端版本
                     * @return Version 消费端版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置消费端版本
                     * @param _version 消费端版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 消费者实例ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 消费者实例的地址和端口
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * 消费者应用的语言版本
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 消息堆积量
                     */
                    int64_t m_accumulative;
                    bool m_accumulativeHasBeenSet;

                    /**
                     * 消费端版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCONSUMERCONNECTION_H_
