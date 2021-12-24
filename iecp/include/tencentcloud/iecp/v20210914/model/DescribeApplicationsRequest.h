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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/FieldSort.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeApplications请求参数结构体
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模糊搜索字符串
                     * @return NamePattern 模糊搜索字符串
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置模糊搜索字符串
                     * @param NamePattern 模糊搜索字符串
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取默认 0
                     * @return Offset 默认 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置默认 0
                     * @param Offset 默认 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取默认 20
                     * @return Limit 默认 20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置默认 20
                     * @param Limit 默认 20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取仅支持对 DistributeTime 字段排序，ASC/DESC
                     * @return Sort 仅支持对 DistributeTime 字段排序，ASC/DESC
                     */
                    std::vector<FieldSort> GetSort() const;

                    /**
                     * 设置仅支持对 DistributeTime 字段排序，ASC/DESC
                     * @param Sort 仅支持对 DistributeTime 字段排序，ASC/DESC
                     */
                    void SetSort(const std::vector<FieldSort>& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 模糊搜索字符串
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * 默认 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 默认 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 仅支持对 DistributeTime 字段排序，ASC/DESC
                     */
                    std::vector<FieldSort> m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
