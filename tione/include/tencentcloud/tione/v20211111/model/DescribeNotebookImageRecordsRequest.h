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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGERECORDSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeNotebookImageRecords请求参数结构体
                */
                class DescribeNotebookImageRecordsRequest : public AbstractModel
                {
                public:
                    DescribeNotebookImageRecordsRequest();
                    ~DescribeNotebookImageRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取notebook id
                     * @return NotebookId notebook id
                     * 
                     */
                    std::string GetNotebookId() const;

                    /**
                     * 设置notebook id
                     * @param _notebookId notebook id
                     * 
                     */
                    void SetNotebookId(const std::string& _notebookId);

                    /**
                     * 判断参数 NotebookId 是否已赋值
                     * @return NotebookId 是否已赋值
                     * 
                     */
                    bool NotebookIdHasBeenSet() const;

                    /**
                     * 获取位移值
                     * @return Offset 位移值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置位移值
                     * @param _offset 位移值
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取日志限制
                     * @return Limit 日志限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置日志限制
                     * @param _limit 日志限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取状态筛选
                     * @return Filters 状态筛选
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置状态筛选
                     * @param _filters 状态筛选
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * notebook id
                     */
                    std::string m_notebookId;
                    bool m_notebookIdHasBeenSet;

                    /**
                     * 位移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 日志限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 状态筛选
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGERECORDSREQUEST_H_
