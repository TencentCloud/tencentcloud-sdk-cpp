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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYKAFKASETTINGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYKAFKASETTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 安全日志日志投递kafka设置详情
                */
                class SecLogDeliveryKafkaSettingInfo : public AbstractModel
                {
                public:
                    SecLogDeliveryKafkaSettingInfo();
                    ~SecLogDeliveryKafkaSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全日志模块
                     * @return LogType 安全日志模块
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置安全日志模块
                     * @param _logType 安全日志模块
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取主题ID
                     * @return TopicID 主题ID
                     * 
                     */
                    std::string GetTopicID() const;

                    /**
                     * 设置主题ID
                     * @param _topicID 主题ID
                     * 
                     */
                    void SetTopicID(const std::string& _topicID);

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     * 
                     */
                    bool TopicIDHasBeenSet() const;

                    /**
                     * 获取主题名称
                     * @return TopicName 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param _topicName 主题名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取投递状态(false:关 true:开)
                     * @return State 投递状态(false:关 true:开)
                     * 
                     */
                    bool GetState() const;

                    /**
                     * 设置投递状态(false:关 true:开)
                     * @param _state 投递状态(false:关 true:开)
                     * 
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取日志类型
                     * @return SubLogType 日志类型
                     * 
                     */
                    std::vector<std::string> GetSubLogType() const;

                    /**
                     * 设置日志类型
                     * @param _subLogType 日志类型
                     * 
                     */
                    void SetSubLogType(const std::vector<std::string>& _subLogType);

                    /**
                     * 判断参数 SubLogType 是否已赋值
                     * @return SubLogType 是否已赋值
                     * 
                     */
                    bool SubLogTypeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrMsg 错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息
                     * @param _errMsg 错误信息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 安全日志模块
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 主题ID
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 投递状态(false:关 true:开)
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 日志类型
                     */
                    std::vector<std::string> m_subLogType;
                    bool m_subLogTypeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYKAFKASETTINGINFO_H_
