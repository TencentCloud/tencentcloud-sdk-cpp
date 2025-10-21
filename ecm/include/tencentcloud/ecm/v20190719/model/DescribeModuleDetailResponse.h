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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEDETAILRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Module.h>
#include <tencentcloud/ecm/v20190719/model/ModuleCounter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeModuleDetail返回参数结构体
                */
                class DescribeModuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeModuleDetailResponse();
                    ~DescribeModuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模块的详细信息，详细见数据结构中的ModuleInfo。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Module 模块的详细信息，详细见数据结构中的ModuleInfo。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Module GetModule() const;

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取模块的统计信息，详细见数据结构中的ModuleCounterInfo。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleCounter 模块的统计信息，详细见数据结构中的ModuleCounterInfo。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModuleCounter GetModuleCounter() const;

                    /**
                     * 判断参数 ModuleCounter 是否已赋值
                     * @return ModuleCounter 是否已赋值
                     * 
                     */
                    bool ModuleCounterHasBeenSet() const;

                private:

                    /**
                     * 模块的详细信息，详细见数据结构中的ModuleInfo。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Module m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 模块的统计信息，详细见数据结构中的ModuleCounterInfo。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModuleCounter m_moduleCounter;
                    bool m_moduleCounterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEDETAILRESPONSE_H_
