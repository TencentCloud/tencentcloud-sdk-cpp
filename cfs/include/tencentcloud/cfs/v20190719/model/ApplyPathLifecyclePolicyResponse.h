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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/CheckResult.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ApplyPathLifecyclePolicy返回参数结构体
                */
                class ApplyPathLifecyclePolicyResponse : public AbstractModel
                {
                public:
                    ApplyPathLifecyclePolicyResponse();
                    ~ApplyPathLifecyclePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有规则冲突时返回的已有冲突规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckResults 有规则冲突时返回的已有冲突规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CheckResult> GetCheckResults() const;

                    /**
                     * 判断参数 CheckResults 是否已赋值
                     * @return CheckResults 是否已赋值
                     * 
                     */
                    bool CheckResultsHasBeenSet() const;

                private:

                    /**
                     * 有规则冲突时返回的已有冲突规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CheckResult> m_checkResults;
                    bool m_checkResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYRESPONSE_H_
