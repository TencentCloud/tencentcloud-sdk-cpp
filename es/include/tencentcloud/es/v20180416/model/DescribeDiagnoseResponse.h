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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEDIAGNOSERESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEDIAGNOSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DiagnoseResult.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeDiagnose返回参数结构体
                */
                class DescribeDiagnoseResponse : public AbstractModel
                {
                public:
                    DescribeDiagnoseResponse();
                    ~DescribeDiagnoseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取诊断报告个数
                     * @return Total 诊断报告个数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取诊断报告列表
                     * @return DiagnoseResults 诊断报告列表
                     * 
                     */
                    std::vector<DiagnoseResult> GetDiagnoseResults() const;

                    /**
                     * 判断参数 DiagnoseResults 是否已赋值
                     * @return DiagnoseResults 是否已赋值
                     * 
                     */
                    bool DiagnoseResultsHasBeenSet() const;

                private:

                    /**
                     * 诊断报告个数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 诊断报告列表
                     */
                    std::vector<DiagnoseResult> m_diagnoseResults;
                    bool m_diagnoseResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEDIAGNOSERESPONSE_H_
