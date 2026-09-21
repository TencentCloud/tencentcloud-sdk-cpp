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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELKEY_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消费组灰度标签键
                */
                class ConsumerLabelKey : public AbstractModel
                {
                public:
                    ConsumerLabelKey();
                    ~ConsumerLabelKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group <p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group <p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label <p>灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label <p>灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * <p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>灰度标签名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELKEY_H_
