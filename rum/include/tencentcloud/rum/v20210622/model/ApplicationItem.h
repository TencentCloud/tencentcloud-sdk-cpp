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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_APPLICATIONITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_APPLICATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 应用
                */
                class ApplicationItem : public AbstractModel
                {
                public:
                    ApplicationItem();
                    ~ApplicationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用 Key</p>
                     * @return ProjectKey <p>应用 Key</p>
                     * 
                     */
                    std::string GetProjectKey() const;

                    /**
                     * 设置<p>应用 Key</p>
                     * @param _projectKey <p>应用 Key</p>
                     * 
                     */
                    void SetProjectKey(const std::string& _projectKey);

                    /**
                     * 判断参数 ProjectKey 是否已赋值
                     * @return ProjectKey 是否已赋值
                     * 
                     */
                    bool ProjectKeyHasBeenSet() const;

                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
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
                     * 获取<p>业务系统名称</p>
                     * @return InstanceName <p>业务系统名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>业务系统名称</p>
                     * @param _instanceName <p>业务系统名称</p>
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
                     * 获取<p>应用名称</p>
                     * @return Name <p>应用名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _name <p>应用名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>端类型</p>
                     * @return Type <p>端类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>端类型</p>
                     * @param _type <p>端类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Desc <p>描述</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _desc <p>描述</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取<p>是否排除已忽略错误</p>
                     * @return ExcludeIgnoredErrors <p>是否排除已忽略错误</p>
                     * 
                     */
                    bool GetExcludeIgnoredErrors() const;

                    /**
                     * 设置<p>是否排除已忽略错误</p>
                     * @param _excludeIgnoredErrors <p>是否排除已忽略错误</p>
                     * 
                     */
                    void SetExcludeIgnoredErrors(const bool& _excludeIgnoredErrors);

                    /**
                     * 判断参数 ExcludeIgnoredErrors 是否已赋值
                     * @return ExcludeIgnoredErrors 是否已赋值
                     * 
                     */
                    bool ExcludeIgnoredErrorsHasBeenSet() const;

                    /**
                     * 获取<p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * @return Status <p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * @param _status <p>状态：2 运行 / 6 停止 / 7 删除</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>该应用绑定的腾讯云 APM 实例 ID 列表。空数组表示未绑定。</p>
                     * @return ApmInstanceIds <p>该应用绑定的腾讯云 APM 实例 ID 列表。空数组表示未绑定。</p>
                     * 
                     */
                    std::vector<std::string> GetApmInstanceIds() const;

                    /**
                     * 设置<p>该应用绑定的腾讯云 APM 实例 ID 列表。空数组表示未绑定。</p>
                     * @param _apmInstanceIds <p>该应用绑定的腾讯云 APM 实例 ID 列表。空数组表示未绑定。</p>
                     * 
                     */
                    void SetApmInstanceIds(const std::vector<std::string>& _apmInstanceIds);

                    /**
                     * 判断参数 ApmInstanceIds 是否已赋值
                     * @return ApmInstanceIds 是否已赋值
                     * 
                     */
                    bool ApmInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用 Key</p>
                     */
                    std::string m_projectKey;
                    bool m_projectKeyHasBeenSet;

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>业务系统名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>端类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>是否排除已忽略错误</p>
                     */
                    bool m_excludeIgnoredErrors;
                    bool m_excludeIgnoredErrorsHasBeenSet;

                    /**
                     * <p>状态：2 运行 / 6 停止 / 7 删除</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>该应用绑定的腾讯云 APM 实例 ID 列表。空数组表示未绑定。</p>
                     */
                    std::vector<std::string> m_apmInstanceIds;
                    bool m_apmInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_APPLICATIONITEM_H_
