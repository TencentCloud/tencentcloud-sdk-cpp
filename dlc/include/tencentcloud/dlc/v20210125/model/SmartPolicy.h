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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SmartPolicyBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartPolicyRequest
                */
                class SmartPolicy : public AbstractModel
                {
                public:
                    SmartPolicy();
                    ~SmartPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseInfo 基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartPolicyBaseInfo GetBaseInfo() const;

                    /**
                     * 设置基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseInfo 基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseInfo(const SmartPolicyBaseInfo& _baseInfo);

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Policy 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartOptimizerPolicy GetPolicy() const;

                    /**
                     * 设置策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policy 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicy(const SmartOptimizerPolicy& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * 基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartPolicyBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartOptimizerPolicy m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTPOLICY_H_
