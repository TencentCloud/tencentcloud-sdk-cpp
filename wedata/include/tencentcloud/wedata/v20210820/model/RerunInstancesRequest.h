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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RERUNINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RERUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RerunInstances请求参数结构体
                */
                class RerunInstancesRequest : public AbstractModel
                {
                public:
                    RerunInstancesRequest();
                    ~RerunInstancesRequest() = default;
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
                     * 获取实例嵌套集合
                     * @return Instances 实例嵌套集合
                     * 
                     */
                    std::vector<InstanceInfo> GetInstances() const;

                    /**
                     * 设置实例嵌套集合
                     * @param _instances 实例嵌套集合
                     * 
                     */
                    void SetInstances(const std::vector<InstanceInfo>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取检查父任务类型, true: 检查父任务; false: 不检查父任务
                     * @return CheckFather 检查父任务类型, true: 检查父任务; false: 不检查父任务
                     * 
                     */
                    bool GetCheckFather() const;

                    /**
                     * 设置检查父任务类型, true: 检查父任务; false: 不检查父任务
                     * @param _checkFather 检查父任务类型, true: 检查父任务; false: 不检查父任务
                     * 
                     */
                    void SetCheckFather(const bool& _checkFather);

                    /**
                     * 判断参数 CheckFather 是否已赋值
                     * @return CheckFather 是否已赋值
                     * 
                     */
                    bool CheckFatherHasBeenSet() const;

                    /**
                     * 获取重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子
                     * @return RerunType 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子
                     * 
                     */
                    std::string GetRerunType() const;

                    /**
                     * 设置重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子
                     * @param _rerunType 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子
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
                     * 获取实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖
                     * @return DependentWay 实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖
                     * 
                     */
                    std::string GetDependentWay() const;

                    /**
                     * 设置实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖
                     * @param _dependentWay 实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖
                     * 
                     */
                    void SetDependentWay(const std::string& _dependentWay);

                    /**
                     * 判断参数 DependentWay 是否已赋值
                     * @return DependentWay 是否已赋值
                     * 
                     */
                    bool DependentWayHasBeenSet() const;

                    /**
                     * 获取重跑忽略事件监听与否
                     * @return SkipEventListening 重跑忽略事件监听与否
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置重跑忽略事件监听与否
                     * @param _skipEventListening 重跑忽略事件监听与否
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
                     * 获取下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * @return SonInstanceType 下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * 
                     */
                    std::string GetSonInstanceType() const;

                    /**
                     * 设置下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * @param _sonInstanceType 下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * 
                     */
                    void SetSonInstanceType(const std::string& _sonInstanceType);

                    /**
                     * 判断参数 SonInstanceType 是否已赋值
                     * @return SonInstanceType 是否已赋值
                     * 
                     */
                    bool SonInstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例嵌套集合
                     */
                    std::vector<InstanceInfo> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 检查父任务类型, true: 检查父任务; false: 不检查父任务
                     */
                    bool m_checkFather;
                    bool m_checkFatherHasBeenSet;

                    /**
                     * 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子
                     */
                    std::string m_rerunType;
                    bool m_rerunTypeHasBeenSet;

                    /**
                     * 实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖
                     */
                    std::string m_dependentWay;
                    bool m_dependentWayHasBeenSet;

                    /**
                     * 重跑忽略事件监听与否
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * 下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     */
                    std::string m_sonInstanceType;
                    bool m_sonInstanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RERUNINSTANCESREQUEST_H_
