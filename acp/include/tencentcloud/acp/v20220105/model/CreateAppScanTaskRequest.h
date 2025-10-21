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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_CREATEAPPSCANTASKREQUEST_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_CREATEAPPSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
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
                     * 获取任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * @return Source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * @param _source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
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
                     * 获取App包名
                     * @return AppPackage App包名
                     * 
                     */
                    std::string GetAppPackage() const;

                    /**
                     * 设置App包名
                     * @param _appPackage App包名
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
                     * 获取App名称(任务来源为2时必填)
                     * @return AppName App名称(任务来源为2时必填)
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置App名称(任务来源为2时必填)
                     * @param _appName App名称(任务来源为2时必填)
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
                     * 获取App版本
                     * @return AppVersion App版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置App版本
                     * @param _appVersion App版本
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
                     * 获取上传的软件文件ID(任务来源为1时必填)
                     * @return FileID 上传的软件文件ID(任务来源为1时必填)
                     * 
                     */
                    std::string GetFileID() const;

                    /**
                     * 设置上传的软件文件ID(任务来源为1时必填)
                     * @param _fileID 上传的软件文件ID(任务来源为1时必填)
                     * 
                     */
                    void SetFileID(const std::string& _fileID);

                    /**
                     * 判断参数 FileID 是否已赋值
                     * @return FileID 是否已赋值
                     * 
                     */
                    bool FileIDHasBeenSet() const;

                    /**
                     * 获取软件下载链接地址(任务来源为2时必填)
                     * @return AppDownloadUrl 软件下载链接地址(任务来源为2时必填)
                     * 
                     */
                    std::string GetAppDownloadUrl() const;

                    /**
                     * 设置软件下载链接地址(任务来源为2时必填)
                     * @param _appDownloadUrl 软件下载链接地址(任务来源为2时必填)
                     * 
                     */
                    void SetAppDownloadUrl(const std::string& _appDownloadUrl);

                    /**
                     * 判断参数 AppDownloadUrl 是否已赋值
                     * @return AppDownloadUrl 是否已赋值
                     * 
                     */
                    bool AppDownloadUrlHasBeenSet() const;

                    /**
                     * 获取隐私文本下载地址(任务来源为2时必填)
                     * @return PrivacyTextUrl 隐私文本下载地址(任务来源为2时必填)
                     * 
                     */
                    std::string GetPrivacyTextUrl() const;

                    /**
                     * 设置隐私文本下载地址(任务来源为2时必填)
                     * @param _privacyTextUrl 隐私文本下载地址(任务来源为2时必填)
                     * 
                     */
                    void SetPrivacyTextUrl(const std::string& _privacyTextUrl);

                    /**
                     * 判断参数 PrivacyTextUrl 是否已赋值
                     * @return PrivacyTextUrl 是否已赋值
                     * 
                     */
                    bool PrivacyTextUrlHasBeenSet() const;

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
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否同意隐私条款，0:不同意(默认), 1:同意
                     * @return IsAgreePrivacy 是否同意隐私条款，0:不同意(默认), 1:同意
                     * 
                     */
                    int64_t GetIsAgreePrivacy() const;

                    /**
                     * 设置是否同意隐私条款，0:不同意(默认), 1:同意
                     * @param _isAgreePrivacy 是否同意隐私条款，0:不同意(默认), 1:同意
                     * 
                     */
                    void SetIsAgreePrivacy(const int64_t& _isAgreePrivacy);

                    /**
                     * 判断参数 IsAgreePrivacy 是否已赋值
                     * @return IsAgreePrivacy 是否已赋值
                     * 
                     */
                    bool IsAgreePrivacyHasBeenSet() const;

                    /**
                     * 获取隐私申明文件名称
                     * @return PrivacyTextName 隐私申明文件名称
                     * 
                     */
                    std::string GetPrivacyTextName() const;

                    /**
                     * 设置隐私申明文件名称
                     * @param _privacyTextName 隐私申明文件名称
                     * 
                     */
                    void SetPrivacyTextName(const std::string& _privacyTextName);

                    /**
                     * 判断参数 PrivacyTextName 是否已赋值
                     * @return PrivacyTextName 是否已赋值
                     * 
                     */
                    bool PrivacyTextNameHasBeenSet() const;

                    /**
                     * 获取软件Sha1值(PrivacyTextMD5不为空时必填)
                     * @return AppSha1 软件Sha1值(PrivacyTextMD5不为空时必填)
                     * 
                     */
                    std::string GetAppSha1() const;

                    /**
                     * 设置软件Sha1值(PrivacyTextMD5不为空时必填)
                     * @param _appSha1 软件Sha1值(PrivacyTextMD5不为空时必填)
                     * 
                     */
                    void SetAppSha1(const std::string& _appSha1);

                    /**
                     * 判断参数 AppSha1 是否已赋值
                     * @return AppSha1 是否已赋值
                     * 
                     */
                    bool AppSha1HasBeenSet() const;

                    /**
                     * 获取隐私申明文本md5(AppSha1不为空时必填)
                     * @return PrivacyTextMD5 隐私申明文本md5(AppSha1不为空时必填)
                     * 
                     */
                    std::string GetPrivacyTextMD5() const;

                    /**
                     * 设置隐私申明文本md5(AppSha1不为空时必填)
                     * @param _privacyTextMD5 隐私申明文本md5(AppSha1不为空时必填)
                     * 
                     */
                    void SetPrivacyTextMD5(const std::string& _privacyTextMD5);

                    /**
                     * 判断参数 PrivacyTextMD5 是否已赋值
                     * @return PrivacyTextMD5 是否已赋值
                     * 
                     */
                    bool PrivacyTextMD5HasBeenSet() const;

                private:

                    /**
                     * 任务类型, 0:基础版, 1:专家版, 2:本地化
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 应用平台, 0:android, 1:ios, 2:小程序
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * App包名
                     */
                    std::string m_appPackage;
                    bool m_appPackageHasBeenSet;

                    /**
                     * App名称(任务来源为2时必填)
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * App版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 上传的软件文件ID(任务来源为1时必填)
                     */
                    std::string m_fileID;
                    bool m_fileIDHasBeenSet;

                    /**
                     * 软件下载链接地址(任务来源为2时必填)
                     */
                    std::string m_appDownloadUrl;
                    bool m_appDownloadUrlHasBeenSet;

                    /**
                     * 隐私文本下载地址(任务来源为2时必填)
                     */
                    std::string m_privacyTextUrl;
                    bool m_privacyTextUrlHasBeenSet;

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
                     * 公司邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

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
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否同意隐私条款，0:不同意(默认), 1:同意
                     */
                    int64_t m_isAgreePrivacy;
                    bool m_isAgreePrivacyHasBeenSet;

                    /**
                     * 隐私申明文件名称
                     */
                    std::string m_privacyTextName;
                    bool m_privacyTextNameHasBeenSet;

                    /**
                     * 软件Sha1值(PrivacyTextMD5不为空时必填)
                     */
                    std::string m_appSha1;
                    bool m_appSha1HasBeenSet;

                    /**
                     * 隐私申明文本md5(AppSha1不为空时必填)
                     */
                    std::string m_privacyTextMD5;
                    bool m_privacyTextMD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_CREATEAPPSCANTASKREQUEST_H_
