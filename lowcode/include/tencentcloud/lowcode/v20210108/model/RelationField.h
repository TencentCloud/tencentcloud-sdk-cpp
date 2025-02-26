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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_RELATIONFIELD_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_RELATIONFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 数据源关联的的信息
                */
                class RelationField : public AbstractModel
                {
                public:
                    RelationField();
                    ~RelationField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联关系字段
                     * @return Field 关联关系字段
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置关联关系字段
                     * @param _field 关联关系字段
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取关联关系格式
                     * @return Format 关联关系格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置关联关系格式
                     * @param _format 关联关系格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取关联数据源名称
                     * @return RelateDataSourceName 关联数据源名称
                     * 
                     */
                    std::string GetRelateDataSourceName() const;

                    /**
                     * 设置关联数据源名称
                     * @param _relateDataSourceName 关联数据源名称
                     * 
                     */
                    void SetRelateDataSourceName(const std::string& _relateDataSourceName);

                    /**
                     * 判断参数 RelateDataSourceName 是否已赋值
                     * @return RelateDataSourceName 是否已赋值
                     * 
                     */
                    bool RelateDataSourceNameHasBeenSet() const;

                private:

                    /**
                     * 关联关系字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 关联关系格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 关联数据源名称
                     */
                    std::string m_relateDataSourceName;
                    bool m_relateDataSourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_RELATIONFIELD_H_
