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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_CREATEAPPSCANTASKREPEATREQUEST_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_CREATEAPPSCANTASKREPEATREQUEST_H_

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
                * CreateAppScanTaskRepeat请求参数结构体
                */
                class CreateAppScanTaskRepeatRequest : public AbstractModel
                {
                public:
                    CreateAppScanTaskRepeatRequest();
                    ~CreateAppScanTaskRepeatRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取原诊断任务ID
                     * @return OrgTaskID 原诊断任务ID
                     * 
                     */
                    std::string GetOrgTaskID() const;

                    /**
                     * 设置原诊断任务ID
                     * @param _orgTaskID 原诊断任务ID
                     * 
                     */
                    void SetOrgTaskID(const std::string& _orgTaskID);

                    /**
                     * 判断参数 OrgTaskID 是否已赋值
                     * @return OrgTaskID 是否已赋值
                     * 
                     */
                    bool OrgTaskIDHasBeenSet() const;

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
                     * 获取上传的文件ID(任务来源为1时必填)
                     * @return FileID 上传的文件ID(任务来源为1时必填)
                     * 
                     */
                    std::string GetFileID() const;

                    /**
                     * 设置上传的文件ID(任务来源为1时必填)
                     * @param _fileID 上传的文件ID(任务来源为1时必填)
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
                     * 任务类型, 0:基础版, 1:专家版, 2:本地化
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 原诊断任务ID
                     */
                    std::string m_orgTaskID;
                    bool m_orgTaskIDHasBeenSet;

                    /**
                     * App包名
                     */
                    std::string m_appPackage;
                    bool m_appPackageHasBeenSet;

                    /**
                     * 上传的文件ID(任务来源为1时必填)
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
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

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

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_CREATEAPPSCANTASKREPEATREQUEST_H_
