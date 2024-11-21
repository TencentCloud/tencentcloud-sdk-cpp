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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CKafka的描述-需要投递到的kafka信息
                */
                class Ckafka : public AbstractModel
                {
                public:
                    Ckafka();
                    ~Ckafka() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ckafka 的 InstanceId
                     * @return InstanceId Ckafka 的 InstanceId
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Ckafka 的 InstanceId
                     * @param _instanceId Ckafka 的 InstanceId
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
                     * 获取Ckafka 的 TopicName
                     * @return TopicName Ckafka 的 TopicName
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Ckafka 的 TopicName
                     * @param _topicName Ckafka 的 TopicName
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
                     * 获取Ckafka 的 Vip
                     * @return Vip Ckafka 的 Vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Ckafka 的 Vip
                     * @param _vip Ckafka 的 Vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Ckafka 的 Vport
                     * @return Vport Ckafka 的 Vport
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Ckafka 的 Vport
                     * @param _vport Ckafka 的 Vport
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Ckafka 的 InstanceName
                     * @return InstanceName Ckafka 的 InstanceName
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Ckafka 的 InstanceName
                     * @param _instanceName Ckafka 的 InstanceName
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
                     * 获取Ckafka 的 TopicId
                     * @return TopicId Ckafka 的 TopicId
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Ckafka 的 TopicId
                     * @param _topicId Ckafka 的 TopicId
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * Ckafka 的 InstanceId
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Ckafka 的 TopicName
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Ckafka 的 Vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Ckafka 的 Vport
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Ckafka 的 InstanceName
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Ckafka 的 TopicId
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
