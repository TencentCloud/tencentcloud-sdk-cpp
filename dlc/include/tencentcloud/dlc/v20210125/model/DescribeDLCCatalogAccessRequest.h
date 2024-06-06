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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDLCCatalogAccess请求参数结构体
                */
                class DescribeDLCCatalogAccessRequest : public AbstractModel
                {
                public:
                    DescribeDLCCatalogAccessRequest();
                    ~DescribeDLCCatalogAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取显示条数
                     * @return Limit 显示条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置显示条数
                     * @param _limit 显示条数
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
                     * 获取记录数量
                     * @return Offset 记录数量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置记录数量
                     * @param _offset 记录数量
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
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param _filter 过滤条件
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 显示条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 记录数量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSREQUEST_H_
