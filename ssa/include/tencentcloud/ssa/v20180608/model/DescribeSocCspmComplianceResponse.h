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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCSPMCOMPLIANCERESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCSPMCOMPLIANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SocComplianceInfoResp.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeSocCspmCompliance返回参数结构体
                */
                class DescribeSocCspmComplianceResponse : public AbstractModel
                {
                public:
                    DescribeSocCspmComplianceResponse();
                    ~DescribeSocCspmComplianceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SocComplianceInfoResp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SocComplianceInfoResp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCSPMCOMPLIANCERESPONSE_H_
