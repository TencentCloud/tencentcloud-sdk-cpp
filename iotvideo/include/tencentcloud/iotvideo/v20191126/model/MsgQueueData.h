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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MSGQUEUEDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MSGQUEUEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 产品转发消息队列配置
                */
                class MsgQueueData : public AbstractModel
                {
                public:
                    MsgQueueData();
                    ~MsgQueueData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息队列类型 1：CMQ 2：kafka
                     * @return MsgQueueType 消息队列类型 1：CMQ 2：kafka
                     * 
                     */
                    uint64_t GetMsgQueueType() const;

                    /**
                     * 设置消息队列类型 1：CMQ 2：kafka
                     * @param _msgQueueType 消息队列类型 1：CMQ 2：kafka
                     * 
                     */
                    void SetMsgQueueType(const uint64_t& _msgQueueType);

                    /**
                     * 判断参数 MsgQueueType 是否已赋值
                     * @return MsgQueueType 是否已赋值
                     * 
                     */
                    bool MsgQueueTypeHasBeenSet() const;

                    /**
                     * 获取消息类型列表，整型值（0-31）之间以“,”分隔
                     * @return MsgType 消息类型列表，整型值（0-31）之间以“,”分隔
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置消息类型列表，整型值（0-31）之间以“,”分隔
                     * @param _msgType 消息类型列表，整型值（0-31）之间以“,”分隔
                     * 
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return Instance 实例名称
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置实例名称
                     * @param _instance 实例名称
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
                     * 获取消息地域
                     * @return MsgRegion 消息地域
                     * 
                     */
                    std::string GetMsgRegion() const;

                    /**
                     * 设置消息地域
                     * @param _msgRegion 消息地域
                     * 
                     */
                    void SetMsgRegion(const std::string& _msgRegion);

                    /**
                     * 判断参数 MsgRegion 是否已赋值
                     * @return MsgRegion 是否已赋值
                     * 
                     */
                    bool MsgRegionHasBeenSet() const;

                private:

                    /**
                     * 消息队列类型 1：CMQ 2：kafka
                     */
                    uint64_t m_msgQueueType;
                    bool m_msgQueueTypeHasBeenSet;

                    /**
                     * 消息类型列表，整型值（0-31）之间以“,”分隔
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 消息地域
                     */
                    std::string m_msgRegion;
                    bool m_msgRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MSGQUEUEDATA_H_
