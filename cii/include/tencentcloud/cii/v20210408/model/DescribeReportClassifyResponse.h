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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEREPORTCLASSIFYRESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEREPORTCLASSIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/ClassifiedReports.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeReportClassify返回参数结构体
                */
                class DescribeReportClassifyResponse : public AbstractModel
                {
                public:
                    DescribeReportClassifyResponse();
                    ~DescribeReportClassifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取报告分类结果
                     * @return Reports 报告分类结果
                     * 
                     */
                    std::vector<ClassifiedReports> GetReports() const;

                    /**
                     * 判断参数 Reports 是否已赋值
                     * @return Reports 是否已赋值
                     * 
                     */
                    bool ReportsHasBeenSet() const;

                private:

                    /**
                     * 报告分类结果
                     */
                    std::vector<ClassifiedReports> m_reports;
                    bool m_reportsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEREPORTCLASSIFYRESPONSE_H_
