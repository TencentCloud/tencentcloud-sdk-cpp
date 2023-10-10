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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyFileTamperRuleStatus请求参数结构体
                */
                class ModifyFileTamperRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyFileTamperRuleStatusRequest();
                    ~ModifyFileTamperRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: 启用1: 关闭2：删除
                     * @return Status 0: 启用1: 关闭2：删除
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: 启用1: 关闭2：删除
                     * @param _status 0: 启用1: 关闭2：删除
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取对应事件id
                     * @return Ids 对应事件id
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置对应事件id
                     * @param _ids 对应事件id
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取是否是系统规则 0=系统规则 1=用户自定义规则，系统规则Status 不支持删除
                     * @return RuleCategory 是否是系统规则 0=系统规则 1=用户自定义规则，系统规则Status 不支持删除
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置是否是系统规则 0=系统规则 1=用户自定义规则，系统规则Status 不支持删除
                     * @param _ruleCategory 是否是系统规则 0=系统规则 1=用户自定义规则，系统规则Status 不支持删除
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                private:

                    /**
                     * 0: 启用1: 关闭2：删除
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 对应事件id
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 是否是系统规则 0=系统规则 1=用户自定义规则，系统规则Status 不支持删除
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULESTATUSREQUEST_H_
