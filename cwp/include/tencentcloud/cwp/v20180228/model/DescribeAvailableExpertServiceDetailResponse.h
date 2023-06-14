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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAVAILABLEEXPERTSERVICEDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAVAILABLEEXPERTSERVICEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ExpertServiceOrderInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAvailableExpertServiceDetail返回参数结构体
                */
                class DescribeAvailableExpertServiceDetailResponse : public AbstractModel
                {
                public:
                    DescribeAvailableExpertServiceDetailResponse();
                    ~DescribeAvailableExpertServiceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全管家订单
                     * @return ExpertService 安全管家订单
                     * 
                     */
                    std::vector<ExpertServiceOrderInfo> GetExpertService() const;

                    /**
                     * 判断参数 ExpertService 是否已赋值
                     * @return ExpertService 是否已赋值
                     * 
                     */
                    bool ExpertServiceHasBeenSet() const;

                    /**
                     * 获取应急响应可用次数
                     * @return EmergencyResponse 应急响应可用次数
                     * 
                     */
                    uint64_t GetEmergencyResponse() const;

                    /**
                     * 判断参数 EmergencyResponse 是否已赋值
                     * @return EmergencyResponse 是否已赋值
                     * 
                     */
                    bool EmergencyResponseHasBeenSet() const;

                    /**
                     * 获取旗舰护网可用次数
                     * @return ProtectNet 旗舰护网可用次数
                     * 
                     */
                    uint64_t GetProtectNet() const;

                    /**
                     * 判断参数 ProtectNet 是否已赋值
                     * @return ProtectNet 是否已赋值
                     * 
                     */
                    bool ProtectNetHasBeenSet() const;

                    /**
                     * 获取是否购买过安全管家
                     * @return ExpertServiceBuy 是否购买过安全管家
                     * 
                     */
                    bool GetExpertServiceBuy() const;

                    /**
                     * 判断参数 ExpertServiceBuy 是否已赋值
                     * @return ExpertServiceBuy 是否已赋值
                     * 
                     */
                    bool ExpertServiceBuyHasBeenSet() const;

                    /**
                     * 获取是否购买过应急响应
                     * @return EmergencyResponseBuy 是否购买过应急响应
                     * 
                     */
                    bool GetEmergencyResponseBuy() const;

                    /**
                     * 判断参数 EmergencyResponseBuy 是否已赋值
                     * @return EmergencyResponseBuy 是否已赋值
                     * 
                     */
                    bool EmergencyResponseBuyHasBeenSet() const;

                    /**
                     * 获取是否购买过旗舰护网
                     * @return ProtectNetBuy 是否购买过旗舰护网
                     * 
                     */
                    bool GetProtectNetBuy() const;

                    /**
                     * 判断参数 ProtectNetBuy 是否已赋值
                     * @return ProtectNetBuy 是否已赋值
                     * 
                     */
                    bool ProtectNetBuyHasBeenSet() const;

                private:

                    /**
                     * 安全管家订单
                     */
                    std::vector<ExpertServiceOrderInfo> m_expertService;
                    bool m_expertServiceHasBeenSet;

                    /**
                     * 应急响应可用次数
                     */
                    uint64_t m_emergencyResponse;
                    bool m_emergencyResponseHasBeenSet;

                    /**
                     * 旗舰护网可用次数
                     */
                    uint64_t m_protectNet;
                    bool m_protectNetHasBeenSet;

                    /**
                     * 是否购买过安全管家
                     */
                    bool m_expertServiceBuy;
                    bool m_expertServiceBuyHasBeenSet;

                    /**
                     * 是否购买过应急响应
                     */
                    bool m_emergencyResponseBuy;
                    bool m_emergencyResponseBuyHasBeenSet;

                    /**
                     * 是否购买过旗舰护网
                     */
                    bool m_protectNetBuy;
                    bool m_protectNetBuyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAVAILABLEEXPERTSERVICEDETAILRESPONSE_H_
