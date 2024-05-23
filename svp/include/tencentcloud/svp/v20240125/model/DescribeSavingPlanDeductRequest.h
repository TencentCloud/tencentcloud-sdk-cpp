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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANDEDUCTREQUEST_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANDEDUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * DescribeSavingPlanDeduct请求参数结构体
                */
                class DescribeSavingPlanDeductRequest : public AbstractModel
                {
                public:
                    DescribeSavingPlanDeductRequest();
                    ~DescribeSavingPlanDeductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取每页数量，最大值为200
                     * @return Limit 每页数量，最大值为200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，最大值为200
                     * @param _limit 每页数量，最大值为200
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
                     * 获取节省计划使用开始的查询结束时间
                     * @return StartEndDate 节省计划使用开始的查询结束时间
                     * 
                     */
                    std::string GetStartEndDate() const;

                    /**
                     * 设置节省计划使用开始的查询结束时间
                     * @param _startEndDate 节省计划使用开始的查询结束时间
                     * 
                     */
                    void SetStartEndDate(const std::string& _startEndDate);

                    /**
                     * 判断参数 StartEndDate 是否已赋值
                     * @return StartEndDate 是否已赋值
                     * 
                     */
                    bool StartEndDateHasBeenSet() const;

                    /**
                     * 获取节省计划使用开始的查询开始时间
                     * @return StartStartDate 节省计划使用开始的查询开始时间
                     * 
                     */
                    std::string GetStartStartDate() const;

                    /**
                     * 设置节省计划使用开始的查询开始时间
                     * @param _startStartDate 节省计划使用开始的查询开始时间
                     * 
                     */
                    void SetStartStartDate(const std::string& _startStartDate);

                    /**
                     * 判断参数 StartStartDate 是否已赋值
                     * @return StartStartDate 是否已赋值
                     * 
                     */
                    bool StartStartDateHasBeenSet() const;

                    /**
                     * 获取地域编码
                     * @return RegionId 地域编码
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域编码
                     * @param _regionId 地域编码
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域编码
                     * @return ZoneId 区域编码
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域编码
                     * @param _zoneId 区域编码
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取节省计划资源id
                     * @return SpId 节省计划资源id
                     * 
                     */
                    std::string GetSpId() const;

                    /**
                     * 设置节省计划资源id
                     * @param _spId 节省计划资源id
                     * 
                     */
                    void SetSpId(const std::string& _spId);

                    /**
                     * 判断参数 SpId 是否已赋值
                     * @return SpId 是否已赋值
                     * 
                     */
                    bool SpIdHasBeenSet() const;

                    /**
                     * 获取抵扣查询结束时间，格式：yyyy-MM-dd HH:mm:ss
                     * @return DeductEndDate 抵扣查询结束时间，格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetDeductEndDate() const;

                    /**
                     * 设置抵扣查询结束时间，格式：yyyy-MM-dd HH:mm:ss
                     * @param _deductEndDate 抵扣查询结束时间，格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetDeductEndDate(const std::string& _deductEndDate);

                    /**
                     * 判断参数 DeductEndDate 是否已赋值
                     * @return DeductEndDate 是否已赋值
                     * 
                     */
                    bool DeductEndDateHasBeenSet() const;

                    /**
                     * 获取抵扣查询开始时间，格式：yyyy-MM-dd HH:mm:ss
                     * @return DeductStartDate 抵扣查询开始时间，格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetDeductStartDate() const;

                    /**
                     * 设置抵扣查询开始时间，格式：yyyy-MM-dd HH:mm:ss
                     * @param _deductStartDate 抵扣查询开始时间，格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetDeductStartDate(const std::string& _deductStartDate);

                    /**
                     * 判断参数 DeductStartDate 是否已赋值
                     * @return DeductStartDate 是否已赋值
                     * 
                     */
                    bool DeductStartDateHasBeenSet() const;

                    /**
                     * 获取节省计划使用结束的查询结束时间
                     * @return EndEndDate 节省计划使用结束的查询结束时间
                     * 
                     */
                    std::string GetEndEndDate() const;

                    /**
                     * 设置节省计划使用结束的查询结束时间
                     * @param _endEndDate 节省计划使用结束的查询结束时间
                     * 
                     */
                    void SetEndEndDate(const std::string& _endEndDate);

                    /**
                     * 判断参数 EndEndDate 是否已赋值
                     * @return EndEndDate 是否已赋值
                     * 
                     */
                    bool EndEndDateHasBeenSet() const;

                    /**
                     * 获取节省计划使用结束的查询开始时间
                     * @return EndStartDate 节省计划使用结束的查询开始时间
                     * 
                     */
                    std::string GetEndStartDate() const;

                    /**
                     * 设置节省计划使用结束的查询开始时间
                     * @param _endStartDate 节省计划使用结束的查询开始时间
                     * 
                     */
                    void SetEndStartDate(const std::string& _endStartDate);

                    /**
                     * 判断参数 EndStartDate 是否已赋值
                     * @return EndStartDate 是否已赋值
                     * 
                     */
                    bool EndStartDateHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，最大值为200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 节省计划使用开始的查询结束时间
                     */
                    std::string m_startEndDate;
                    bool m_startEndDateHasBeenSet;

                    /**
                     * 节省计划使用开始的查询开始时间
                     */
                    std::string m_startStartDate;
                    bool m_startStartDateHasBeenSet;

                    /**
                     * 地域编码
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域编码
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 节省计划资源id
                     */
                    std::string m_spId;
                    bool m_spIdHasBeenSet;

                    /**
                     * 抵扣查询结束时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_deductEndDate;
                    bool m_deductEndDateHasBeenSet;

                    /**
                     * 抵扣查询开始时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_deductStartDate;
                    bool m_deductStartDateHasBeenSet;

                    /**
                     * 节省计划使用结束的查询结束时间
                     */
                    std::string m_endEndDate;
                    bool m_endEndDateHasBeenSet;

                    /**
                     * 节省计划使用结束的查询开始时间
                     */
                    std::string m_endStartDate;
                    bool m_endStartDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANDEDUCTREQUEST_H_
