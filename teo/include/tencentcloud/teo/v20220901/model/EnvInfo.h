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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupVersionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 环境信息。
                */
                class EnvInfo : public AbstractModel
                {
                public:
                    EnvInfo();
                    ~EnvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境 ID。
                     * @return EnvId 环境 ID。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 ID。
                     * @param _envId 环境 ID。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取环境类型，取值有：
<li>production: 生产环境；</li><li>staging: 测试环境。</li>
                     * @return EnvType 环境类型，取值有：
<li>production: 生产环境；</li><li>staging: 测试环境。</li>
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置环境类型，取值有：
<li>production: 生产环境；</li><li>staging: 测试环境。</li>
                     * @param _envType 环境类型，取值有：
<li>production: 生产环境；</li><li>staging: 测试环境。</li>
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取环境状态，取值有：
<li>creating：创建中；</li>
<li>running：稳定运行中，可进行版本变更；</li>
<li>version_deploying：版本部署中，不能进行新的变更。</li>
                     * @return Status 环境状态，取值有：
<li>creating：创建中；</li>
<li>running：稳定运行中，可进行版本变更；</li>
<li>version_deploying：版本部署中，不能进行新的变更。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置环境状态，取值有：
<li>creating：创建中；</li>
<li>running：稳定运行中，可进行版本变更；</li>
<li>version_deploying：版本部署中，不能进行新的变更。</li>
                     * @param _status 环境状态，取值有：
<li>creating：创建中；</li>
<li>running：稳定运行中，可进行版本变更；</li>
<li>version_deploying：版本部署中，不能进行新的变更。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前环境的配置生效范围：
<li>当 EnvType 取值为 production 时，该参数值为 ["ALL"]，代表全网生效；</li>
<li>当 EnvType 取值为 staging 时，会返回测试节点 IP，可用于绑定 host 测试。</li>
                     * @return Scope 当前环境的配置生效范围：
<li>当 EnvType 取值为 production 时，该参数值为 ["ALL"]，代表全网生效；</li>
<li>当 EnvType 取值为 staging 时，会返回测试节点 IP，可用于绑定 host 测试。</li>
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置当前环境的配置生效范围：
<li>当 EnvType 取值为 production 时，该参数值为 ["ALL"]，代表全网生效；</li>
<li>当 EnvType 取值为 staging 时，会返回测试节点 IP，可用于绑定 host 测试。</li>
                     * @param _scope 当前环境的配置生效范围：
<li>当 EnvType 取值为 production 时，该参数值为 ["ALL"]，代表全网生效；</li>
<li>当 EnvType 取值为 staging 时，会返回测试节点 IP，可用于绑定 host 测试。</li>
                     * 
                     */
                    void SetScope(const std::vector<std::string>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取当前环境中各配置组实际生效的版本，根据 Status 的取值有以下两种情况：
<li>当 Status 取值为 version_deploying 时，本字段返回的值为执行变更动作之前生效的版本，即新版本部署期间，实际生效的版本为执行变更动作之前的版本；</li>
<li>当 Status 取值为 running 时，本字段返回的值即为当前实际生效的版本。</li>
                     * @return CurrentConfigGroupVersionInfos 当前环境中各配置组实际生效的版本，根据 Status 的取值有以下两种情况：
<li>当 Status 取值为 version_deploying 时，本字段返回的值为执行变更动作之前生效的版本，即新版本部署期间，实际生效的版本为执行变更动作之前的版本；</li>
<li>当 Status 取值为 running 时，本字段返回的值即为当前实际生效的版本。</li>
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetCurrentConfigGroupVersionInfos() const;

                    /**
                     * 设置当前环境中各配置组实际生效的版本，根据 Status 的取值有以下两种情况：
<li>当 Status 取值为 version_deploying 时，本字段返回的值为执行变更动作之前生效的版本，即新版本部署期间，实际生效的版本为执行变更动作之前的版本；</li>
<li>当 Status 取值为 running 时，本字段返回的值即为当前实际生效的版本。</li>
                     * @param _currentConfigGroupVersionInfos 当前环境中各配置组实际生效的版本，根据 Status 的取值有以下两种情况：
<li>当 Status 取值为 version_deploying 时，本字段返回的值为执行变更动作之前生效的版本，即新版本部署期间，实际生效的版本为执行变更动作之前的版本；</li>
<li>当 Status 取值为 running 时，本字段返回的值即为当前实际生效的版本。</li>
                     * 
                     */
                    void SetCurrentConfigGroupVersionInfos(const std::vector<ConfigGroupVersionInfo>& _currentConfigGroupVersionInfos);

                    /**
                     * 判断参数 CurrentConfigGroupVersionInfos 是否已赋值
                     * @return CurrentConfigGroupVersionInfos 是否已赋值
                     * 
                     */
                    bool CurrentConfigGroupVersionInfosHasBeenSet() const;

                    /**
                     * 获取创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return CreateTime 创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _createTime 创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
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
                     * 获取更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return UpdateTime 更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _updateTime 更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 环境 ID。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 环境类型，取值有：
<li>production: 生产环境；</li><li>staging: 测试环境。</li>
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 环境状态，取值有：
<li>creating：创建中；</li>
<li>running：稳定运行中，可进行版本变更；</li>
<li>version_deploying：版本部署中，不能进行新的变更。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前环境的配置生效范围：
<li>当 EnvType 取值为 production 时，该参数值为 ["ALL"]，代表全网生效；</li>
<li>当 EnvType 取值为 staging 时，会返回测试节点 IP，可用于绑定 host 测试。</li>
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 当前环境中各配置组实际生效的版本，根据 Status 的取值有以下两种情况：
<li>当 Status 取值为 version_deploying 时，本字段返回的值为执行变更动作之前生效的版本，即新版本部署期间，实际生效的版本为执行变更动作之前的版本；</li>
<li>当 Status 取值为 running 时，本字段返回的值即为当前实际生效的版本。</li>
                     */
                    std::vector<ConfigGroupVersionInfo> m_currentConfigGroupVersionInfos;
                    bool m_currentConfigGroupVersionInfosHasBeenSet;

                    /**
                     * 创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_
