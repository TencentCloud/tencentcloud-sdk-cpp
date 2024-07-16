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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineImageVersions请求参数结构体
                */
                class DescribeDataEngineImageVersionsRequest : public AbstractModel
                {
                public:
                    DescribeDataEngineImageVersionsRequest();
                    ~DescribeDataEngineImageVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto
                     * @return EngineType 引擎类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto
                     * @param _engineType 引擎类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取排序字段: InsertTime（插入时间，默认），UpdateTime（更新时间）
                     * @return Sort 排序字段: InsertTime（插入时间，默认），UpdateTime（更新时间）
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段: InsertTime（插入时间，默认），UpdateTime（更新时间）
                     * @param _sort 排序字段: InsertTime（插入时间，默认），UpdateTime（更新时间）
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序方式：false（降序，默认），true（升序）
                     * @return Asc 排序方式：false（降序，默认），true（升序）
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序方式：false（降序，默认），true（升序）
                     * @param _asc 排序方式：false（降序，默认），true（升序）
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * 引擎类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 排序字段: InsertTime（插入时间，默认），UpdateTime（更新时间）
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序方式：false（降序，默认），true（升序）
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_
