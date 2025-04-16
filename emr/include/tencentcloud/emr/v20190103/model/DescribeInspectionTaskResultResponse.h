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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSPECTIONTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSPECTIONTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInspectionTaskResult返回参数结构体
                */
                class DescribeInspectionTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeInspectionTaskResultResponse();
                    ~DescribeInspectionTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取巡检任务记录，base64编码
                     * @return InspectionResultInfo 巡检任务记录，base64编码
                     * 
                     */
                    std::string GetInspectionResultInfo() const;

                    /**
                     * 判断参数 InspectionResultInfo 是否已赋值
                     * @return InspectionResultInfo 是否已赋值
                     * 
                     */
                    bool InspectionResultInfoHasBeenSet() const;

                    /**
                     * 获取记录总数
                     * @return Total 记录总数
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
                     * 获取类别信息，base64编码，{"FixedTime": "定时", "RealTime": "及时"}
                     * @return TypeInfo 类别信息，base64编码，{"FixedTime": "定时", "RealTime": "及时"}
                     * 
                     */
                    std::string GetTypeInfo() const;

                    /**
                     * 判断参数 TypeInfo 是否已赋值
                     * @return TypeInfo 是否已赋值
                     * 
                     */
                    bool TypeInfoHasBeenSet() const;

                private:

                    /**
                     * 巡检任务记录，base64编码
                     */
                    std::string m_inspectionResultInfo;
                    bool m_inspectionResultInfoHasBeenSet;

                    /**
                     * 记录总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 类别信息，base64编码，{"FixedTime": "定时", "RealTime": "及时"}
                     */
                    std::string m_typeInfo;
                    bool m_typeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSPECTIONTASKRESULTRESPONSE_H_
