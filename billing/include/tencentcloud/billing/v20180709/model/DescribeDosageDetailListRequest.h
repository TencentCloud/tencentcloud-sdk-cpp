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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILLISTREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDosageDetailList请求参数结构体
                */
                class DescribeDosageDetailListRequest : public AbstractModel
                {
                public:
                    DescribeDosageDetailListRequest();
                    ~DescribeDosageDetailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用量起始时间，如：2023-02-01
                     * @return StartTime 用量起始时间，如：2023-02-01
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置用量起始时间，如：2023-02-01
                     * @param _startTime 用量起始时间，如：2023-02-01
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取用量截止时间，如：2023-02-28
                     * @return EndTime 用量截止时间，如：2023-02-28
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置用量截止时间，如：2023-02-28
                     * @param _endTime 用量截止时间，如：2023-02-28
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取产品编码，已支持查询的产品如下：
p_ccc（云联络中心）
p_rav（实时音视频）
p_pstn（号码保护）
p_smh（智能媒资托管）
p_coding_devops（CODING DevOps）
p_dsa（全球IP应用加速）
                     * @return ProductCode 产品编码，已支持查询的产品如下：
p_ccc（云联络中心）
p_rav（实时音视频）
p_pstn（号码保护）
p_smh（智能媒资托管）
p_coding_devops（CODING DevOps）
p_dsa（全球IP应用加速）
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品编码，已支持查询的产品如下：
p_ccc（云联络中心）
p_rav（实时音视频）
p_pstn（号码保护）
p_smh（智能媒资托管）
p_coding_devops（CODING DevOps）
p_dsa（全球IP应用加速）
                     * @param _productCode 产品编码，已支持查询的产品如下：
p_ccc（云联络中心）
p_rav（实时音视频）
p_pstn（号码保护）
p_smh（智能媒资托管）
p_coding_devops（CODING DevOps）
p_dsa（全球IP应用加速）
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取数据偏移量（从0开始）
                     * @return Offset 数据偏移量（从0开始）
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量（从0开始）
                     * @param _offset 数据偏移量（从0开始）
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
                     * 获取单次数据量（最大3000）
                     * @return Limit 单次数据量（最大3000）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次数据量（最大3000）
                     * @param _limit 单次数据量（最大3000）
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
                     * 获取用量统计类型：用量明细的数据统计汇总周期类型，包括minute-按5分钟汇总、hour-按小时汇总、day-按天汇总、month-按月汇总、comm-其他，默认查询所有类型明细，目前各产品已支持的统计类型如下：
p_ccc（云联络中心）：comm、day
p_rav（实时音视频）：minute、day
p_pstn（号码保护）：comm
p_smh（智能媒资托管）：day
p_coding_devops（CODING DevOps）：comm、day
p_dsa（全球IP应用加速）：minute
                     * @return DosageType 用量统计类型：用量明细的数据统计汇总周期类型，包括minute-按5分钟汇总、hour-按小时汇总、day-按天汇总、month-按月汇总、comm-其他，默认查询所有类型明细，目前各产品已支持的统计类型如下：
p_ccc（云联络中心）：comm、day
p_rav（实时音视频）：minute、day
p_pstn（号码保护）：comm
p_smh（智能媒资托管）：day
p_coding_devops（CODING DevOps）：comm、day
p_dsa（全球IP应用加速）：minute
                     * 
                     */
                    std::string GetDosageType() const;

                    /**
                     * 设置用量统计类型：用量明细的数据统计汇总周期类型，包括minute-按5分钟汇总、hour-按小时汇总、day-按天汇总、month-按月汇总、comm-其他，默认查询所有类型明细，目前各产品已支持的统计类型如下：
p_ccc（云联络中心）：comm、day
p_rav（实时音视频）：minute、day
p_pstn（号码保护）：comm
p_smh（智能媒资托管）：day
p_coding_devops（CODING DevOps）：comm、day
p_dsa（全球IP应用加速）：minute
                     * @param _dosageType 用量统计类型：用量明细的数据统计汇总周期类型，包括minute-按5分钟汇总、hour-按小时汇总、day-按天汇总、month-按月汇总、comm-其他，默认查询所有类型明细，目前各产品已支持的统计类型如下：
p_ccc（云联络中心）：comm、day
p_rav（实时音视频）：minute、day
p_pstn（号码保护）：comm
p_smh（智能媒资托管）：day
p_coding_devops（CODING DevOps）：comm、day
p_dsa（全球IP应用加速）：minute
                     * 
                     */
                    void SetDosageType(const std::string& _dosageType);

                    /**
                     * 判断参数 DosageType 是否已赋值
                     * @return DosageType 是否已赋值
                     * 
                     */
                    bool DosageTypeHasBeenSet() const;

                private:

                    /**
                     * 用量起始时间，如：2023-02-01
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 用量截止时间，如：2023-02-28
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 产品编码，已支持查询的产品如下：
p_ccc（云联络中心）
p_rav（实时音视频）
p_pstn（号码保护）
p_smh（智能媒资托管）
p_coding_devops（CODING DevOps）
p_dsa（全球IP应用加速）
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 数据偏移量（从0开始）
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次数据量（最大3000）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 用量统计类型：用量明细的数据统计汇总周期类型，包括minute-按5分钟汇总、hour-按小时汇总、day-按天汇总、month-按月汇总、comm-其他，默认查询所有类型明细，目前各产品已支持的统计类型如下：
p_ccc（云联络中心）：comm、day
p_rav（实时音视频）：minute、day
p_pstn（号码保护）：comm
p_smh（智能媒资托管）：day
p_coding_devops（CODING DevOps）：comm、day
p_dsa（全球IP应用加速）：minute
                     */
                    std::string m_dosageType;
                    bool m_dosageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILLISTREQUEST_H_
