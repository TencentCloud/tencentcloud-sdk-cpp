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
                     * 获取版本保留策略Id
                     * @return RetentionId 版本保留策略Id
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置版本保留策略Id
                     * @param _retentionId 版本保留策略Id
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
                     * 获取命名空间的名称
                     * @return NamespaceName 命名空间的名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间的名称
                     * @param _namespaceName 命名空间的名称
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
                     * 获取规则列表
                     * @return RetentionRuleList 规则列表
                     * 
                     */
                    std::vector<RetentionRule> GetRetentionRuleList() const;

                    /**
                     * 设置规则列表
                     * @param _retentionRuleList 规则列表
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
                     * 获取定期执行方式
                     * @return CronSetting 定期执行方式
                     * 
                     */
                    std::string GetCronSetting() const;

                    /**
                     * 设置定期执行方式
                     * @param _cronSetting 定期执行方式
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
                     * 获取是否启用规则
                     * @return Disabled 是否启用规则
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置是否启用规则
                     * @param _disabled 是否启用规则
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
                     * 获取基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用
                     * @return NextExecutionTime 基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用
                     * 
                     */
                    std::string GetNextExecutionTime() const;

                    /**
                     * 设置基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用
                     * @param _nextExecutionTime 基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用
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
                     * 版本保留策略Id
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * 命名空间的名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<RetentionRule> m_retentionRuleList;
                    bool m_retentionRuleListHasBeenSet;

                    /**
                     * 定期执行方式
                     */
                    std::string m_cronSetting;
                    bool m_cronSettingHasBeenSet;

                    /**
                     * 是否启用规则
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 基于当前时间根据cronSetting后下一次任务要执行的时间，仅做参考使用
                     */
                    std::string m_nextExecutionTime;
                    bool m_nextExecutionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_
