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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SETMESSAGEQUEUEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SETMESSAGEQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SetMessageQueue请求参数结构体
                */
                class SetMessageQueueRequest : public AbstractModel
                {
                public:
                    SetMessageQueueRequest();
                    ~SetMessageQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取消息队列类型 1-CMQ; 2-Ckafka
                     * @return MsgQueueType 消息队列类型 1-CMQ; 2-Ckafka
                     * 
                     */
                    uint64_t GetMsgQueueType() const;

                    /**
                     * 设置消息队列类型 1-CMQ; 2-Ckafka
                     * @param _msgQueueType 消息队列类型 1-CMQ; 2-Ckafka
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
                     * 获取消息类型,整型值（0-31）之间以“,”分隔
0.设备在线状态变更
1.常亮属性(ProConst)变更
2.可写属性(ProWritable)变更
3.只读属性(ProReadonly)变更
4.设备控制(Action)
5.设备事件(Event)
6.系统事件(System)
                     * @return MsgType 消息类型,整型值（0-31）之间以“,”分隔
0.设备在线状态变更
1.常亮属性(ProConst)变更
2.可写属性(ProWritable)变更
3.只读属性(ProReadonly)变更
4.设备控制(Action)
5.设备事件(Event)
6.系统事件(System)
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置消息类型,整型值（0-31）之间以“,”分隔
0.设备在线状态变更
1.常亮属性(ProConst)变更
2.可写属性(ProWritable)变更
3.只读属性(ProReadonly)变更
4.设备控制(Action)
5.设备事件(Event)
6.系统事件(System)
                     * @param _msgType 消息类型,整型值（0-31）之间以“,”分隔
0.设备在线状态变更
1.常亮属性(ProConst)变更
2.可写属性(ProWritable)变更
3.只读属性(ProReadonly)变更
4.设备控制(Action)
5.设备事件(Event)
6.系统事件(System)
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
                     * 获取消息队列主题，不超过32字符
                     * @return Topic 消息队列主题，不超过32字符
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置消息队列主题，不超过32字符
                     * @param _topic 消息队列主题，不超过32字符
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
                     * 获取kafka消息队列的实例名，不超过64字符
                     * @return Instance kafka消息队列的实例名，不超过64字符
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置kafka消息队列的实例名，不超过64字符
                     * @param _instance kafka消息队列的实例名，不超过64字符
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
                     * 获取消息地域，不超过32字符
                     * @return MsgRegion 消息地域，不超过32字符
                     * 
                     */
                    std::string GetMsgRegion() const;

                    /**
                     * 设置消息地域，不超过32字符
                     * @param _msgRegion 消息地域，不超过32字符
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
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 消息队列类型 1-CMQ; 2-Ckafka
                     */
                    uint64_t m_msgQueueType;
                    bool m_msgQueueTypeHasBeenSet;

                    /**
                     * 消息类型,整型值（0-31）之间以“,”分隔
0.设备在线状态变更
1.常亮属性(ProConst)变更
2.可写属性(ProWritable)变更
3.只读属性(ProReadonly)变更
4.设备控制(Action)
5.设备事件(Event)
6.系统事件(System)
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 消息队列主题，不超过32字符
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * kafka消息队列的实例名，不超过64字符
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 消息地域，不超过32字符
                     */
                    std::string m_msgRegion;
                    bool m_msgRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SETMESSAGEQUEUEREQUEST_H_
