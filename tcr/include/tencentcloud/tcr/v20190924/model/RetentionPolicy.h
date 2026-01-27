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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RetentionRule.h>
#include <tencentcloud/tcr/v20190924/model/RetentionRuleItem.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 版本保留策略
                */
                class RetentionPolicy : public AbstractModel
                {
                public:
                    RetentionPolicy();
                    ~RetentionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本保留策略Id</p>
                     * @return RetentionId <p>版本保留策略Id</p>
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置<p>版本保留策略Id</p>
                     * @param _retentionId <p>版本保留策略Id</p>
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间的名称</p>
                     * @return NamespaceName <p>命名空间的名称</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>命名空间的名称</p>
                     * @param _namespaceName <p>命名空间的名称</p>
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>规则列表</p>
                     * @return RetentionRuleList <p>规则列表</p>
                     * 
                     */
                    std::vector<RetentionRule> GetRetentionRuleList() const;

                    /**
                     * 设置<p>规则列表</p>
                     * @param _retentionRuleList <p>规则列表</p>
                     * 
                     */
                    void SetRetentionRuleList(const std::vector<RetentionRule>& _retentionRuleList);

                    /**
                     * 判断参数 RetentionRuleList 是否已赋值
                     * @return RetentionRuleList 是否已赋值
                     * 
                     */
                    bool RetentionRuleListHasBeenSet() const;

                    /**
                     * 获取<p>高级保留规则列表</p>
                     * @return AdvancedRuleItems <p>高级保留规则列表</p>
                     * 
                     */
                    std::vector<RetentionRuleItem> GetAdvancedRuleItems() const;

                    /**
                     * 设置<p>高级保留规则列表</p>
                     * @param _advancedRuleItems <p>高级保留规则列表</p>
                     * 
                     */
                    void SetAdvancedRuleItems(const std::vector<RetentionRuleItem>& _advancedRuleItems);

                    /**
                     * 判断参数 AdvancedRuleItems 是否已赋值
                     * @return AdvancedRuleItems 是否已赋值
                     * 
                     */
                    bool AdvancedRuleItemsHasBeenSet() const;

                    /**
                     * 获取<p>定期执行方式</p>
                     * @return CronSetting <p>定期执行方式</p>
                     * 
                     */
                    std::string GetCronSetting() const;

                    /**
                     * 设置<p>定期执行方式</p>
                     * @param _cronSetting <p>定期执行方式</p>
                     * 
                     */
                    void SetCronSetting(const std::string& _cronSetting);

                    /**
                     * 判断参数 CronSetting 是否已赋值
                     * @return CronSetting 是否已赋值
                     * 
                     */
                    bool CronSettingHasBeenSet() const;

                    /**
                     * 获取<p>是否启用规则</p>
                     * @return Disabled <p>是否启用规则</p>
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置<p>是否启用规则</p>
                     * @param _disabled <p>是否启用规则</p>
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取<p>基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用</p>
                     * @return NextExecutionTime <p>基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用</p>
                     * 
                     */
                    std::string GetNextExecutionTime() const;

                    /**
                     * 设置<p>基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用</p>
                     * @param _nextExecutionTime <p>基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用</p>
                     * 
                     */
                    void SetNextExecutionTime(const std::string& _nextExecutionTime);

                    /**
                     * 判断参数 NextExecutionTime 是否已赋值
                     * @return NextExecutionTime 是否已赋值
                     * 
                     */
                    bool NextExecutionTimeHasBeenSet() const;

                private:

                    /**
                     * <p>版本保留策略Id</p>
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * <p>命名空间的名称</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>规则列表</p>
                     */
                    std::vector<RetentionRule> m_retentionRuleList;
                    bool m_retentionRuleListHasBeenSet;

                    /**
                     * <p>高级保留规则列表</p>
                     */
                    std::vector<RetentionRuleItem> m_advancedRuleItems;
                    bool m_advancedRuleItemsHasBeenSet;

                    /**
                     * <p>定期执行方式</p>
                     */
                    std::string m_cronSetting;
                    bool m_cronSettingHasBeenSet;

                    /**
                     * <p>是否启用规则</p>
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * <p>基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用</p>
                     */
                    std::string m_nextExecutionTime;
                    bool m_nextExecutionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_
