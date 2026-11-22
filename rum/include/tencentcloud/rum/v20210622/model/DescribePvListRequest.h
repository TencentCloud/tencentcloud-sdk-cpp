/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribePvList请求参数结构体
                */
                class DescribePvListRequest : public AbstractModel
                {
                public:
                    DescribePvListRequest();
                    ~DescribePvListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID</p>
                     * @return ProjectId <p>ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>ID</p>
                     * @param _projectId <p>ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     * @return EndTime <p>查询结束时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     * @param _endTime <p>查询结束时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
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
                     * 获取<p>查询开始时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     * @return StartTime <p>查询开始时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     * @param _startTime <p>查询开始时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
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
                     * 获取<p>对PV指标的查询维度。获取day：d，   获取min则不填。</p>
                     * @return Dimension <p>对PV指标的查询维度。获取day：d，   获取min则不填。</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>对PV指标的查询维度。获取day：d，   获取min则不填。</p>
                     * @param _dimension <p>对PV指标的查询维度。获取day：d，   获取min则不填。</p>
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>查询结束时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>查询开始时间（必填）。</p><p>参数格式：日维度继续支持 YYYYMMDD，也支持带时区的 RFC3339。</p><p>入参限制：仅 Dimension=d 支持 RFC3339，须等于北京时间 00:00:00。</p><p>等价日期的查询结果和返回字段一致。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>对PV指标的查询维度。获取day：d，   获取min则不填。</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTREQUEST_H_
