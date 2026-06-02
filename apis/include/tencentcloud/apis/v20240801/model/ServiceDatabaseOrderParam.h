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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEDATABASEORDERPARAM_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEDATABASEORDERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ServiceDatabaseOrderParam
                */
                class ServiceDatabaseOrderParam : public AbstractModel
                {
                public:
                    ServiceDatabaseOrderParam();
                    ~ServiceDatabaseOrderParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldName <p>字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldName <p>字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取<p>排序 asc desc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Order <p>排序 asc desc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序 asc desc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _order <p>排序 asc desc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>排序 asc desc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEDATABASEORDERPARAM_H_
