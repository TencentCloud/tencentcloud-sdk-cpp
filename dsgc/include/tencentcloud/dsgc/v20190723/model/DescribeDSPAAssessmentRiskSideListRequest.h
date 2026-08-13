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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDELISTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDELISTREQUEST_H_

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
                * DescribeDSPAAssessmentRiskSideList请求参数结构体
                */
                class DescribeDSPAAssessmentRiskSideListRequest : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskSideListRequest();
                    ~DescribeDSPAAssessmentRiskSideListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DSPA实例ID</p>
                     * @return DspaId <p>DSPA实例ID</p>
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置<p>DSPA实例ID</p>
                     * @param _dspaId <p>DSPA实例ID</p>
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
                     * 获取<p>评估模板id</p>
                     * @return TemplateId <p>评估模板id</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>评估模板id</p>
                     * @param _templateId <p>评估模板id</p>
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>DSPA实例ID</p>
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * <p>评估模板id</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDELISTREQUEST_H_
