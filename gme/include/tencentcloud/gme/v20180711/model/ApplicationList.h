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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONLIST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ServiceStatus.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 获取应用列表返回
                */
                class ApplicationList : public AbstractModel
                {
                public:
                    ApplicationList();
                    ~ApplicationList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务开关状态
                     * @return ServiceConf 服务开关状态
                     * 
                     */
                    ServiceStatus GetServiceConf() const;

                    /**
                     * 设置服务开关状态
                     * @param _serviceConf 服务开关状态
                     * 
                     */
                    void SetServiceConf(const ServiceStatus& _serviceConf);

                    /**
                     * 判断参数 ServiceConf 是否已赋值
                     * @return ServiceConf 是否已赋值
                     * 
                     */
                    bool ServiceConfHasBeenSet() const;

                    /**
                     * 获取应用ID(AppID)
                     * @return BizId 应用ID(AppID)
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID(AppID)
                     * @param _bizId 应用ID(AppID)
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return AppName 应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
                     * @param _appName 应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取项目ID，默认为0
                     * @return ProjectId 项目ID，默认为0
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID，默认为0
                     * @param _projectId 项目ID，默认为0
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取应用状态，返回0表示正常，1表示关闭，2表示欠费停服，3表示欠费回收
                     * @return AppStatus 应用状态，返回0表示正常，1表示关闭，2表示欠费停服，3表示欠费回收
                     * 
                     */
                    uint64_t GetAppStatus() const;

                    /**
                     * 设置应用状态，返回0表示正常，1表示关闭，2表示欠费停服，3表示欠费回收
                     * @param _appStatus 应用状态，返回0表示正常，1表示关闭，2表示欠费停服，3表示欠费回收
                     * 
                     */
                    void SetAppStatus(const uint64_t& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取创建时间，Unix时间戳格式
                     * @return CreateTime 创建时间，Unix时间戳格式
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，Unix时间戳格式
                     * @param _createTime 创建时间，Unix时间戳格式
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
                     * 获取应用类型，无需关注此数值
                     * @return AppType 应用类型，无需关注此数值
                     * 
                     */
                    uint64_t GetAppType() const;

                    /**
                     * 设置应用类型，无需关注此数值
                     * @param _appType 应用类型，无需关注此数值
                     * 
                     */
                    void SetAppType(const uint64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                private:

                    /**
                     * 服务开关状态
                     */
                    ServiceStatus m_serviceConf;
                    bool m_serviceConfHasBeenSet;

                    /**
                     * 应用ID(AppID)
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 项目ID，默认为0
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 应用状态，返回0表示正常，1表示关闭，2表示欠费停服，3表示欠费回收
                     */
                    uint64_t m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * 创建时间，Unix时间戳格式
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 应用类型，无需关注此数值
                     */
                    uint64_t m_appType;
                    bool m_appTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONLIST_H_
