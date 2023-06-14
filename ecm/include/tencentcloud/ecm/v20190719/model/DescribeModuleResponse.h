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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULERESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ModuleItem.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeModule返回参数结构体
                */
                class DescribeModuleResponse : public AbstractModel
                {
                public:
                    DescribeModuleResponse();
                    ~DescribeModuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的模块数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 符合条件的模块数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取模块详情信息的列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleItemSet 模块详情信息的列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ModuleItem> GetModuleItemSet() const;

                    /**
                     * 判断参数 ModuleItemSet 是否已赋值
                     * @return ModuleItemSet 是否已赋值
                     * 
                     */
                    bool ModuleItemSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的模块数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 模块详情信息的列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModuleItem> m_moduleItemSet;
                    bool m_moduleItemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULERESPONSE_H_
