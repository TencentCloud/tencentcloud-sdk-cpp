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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupList请求参数结构体
                */
                class DescribeSecurityGroupListRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupListRequest();
                    ~DescribeSecurityGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: 出站规则，1：入站规则
                     * @return Direction 0: 出站规则，1：入站规则
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置0: 出站规则，1：入站规则
                     * @param _direction 0: 出站规则，1：入站规则
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取地域代码（例: ap-guangzhou),支持腾讯云全部地域
                     * @return Area 地域代码（例: ap-guangzhou),支持腾讯云全部地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域代码（例: ap-guangzhou),支持腾讯云全部地域
                     * @param _area 地域代码（例: ap-guangzhou),支持腾讯云全部地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取搜索值
                     * @return SearchValue 搜索值
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置搜索值
                     * @param _searchValue 搜索值
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取每页条数，默认为10
                     * @return Limit 每页条数，默认为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数，默认为10
                     * @param _limit 每页条数，默认为10
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
                     * 获取偏移值，默认为0
                     * @return Offset 偏移值，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移值，默认为0
                     * @param _offset 偏移值，默认为0
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
                     * 获取状态，'': 全部，'0'：筛选停用规则，'1'：筛选启用规则
                     * @return Status 状态，'': 全部，'0'：筛选停用规则，'1'：筛选启用规则
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，'': 全部，'0'：筛选停用规则，'1'：筛选启用规则
                     * @param _status 状态，'': 全部，'0'：筛选停用规则，'1'：筛选启用规则
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0: 不过滤，1：过滤掉正常规则，保留下发异常规则
                     * @return Filter 0: 不过滤，1：过滤掉正常规则，保留下发异常规则
                     * 
                     */
                    uint64_t GetFilter() const;

                    /**
                     * 设置0: 不过滤，1：过滤掉正常规则，保留下发异常规则
                     * @param _filter 0: 不过滤，1：过滤掉正常规则，保留下发异常规则
                     * 
                     */
                    void SetFilter(const uint64_t& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 0: 出站规则，1：入站规则
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 地域代码（例: ap-guangzhou),支持腾讯云全部地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 搜索值
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 每页条数，默认为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移值，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 状态，'': 全部，'0'：筛选停用规则，'1'：筛选启用规则
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0: 不过滤，1：过滤掉正常规则，保留下发异常规则
                     */
                    uint64_t m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTREQUEST_H_
