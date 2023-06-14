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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PeakPointsItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribePeakPoints返回参数结构体
                */
                class DescribePeakPointsResponse : public AbstractModel
                {
                public:
                    DescribePeakPointsResponse();
                    ~DescribePeakPointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据点
                     * @return Points 数据点
                     * 
                     */
                    std::vector<PeakPointsItem> GetPoints() const;

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * 数据点
                     */
                    std::vector<PeakPointsItem> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSRESPONSE_H_
