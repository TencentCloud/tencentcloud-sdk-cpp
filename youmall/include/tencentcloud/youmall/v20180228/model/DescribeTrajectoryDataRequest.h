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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBETRAJECTORYDATAREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBETRAJECTORYDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeTrajectoryData请求参数结构体
                */
                class DescribeTrajectoryDataRequest : public AbstractModel
                {
                public:
                    DescribeTrajectoryDataRequest();
                    ~DescribeTrajectoryDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置集团ID
                     * @param _companyId 集团ID
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取店铺ID
                     * @return ShopId 店铺ID
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置店铺ID
                     * @param _shopId 店铺ID
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取开始日期，格式yyyy-MM-dd
                     * @return StartDate 开始日期，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期，格式yyyy-MM-dd
                     * @param _startDate 开始日期，格式yyyy-MM-dd
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束日期，格式yyyy-MM-dd
                     * @return EndDate 结束日期，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期，格式yyyy-MM-dd
                     * @param _endDate 结束日期，格式yyyy-MM-dd
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取限制返回数据的最大条数，最大 400（负数代为 400）
                     * @return Limit 限制返回数据的最大条数，最大 400（负数代为 400）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制返回数据的最大条数，最大 400（负数代为 400）
                     * @param _limit 限制返回数据的最大条数，最大 400（负数代为 400）
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
                     * 获取顾客性别顾虑，0是男，1是女，其它代表不分性别
                     * @return Gender 顾客性别顾虑，0是男，1是女，其它代表不分性别
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置顾客性别顾虑，0是男，1是女，其它代表不分性别
                     * @param _gender 顾客性别顾虑，0是男，1是女，其它代表不分性别
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺ID
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 开始日期，格式yyyy-MM-dd
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期，格式yyyy-MM-dd
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 限制返回数据的最大条数，最大 400（负数代为 400）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 顾客性别顾虑，0是男，1是女，其它代表不分性别
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBETRAJECTORYDATAREQUEST_H_
