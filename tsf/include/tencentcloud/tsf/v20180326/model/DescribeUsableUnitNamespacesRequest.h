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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUSABLEUNITNAMESPACESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUSABLEUNITNAMESPACESREQUEST_H_

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
                * DescribeUsableUnitNamespaces请求参数结构体
                */
                class DescribeUsableUnitNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeUsableUnitNamespacesRequest();
                    ~DescribeUsableUnitNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取根据命名空间名或ID模糊查询
                     * @return SearchWord 根据命名空间名或ID模糊查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置根据命名空间名或ID模糊查询
                     * @param _searchWord 根据命名空间名或ID模糊查询
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取翻页查询偏移量
                     * @return Offset 翻页查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页查询偏移量
                     * @param _offset 翻页查询偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取翻页查询每页记录数
                     * @return Limit 翻页查询每页记录数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页查询每页记录数
                     * @param _limit 翻页查询每页记录数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 根据命名空间名或ID模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 翻页查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页查询每页记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUSABLEUNITNAMESPACESREQUEST_H_
