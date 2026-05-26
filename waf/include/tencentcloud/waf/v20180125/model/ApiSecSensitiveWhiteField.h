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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVEWHITEFIELD_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVEWHITEFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 敏感数据加白字段模型
                */
                class ApiSecSensitiveWhiteField : public AbstractModel
                {
                public:
                    ApiSecSensitiveWhiteField();
                    ~ApiSecSensitiveWhiteField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段名称</p>
                     * @return FieldName <p>字段名称</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>字段名称</p>
                     * @param _fieldName <p>字段名称</p>
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
                     * 获取<p>字段位置</p>
                     * @return FieldType <p>字段位置</p>
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置<p>字段位置</p>
                     * @param _fieldType <p>字段位置</p>
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取<p>敏感数据类型列表</p>
                     * @return SensitiveTypes <p>敏感数据类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetSensitiveTypes() const;

                    /**
                     * 设置<p>敏感数据类型列表</p>
                     * @param _sensitiveTypes <p>敏感数据类型列表</p>
                     * 
                     */
                    void SetSensitiveTypes(const std::vector<std::string>& _sensitiveTypes);

                    /**
                     * 判断参数 SensitiveTypes 是否已赋值
                     * @return SensitiveTypes 是否已赋值
                     * 
                     */
                    bool SensitiveTypesHasBeenSet() const;

                private:

                    /**
                     * <p>字段名称</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>字段位置</p>
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * <p>敏感数据类型列表</p>
                     */
                    std::vector<std::string> m_sensitiveTypes;
                    bool m_sensitiveTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVEWHITEFIELD_H_
