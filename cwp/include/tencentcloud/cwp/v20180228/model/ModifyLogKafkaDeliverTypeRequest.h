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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKADELIVERTYPEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKADELIVERTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLogKafkaDeliverType请求参数结构体
                */
                class ModifyLogKafkaDeliverTypeRequest : public AbstractModel
                {
                public:
                    ModifyLogKafkaDeliverTypeRequest();
                    ~ModifyLogKafkaDeliverTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹
                     * @return SecurityType 安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹
                     * @param _securityType 安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹
                     * 
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取安全模块下的日志类型，
                     * @return LogType 安全模块下的日志类型，
                     * 
                     */
                    std::vector<uint64_t> GetLogType() const;

                    /**
                     * 设置安全模块下的日志类型，
                     * @param _logType 安全模块下的日志类型，
                     * 
                     */
                    void SetLogType(const std::vector<uint64_t>& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取投递开关 0关闭 1开启
                     * @return Switch 投递开关 0关闭 1开启
                     * 
                     */
                    uint64_t GetSwitch() const;

                    /**
                     * 设置投递开关 0关闭 1开启
                     * @param _switch 投递开关 0关闭 1开启
                     * 
                     */
                    void SetSwitch(const uint64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取kafka topic id
                     * @return TopicId kafka topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置kafka topic id
                     * @param _topicId kafka topic id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取kafka topic name
                     * @return TopicName kafka topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置kafka topic name
                     * @param _topicName kafka topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * 安全模块类型 1: 入侵检测 2: 漏洞管理 3: 基线管理 4: 高级防御 5:客户端相关 6: 资产指纹
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 安全模块下的日志类型，
                     */
                    std::vector<uint64_t> m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 投递开关 0关闭 1开启
                     */
                    uint64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * kafka topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * kafka topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKADELIVERTYPEREQUEST_H_
