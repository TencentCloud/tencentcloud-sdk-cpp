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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MESSAGEFORWARD_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MESSAGEFORWARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 消息转发配置信息
                */
                class MessageForward : public AbstractModel
                {
                public:
                    MessageForward();
                    ~MessageForward() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntId 配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIntId() const;

                    /**
                     * 设置配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intId 配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntId(const int64_t& _intId);

                    /**
                     * 判断参数 IntId 是否已赋值
                     * @return IntId 是否已赋值
                     * 
                     */
                    bool IntIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageType json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageType json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 区域ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionName 区域名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instance 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName topic 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_intId;
                    bool m_intIdHasBeenSet;

                    /**
                     * 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * json数组， 转发类型 1: 告警 2:GPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

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
                     * kafka topic id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * topic 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MESSAGEFORWARD_H_
