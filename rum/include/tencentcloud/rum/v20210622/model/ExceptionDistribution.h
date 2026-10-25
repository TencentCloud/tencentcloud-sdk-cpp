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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONDISTRIBUTION_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/ExceptionDimensionRow.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Kind=exception_dimension时返回；Rows为同一次聚合的有界排行及完整分类向量，成功空结果返回空数组。
                */
                class ExceptionDistribution : public AbstractModel
                {
                public:
                    ExceptionDistribution();
                    ~ExceptionDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>按 TotalCount 降序、归一化值升序返回的完整维度行，行数不超过Limit；无数据返回空数组。</p>
                     * @return Rows <p>按 TotalCount 降序、归一化值升序返回的完整维度行，行数不超过Limit；无数据返回空数组。</p>
                     * 
                     */
                    std::vector<ExceptionDimensionRow> GetRows() const;

                    /**
                     * 设置<p>按 TotalCount 降序、归一化值升序返回的完整维度行，行数不超过Limit；无数据返回空数组。</p>
                     * @param _rows <p>按 TotalCount 降序、归一化值升序返回的完整维度行，行数不超过Limit；无数据返回空数组。</p>
                     * 
                     */
                    void SetRows(const std::vector<ExceptionDimensionRow>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                private:

                    /**
                     * <p>按 TotalCount 降序、归一化值升序返回的完整维度行，行数不超过Limit；无数据返回空数组。</p>
                     */
                    std::vector<ExceptionDimensionRow> m_rows;
                    bool m_rowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONDISTRIBUTION_H_
