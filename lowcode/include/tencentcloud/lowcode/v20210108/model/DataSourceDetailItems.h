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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEDETAILITEMS_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEDETAILITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/DataSourceDetail.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 数据详情列表
                */
                class DataSourceDetailItems : public AbstractModel
                {
                public:
                    DataSourceDetailItems();
                    ~DataSourceDetailItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据详情列表
                     * @return Rows 数据详情列表
                     * 
                     */
                    std::vector<DataSourceDetail> GetRows() const;

                    /**
                     * 设置数据详情列表
                     * @param _rows 数据详情列表
                     * 
                     */
                    void SetRows(const std::vector<DataSourceDetail>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取数据源列表总个数
                     * @return Count 数据源列表总个数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置数据源列表总个数
                     * @param _count 数据源列表总个数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 数据详情列表
                     */
                    std::vector<DataSourceDetail> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * 数据源列表总个数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEDETAILITEMS_H_
