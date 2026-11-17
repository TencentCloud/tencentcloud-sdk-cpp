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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABEL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 标签列信息
                */
                class Label : public AbstractModel
                {
                public:
                    Label();
                    ~Label() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名
                     * @return ColumnName 列名
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置列名
                     * @param _columnName 列名
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取缺失值填充
                     * @return MissingValueImputation 缺失值填充
                     * 
                     */
                    std::string GetMissingValueImputation() const;

                    /**
                     * 设置缺失值填充
                     * @param _missingValueImputation 缺失值填充
                     * 
                     */
                    void SetMissingValueImputation(const std::string& _missingValueImputation);

                    /**
                     * 判断参数 MissingValueImputation 是否已赋值
                     * @return MissingValueImputation 是否已赋值
                     * 
                     */
                    bool MissingValueImputationHasBeenSet() const;

                    /**
                     * 获取数据格式
                     * @return Format 数据格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置数据格式
                     * @param _format 数据格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 列名
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 缺失值填充
                     */
                    std::string m_missingValueImputation;
                    bool m_missingValueImputationHasBeenSet;

                    /**
                     * 数据格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABEL_H_
