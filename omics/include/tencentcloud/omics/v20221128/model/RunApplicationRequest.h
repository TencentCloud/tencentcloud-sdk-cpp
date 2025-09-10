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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RunApplication请求参数结构体
                */
                class RunApplicationRequest : public AbstractModel
                {
                public:
                    RunApplicationRequest();
                    ~RunApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID。
                     * @return ApplicationId 应用ID。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。
                     * @param _applicationId 应用ID。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取任务批次名称。
                     * @return Name 任务批次名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务批次名称。
                     * @param _name 任务批次名称。
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
                     * 获取投递环境ID。
                     * @return EnvironmentId 投递环境ID。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置投递环境ID。
                     * @param _environmentId 投递环境ID。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取项目ID。（不填使用指定地域下的默认项目）
                     * @return ProjectId 项目ID。（不填使用指定地域下的默认项目）
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。（不填使用指定地域下的默认项目）
                     * @param _projectId 项目ID。（不填使用指定地域下的默认项目）
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
                     * 获取任务批次描述。
                     * @return Description 任务批次描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务批次描述。
                     * @param _description 任务批次描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务输入COS地址。（InputBase64和InputCosUri必选其一）
                     * @return InputCosUri 任务输入COS地址。（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    std::string GetInputCosUri() const;

                    /**
                     * 设置任务输入COS地址。（InputBase64和InputCosUri必选其一）
                     * @param _inputCosUri 任务输入COS地址。（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    void SetInputCosUri(const std::string& _inputCosUri);

                    /**
                     * 判断参数 InputCosUri 是否已赋值
                     * @return InputCosUri 是否已赋值
                     * 
                     */
                    bool InputCosUriHasBeenSet() const;

                    /**
                     * 获取任务输入JSON。需要进行base64编码。（InputBase64和InputCosUri必选其一）
                     * @return InputBase64 任务输入JSON。需要进行base64编码。（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    std::string GetInputBase64() const;

                    /**
                     * 设置任务输入JSON。需要进行base64编码。（InputBase64和InputCosUri必选其一）
                     * @param _inputBase64 任务输入JSON。需要进行base64编码。（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    void SetInputBase64(const std::string& _inputBase64);

                    /**
                     * 判断参数 InputBase64 是否已赋值
                     * @return InputBase64 是否已赋值
                     * 
                     */
                    bool InputBase64HasBeenSet() const;

                    /**
                     * 获取批量投递表格ID，不填表示单例投递。
                     * @return TableId 批量投递表格ID，不填表示单例投递。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置批量投递表格ID，不填表示单例投递。
                     * @param _tableId 批量投递表格ID，不填表示单例投递。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取批量投递表格行UUID。不填表示表格全部行。
                     * @return TableRowUuids 批量投递表格行UUID。不填表示表格全部行。
                     * 
                     */
                    std::vector<std::string> GetTableRowUuids() const;

                    /**
                     * 设置批量投递表格行UUID。不填表示表格全部行。
                     * @param _tableRowUuids 批量投递表格行UUID。不填表示表格全部行。
                     * 
                     */
                    void SetTableRowUuids(const std::vector<std::string>& _tableRowUuids);

                    /**
                     * 判断参数 TableRowUuids 是否已赋值
                     * @return TableRowUuids 是否已赋值
                     * 
                     */
                    bool TableRowUuidsHasBeenSet() const;

                    /**
                     * 获取任务缓存清理时间（小时）。不填或0表示不清理。
                     * @return CacheClearDelay 任务缓存清理时间（小时）。不填或0表示不清理。
                     * 
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置任务缓存清理时间（小时）。不填或0表示不清理。
                     * @param _cacheClearDelay 任务缓存清理时间（小时）。不填或0表示不清理。
                     * 
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     * 
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取应用版本ID。不填表示使用当前最新版本。
                     * @return ApplicationVersionId 应用版本ID。不填表示使用当前最新版本。
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置应用版本ID。不填表示使用当前最新版本。
                     * @param _applicationVersionId 应用版本ID。不填表示使用当前最新版本。
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取WDL运行选项。
                     * @return Option WDL运行选项。
                     * 
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置WDL运行选项。
                     * @param _option WDL运行选项。
                     * 
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取Nextflow运行选项。
                     * @return NFOption Nextflow运行选项。
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow运行选项。
                     * @param _nFOption Nextflow运行选项。
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                    /**
                     * 获取工作目录，当前仅支持Nextflow。可填写指定缓存卷内的绝对路径或者COS路径，不填使用默认缓存卷内的默认路径。如果使用COS路径，NFOption中LaunchDir需填写指定缓存卷内的绝对路径作为启动路径。
                     * @return WorkDir 工作目录，当前仅支持Nextflow。可填写指定缓存卷内的绝对路径或者COS路径，不填使用默认缓存卷内的默认路径。如果使用COS路径，NFOption中LaunchDir需填写指定缓存卷内的绝对路径作为启动路径。
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置工作目录，当前仅支持Nextflow。可填写指定缓存卷内的绝对路径或者COS路径，不填使用默认缓存卷内的默认路径。如果使用COS路径，NFOption中LaunchDir需填写指定缓存卷内的绝对路径作为启动路径。
                     * @param _workDir 工作目录，当前仅支持Nextflow。可填写指定缓存卷内的绝对路径或者COS路径，不填使用默认缓存卷内的默认路径。如果使用COS路径，NFOption中LaunchDir需填写指定缓存卷内的绝对路径作为启动路径。
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取访问模式，不填默认私有。取值范围
- PRIVATE：私有应用
- PUBLIC：公共应用
                     * @return AccessMode 访问模式，不填默认私有。取值范围
- PRIVATE：私有应用
- PUBLIC：公共应用
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置访问模式，不填默认私有。取值范围
- PRIVATE：私有应用
- PUBLIC：公共应用
                     * @param _accessMode 访问模式，不填默认私有。取值范围
- PRIVATE：私有应用
- PUBLIC：公共应用
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * @return VolumeIds 缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * 
                     */
                    std::vector<std::string> GetVolumeIds() const;

                    /**
                     * 设置缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * @param _volumeIds 缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * 
                     */
                    void SetVolumeIds(const std::vector<std::string>& _volumeIds);

                    /**
                     * 判断参数 VolumeIds 是否已赋值
                     * @return VolumeIds 是否已赋值
                     * 
                     */
                    bool VolumeIdsHasBeenSet() const;

                    /**
                     * 获取是否开启结果通知。
                     * @return ResultNotification 是否开启结果通知。
                     * 
                     */
                    bool GetResultNotification() const;

                    /**
                     * 设置是否开启结果通知。
                     * @param _resultNotification 是否开启结果通知。
                     * 
                     */
                    void SetResultNotification(const bool& _resultNotification);

                    /**
                     * 判断参数 ResultNotification 是否已赋值
                     * @return ResultNotification 是否已赋值
                     * 
                     */
                    bool ResultNotificationHasBeenSet() const;

                    /**
                     * 获取是否开启超时通知。
                     * @return TimeoutNotification 是否开启超时通知。
                     * 
                     */
                    bool GetTimeoutNotification() const;

                    /**
                     * 设置是否开启超时通知。
                     * @param _timeoutNotification 是否开启超时通知。
                     * 
                     */
                    void SetTimeoutNotification(const bool& _timeoutNotification);

                    /**
                     * 判断参数 TimeoutNotification 是否已赋值
                     * @return TimeoutNotification 是否已赋值
                     * 
                     */
                    bool TimeoutNotificationHasBeenSet() const;

                    /**
                     * 获取任务超时通知时间（单位：分钟），支持5到2880分钟。
                     * @return TimeoutNotificationMinutes 任务超时通知时间（单位：分钟），支持5到2880分钟。
                     * 
                     */
                    uint64_t GetTimeoutNotificationMinutes() const;

                    /**
                     * 设置任务超时通知时间（单位：分钟），支持5到2880分钟。
                     * @param _timeoutNotificationMinutes 任务超时通知时间（单位：分钟），支持5到2880分钟。
                     * 
                     */
                    void SetTimeoutNotificationMinutes(const uint64_t& _timeoutNotificationMinutes);

                    /**
                     * 判断参数 TimeoutNotificationMinutes 是否已赋值
                     * @return TimeoutNotificationMinutes 是否已赋值
                     * 
                     */
                    bool TimeoutNotificationMinutesHasBeenSet() const;

                    /**
                     * 获取接受通知邮件地址列表。
                     * @return EmailForNotification 接受通知邮件地址列表。
                     * 
                     */
                    std::vector<std::string> GetEmailForNotification() const;

                    /**
                     * 设置接受通知邮件地址列表。
                     * @param _emailForNotification 接受通知邮件地址列表。
                     * 
                     */
                    void SetEmailForNotification(const std::vector<std::string>& _emailForNotification);

                    /**
                     * 判断参数 EmailForNotification 是否已赋值
                     * @return EmailForNotification 是否已赋值
                     * 
                     */
                    bool EmailForNotificationHasBeenSet() const;

                private:

                    /**
                     * 应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 任务批次名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 投递环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 项目ID。（不填使用指定地域下的默认项目）
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务批次描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务输入COS地址。（InputBase64和InputCosUri必选其一）
                     */
                    std::string m_inputCosUri;
                    bool m_inputCosUriHasBeenSet;

                    /**
                     * 任务输入JSON。需要进行base64编码。（InputBase64和InputCosUri必选其一）
                     */
                    std::string m_inputBase64;
                    bool m_inputBase64HasBeenSet;

                    /**
                     * 批量投递表格ID，不填表示单例投递。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 批量投递表格行UUID。不填表示表格全部行。
                     */
                    std::vector<std::string> m_tableRowUuids;
                    bool m_tableRowUuidsHasBeenSet;

                    /**
                     * 任务缓存清理时间（小时）。不填或0表示不清理。
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * 应用版本ID。不填表示使用当前最新版本。
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * WDL运行选项。
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * Nextflow运行选项。
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                    /**
                     * 工作目录，当前仅支持Nextflow。可填写指定缓存卷内的绝对路径或者COS路径，不填使用默认缓存卷内的默认路径。如果使用COS路径，NFOption中LaunchDir需填写指定缓存卷内的绝对路径作为启动路径。
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * 访问模式，不填默认私有。取值范围
- PRIVATE：私有应用
- PUBLIC：公共应用
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     */
                    std::vector<std::string> m_volumeIds;
                    bool m_volumeIdsHasBeenSet;

                    /**
                     * 是否开启结果通知。
                     */
                    bool m_resultNotification;
                    bool m_resultNotificationHasBeenSet;

                    /**
                     * 是否开启超时通知。
                     */
                    bool m_timeoutNotification;
                    bool m_timeoutNotificationHasBeenSet;

                    /**
                     * 任务超时通知时间（单位：分钟），支持5到2880分钟。
                     */
                    uint64_t m_timeoutNotificationMinutes;
                    bool m_timeoutNotificationMinutesHasBeenSet;

                    /**
                     * 接受通知邮件地址列表。
                     */
                    std::vector<std::string> m_emailForNotification;
                    bool m_emailForNotificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_
