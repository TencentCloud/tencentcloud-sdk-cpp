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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_LIFECYCLERULE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_LIFECYCLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/Transition.h>
#include <tencentcloud/chdfs/v20201112/model/Summary.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * 生命周期规则
                */
                class LifeCycleRule : public AbstractModel
                {
                public:
                    LifeCycleRule();
                    ~LifeCycleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期规则ID
                     * @return LifeCycleRuleId 生命周期规则ID
                     * 
                     */
                    uint64_t GetLifeCycleRuleId() const;

                    /**
                     * 设置生命周期规则ID
                     * @param _lifeCycleRuleId 生命周期规则ID
                     * 
                     */
                    void SetLifeCycleRuleId(const uint64_t& _lifeCycleRuleId);

                    /**
                     * 判断参数 LifeCycleRuleId 是否已赋值
                     * @return LifeCycleRuleId 是否已赋值
                     * 
                     */
                    bool LifeCycleRuleIdHasBeenSet() const;

                    /**
                     * 获取生命周期规则名称
                     * @return LifeCycleRuleName 生命周期规则名称
                     * 
                     */
                    std::string GetLifeCycleRuleName() const;

                    /**
                     * 设置生命周期规则名称
                     * @param _lifeCycleRuleName 生命周期规则名称
                     * 
                     */
                    void SetLifeCycleRuleName(const std::string& _lifeCycleRuleName);

                    /**
                     * 判断参数 LifeCycleRuleName 是否已赋值
                     * @return LifeCycleRuleName 是否已赋值
                     * 
                     */
                    bool LifeCycleRuleNameHasBeenSet() const;

                    /**
                     * 获取生命周期规则路径（目录或文件）
                     * @return Path 生命周期规则路径（目录或文件）
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置生命周期规则路径（目录或文件）
                     * @param _path 生命周期规则路径（目录或文件）
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取生命周期规则转换列表
                     * @return Transitions 生命周期规则转换列表
                     * 
                     */
                    std::vector<Transition> GetTransitions() const;

                    /**
                     * 设置生命周期规则转换列表
                     * @param _transitions 生命周期规则转换列表
                     * 
                     */
                    void SetTransitions(const std::vector<Transition>& _transitions);

                    /**
                     * 判断参数 Transitions 是否已赋值
                     * @return Transitions 是否已赋值
                     * 
                     */
                    bool TransitionsHasBeenSet() const;

                    /**
                     * 获取生命周期规则状态（1：打开；2：关闭）
                     * @return Status 生命周期规则状态（1：打开；2：关闭）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置生命周期规则状态（1：打开；2：关闭）
                     * @param _status 生命周期规则状态（1：打开；2：关闭）
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取生命周期规则当前路径具体存储量
                     * @return Summary 生命周期规则当前路径具体存储量
                     * 
                     */
                    Summary GetSummary() const;

                    /**
                     * 设置生命周期规则当前路径具体存储量
                     * @param _summary 生命周期规则当前路径具体存储量
                     * 
                     */
                    void SetSummary(const Summary& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Summary更新时间
                     * @return LastSummaryTime Summary更新时间
                     * 
                     */
                    std::string GetLastSummaryTime() const;

                    /**
                     * 设置Summary更新时间
                     * @param _lastSummaryTime Summary更新时间
                     * 
                     */
                    void SetLastSummaryTime(const std::string& _lastSummaryTime);

                    /**
                     * 判断参数 LastSummaryTime 是否已赋值
                     * @return LastSummaryTime 是否已赋值
                     * 
                     */
                    bool LastSummaryTimeHasBeenSet() const;

                private:

                    /**
                     * 生命周期规则ID
                     */
                    uint64_t m_lifeCycleRuleId;
                    bool m_lifeCycleRuleIdHasBeenSet;

                    /**
                     * 生命周期规则名称
                     */
                    std::string m_lifeCycleRuleName;
                    bool m_lifeCycleRuleNameHasBeenSet;

                    /**
                     * 生命周期规则路径（目录或文件）
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 生命周期规则转换列表
                     */
                    std::vector<Transition> m_transitions;
                    bool m_transitionsHasBeenSet;

                    /**
                     * 生命周期规则状态（1：打开；2：关闭）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 生命周期规则当前路径具体存储量
                     */
                    Summary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Summary更新时间
                     */
                    std::string m_lastSummaryTime;
                    bool m_lastSummaryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_LIFECYCLERULE_H_
