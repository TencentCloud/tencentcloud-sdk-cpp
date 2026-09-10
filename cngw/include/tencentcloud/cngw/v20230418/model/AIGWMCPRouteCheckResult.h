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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPROUTECHECKRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPROUTECHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * MCP路由规则的校验结果
                */
                class AIGWMCPRouteCheckResult : public AbstractModel
                {
                public:
                    AIGWMCPRouteCheckResult();
                    ~AIGWMCPRouteCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>冲突路由ID</p>
                     * @return ConflictRouteId <p>冲突路由ID</p>
                     * 
                     */
                    std::string GetConflictRouteId() const;

                    /**
                     * 设置<p>冲突路由ID</p>
                     * @param _conflictRouteId <p>冲突路由ID</p>
                     * 
                     */
                    void SetConflictRouteId(const std::string& _conflictRouteId);

                    /**
                     * 判断参数 ConflictRouteId 是否已赋值
                     * @return ConflictRouteId 是否已赋值
                     * 
                     */
                    bool ConflictRouteIdHasBeenSet() const;

                    /**
                     * 获取<p>是否冲突</p><p>枚举值：</p><ul><li>true： 冲突</li><li>false： 未冲突</li></ul>
                     * @return IsConflict <p>是否冲突</p><p>枚举值：</p><ul><li>true： 冲突</li><li>false： 未冲突</li></ul>
                     * 
                     */
                    bool GetIsConflict() const;

                    /**
                     * 设置<p>是否冲突</p><p>枚举值：</p><ul><li>true： 冲突</li><li>false： 未冲突</li></ul>
                     * @param _isConflict <p>是否冲突</p><p>枚举值：</p><ul><li>true： 冲突</li><li>false： 未冲突</li></ul>
                     * 
                     */
                    void SetIsConflict(const bool& _isConflict);

                    /**
                     * 判断参数 IsConflict 是否已赋值
                     * @return IsConflict 是否已赋值
                     * 
                     */
                    bool IsConflictHasBeenSet() const;

                    /**
                     * 获取<p>冲突原因</p>
                     * @return Reason <p>冲突原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>冲突原因</p>
                     * @param _reason <p>冲突原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>冲突路由ID</p>
                     */
                    std::string m_conflictRouteId;
                    bool m_conflictRouteIdHasBeenSet;

                    /**
                     * <p>是否冲突</p><p>枚举值：</p><ul><li>true： 冲突</li><li>false： 未冲突</li></ul>
                     */
                    bool m_isConflict;
                    bool m_isConflictHasBeenSet;

                    /**
                     * <p>冲突原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPROUTECHECKRESULT_H_
