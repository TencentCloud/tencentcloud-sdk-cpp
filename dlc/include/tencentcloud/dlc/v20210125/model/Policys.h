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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_POLICYS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_POLICYS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 策略集合
                */
                class Policys : public AbstractModel
                {
                public:
                    Policys();
                    ~Policys() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicySet 策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policySet 策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取策略总数
                     * @return TotalCount 策略总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置策略总数
                     * @param _totalCount 策略总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 策略集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 策略总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_POLICYS_H_
