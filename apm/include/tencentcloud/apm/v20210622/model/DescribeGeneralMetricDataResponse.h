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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATARESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Line.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralMetricData返回参数结构体
                */
                class DescribeGeneralMetricDataResponse : public AbstractModel
                {
                public:
                    DescribeGeneralMetricDataResponse();
                    ~DescribeGeneralMetricDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标结果集
                     * @return Records 指标结果集
                     * 
                     */
                    std::vector<Line> GetRecords() const;

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * 指标结果集
                     */
                    std::vector<Line> m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATARESPONSE_H_
