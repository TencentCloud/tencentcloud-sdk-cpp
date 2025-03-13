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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVICEGOVERNANCECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVICEGOVERNANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ExclusiveInstance.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 注册配置治理信息
                */
                class ServiceGovernanceConfig : public AbstractModel
                {
                public:
                    ServiceGovernanceConfig();
                    ~ServiceGovernanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启服务注册治理
                     * @return EnableGovernance 是否开启服务注册治理
                     * 
                     */
                    bool GetEnableGovernance() const;

                    /**
                     * 设置是否开启服务注册治理
                     * @param _enableGovernance 是否开启服务注册治理
                     * 
                     */
                    void SetEnableGovernance(const bool& _enableGovernance);

                    /**
                     * 判断参数 EnableGovernance 是否已赋值
                     * @return EnableGovernance 是否已赋值
                     * 
                     */
                    bool EnableGovernanceHasBeenSet() const;

                    /**
                     * 获取服务治理类型（枚举：SHARE、EXCLUSIVE）
                     * @return GovernanceType 服务治理类型（枚举：SHARE、EXCLUSIVE）
                     * 
                     */
                    std::string GetGovernanceType() const;

                    /**
                     * 设置服务治理类型（枚举：SHARE、EXCLUSIVE）
                     * @param _governanceType 服务治理类型（枚举：SHARE、EXCLUSIVE）
                     * 
                     */
                    void SetGovernanceType(const std::string& _governanceType);

                    /**
                     * 判断参数 GovernanceType 是否已赋值
                     * @return GovernanceType 是否已赋值
                     * 
                     */
                    bool GovernanceTypeHasBeenSet() const;

                    /**
                     * 获取独享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExclusiveInstances 独享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExclusiveInstance> GetExclusiveInstances() const;

                    /**
                     * 设置独享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exclusiveInstances 独享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExclusiveInstances(const std::vector<ExclusiveInstance>& _exclusiveInstances);

                    /**
                     * 判断参数 ExclusiveInstances 是否已赋值
                     * @return ExclusiveInstances 是否已赋值
                     * 
                     */
                    bool ExclusiveInstancesHasBeenSet() const;

                private:

                    /**
                     * 是否开启服务注册治理
                     */
                    bool m_enableGovernance;
                    bool m_enableGovernanceHasBeenSet;

                    /**
                     * 服务治理类型（枚举：SHARE、EXCLUSIVE）
                     */
                    std::string m_governanceType;
                    bool m_governanceTypeHasBeenSet;

                    /**
                     * 独享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExclusiveInstance> m_exclusiveInstances;
                    bool m_exclusiveInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICEGOVERNANCECONFIG_H_
