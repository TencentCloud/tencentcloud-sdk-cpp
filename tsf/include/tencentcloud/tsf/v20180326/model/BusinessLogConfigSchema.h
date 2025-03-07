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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGCONFIGSCHEMA_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGCONFIGSCHEMA_H_

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
                * 业务日志配置解析规则
                */
                class BusinessLogConfigSchema : public AbstractModel
                {
                public:
                    BusinessLogConfigSchema();
                    ~BusinessLogConfigSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析规则类型
                     * @return SchemaType 解析规则类型
                     * 
                     */
                    int64_t GetSchemaType() const;

                    /**
                     * 设置解析规则类型
                     * @param _schemaType 解析规则类型
                     * 
                     */
                    void SetSchemaType(const int64_t& _schemaType);

                    /**
                     * 判断参数 SchemaType 是否已赋值
                     * @return SchemaType 是否已赋值
                     * 
                     */
                    bool SchemaTypeHasBeenSet() const;

                    /**
                     * 获取解析规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaContent 解析规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaContent() const;

                    /**
                     * 设置解析规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaContent 解析规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaContent(const std::string& _schemaContent);

                    /**
                     * 判断参数 SchemaContent 是否已赋值
                     * @return SchemaContent 是否已赋值
                     * 
                     */
                    bool SchemaContentHasBeenSet() const;

                    /**
                     * 获取解析规则时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaDateFormat 解析规则时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaDateFormat() const;

                    /**
                     * 设置解析规则时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaDateFormat 解析规则时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaDateFormat(const std::string& _schemaDateFormat);

                    /**
                     * 判断参数 SchemaDateFormat 是否已赋值
                     * @return SchemaDateFormat 是否已赋值
                     * 
                     */
                    bool SchemaDateFormatHasBeenSet() const;

                    /**
                     * 获取解析规则对应的多行匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaMultilinePattern 解析规则对应的多行匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaMultilinePattern() const;

                    /**
                     * 设置解析规则对应的多行匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaMultilinePattern 解析规则对应的多行匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaMultilinePattern(const std::string& _schemaMultilinePattern);

                    /**
                     * 判断参数 SchemaMultilinePattern 是否已赋值
                     * @return SchemaMultilinePattern 是否已赋值
                     * 
                     */
                    bool SchemaMultilinePatternHasBeenSet() const;

                    /**
                     * 获取解析规则创建时间
                     * @return SchemaCreateTime 解析规则创建时间
                     * 
                     */
                    std::string GetSchemaCreateTime() const;

                    /**
                     * 设置解析规则创建时间
                     * @param _schemaCreateTime 解析规则创建时间
                     * 
                     */
                    void SetSchemaCreateTime(const std::string& _schemaCreateTime);

                    /**
                     * 判断参数 SchemaCreateTime 是否已赋值
                     * @return SchemaCreateTime 是否已赋值
                     * 
                     */
                    bool SchemaCreateTimeHasBeenSet() const;

                    /**
                     * 获取用户填写的解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaPatternLayout 用户填写的解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaPatternLayout() const;

                    /**
                     * 设置用户填写的解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaPatternLayout 用户填写的解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaPatternLayout(const std::string& _schemaPatternLayout);

                    /**
                     * 判断参数 SchemaPatternLayout 是否已赋值
                     * @return SchemaPatternLayout 是否已赋值
                     * 
                     */
                    bool SchemaPatternLayoutHasBeenSet() const;

                private:

                    /**
                     * 解析规则类型
                     */
                    int64_t m_schemaType;
                    bool m_schemaTypeHasBeenSet;

                    /**
                     * 解析规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaContent;
                    bool m_schemaContentHasBeenSet;

                    /**
                     * 解析规则时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaDateFormat;
                    bool m_schemaDateFormatHasBeenSet;

                    /**
                     * 解析规则对应的多行匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaMultilinePattern;
                    bool m_schemaMultilinePatternHasBeenSet;

                    /**
                     * 解析规则创建时间
                     */
                    std::string m_schemaCreateTime;
                    bool m_schemaCreateTimeHasBeenSet;

                    /**
                     * 用户填写的解析规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaPatternLayout;
                    bool m_schemaPatternLayoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGCONFIGSCHEMA_H_
