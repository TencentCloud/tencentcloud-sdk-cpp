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

#ifndef TENCENTCLOUD_RKP_V20191209_MODEL_GETOPENIDRESPONSE_H_
#define TENCENTCLOUD_RKP_V20191209_MODEL_GETOPENIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rkp/v20191209/model/RiskInfo.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            namespace Model
            {
                /**
                * GetOpenId返回参数结构体
                */
                class GetOpenIdResponse : public AbstractModel
                {
                public:
                    GetOpenIdResponse();
                    ~GetOpenIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOpenId() const;

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取设备风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskInfo 设备风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskInfo> GetRiskInfo() const;

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     */
                    bool RiskInfoHasBeenSet() const;

                private:

                    /**
                     * 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 设备风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskInfo> m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_MODEL_GETOPENIDRESPONSE_H_
