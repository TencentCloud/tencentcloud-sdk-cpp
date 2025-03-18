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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 托管规则自动更新选项
                */
                class ManagedRuleAutoUpdate : public AbstractModel
                {
                public:
                    ManagedRuleAutoUpdate();
                    ~ManagedRuleAutoUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启自动更新至最新版本。取值有：<li>on：开启</li><li>off：关闭</li>
                     * @return AutoUpdateToLatestVersion 是否开启自动更新至最新版本。取值有：<li>on：开启</li><li>off：关闭</li>
                     * 
                     */
                    std::string GetAutoUpdateToLatestVersion() const;

                    /**
                     * 设置是否开启自动更新至最新版本。取值有：<li>on：开启</li><li>off：关闭</li>
                     * @param _autoUpdateToLatestVersion 是否开启自动更新至最新版本。取值有：<li>on：开启</li><li>off：关闭</li>
                     * 
                     */
                    void SetAutoUpdateToLatestVersion(const std::string& _autoUpdateToLatestVersion);

                    /**
                     * 判断参数 AutoUpdateToLatestVersion 是否已赋值
                     * @return AutoUpdateToLatestVersion 是否已赋值
                     * 
                     */
                    bool AutoUpdateToLatestVersionHasBeenSet() const;

                    /**
                     * 获取当前使用的版本，格式符合ISO 8601标准，如2023-12-21T12:00:32Z，默认为空，仅出参。
                     * @return RulesetVersion 当前使用的版本，格式符合ISO 8601标准，如2023-12-21T12:00:32Z，默认为空，仅出参。
                     * 
                     */
                    std::string GetRulesetVersion() const;

                    /**
                     * 设置当前使用的版本，格式符合ISO 8601标准，如2023-12-21T12:00:32Z，默认为空，仅出参。
                     * @param _rulesetVersion 当前使用的版本，格式符合ISO 8601标准，如2023-12-21T12:00:32Z，默认为空，仅出参。
                     * 
                     */
                    void SetRulesetVersion(const std::string& _rulesetVersion);

                    /**
                     * 判断参数 RulesetVersion 是否已赋值
                     * @return RulesetVersion 是否已赋值
                     * 
                     */
                    bool RulesetVersionHasBeenSet() const;

                private:

                    /**
                     * 是否开启自动更新至最新版本。取值有：<li>on：开启</li><li>off：关闭</li>
                     */
                    std::string m_autoUpdateToLatestVersion;
                    bool m_autoUpdateToLatestVersionHasBeenSet;

                    /**
                     * 当前使用的版本，格式符合ISO 8601标准，如2023-12-21T12:00:32Z，默认为空，仅出参。
                     */
                    std::string m_rulesetVersion;
                    bool m_rulesetVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_
