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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYSTATUS_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 申请单id及其状态
                */
                class ApplyStatus : public AbstractModel
                {
                public:
                    ApplyStatus();
                    ~ApplyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id-申请单id
                     * @return ApplicationId 集群id-申请单id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置集群id-申请单id
                     * @param _applicationId 集群id-申请单id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取处理状态-1-撤回 1-通过 2-驳回，非0状态的申请单不可改变状态。
                     * @return ApplicationStatus 处理状态-1-撤回 1-通过 2-驳回，非0状态的申请单不可改变状态。
                     * 
                     */
                    int64_t GetApplicationStatus() const;

                    /**
                     * 设置处理状态-1-撤回 1-通过 2-驳回，非0状态的申请单不可改变状态。
                     * @param _applicationStatus 处理状态-1-撤回 1-通过 2-驳回，非0状态的申请单不可改变状态。
                     * 
                     */
                    void SetApplicationStatus(const int64_t& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     * 
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取申请单类型
                     * @return ApplicationType 申请单类型
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置申请单类型
                     * @param _applicationType 申请单类型
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 集群id-申请单id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 处理状态-1-撤回 1-通过 2-驳回，非0状态的申请单不可改变状态。
                     */
                    int64_t m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * 申请单类型
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYSTATUS_H_
