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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/SubscribedInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 用户组实体
                */
                class ConsumerGroup : public AbstractModel
                {
                public:
                    ConsumerGroup();
                    ~ConsumerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组名称
                     * @return ConsumerGroupName 用户组名称
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置用户组名称
                     * @param _consumerGroupName 用户组名称
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取订阅信息实体
                     * @return SubscribedInfo 订阅信息实体
                     * 
                     */
                    std::vector<SubscribedInfo> GetSubscribedInfo() const;

                    /**
                     * 设置订阅信息实体
                     * @param _subscribedInfo 订阅信息实体
                     * 
                     */
                    void SetSubscribedInfo(const std::vector<SubscribedInfo>& _subscribedInfo);

                    /**
                     * 判断参数 SubscribedInfo 是否已赋值
                     * @return SubscribedInfo 是否已赋值
                     * 
                     */
                    bool SubscribedInfoHasBeenSet() const;

                private:

                    /**
                     * 用户组名称
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * 订阅信息实体
                     */
                    std::vector<SubscribedInfo> m_subscribedInfo;
                    bool m_subscribedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUP_H_
