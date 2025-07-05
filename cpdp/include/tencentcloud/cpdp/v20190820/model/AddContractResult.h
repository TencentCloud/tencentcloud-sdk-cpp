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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ADDCONTRACTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ADDCONTRACTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 添加合同响应对象
                */
                class AddContractResult : public AbstractModel
                {
                public:
                    AddContractResult();
                    ~AddContractResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractId 合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractId() const;

                    /**
                     * 设置合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractId 合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractId(const std::string& _contractId);

                    /**
                     * 判断参数 ContractId 是否已赋值
                     * @return ContractId 是否已赋值
                     * 
                     */
                    bool ContractIdHasBeenSet() const;

                private:

                    /**
                     * 合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractId;
                    bool m_contractIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ADDCONTRACTRESULT_H_
