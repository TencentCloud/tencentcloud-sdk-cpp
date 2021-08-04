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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_MANAGEMARKETINGRISKRESPONSE_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_MANAGEMARKETINGRISKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aa/v20200224/model/OutputManageMarketingRisk.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * ManageMarketingRisk返回参数结构体
                */
                class ManageMarketingRiskResponse : public AbstractModel
                {
                public:
                    ManageMarketingRiskResponse();
                    ~ManageMarketingRiskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 业务出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputManageMarketingRisk GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 业务出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputManageMarketingRisk m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_MANAGEMARKETINGRISKRESPONSE_H_
