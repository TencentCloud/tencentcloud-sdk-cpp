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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PROJECTENTRYEX_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PROJECTENTRYEX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 项目详情
                */
                class ProjectEntryEx : public AbstractModel
                {
                public:
                    ProjectEntryEx();
                    ~ProjectEntryEx() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目描述
                     * @return ProjectDesc 项目描述
                     * 
                     */
                    std::string GetProjectDesc() const;

                    /**
                     * 设置项目描述
                     * @param _projectDesc 项目描述
                     * 
                     */
                    void SetProjectDesc(const std::string& _projectDesc);

                    /**
                     * 判断参数 ProjectDesc 是否已赋值
                     * @return ProjectDesc 是否已赋值
                     * 
                     */
                    bool ProjectDescHasBeenSet() const;

                    /**
                     * 获取项目创建时间，unix时间戳
                     * @return CreateTime 项目创建时间，unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置项目创建时间，unix时间戳
                     * @param _createTime 项目创建时间，unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目更新时间，unix时间戳
                     * @return UpdateTime 项目更新时间，unix时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置项目更新时间，unix时间戳
                     * @param _updateTime 项目更新时间，unix时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取产品数量
                     * @return ProductCount 产品数量
                     * 
                     */
                    uint64_t GetProductCount() const;

                    /**
                     * 设置产品数量
                     * @param _productCount 产品数量
                     * 
                     */
                    void SetProductCount(const uint64_t& _productCount);

                    /**
                     * 判断参数 ProductCount 是否已赋值
                     * @return ProductCount 是否已赋值
                     * 
                     */
                    bool ProductCountHasBeenSet() const;

                    /**
                     * 获取NativeApp数量
                     * @return NativeAppCount NativeApp数量
                     * 
                     */
                    uint64_t GetNativeAppCount() const;

                    /**
                     * 设置NativeApp数量
                     * @param _nativeAppCount NativeApp数量
                     * 
                     */
                    void SetNativeAppCount(const uint64_t& _nativeAppCount);

                    /**
                     * 判断参数 NativeAppCount 是否已赋值
                     * @return NativeAppCount 是否已赋值
                     * 
                     */
                    bool NativeAppCountHasBeenSet() const;

                    /**
                     * 获取WebApp数量
                     * @return WebAppCount WebApp数量
                     * 
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 设置WebApp数量
                     * @param _webAppCount WebApp数量
                     * 
                     */
                    void SetWebAppCount(const uint64_t& _webAppCount);

                    /**
                     * 判断参数 WebAppCount 是否已赋值
                     * @return WebAppCount 是否已赋值
                     * 
                     */
                    bool WebAppCountHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取应用数量
                     * @return ApplicationCount 应用数量
                     * 
                     */
                    uint64_t GetApplicationCount() const;

                    /**
                     * 设置应用数量
                     * @param _applicationCount 应用数量
                     * 
                     */
                    void SetApplicationCount(const uint64_t& _applicationCount);

                    /**
                     * 判断参数 ApplicationCount 是否已赋值
                     * @return ApplicationCount 是否已赋值
                     * 
                     */
                    bool ApplicationCountHasBeenSet() const;

                    /**
                     * 获取设备注册总数
                     * @return DeviceCount 设备注册总数
                     * 
                     */
                    uint64_t GetDeviceCount() const;

                    /**
                     * 设置设备注册总数
                     * @param _deviceCount 设备注册总数
                     * 
                     */
                    void SetDeviceCount(const uint64_t& _deviceCount);

                    /**
                     * 判断参数 DeviceCount 是否已赋值
                     * @return DeviceCount 是否已赋值
                     * 
                     */
                    bool DeviceCountHasBeenSet() const;

                    /**
                     * 获取是否开通物联使能
                     * @return EnableOpenState 是否开通物联使能
                     * 
                     */
                    uint64_t GetEnableOpenState() const;

                    /**
                     * 设置是否开通物联使能
                     * @param _enableOpenState 是否开通物联使能
                     * 
                     */
                    void SetEnableOpenState(const uint64_t& _enableOpenState);

                    /**
                     * 判断参数 EnableOpenState 是否已赋值
                     * @return EnableOpenState 是否已赋值
                     * 
                     */
                    bool EnableOpenStateHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目描述
                     */
                    std::string m_projectDesc;
                    bool m_projectDescHasBeenSet;

                    /**
                     * 项目创建时间，unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目更新时间，unix时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 产品数量
                     */
                    uint64_t m_productCount;
                    bool m_productCountHasBeenSet;

                    /**
                     * NativeApp数量
                     */
                    uint64_t m_nativeAppCount;
                    bool m_nativeAppCountHasBeenSet;

                    /**
                     * WebApp数量
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用数量
                     */
                    uint64_t m_applicationCount;
                    bool m_applicationCountHasBeenSet;

                    /**
                     * 设备注册总数
                     */
                    uint64_t m_deviceCount;
                    bool m_deviceCountHasBeenSet;

                    /**
                     * 是否开通物联使能
                     */
                    uint64_t m_enableOpenState;
                    bool m_enableOpenStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PROJECTENTRYEX_H_
