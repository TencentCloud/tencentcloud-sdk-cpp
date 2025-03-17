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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_HOSTINGCONFIG_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_HOSTINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 托管配置
                */
                class HostingConfig : public AbstractModel
                {
                public:
                    HostingConfig();
                    ~HostingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管资源替换时间， 默认为证书过期前30天存在续费证书则替换
                     * @return ReplaceTime 托管资源替换时间， 默认为证书过期前30天存在续费证书则替换
                     * 
                     */
                    int64_t GetReplaceTime() const;

                    /**
                     * 设置托管资源替换时间， 默认为证书过期前30天存在续费证书则替换
                     * @param _replaceTime 托管资源替换时间， 默认为证书过期前30天存在续费证书则替换
                     * 
                     */
                    void SetReplaceTime(const int64_t& _replaceTime);

                    /**
                     * 判断参数 ReplaceTime 是否已赋值
                     * @return ReplaceTime 是否已赋值
                     * 
                     */
                    bool ReplaceTimeHasBeenSet() const;

                    /**
                     * 获取托管发送消息类型：0，托管开始前消息提醒（没有续费证书也会收到该提示消息）； 1， 托管开始消息提醒（存在续费证书才会收到消息提醒）； 2， 托管资源替换失败消息提醒； 3 托管资源替换成功消息提醒
                     * @return MessageTypes 托管发送消息类型：0，托管开始前消息提醒（没有续费证书也会收到该提示消息）； 1， 托管开始消息提醒（存在续费证书才会收到消息提醒）； 2， 托管资源替换失败消息提醒； 3 托管资源替换成功消息提醒
                     * 
                     */
                    std::vector<int64_t> GetMessageTypes() const;

                    /**
                     * 设置托管发送消息类型：0，托管开始前消息提醒（没有续费证书也会收到该提示消息）； 1， 托管开始消息提醒（存在续费证书才会收到消息提醒）； 2， 托管资源替换失败消息提醒； 3 托管资源替换成功消息提醒
                     * @param _messageTypes 托管发送消息类型：0，托管开始前消息提醒（没有续费证书也会收到该提示消息）； 1， 托管开始消息提醒（存在续费证书才会收到消息提醒）； 2， 托管资源替换失败消息提醒； 3 托管资源替换成功消息提醒
                     * 
                     */
                    void SetMessageTypes(const std::vector<int64_t>& _messageTypes);

                    /**
                     * 判断参数 MessageTypes 是否已赋值
                     * @return MessageTypes 是否已赋值
                     * 
                     */
                    bool MessageTypesHasBeenSet() const;

                    /**
                     * 获取资源替换开始时间
                     * @return ReplaceStartTime 资源替换开始时间
                     * 
                     */
                    std::string GetReplaceStartTime() const;

                    /**
                     * 设置资源替换开始时间
                     * @param _replaceStartTime 资源替换开始时间
                     * 
                     */
                    void SetReplaceStartTime(const std::string& _replaceStartTime);

                    /**
                     * 判断参数 ReplaceStartTime 是否已赋值
                     * @return ReplaceStartTime 是否已赋值
                     * 
                     */
                    bool ReplaceStartTimeHasBeenSet() const;

                    /**
                     * 获取资源替换结束时间
                     * @return ReplaceEndTime 资源替换结束时间
                     * 
                     */
                    std::string GetReplaceEndTime() const;

                    /**
                     * 设置资源替换结束时间
                     * @param _replaceEndTime 资源替换结束时间
                     * 
                     */
                    void SetReplaceEndTime(const std::string& _replaceEndTime);

                    /**
                     * 判断参数 ReplaceEndTime 是否已赋值
                     * @return ReplaceEndTime 是否已赋值
                     * 
                     */
                    bool ReplaceEndTimeHasBeenSet() const;

                private:

                    /**
                     * 托管资源替换时间， 默认为证书过期前30天存在续费证书则替换
                     */
                    int64_t m_replaceTime;
                    bool m_replaceTimeHasBeenSet;

                    /**
                     * 托管发送消息类型：0，托管开始前消息提醒（没有续费证书也会收到该提示消息）； 1， 托管开始消息提醒（存在续费证书才会收到消息提醒）； 2， 托管资源替换失败消息提醒； 3 托管资源替换成功消息提醒
                     */
                    std::vector<int64_t> m_messageTypes;
                    bool m_messageTypesHasBeenSet;

                    /**
                     * 资源替换开始时间
                     */
                    std::string m_replaceStartTime;
                    bool m_replaceStartTimeHasBeenSet;

                    /**
                     * 资源替换结束时间
                     */
                    std::string m_replaceEndTime;
                    bool m_replaceEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_HOSTINGCONFIG_H_
