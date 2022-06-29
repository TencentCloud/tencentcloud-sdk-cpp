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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPROGRAMSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPROGRAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePrograms请求参数结构体
                */
                class DescribeProgramsRequest : public AbstractModel
                {
                public:
                    DescribeProgramsRequest();
                    ~DescribeProgramsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模糊查询数据集ID，数据集名称，不传入时查询全量
                     * @return SearchWord 模糊查询数据集ID，数据集名称，不传入时查询全量
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置模糊查询数据集ID，数据集名称，不传入时查询全量
                     * @param SearchWord 模糊查询数据集ID，数据集名称，不传入时查询全量
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取每页数量
                     * @return Limit 每页数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param Limit 每页数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param Offset 起始偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 模糊查询数据集ID，数据集名称，不传入时查询全量
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPROGRAMSREQUEST_H_
