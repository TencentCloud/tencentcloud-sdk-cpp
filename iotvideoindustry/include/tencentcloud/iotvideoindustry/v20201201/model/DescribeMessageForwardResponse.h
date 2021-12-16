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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEMESSAGEFORWARDRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEMESSAGEFORWARDRESPONSE_H_

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
                * DescribeMessageForward返回参数结构体
                */
                class DescribeMessageForwardResponse : public AbstractModel
                {
                public:
                    DescribeMessageForwardResponse();
                    ~DescribeMessageForwardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionId() const;

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionName() const;

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstance() const;

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntId 配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIntId() const;

                    /**
                     * 判断参数 IntId 是否已赋值
                     * @return IntId 是否已赋值
                     */
                    bool IntIdHasBeenSet() const;

                    /**
                     * 获取json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageType json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessageType() const;

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取配置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 配置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户Uin信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户Uin信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取kafka topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName kafka topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * 区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_intId;
                    bool m_intIdHasBeenSet;

                    /**
                     * json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 配置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户Uin信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * kafka topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEMESSAGEFORWARDRESPONSE_H_
