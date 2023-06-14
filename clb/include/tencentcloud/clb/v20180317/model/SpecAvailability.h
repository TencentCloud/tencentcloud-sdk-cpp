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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SPECAVAILABILITY_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SPECAVAILABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 规格可用性
                */
                class SpecAvailability : public AbstractModel
                {
                public:
                    SpecAvailability();
                    ~SpecAvailability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecType 规格类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecType() const;

                    /**
                     * 设置规格类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specType 规格类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecType(const std::string& _specType);

                    /**
                     * 判断参数 SpecType 是否已赋值
                     * @return SpecType 是否已赋值
                     * 
                     */
                    bool SpecTypeHasBeenSet() const;

                    /**
                     * 获取规格可用性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Availability 规格可用性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailability() const;

                    /**
                     * 设置规格可用性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availability 规格可用性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailability(const std::string& _availability);

                    /**
                     * 判断参数 Availability 是否已赋值
                     * @return Availability 是否已赋值
                     * 
                     */
                    bool AvailabilityHasBeenSet() const;

                private:

                    /**
                     * 规格类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specType;
                    bool m_specTypeHasBeenSet;

                    /**
                     * 规格可用性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availability;
                    bool m_availabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SPECAVAILABILITY_H_
