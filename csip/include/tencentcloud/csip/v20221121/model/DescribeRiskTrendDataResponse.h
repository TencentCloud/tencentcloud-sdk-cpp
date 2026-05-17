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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKTRENDDATARESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKTRENDDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskTrendInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRiskTrendData返回参数结构体
                */
                class DescribeRiskTrendDataResponse : public AbstractModel
                {
                public:
                    DescribeRiskTrendDataResponse();
                    ~DescribeRiskTrendDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险趋势数据
                     * @return CosRiskTrendData 风险趋势数据
                     * 
                     */
                    std::vector<CosRiskTrendInfo> GetCosRiskTrendData() const;

                    /**
                     * 判断参数 CosRiskTrendData 是否已赋值
                     * @return CosRiskTrendData 是否已赋值
                     * 
                     */
                    bool CosRiskTrendDataHasBeenSet() const;

                private:

                    /**
                     * 风险趋势数据
                     */
                    std::vector<CosRiskTrendInfo> m_cosRiskTrendData;
                    bool m_cosRiskTrendDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKTRENDDATARESPONSE_H_
