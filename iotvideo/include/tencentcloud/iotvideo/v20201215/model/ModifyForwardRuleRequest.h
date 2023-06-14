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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYFORWARDRULEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYFORWARDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * ModifyForwardRule请求参数结构体
                */
                class ModifyForwardRuleRequest : public AbstractModel
                {
                public:
                    ModifyForwardRuleRequest();
                    ~ModifyForwardRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取消息类型
                     * @return MsgType 消息类型
                     * 
                     */
                    uint64_t GetMsgType() const;

                    /**
                     * 设置消息类型
                     * @param _msgType 消息类型
                     * 
                     */
                    void SetMsgType(const uint64_t& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取控制台Skey
                     * @return Skey 控制台Skey
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置控制台Skey
                     * @param _skey 控制台Skey
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取队列区域
                     * @return QueueRegion 队列区域
                     * 
                     */
                    std::string GetQueueRegion() const;

                    /**
                     * 设置队列区域
                     * @param _queueRegion 队列区域
                     * 
                     */
                    void SetQueueRegion(const std::string& _queueRegion);

                    /**
                     * 判断参数 QueueRegion 是否已赋值
                     * @return QueueRegion 是否已赋值
                     * 
                     */
                    bool QueueRegionHasBeenSet() const;

                    /**
                     * 获取队列类型 0.CMQ 1.CKafka
                     * @return QueueType 队列类型 0.CMQ 1.CKafka
                     * 
                     */
                    uint64_t GetQueueType() const;

                    /**
                     * 设置队列类型 0.CMQ 1.CKafka
                     * @param _queueType 队列类型 0.CMQ 1.CKafka
                     * 
                     */
                    void SetQueueType(const uint64_t& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取临时密钥
                     * @return Consecretid 临时密钥
                     * 
                     */
                    std::string GetConsecretid() const;

                    /**
                     * 设置临时密钥
                     * @param _consecretid 临时密钥
                     * 
                     */
                    void SetConsecretid(const std::string& _consecretid);

                    /**
                     * 判断参数 Consecretid 是否已赋值
                     * @return Consecretid 是否已赋值
                     * 
                     */
                    bool ConsecretidHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取队列或主题ID
                     * @return QueueID 队列或主题ID
                     * 
                     */
                    std::string GetQueueID() const;

                    /**
                     * 设置队列或主题ID
                     * @param _queueID 队列或主题ID
                     * 
                     */
                    void SetQueueID(const std::string& _queueID);

                    /**
                     * 判断参数 QueueID 是否已赋值
                     * @return QueueID 是否已赋值
                     * 
                     */
                    bool QueueIDHasBeenSet() const;

                    /**
                     * 获取队列或主题名称
                     * @return QueueName 队列或主题名称
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列或主题名称
                     * @param _queueName 队列或主题名称
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 消息类型
                     */
                    uint64_t m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 控制台Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * 队列区域
                     */
                    std::string m_queueRegion;
                    bool m_queueRegionHasBeenSet;

                    /**
                     * 队列类型 0.CMQ 1.CKafka
                     */
                    uint64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 临时密钥
                     */
                    std::string m_consecretid;
                    bool m_consecretidHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 队列或主题ID
                     */
                    std::string m_queueID;
                    bool m_queueIDHasBeenSet;

                    /**
                     * 队列或主题名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYFORWARDRULEREQUEST_H_
