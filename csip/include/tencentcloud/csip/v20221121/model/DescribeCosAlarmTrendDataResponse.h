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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSALARMTRENDDATARESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSALARMTRENDDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosAlarmTrendInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosAlarmTrendData返回参数结构体
                */
                class DescribeCosAlarmTrendDataResponse : public AbstractModel
                {
                public:
                    DescribeCosAlarmTrendDataResponse();
                    ~DescribeCosAlarmTrendDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警趋势信息
                     * @return CosAlarmTrendInfo 告警趋势信息
                     * 
                     */
                    std::vector<CosAlarmTrendInfo> GetCosAlarmTrendInfo() const;

                    /**
                     * 判断参数 CosAlarmTrendInfo 是否已赋值
                     * @return CosAlarmTrendInfo 是否已赋值
                     * 
                     */
                    bool CosAlarmTrendInfoHasBeenSet() const;

                private:

                    /**
                     * 告警趋势信息
                     */
                    std::vector<CosAlarmTrendInfo> m_cosAlarmTrendInfo;
                    bool m_cosAlarmTrendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSALARMTRENDDATARESPONSE_H_
