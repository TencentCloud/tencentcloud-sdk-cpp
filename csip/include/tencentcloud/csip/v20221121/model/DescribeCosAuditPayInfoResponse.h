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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAUDITPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAUDITPAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosAuditPayInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosAuditPayInfo返回参数结构体
                */
                class DescribeCosAuditPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeCosAuditPayInfoResponse();
                    ~DescribeCosAuditPayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cos审计支付信息
                     * @return CosAuditPayInfo cos审计支付信息
                     * 
                     */
                    CosAuditPayInfo GetCosAuditPayInfo() const;

                    /**
                     * 判断参数 CosAuditPayInfo 是否已赋值
                     * @return CosAuditPayInfo 是否已赋值
                     * 
                     */
                    bool CosAuditPayInfoHasBeenSet() const;

                private:

                    /**
                     * cos审计支付信息
                     */
                    CosAuditPayInfo m_cosAuditPayInfo;
                    bool m_cosAuditPayInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAUDITPAYINFORESPONSE_H_
