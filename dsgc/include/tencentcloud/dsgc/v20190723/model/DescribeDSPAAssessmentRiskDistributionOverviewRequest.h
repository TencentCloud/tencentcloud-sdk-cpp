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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDISTRIBUTIONOVERVIEWREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDISTRIBUTIONOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskDistributionOverview请求参数结构体
                */
                class DescribeDSPAAssessmentRiskDistributionOverviewRequest : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskDistributionOverviewRequest();
                    ~DescribeDSPAAssessmentRiskDistributionOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例Id
                     * @return DspaId dspa实例Id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例Id
                     * @param _dspaId dspa实例Id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取评估模板id
                     * @return TemplateId 评估模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置评估模板id
                     * @param _templateId 评估模板id
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取风险资产分布的过滤条件
（rdb，cos，不传就筛选全部）
                     * @return Filter 风险资产分布的过滤条件
（rdb，cos，不传就筛选全部）
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置风险资产分布的过滤条件
（rdb，cos，不传就筛选全部）
                     * @param _filter 风险资产分布的过滤条件
（rdb，cos，不传就筛选全部）
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * dspa实例Id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 评估模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 风险资产分布的过滤条件
（rdb，cos，不传就筛选全部）
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDISTRIBUTIONOVERVIEWREQUEST_H_
