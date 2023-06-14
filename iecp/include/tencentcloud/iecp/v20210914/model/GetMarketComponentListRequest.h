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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTLISTREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * GetMarketComponentList请求参数结构体
                */
                class GetMarketComponentListRequest : public AbstractModel
                {
                public:
                    GetMarketComponentListRequest();
                    ~GetMarketComponentListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页偏移，从0开始
                     * @return Offset 页偏移，从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移，从0开始
                     * @param _offset 页偏移，从0开始
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
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取名称模糊筛选
                     * @return Filter 名称模糊筛选
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置名称模糊筛选
                     * @param _filter 名称模糊筛选
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取以名称排序，ASC、DESC
                     * @return Order 以名称排序，ASC、DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置以名称排序，ASC、DESC
                     * @param _order 以名称排序，ASC、DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 页偏移，从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 名称模糊筛选
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 以名称排序，ASC、DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTLISTREQUEST_H_
