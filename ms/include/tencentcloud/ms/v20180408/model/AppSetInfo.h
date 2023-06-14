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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_APPSETINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_APPSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 加固后app的信息，包含基本信息和加固信息
                */
                class AppSetInfo : public AbstractModel
                {
                public:
                    AppSetInfo();
                    ~AppSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务唯一标识
                     * @return ItemId 任务唯一标识
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置任务唯一标识
                     * @param _itemId 任务唯一标识
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取app的名称
                     * @return AppName app的名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app的名称
                     * @param _appName app的名称
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
                     * 获取app的包名
                     * @return AppPkgName app的包名
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置app的包名
                     * @param _appPkgName app的包名
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取app的版本号
                     * @return AppVersion app的版本号
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置app的版本号
                     * @param _appVersion app的版本号
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取app的md5
                     * @return AppMd5 app的md5
                     * 
                     */
                    std::string GetAppMd5() const;

                    /**
                     * 设置app的md5
                     * @param _appMd5 app的md5
                     * 
                     */
                    void SetAppMd5(const std::string& _appMd5);

                    /**
                     * 判断参数 AppMd5 是否已赋值
                     * @return AppMd5 是否已赋值
                     * 
                     */
                    bool AppMd5HasBeenSet() const;

                    /**
                     * 获取app的大小
                     * @return AppSize app的大小
                     * 
                     */
                    uint64_t GetAppSize() const;

                    /**
                     * 设置app的大小
                     * @param _appSize app的大小
                     * 
                     */
                    void SetAppSize(const uint64_t& _appSize);

                    /**
                     * 判断参数 AppSize 是否已赋值
                     * @return AppSize 是否已赋值
                     * 
                     */
                    bool AppSizeHasBeenSet() const;

                    /**
                     * 获取加固服务版本
                     * @return ServiceEdition 加固服务版本
                     * 
                     */
                    std::string GetServiceEdition() const;

                    /**
                     * 设置加固服务版本
                     * @param _serviceEdition 加固服务版本
                     * 
                     */
                    void SetServiceEdition(const std::string& _serviceEdition);

                    /**
                     * 判断参数 ServiceEdition 是否已赋值
                     * @return ServiceEdition 是否已赋值
                     * 
                     */
                    bool ServiceEditionHasBeenSet() const;

                    /**
                     * 获取加固结果返回码
                     * @return ShieldCode 加固结果返回码
                     * 
                     */
                    uint64_t GetShieldCode() const;

                    /**
                     * 设置加固结果返回码
                     * @param _shieldCode 加固结果返回码
                     * 
                     */
                    void SetShieldCode(const uint64_t& _shieldCode);

                    /**
                     * 判断参数 ShieldCode 是否已赋值
                     * @return ShieldCode 是否已赋值
                     * 
                     */
                    bool ShieldCodeHasBeenSet() const;

                    /**
                     * 获取加固后的APP下载地址
                     * @return AppUrl 加固后的APP下载地址
                     * 
                     */
                    std::string GetAppUrl() const;

                    /**
                     * 设置加固后的APP下载地址
                     * @param _appUrl 加固后的APP下载地址
                     * 
                     */
                    void SetAppUrl(const std::string& _appUrl);

                    /**
                     * 判断参数 AppUrl 是否已赋值
                     * @return AppUrl 是否已赋值
                     * 
                     */
                    bool AppUrlHasBeenSet() const;

                    /**
                     * 获取任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @return TaskStatus 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @param _taskStatus 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取请求的客户端ip
                     * @return ClientIp 请求的客户端ip
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置请求的客户端ip
                     * @param _clientIp 请求的客户端ip
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取提交加固时间
                     * @return TaskTime 提交加固时间
                     * 
                     */
                    uint64_t GetTaskTime() const;

                    /**
                     * 设置提交加固时间
                     * @param _taskTime 提交加固时间
                     * 
                     */
                    void SetTaskTime(const uint64_t& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     * 
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取app的图标url
                     * @return AppIconUrl app的图标url
                     * 
                     */
                    std::string GetAppIconUrl() const;

                    /**
                     * 设置app的图标url
                     * @param _appIconUrl app的图标url
                     * 
                     */
                    void SetAppIconUrl(const std::string& _appIconUrl);

                    /**
                     * 判断参数 AppIconUrl 是否已赋值
                     * @return AppIconUrl 是否已赋值
                     * 
                     */
                    bool AppIconUrlHasBeenSet() const;

                    /**
                     * 获取加固后app的md5
                     * @return ShieldMd5 加固后app的md5
                     * 
                     */
                    std::string GetShieldMd5() const;

                    /**
                     * 设置加固后app的md5
                     * @param _shieldMd5 加固后app的md5
                     * 
                     */
                    void SetShieldMd5(const std::string& _shieldMd5);

                    /**
                     * 判断参数 ShieldMd5 是否已赋值
                     * @return ShieldMd5 是否已赋值
                     * 
                     */
                    bool ShieldMd5HasBeenSet() const;

                    /**
                     * 获取加固后app的大小
                     * @return ShieldSize 加固后app的大小
                     * 
                     */
                    uint64_t GetShieldSize() const;

                    /**
                     * 设置加固后app的大小
                     * @param _shieldSize 加固后app的大小
                     * 
                     */
                    void SetShieldSize(const uint64_t& _shieldSize);

                    /**
                     * 判断参数 ShieldSize 是否已赋值
                     * @return ShieldSize 是否已赋值
                     * 
                     */
                    bool ShieldSizeHasBeenSet() const;

                private:

                    /**
                     * 任务唯一标识
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * app的名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app的包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * app的版本号
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * app的md5
                     */
                    std::string m_appMd5;
                    bool m_appMd5HasBeenSet;

                    /**
                     * app的大小
                     */
                    uint64_t m_appSize;
                    bool m_appSizeHasBeenSet;

                    /**
                     * 加固服务版本
                     */
                    std::string m_serviceEdition;
                    bool m_serviceEditionHasBeenSet;

                    /**
                     * 加固结果返回码
                     */
                    uint64_t m_shieldCode;
                    bool m_shieldCodeHasBeenSet;

                    /**
                     * 加固后的APP下载地址
                     */
                    std::string m_appUrl;
                    bool m_appUrlHasBeenSet;

                    /**
                     * 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 请求的客户端ip
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 提交加固时间
                     */
                    uint64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * app的图标url
                     */
                    std::string m_appIconUrl;
                    bool m_appIconUrlHasBeenSet;

                    /**
                     * 加固后app的md5
                     */
                    std::string m_shieldMd5;
                    bool m_shieldMd5HasBeenSet;

                    /**
                     * 加固后app的大小
                     */
                    uint64_t m_shieldSize;
                    bool m_shieldSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_APPSETINFO_H_
