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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TOPDETAILDATAMORE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TOPDETAILDATAMORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 排序类型的数据结构，同时附带上该项的在总值的占比
                */
                class TopDetailDataMore : public AbstractModel
                {
                public:
                    TopDetailDataMore();
                    ~TopDetailDataMore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据类型的名称
                     * @return Name 数据类型的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据类型的名称
                     * @param _name 数据类型的名称
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
                     * 获取数据值
                     * @return Value 数据值
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置数据值
                     * @param _value 数据值
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取数据值在总值中的百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 数据值在总值中的百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置数据值在总值中的百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent 数据值在总值中的百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * 数据类型的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据值
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 数据值在总值中的百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TOPDETAILDATAMORE_H_
