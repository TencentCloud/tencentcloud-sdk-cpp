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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_DEADLETTERCONFIG_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_DEADLETTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/CkafkaDeliveryParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * rule对应的dlq配置
                */
                class DeadLetterConfig : public AbstractModel
                {
                public:
                    DeadLetterConfig();
                    ~DeadLetterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持dlq、丢弃、忽略错误继续传递三种模式, 分别对应: DLQ,DROP,IGNORE_ERROR
                     * @return DisposeMethod 支持dlq、丢弃、忽略错误继续传递三种模式, 分别对应: DLQ,DROP,IGNORE_ERROR
                     * 
                     */
                    std::string GetDisposeMethod() const;

                    /**
                     * 设置支持dlq、丢弃、忽略错误继续传递三种模式, 分别对应: DLQ,DROP,IGNORE_ERROR
                     * @param _disposeMethod 支持dlq、丢弃、忽略错误继续传递三种模式, 分别对应: DLQ,DROP,IGNORE_ERROR
                     * 
                     */
                    void SetDisposeMethod(const std::string& _disposeMethod);

                    /**
                     * 判断参数 DisposeMethod 是否已赋值
                     * @return DisposeMethod 是否已赋值
                     * 
                     */
                    bool DisposeMethodHasBeenSet() const;

                    /**
                     * 获取设置了DLQ方式后,此选项必填. 错误消息会被投递到对应的kafka topic中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CkafkaDeliveryParams 设置了DLQ方式后,此选项必填. 错误消息会被投递到对应的kafka topic中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CkafkaDeliveryParams GetCkafkaDeliveryParams() const;

                    /**
                     * 设置设置了DLQ方式后,此选项必填. 错误消息会被投递到对应的kafka topic中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ckafkaDeliveryParams 设置了DLQ方式后,此选项必填. 错误消息会被投递到对应的kafka topic中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCkafkaDeliveryParams(const CkafkaDeliveryParams& _ckafkaDeliveryParams);

                    /**
                     * 判断参数 CkafkaDeliveryParams 是否已赋值
                     * @return CkafkaDeliveryParams 是否已赋值
                     * 
                     */
                    bool CkafkaDeliveryParamsHasBeenSet() const;

                private:

                    /**
                     * 支持dlq、丢弃、忽略错误继续传递三种模式, 分别对应: DLQ,DROP,IGNORE_ERROR
                     */
                    std::string m_disposeMethod;
                    bool m_disposeMethodHasBeenSet;

                    /**
                     * 设置了DLQ方式后,此选项必填. 错误消息会被投递到对应的kafka topic中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CkafkaDeliveryParams m_ckafkaDeliveryParams;
                    bool m_ckafkaDeliveryParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DEADLETTERCONFIG_H_
