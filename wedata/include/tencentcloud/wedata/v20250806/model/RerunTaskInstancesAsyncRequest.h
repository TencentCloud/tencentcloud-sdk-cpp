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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTASKINSTANCESASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTASKINSTANCESASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/KVMap.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * RerunTaskInstancesAsync请求参数结构体
                */
                class RerunTaskInstancesAsyncRequest : public AbstractModel
                {
                public:
                    RerunTaskInstancesAsyncRequest();
                    ~RerunTaskInstancesAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例id列表,可以从ListInstances中获取
                     * @return InstanceKeyList 实例id列表,可以从ListInstances中获取
                     * 
                     */
                    std::vector<std::string> GetInstanceKeyList() const;

                    /**
                     * 设置实例id列表,可以从ListInstances中获取
                     * @param _instanceKeyList 实例id列表,可以从ListInstances中获取
                     * 
                     */
                    void SetInstanceKeyList(const std::vector<std::string>& _instanceKeyList);

                    /**
                     * 判断参数 InstanceKeyList 是否已赋值
                     * @return InstanceKeyList 是否已赋值
                     * 
                     */
                    bool InstanceKeyListHasBeenSet() const;

                    /**
                     * 获取重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子，默认1
                     * @return RerunType 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子，默认1
                     * 
                     */
                    std::string GetRerunType() const;

                    /**
                     * 设置重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子，默认1
                     * @param _rerunType 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子，默认1
                     * 
                     */
                    void SetRerunType(const std::string& _rerunType);

                    /**
                     * 判断参数 RerunType 是否已赋值
                     * @return RerunType 是否已赋值
                     * 
                     */
                    bool RerunTypeHasBeenSet() const;

                    /**
                     * 获取是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查），默认NONE
                     * @return CheckParentType 是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查），默认NONE
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查），默认NONE
                     * @param _checkParentType 是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查），默认NONE
                     * 
                     */
                    void SetCheckParentType(const std::string& _checkParentType);

                    /**
                     * 判断参数 CheckParentType 是否已赋值
                     * @return CheckParentType 是否已赋值
                     * 
                     */
                    bool CheckParentTypeHasBeenSet() const;

                    /**
                     * 获取下游实例范围 WORKFLOW: 所在工作流 PROJECT: 所在项目 ALL: 所有跨工作流依赖的项目，默认WORKFLOW
                     * @return SonRangeType 下游实例范围 WORKFLOW: 所在工作流 PROJECT: 所在项目 ALL: 所有跨工作流依赖的项目，默认WORKFLOW
                     * 
                     */
                    std::string GetSonRangeType() const;

                    /**
                     * 设置下游实例范围 WORKFLOW: 所在工作流 PROJECT: 所在项目 ALL: 所有跨工作流依赖的项目，默认WORKFLOW
                     * @param _sonRangeType 下游实例范围 WORKFLOW: 所在工作流 PROJECT: 所在项目 ALL: 所有跨工作流依赖的项目，默认WORKFLOW
                     * 
                     */
                    void SetSonRangeType(const std::string& _sonRangeType);

                    /**
                     * 判断参数 SonRangeType 是否已赋值
                     * @return SonRangeType 是否已赋值
                     * 
                     */
                    bool SonRangeTypeHasBeenSet() const;

                    /**
                     * 获取重跑是否忽略事件监听
                     * @return SkipEventListening 重跑是否忽略事件监听
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置重跑是否忽略事件监听
                     * @param _skipEventListening 重跑是否忽略事件监听
                     * 
                     */
                    void SetSkipEventListening(const bool& _skipEventListening);

                    /**
                     * 判断参数 SkipEventListening 是否已赋值
                     * @return SkipEventListening 是否已赋值
                     * 
                     */
                    bool SkipEventListeningHasBeenSet() const;

                    /**
                     * 获取自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * @return RedefineParallelNum 自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * 
                     */
                    int64_t GetRedefineParallelNum() const;

                    /**
                     * 设置自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * @param _redefineParallelNum 自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * 
                     */
                    void SetRedefineParallelNum(const int64_t& _redefineParallelNum);

                    /**
                     * 判断参数 RedefineParallelNum 是否已赋值
                     * @return RedefineParallelNum 是否已赋值
                     * 
                     */
                    bool RedefineParallelNumHasBeenSet() const;

                    /**
                     * 获取自定义的工作流自依赖: yes开启，no关闭，如果不配置，则使用工作流原有自依赖
                     * @return RedefineSelfWorkflowDependency 自定义的工作流自依赖: yes开启，no关闭，如果不配置，则使用工作流原有自依赖
                     * 
                     */
                    std::string GetRedefineSelfWorkflowDependency() const;

                    /**
                     * 设置自定义的工作流自依赖: yes开启，no关闭，如果不配置，则使用工作流原有自依赖
                     * @param _redefineSelfWorkflowDependency 自定义的工作流自依赖: yes开启，no关闭，如果不配置，则使用工作流原有自依赖
                     * 
                     */
                    void SetRedefineSelfWorkflowDependency(const std::string& _redefineSelfWorkflowDependency);

                    /**
                     * 判断参数 RedefineSelfWorkflowDependency 是否已赋值
                     * @return RedefineSelfWorkflowDependency 是否已赋值
                     * 
                     */
                    bool RedefineSelfWorkflowDependencyHasBeenSet() const;

                    /**
                     * 获取重跑实例自定义参数
                     * @return RedefineParamList 重跑实例自定义参数
                     * 
                     */
                    KVMap GetRedefineParamList() const;

                    /**
                     * 设置重跑实例自定义参数
                     * @param _redefineParamList 重跑实例自定义参数
                     * 
                     */
                    void SetRedefineParamList(const KVMap& _redefineParamList);

                    /**
                     * 判断参数 RedefineParamList 是否已赋值
                     * @return RedefineParamList 是否已赋值
                     * 
                     */
                    bool RedefineParamListHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例id列表,可以从ListInstances中获取
                     */
                    std::vector<std::string> m_instanceKeyList;
                    bool m_instanceKeyListHasBeenSet;

                    /**
                     * 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子，默认1
                     */
                    std::string m_rerunType;
                    bool m_rerunTypeHasBeenSet;

                    /**
                     * 是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查），默认NONE
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * 下游实例范围 WORKFLOW: 所在工作流 PROJECT: 所在项目 ALL: 所有跨工作流依赖的项目，默认WORKFLOW
                     */
                    std::string m_sonRangeType;
                    bool m_sonRangeTypeHasBeenSet;

                    /**
                     * 重跑是否忽略事件监听
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * 自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     */
                    int64_t m_redefineParallelNum;
                    bool m_redefineParallelNumHasBeenSet;

                    /**
                     * 自定义的工作流自依赖: yes开启，no关闭，如果不配置，则使用工作流原有自依赖
                     */
                    std::string m_redefineSelfWorkflowDependency;
                    bool m_redefineSelfWorkflowDependencyHasBeenSet;

                    /**
                     * 重跑实例自定义参数
                     */
                    KVMap m_redefineParamList;
                    bool m_redefineParamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTASKINSTANCESASYNCREQUEST_H_
