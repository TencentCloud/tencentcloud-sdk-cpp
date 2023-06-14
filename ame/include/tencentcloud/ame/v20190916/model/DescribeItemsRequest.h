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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEITEMSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeItems请求参数结构体
                */
                class DescribeItemsRequest : public AbstractModel
                {
                public:
                    DescribeItemsRequest();
                    ~DescribeItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取offset (Default = 0)，(当前页-1) * Limit
                     * @return Offset offset (Default = 0)，(当前页-1) * Limit
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置offset (Default = 0)，(当前页-1) * Limit
                     * @param _offset offset (Default = 0)，(当前页-1) * Limit
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
                     * 获取条数，必须大于0，最大值为30
                     * @return Limit 条数，必须大于0，最大值为30
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置条数，必须大于0，最大值为30
                     * @param _limit 条数，必须大于0，最大值为30
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
                     * 获取（电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * @return CategoryId （电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置（电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * @param _categoryId （电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取（电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * @return CategoryCode （电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * 
                     */
                    std::string GetCategoryCode() const;

                    /**
                     * 设置（电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * @param _categoryCode （电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     * 
                     */
                    void SetCategoryCode(const std::string& _categoryCode);

                    /**
                     * 判断参数 CategoryCode 是否已赋值
                     * @return CategoryCode 是否已赋值
                     * 
                     */
                    bool CategoryCodeHasBeenSet() const;

                private:

                    /**
                     * offset (Default = 0)，(当前页-1) * Limit
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 条数，必须大于0，最大值为30
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * （电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * （电台/歌单）ID，CategoryId和CategoryCode两个必传1个，可以从<a href="https://cloud.tencent.com/document/product/1155/40109">获取分类内容（Station）列表接口</a>中获取。
                     */
                    std::string m_categoryCode;
                    bool m_categoryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEITEMSREQUEST_H_
