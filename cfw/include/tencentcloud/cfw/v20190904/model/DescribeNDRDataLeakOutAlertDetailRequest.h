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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTDETAILREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNDRDataLeakOutAlertDetail请求参数结构体
                */
                class DescribeNDRDataLeakOutAlertDetailRequest : public AbstractModel
                {
                public:
                    DescribeNDRDataLeakOutAlertDetailRequest();
                    ~DescribeNDRDataLeakOutAlertDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取风险事件ID
                     * @return RiskId 风险事件ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险事件ID
                     * @param _riskId 风险事件ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                private:

                    /**
                     * 风险事件ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTDETAILREQUEST_H_
