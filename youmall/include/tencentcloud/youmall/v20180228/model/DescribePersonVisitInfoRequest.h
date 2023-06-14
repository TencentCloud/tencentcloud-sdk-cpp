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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONVISITINFOREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONVISITINFOREQUEST_H_

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
                * DescribePersonVisitInfo请求参数结构体
                */
                class DescribePersonVisitInfoRequest : public AbstractModel
                {
                public:
                    DescribePersonVisitInfoRequest();
                    ~DescribePersonVisitInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置公司ID
                     * @param _companyId 公司ID
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
                     * 获取门店ID
                     * @return ShopId 门店ID
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 设置门店ID
                     * @param _shopId 门店ID
                     * 
                     */
                    void SetShopId(const uint64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取偏移量：分页控制参数，第一页传0，第n页Offset=(n-1)*Limit
                     * @return Offset 偏移量：分页控制参数，第一页传0，第n页Offset=(n-1)*Limit
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量：分页控制参数，第一页传0，第n页Offset=(n-1)*Limit
                     * @param _offset 偏移量：分页控制参数，第一页传0，第n页Offset=(n-1)*Limit
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
                     * 获取Limit:每页的数据项，最大100，超过100会被强制指定为100
                     * @return Limit Limit:每页的数据项，最大100，超过100会被强制指定为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit:每页的数据项，最大100，超过100会被强制指定为100
                     * @param _limit Limit:每页的数据项，最大100，超过100会被强制指定为100
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
                     * 获取开始日期，格式yyyy-MM-dd，已废弃，请使用StartDateTime
                     * @return StartDate 开始日期，格式yyyy-MM-dd，已废弃，请使用StartDateTime
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期，格式yyyy-MM-dd，已废弃，请使用StartDateTime
                     * @param _startDate 开始日期，格式yyyy-MM-dd，已废弃，请使用StartDateTime
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
                     * 获取结束日期，格式yyyy-MM-dd，已废弃，请使用EndDateTime
                     * @return EndDate 结束日期，格式yyyy-MM-dd，已废弃，请使用EndDateTime
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期，格式yyyy-MM-dd，已废弃，请使用EndDateTime
                     * @param _endDate 结束日期，格式yyyy-MM-dd，已废弃，请使用EndDateTime
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
                     * 获取图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * @return PictureExpires 图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * 
                     */
                    uint64_t GetPictureExpires() const;

                    /**
                     * 设置图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * @param _pictureExpires 图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * 
                     */
                    void SetPictureExpires(const uint64_t& _pictureExpires);

                    /**
                     * 判断参数 PictureExpires 是否已赋值
                     * @return PictureExpires 是否已赋值
                     * 
                     */
                    bool PictureExpiresHasBeenSet() const;

                    /**
                     * 获取开始时间，格式yyyy-MM-dd HH:mm:ss
                     * @return StartDateTime 开始时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartDateTime() const;

                    /**
                     * 设置开始时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _startDateTime 开始时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetStartDateTime(const std::string& _startDateTime);

                    /**
                     * 判断参数 StartDateTime 是否已赋值
                     * @return StartDateTime 是否已赋值
                     * 
                     */
                    bool StartDateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @return EndDateTime 结束时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndDateTime() const;

                    /**
                     * 设置结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _endDateTime 结束时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetEndDateTime(const std::string& _endDateTime);

                    /**
                     * 判断参数 EndDateTime 是否已赋值
                     * @return EndDateTime 是否已赋值
                     * 
                     */
                    bool EndDateTimeHasBeenSet() const;

                private:

                    /**
                     * 公司ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 门店ID
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 偏移量：分页控制参数，第一页传0，第n页Offset=(n-1)*Limit
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit:每页的数据项，最大100，超过100会被强制指定为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 开始日期，格式yyyy-MM-dd，已废弃，请使用StartDateTime
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期，格式yyyy-MM-dd，已废弃，请使用EndDateTime
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     */
                    uint64_t m_pictureExpires;
                    bool m_pictureExpiresHasBeenSet;

                    /**
                     * 开始时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startDateTime;
                    bool m_startDateTimeHasBeenSet;

                    /**
                     * 结束时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endDateTime;
                    bool m_endDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONVISITINFOREQUEST_H_
