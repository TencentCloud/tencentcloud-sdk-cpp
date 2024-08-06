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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LIFECYCLEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LIFECYCLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表生命周期相关信息
                */
                class LifecycleInfo : public AbstractModel
                {
                public:
                    LifecycleInfo();
                    ~LifecycleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lifecycle 生命周期值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifecycle() const;

                    /**
                     * 设置生命周期值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycle 生命周期值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycle(const int64_t& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<std::string>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取日期格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DateFormat 日期格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDateFormat() const;

                    /**
                     * 设置日期格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dateFormat 日期格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDateFormat(const std::vector<std::string>& _dateFormat);

                    /**
                     * 判断参数 DateFormat 是否已赋值
                     * @return DateFormat 是否已赋值
                     * 
                     */
                    bool DateFormatHasBeenSet() const;

                private:

                    /**
                     * 生命周期值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * 列名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 日期格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dateFormat;
                    bool m_dateFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LIFECYCLEINFO_H_
