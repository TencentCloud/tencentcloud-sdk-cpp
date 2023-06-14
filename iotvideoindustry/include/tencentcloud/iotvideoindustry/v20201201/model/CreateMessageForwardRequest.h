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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEMESSAGEFORWARDREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEMESSAGEFORWARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * CreateMessageForward请求参数结构体
                */
                class CreateMessageForwardRequest : public AbstractModel
                {
                public:
                    CreateMessageForwardRequest();
                    ~CreateMessageForwardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取区域ID
                     * @return RegionId 区域ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置区域ID
                     * @param _regionId 区域ID
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return RegionName 区域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域名称
                     * @param _regionName 区域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return Instance 实例ID
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置实例ID
                     * @param _instance 实例ID
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取json数组， 转发类型 1: 告警 2:GPS
                     * @return MessageType json数组， 转发类型 1: 告警 2:GPS
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置json数组， 转发类型 1: 告警 2:GPS
                     * @param _messageType json数组， 转发类型 1: 告警 2:GPS
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

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
                     * 获取kafka topic 名称
                     * @return TopicName kafka topic 名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置kafka topic 名称
                     * @param _topicName kafka topic 名称
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
                     * 区域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * json数组， 转发类型 1: 告警 2:GPS
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * kafka topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * kafka topic 名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEMESSAGEFORWARDREQUEST_H_
