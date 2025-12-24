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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SELECTORS_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SELECTORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 视图方案勾选情况
                */
                class Selectors : public AbstractModel
                {
                public:
                    Selectors();
                    ~Selectors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件勾选情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Component 组件勾选情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetComponent() const;

                    /**
                     * 设置组件勾选情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _component 组件勾选情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponent(const std::vector<std::string>& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                private:

                    /**
                     * 组件勾选情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_component;
                    bool m_componentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SELECTORS_H_
