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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEAPPSCANTASKREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEAPPSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * CreateAppScanTask请求参数结构体
                */
                class CreateAppScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAppScanTaskRequest();
                    ~CreateAppScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型, 0:基础版, 1:专家版, 2:本地化
                     * @return TaskType 任务类型, 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型, 0:基础版, 1:专家版, 2:本地化
                     * @param _taskType 任务类型, 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * @return Source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * @param _source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取小程序AppID
                     * @return AppPackage 小程序AppID
                     * 
                     */
                    std::string GetAppPackage() const;

                    /**
                     * 设置小程序AppID
                     * @param _appPackage 小程序AppID
                     * 
                     */
                    void SetAppPackage(const std::string& _appPackage);

                    /**
                     * 判断参数 AppPackage 是否已赋值
                     * @return AppPackage 是否已赋值
                     * 
                     */
                    bool AppPackageHasBeenSet() const;

                    /**
                     * 获取应用平台, 0:android, 1:ios, 2:小程序
                     * @return Platform 应用平台, 0:android, 1:ios, 2:小程序
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置应用平台, 0:android, 1:ios, 2:小程序
                     * @param _platform 应用平台, 0:android, 1:ios, 2:小程序
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取小程序名称
                     * @return AppName 小程序名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置小程序名称
                     * @param _appName 小程序名称
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
                     * 获取小程序版本
                     * @return AppVersion 小程序版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置小程序版本
                     * @param _appVersion 小程序版本
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
                     * 获取联系人信息
                     * @return ContactName 联系人信息
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置联系人信息
                     * @param _contactName 联系人信息
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取联系电话
                     * @return TelNumber 联系电话
                     * 
                     */
                    std::string GetTelNumber() const;

                    /**
                     * 设置联系电话
                     * @param _telNumber 联系电话
                     * 
                     */
                    void SetTelNumber(const std::string& _telNumber);

                    /**
                     * 判断参数 TelNumber 是否已赋值
                     * @return TelNumber 是否已赋值
                     * 
                     */
                    bool TelNumberHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return CorpName 公司名称
                     * 
                     */
                    std::string GetCorpName() const;

                    /**
                     * 设置公司名称
                     * @param _corpName 公司名称
                     * 
                     */
                    void SetCorpName(const std::string& _corpName);

                    /**
                     * 判断参数 CorpName 是否已赋值
                     * @return CorpName 是否已赋值
                     * 
                     */
                    bool CorpNameHasBeenSet() const;

                    /**
                     * 获取商务对接人员
                     * @return SalesPerson 商务对接人员
                     * 
                     */
                    std::string GetSalesPerson() const;

                    /**
                     * 设置商务对接人员
                     * @param _salesPerson 商务对接人员
                     * 
                     */
                    void SetSalesPerson(const std::string& _salesPerson);

                    /**
                     * 判断参数 SalesPerson 是否已赋值
                     * @return SalesPerson 是否已赋值
                     * 
                     */
                    bool SalesPersonHasBeenSet() const;

                    /**
                     * 获取公司邮箱
                     * @return Email 公司邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置公司邮箱
                     * @param _email 公司邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 任务类型, 0:基础版, 1:专家版, 2:本地化
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 小程序AppID
                     */
                    std::string m_appPackage;
                    bool m_appPackageHasBeenSet;

                    /**
                     * 应用平台, 0:android, 1:ios, 2:小程序
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 小程序名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 小程序版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 联系人信息
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_telNumber;
                    bool m_telNumberHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_corpName;
                    bool m_corpNameHasBeenSet;

                    /**
                     * 商务对接人员
                     */
                    std::string m_salesPerson;
                    bool m_salesPersonHasBeenSet;

                    /**
                     * 公司邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEAPPSCANTASKREQUEST_H_
