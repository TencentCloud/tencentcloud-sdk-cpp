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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERWRITTENPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERWRITTENPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/WrittenAdvancePolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartOptimizerWrittenPolicy
                */
                class SmartOptimizerWrittenPolicy : public AbstractModel
                {
                public:
                    SmartOptimizerWrittenPolicy();
                    ~SmartOptimizerWrittenPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取none/enable/disable/default
                     * @return WrittenEnable none/enable/disable/default
                     * 
                     */
                    std::string GetWrittenEnable() const;

                    /**
                     * 设置none/enable/disable/default
                     * @param _writtenEnable none/enable/disable/default
                     * 
                     */
                    void SetWrittenEnable(const std::string& _writtenEnable);

                    /**
                     * 判断参数 WrittenEnable 是否已赋值
                     * @return WrittenEnable 是否已赋值
                     * 
                     */
                    bool WrittenEnableHasBeenSet() const;

                    /**
                     * 获取用户自定义高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancePolicy 用户自定义高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WrittenAdvancePolicy GetAdvancePolicy() const;

                    /**
                     * 设置用户自定义高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancePolicy 用户自定义高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancePolicy(const WrittenAdvancePolicy& _advancePolicy);

                    /**
                     * 判断参数 AdvancePolicy 是否已赋值
                     * @return AdvancePolicy 是否已赋值
                     * 
                     */
                    bool AdvancePolicyHasBeenSet() const;

                private:

                    /**
                     * none/enable/disable/default
                     */
                    std::string m_writtenEnable;
                    bool m_writtenEnableHasBeenSet;

                    /**
                     * 用户自定义高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WrittenAdvancePolicy m_advancePolicy;
                    bool m_advancePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERWRITTENPOLICY_H_
