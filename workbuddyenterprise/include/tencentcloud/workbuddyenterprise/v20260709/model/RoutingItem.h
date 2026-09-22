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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_ROUTINGITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_ROUTINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 路由项
                */
                class RoutingItem : public AbstractModel
                {
                public:
                    RoutingItem();
                    ~RoutingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取权重，(0, 1] 之间的浮点百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重，(0, 1] 之间的浮点百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置权重，(0, 1] 之间的浮点百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重，(0, 1] 之间的浮点百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 权重，(0, 1] 之间的浮点百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_ROUTINGITEM_H_
