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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改实例操作。如填写：
- rename：表示实例重命名。
- modifyProject：修改实例所属项目。
- modifyAutoRenew：修改实例续费标记。
                     * @return Operation 修改实例操作。如填写：
- rename：表示实例重命名。
- modifyProject：修改实例所属项目。
- modifyAutoRenew：修改实例续费标记。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置修改实例操作。如填写：
- rename：表示实例重命名。
- modifyProject：修改实例所属项目。
- modifyAutoRenew：修改实例续费标记。
                     * @param _operation 修改实例操作。如填写：
- rename：表示实例重命名。
- modifyProject：修改实例所属项目。
- modifyAutoRenew：修改实例续费标记。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。每次请求的实例数量的上限为10。
                     * @return InstanceIds 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。每次请求的实例数量的上限为10。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。每次请求的实例数量的上限为10。
                     * @param _instanceIds 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。每次请求的实例数量的上限为10。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例的新名称。
                     * @return InstanceNames 实例的新名称。
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例的新名称。
                     * @param _instanceNames 实例的新名称。
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取项目 ID，请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * @return ProjectId 项目 ID，请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * @param _projectId 项目 ID，请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
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
                     * 获取自动续费标识。
- 0：默认状态，指手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * @return AutoRenews 自动续费标识。
- 0：默认状态，指手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * 
                     */
                    std::vector<int64_t> GetAutoRenews() const;

                    /**
                     * 设置自动续费标识。
- 0：默认状态，指手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * @param _autoRenews 自动续费标识。
- 0：默认状态，指手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * 
                     */
                    void SetAutoRenews(const std::vector<int64_t>& _autoRenews);

                    /**
                     * 判断参数 AutoRenews 是否已赋值
                     * @return AutoRenews 是否已赋值
                     * 
                     */
                    bool AutoRenewsHasBeenSet() const;

                    /**
                     * 获取目前在废弃中，存量用户还可以使用，建议新用户使用 InstanceIds。
                     * @return InstanceId 目前在废弃中，存量用户还可以使用，建议新用户使用 InstanceIds。
                     * @deprecated
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置目前在废弃中，存量用户还可以使用，建议新用户使用 InstanceIds。
                     * @param _instanceId 目前在废弃中，存量用户还可以使用，建议新用户使用 InstanceIds。
                     * @deprecated
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取已经废弃
                     * @return InstanceName 已经废弃
                     * @deprecated
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置已经废弃
                     * @param _instanceName 已经废弃
                     * @deprecated
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * @deprecated
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取已经废弃。
                     * @return AutoRenew 已经废弃。
                     * @deprecated
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置已经废弃。
                     * @param _autoRenew 已经废弃。
                     * @deprecated
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * @deprecated
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * 修改实例操作。如填写：
- rename：表示实例重命名。
- modifyProject：修改实例所属项目。
- modifyAutoRenew：修改实例续费标记。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。每次请求的实例数量的上限为10。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例的新名称。
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 项目 ID，请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 自动续费标识。
- 0：默认状态，指手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     */
                    std::vector<int64_t> m_autoRenews;
                    bool m_autoRenewsHasBeenSet;

                    /**
                     * 目前在废弃中，存量用户还可以使用，建议新用户使用 InstanceIds。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 已经废弃
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 已经废弃。
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREQUEST_H_
