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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEPLANSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEPLANSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PlanInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeAvailablePlans返回参数结构体
                */
                class DescribeAvailablePlansResponse : public AbstractModel
                {
                public:
                    DescribeAvailablePlansResponse();
                    ~DescribeAvailablePlansResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前账户可购买套餐类型及相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanInfo 当前账户可购买套餐类型及相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PlanInfo> GetPlanInfo() const;

                    /**
                     * 判断参数 PlanInfo 是否已赋值
                     * @return PlanInfo 是否已赋值
                     * 
                     */
                    bool PlanInfoHasBeenSet() const;

                private:

                    /**
                     * 当前账户可购买套餐类型及相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PlanInfo> m_planInfo;
                    bool m_planInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEPLANSRESPONSE_H_
