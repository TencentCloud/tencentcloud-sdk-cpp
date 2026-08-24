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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLPAIRDENIEDACTION_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLPAIRDENIEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/DeniedAction.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 演练对操作掩码
                */
                class DrillPairDeniedAction : public AbstractModel
                {
                public:
                    DrillPairDeniedAction();
                    ~DrillPairDeniedAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取演练对ID
                     * @return DrillPairId 演练对ID
                     * 
                     */
                    std::string GetDrillPairId() const;

                    /**
                     * 设置演练对ID
                     * @param _drillPairId 演练对ID
                     * 
                     */
                    void SetDrillPairId(const std::string& _drillPairId);

                    /**
                     * 判断参数 DrillPairId 是否已赋值
                     * @return DrillPairId 是否已赋值
                     * 
                     */
                    bool DrillPairIdHasBeenSet() const;

                    /**
                     * 获取被禁止的操作列表（Action名称数组）
                     * @return DeniedActions 被禁止的操作列表（Action名称数组）
                     * 
                     */
                    std::vector<DeniedAction> GetDeniedActions() const;

                    /**
                     * 设置被禁止的操作列表（Action名称数组）
                     * @param _deniedActions 被禁止的操作列表（Action名称数组）
                     * 
                     */
                    void SetDeniedActions(const std::vector<DeniedAction>& _deniedActions);

                    /**
                     * 判断参数 DeniedActions 是否已赋值
                     * @return DeniedActions 是否已赋值
                     * 
                     */
                    bool DeniedActionsHasBeenSet() const;

                private:

                    /**
                     * 演练对ID
                     */
                    std::string m_drillPairId;
                    bool m_drillPairIdHasBeenSet;

                    /**
                     * 被禁止的操作列表（Action名称数组）
                     */
                    std::vector<DeniedAction> m_deniedActions;
                    bool m_deniedActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLPAIRDENIEDACTION_H_
