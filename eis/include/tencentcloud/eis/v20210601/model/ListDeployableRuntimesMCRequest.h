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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_LISTDEPLOYABLERUNTIMESMCREQUEST_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_LISTDEPLOYABLERUNTIMESMCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * ListDeployableRuntimesMC请求参数结构体
                */
                class ListDeployableRuntimesMCRequest : public AbstractModel
                {
                public:
                    ListDeployableRuntimesMCRequest();
                    ~ListDeployableRuntimesMCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id
                     * @return ProjectId 应用id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置应用id
                     * @param _projectId 应用id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取版本类型 0-pro 1-lite
                     * @return PlanType 版本类型 0-pro 1-lite
                     * 
                     */
                    int64_t GetPlanType() const;

                    /**
                     * 设置版本类型 0-pro 1-lite
                     * @param _planType 版本类型 0-pro 1-lite
                     * 
                     */
                    void SetPlanType(const int64_t& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取0：应用集成，1：API，2：ETL
                     * @return RuntimeClass 0：应用集成，1：API，2：ETL
                     * 
                     */
                    int64_t GetRuntimeClass() const;

                    /**
                     * 设置0：应用集成，1：API，2：ETL
                     * @param _runtimeClass 0：应用集成，1：API，2：ETL
                     * 
                     */
                    void SetRuntimeClass(const int64_t& _runtimeClass);

                    /**
                     * 判断参数 RuntimeClass 是否已赋值
                     * @return RuntimeClass 是否已赋值
                     * 
                     */
                    bool RuntimeClassHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例id
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 版本类型 0-pro 1-lite
                     */
                    int64_t m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 0：应用集成，1：API，2：ETL
                     */
                    int64_t m_runtimeClass;
                    bool m_runtimeClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_LISTDEPLOYABLERUNTIMESMCREQUEST_H_
