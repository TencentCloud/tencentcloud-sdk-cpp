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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPOBSERVABILITYCONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPOBSERVABILITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 可观测配置
                */
                class ContainerGroupObservabilityConfig : public AbstractModel
                {
                public:
                    ContainerGroupObservabilityConfig();
                    ~ContainerGroupObservabilityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLogConfigIdList 日志配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBusinessLogConfigIdList() const;

                    /**
                     * 设置日志配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLogConfigIdList 日志配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLogConfigIdList(const std::vector<std::string>& _businessLogConfigIdList);

                    /**
                     * 判断参数 BusinessLogConfigIdList 是否已赋值
                     * @return BusinessLogConfigIdList 是否已赋值
                     * 
                     */
                    bool BusinessLogConfigIdListHasBeenSet() const;

                    /**
                     * 获取投递配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLogDeliveryConfigIdList 投递配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBusinessLogDeliveryConfigIdList() const;

                    /**
                     * 设置投递配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLogDeliveryConfigIdList 投递配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLogDeliveryConfigIdList(const std::vector<std::string>& _businessLogDeliveryConfigIdList);

                    /**
                     * 判断参数 BusinessLogDeliveryConfigIdList 是否已赋值
                     * @return BusinessLogDeliveryConfigIdList 是否已赋值
                     * 
                     */
                    bool BusinessLogDeliveryConfigIdListHasBeenSet() const;

                private:

                    /**
                     * 日志配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_businessLogConfigIdList;
                    bool m_businessLogConfigIdListHasBeenSet;

                    /**
                     * 投递配置项ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_businessLogDeliveryConfigIdList;
                    bool m_businessLogDeliveryConfigIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPOBSERVABILITYCONFIG_H_
