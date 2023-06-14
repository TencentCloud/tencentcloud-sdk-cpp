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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CKAFKADELIVERYPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CKAFKADELIVERYPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 用来描述需要投递到kafka topic的参数
                */
                class CkafkaDeliveryParams : public AbstractModel
                {
                public:
                    CkafkaDeliveryParams();
                    ~CkafkaDeliveryParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ckafka topic name
                     * @return TopicName ckafka topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置ckafka topic name
                     * @param _topicName ckafka topic name
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
                     * 获取ckafka资源qcs六段式
                     * @return ResourceDescription ckafka资源qcs六段式
                     * 
                     */
                    std::string GetResourceDescription() const;

                    /**
                     * 设置ckafka资源qcs六段式
                     * @param _resourceDescription ckafka资源qcs六段式
                     * 
                     */
                    void SetResourceDescription(const std::string& _resourceDescription);

                    /**
                     * 判断参数 ResourceDescription 是否已赋值
                     * @return ResourceDescription 是否已赋值
                     * 
                     */
                    bool ResourceDescriptionHasBeenSet() const;

                private:

                    /**
                     * ckafka topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * ckafka资源qcs六段式
                     */
                    std::string m_resourceDescription;
                    bool m_resourceDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CKAFKADELIVERYPARAMS_H_
