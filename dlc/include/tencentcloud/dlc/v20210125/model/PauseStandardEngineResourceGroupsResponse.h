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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PAUSESTANDARDENGINERESOURCEGROUPSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PAUSESTANDARDENGINERESOURCEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/OperateEngineResourceGroupFailMessage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * PauseStandardEngineResourceGroups返回参数结构体
                */
                class PauseStandardEngineResourceGroupsResponse : public AbstractModel
                {
                public:
                    PauseStandardEngineResourceGroupsResponse();
                    ~PauseStandardEngineResourceGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量操作资源组时，操作失败的资源组相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateEngineResourceGroupFailMessages 批量操作资源组时，操作失败的资源组相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OperateEngineResourceGroupFailMessage> GetOperateEngineResourceGroupFailMessages() const;

                    /**
                     * 判断参数 OperateEngineResourceGroupFailMessages 是否已赋值
                     * @return OperateEngineResourceGroupFailMessages 是否已赋值
                     * 
                     */
                    bool OperateEngineResourceGroupFailMessagesHasBeenSet() const;

                private:

                    /**
                     * 批量操作资源组时，操作失败的资源组相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OperateEngineResourceGroupFailMessage> m_operateEngineResourceGroupFailMessages;
                    bool m_operateEngineResourceGroupFailMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PAUSESTANDARDENGINERESOURCEGROUPSRESPONSE_H_
