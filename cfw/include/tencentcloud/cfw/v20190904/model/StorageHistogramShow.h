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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_STORAGEHISTOGRAMSHOW_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_STORAGEHISTOGRAMSHOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IntArray.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 前端图表使用日志存储统计柱形图数据
                */
                class StorageHistogramShow : public AbstractModel
                {
                public:
                    StorageHistogramShow();
                    ~StorageHistogramShow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetStorageType() const;

                    /**
                     * 设置存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::vector<std::string>& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dates 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDates() const;

                    /**
                     * 设置日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dates 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDates(const std::vector<std::string>& _dates);

                    /**
                     * 判断参数 Dates 是否已赋值
                     * @return Dates 是否已赋值
                     * 
                     */
                    bool DatesHasBeenSet() const;

                    /**
                     * 获取数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntArray> GetData() const;

                    /**
                     * 设置数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<IntArray>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dates;
                    bool m_datesHasBeenSet;

                    /**
                     * 数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntArray> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_STORAGEHISTOGRAMSHOW_H_
