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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PRICETAG_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PRICETAG_H_

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
                * 价格标签信息，一个完整的价格标签包含计价类别和计费项标签。
                */
                class PriceTag : public AbstractModel
                {
                public:
                    PriceTag();
                    ~PriceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计价名称（枚举值：tps：TPS基础价；stepTps：TPS步长）
                     * @return Name 计价名称（枚举值：tps：TPS基础价；stepTps：TPS步长）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置计价名称（枚举值：tps：TPS基础价；stepTps：TPS步长）
                     * @param _name 计价名称（枚举值：tps：TPS基础价；stepTps：TPS步长）
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取计费项对应的步长数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Step 计费项对应的步长数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置计费项对应的步长数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _step 计费项对应的步长数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * 计价名称（枚举值：tps：TPS基础价；stepTps：TPS步长）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计费项对应的步长数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PRICETAG_H_
