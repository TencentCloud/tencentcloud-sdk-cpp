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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实例详情
                */
                class AuditInstanceInfo : public AbstractModel
                {
                public:
                    AuditInstanceInfo();
                    ~AuditInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appId。
                     * @return AppId appId。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appId。
                     * @param _appId appId。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取审计状态，0-未开通审计；1-已开通审计。
                     * @return AuditStatus 审计状态，0-未开通审计；1-已开通审计。
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置审计状态，0-未开通审计；1-已开通审计。
                     * @param _auditStatus 审计状态，0-未开通审计；1-已开通审计。
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取实例Id。
                     * @return InstanceId 实例Id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id。
                     * @param _instanceId 实例Id。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取项目Id。
                     * @return ProjectId 项目Id。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id。
                     * @param _projectId 项目Id。
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
                     * 获取实例所在地域。
                     * @return Region 实例所在地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域。
                     * @param _region 实例所在地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资源Tags。
                     * @return ResourceTags 资源Tags。
                     * 
                     */
                    std::vector<std::string> GetResourceTags() const;

                    /**
                     * 设置资源Tags。
                     * @param _resourceTags 资源Tags。
                     * 
                     */
                    void SetResourceTags(const std::vector<std::string>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * appId。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 审计状态，0-未开通审计；1-已开通审计。
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 实例Id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 项目Id。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例所在地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资源Tags。
                     */
                    std::vector<std::string> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCEINFO_H_
