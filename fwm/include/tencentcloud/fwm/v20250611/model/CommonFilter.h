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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_COMMONFILTER_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_COMMONFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 通用筛选条件
                */
                class CommonFilter : public AbstractModel
                {
                public:
                    CommonFilter();
                    ~CommonFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>筛选字段名。支持：SecurityGroupId、FwGroupId、IP（IP地址模糊搜索）、InstanceName（实例名称模糊搜索）、VpcId（VPC ID精确搜索）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>筛选字段名。支持：SecurityGroupId、FwGroupId、IP（IP地址模糊搜索）、InstanceName（实例名称模糊搜索）、VpcId（VPC ID精确搜索）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>筛选字段名。支持：SecurityGroupId、FwGroupId、IP（IP地址模糊搜索）、InstanceName（实例名称模糊搜索）、VpcId（VPC ID精确搜索）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>筛选字段名。支持：SecurityGroupId、FwGroupId、IP（IP地址模糊搜索）、InstanceName（实例名称模糊搜索）、VpcId（VPC ID精确搜索）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>筛选值列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values <p>筛选值列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>筛选值列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values <p>筛选值列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>操作类型。1=等于，7=in，9=模糊匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorType <p>操作类型。1=等于，7=in，9=模糊匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperatorType() const;

                    /**
                     * 设置<p>操作类型。1=等于，7=in，9=模糊匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorType <p>操作类型。1=等于，7=in，9=模糊匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorType(const int64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                private:

                    /**
                     * <p>筛选字段名。支持：SecurityGroupId、FwGroupId、IP（IP地址模糊搜索）、InstanceName（实例名称模糊搜索）、VpcId（VPC ID精确搜索）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>筛选值列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>操作类型。1=等于，7=in，9=模糊匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_COMMONFILTER_H_
