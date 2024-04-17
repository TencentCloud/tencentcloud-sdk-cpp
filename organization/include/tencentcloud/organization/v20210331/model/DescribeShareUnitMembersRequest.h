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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeShareUnitMembers请求参数结构体
                */
                class DescribeShareUnitMembersRequest : public AbstractModel
                {
                public:
                    DescribeShareUnitMembersRequest();
                    ~DescribeShareUnitMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享单元ID。
                     * @return UnitId 共享单元ID。
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置共享单元ID。
                     * @param _unitId 共享单元ID。
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取共享单元地域。
                     * @return Area 共享单元地域。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置共享单元地域。
                     * @param _area 共享单元地域。
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
                     * 获取偏移量。取值是limit的整数倍，默认值 : 0
                     * @return Offset 偏移量。取值是limit的整数倍，默认值 : 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍，默认值 : 0
                     * @param _offset 偏移量。取值是limit的整数倍，默认值 : 0
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
                     * 获取限制数目。取值范围：1~50。
                     * @return Limit 限制数目。取值范围：1~50。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目。取值范围：1~50。
                     * @param _limit 限制数目。取值范围：1~50。
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
                     * 获取搜索关键字。支持成员Uin搜索。
                     * @return SearchKey 搜索关键字。支持成员Uin搜索。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键字。支持成员Uin搜索。
                     * @param _searchKey 搜索关键字。支持成员Uin搜索。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 共享单元ID。
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * 共享单元地域。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 偏移量。取值是limit的整数倍，默认值 : 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目。取值范围：1~50。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字。支持成员Uin搜索。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITMEMBERSREQUEST_H_
