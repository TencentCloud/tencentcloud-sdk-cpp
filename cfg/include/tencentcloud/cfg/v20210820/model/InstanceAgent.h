/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_INSTANCEAGENT_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_INSTANCEAGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/InstanceAgentItem.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 添加探针的参数
                */
                class InstanceAgent : public AbstractModel
                {
                public:
                    InstanceAgent();
                    ~InstanceAgent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加InstanceAgent的参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAgentItem 添加InstanceAgent的参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceAgentItem> GetInstanceAgentItem() const;

                    /**
                     * 设置添加InstanceAgent的参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAgentItem 添加InstanceAgent的参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceAgentItem(const std::vector<InstanceAgentItem>& _instanceAgentItem);

                    /**
                     * 判断参数 InstanceAgentItem 是否已赋值
                     * @return InstanceAgentItem 是否已赋值
                     * 
                     */
                    bool InstanceAgentItemHasBeenSet() const;

                private:

                    /**
                     * 添加InstanceAgent的参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceAgentItem> m_instanceAgentItem;
                    bool m_instanceAgentItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_INSTANCEAGENT_H_
