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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATEFORWARDRULERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATEFORWARDRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * CreateForwardRule返回参数结构体
                */
                class CreateForwardRuleResponse : public AbstractModel
                {
                public:
                    CreateForwardRuleResponse();
                    ~CreateForwardRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云账号
                     * @return Endpoint 腾讯云账号
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取队列名
                     * @return QueueName 队列名
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

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
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取角色名称
                     * @return RoleName 角色名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取角色ID
                     * @return RoleID 角色ID
                     * 
                     */
                    uint64_t GetRoleID() const;

                    /**
                     * 判断参数 RoleID 是否已赋值
                     * @return RoleID 是否已赋值
                     * 
                     */
                    bool RoleIDHasBeenSet() const;

                    /**
                     * 获取队列区
                     * @return QueueRegion 队列区
                     * 
                     */
                    std::string GetQueueRegion() const;

                    /**
                     * 判断参数 QueueRegion 是否已赋值
                     * @return QueueRegion 是否已赋值
                     * 
                     */
                    bool QueueRegionHasBeenSet() const;

                    /**
                     * 获取消息队列的类型。 0：CMQ，1：Ckafka
                     * @return QueueType 消息队列的类型。 0：CMQ，1：Ckafka
                     * 
                     */
                    uint64_t GetQueueType() const;

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取实例id， 目前只有Ckafka会用到
                     * @return InstanceId 实例id， 目前只有Ckafka会用到
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称，目前只有Ckafka会用到
                     * @return InstanceName 实例名称，目前只有Ckafka会用到
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取错误消息
                     * @return ErrMsg 错误消息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 腾讯云账号
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 队列名
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

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
                     * 结果
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色ID
                     */
                    uint64_t m_roleID;
                    bool m_roleIDHasBeenSet;

                    /**
                     * 队列区
                     */
                    std::string m_queueRegion;
                    bool m_queueRegionHasBeenSet;

                    /**
                     * 消息队列的类型。 0：CMQ，1：Ckafka
                     */
                    uint64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 实例id， 目前只有Ckafka会用到
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称，目前只有Ckafka会用到
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 错误消息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATEFORWARDRULERESPONSE_H_
