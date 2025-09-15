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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEAPP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEAPP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/AppJobInfo.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 低码应用详情
                */
                class Weapp : public AbstractModel
                {
                public:
                    Weapp();
                    ~Weapp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用id
                     * @return Id 应用id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置应用id
                     * @param _id 应用id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取应用所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 应用所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置应用所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 应用所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取标识
                     * @return Name 标识
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标识
                     * @param _name 标识
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用名称
                     * @return Title 应用名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置应用名称
                     * @param _title 应用名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取环境信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env 环境信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置环境信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env 环境信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取状态.
0:已经安装
3:安装中
4:安装失败
                     * @return Status 状态.
0:已经安装
3:安装中
4:安装失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态.
0:已经安装
3:安装中
4:安装失败
                     * @param _status 状态.
0:已经安装
3:安装中
4:安装失败
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
                     * 获取环境信息
                     * @return EnvId 环境信息
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境信息
                     * @param _envId 环境信息
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
                     * 获取环境地域
                     * @return EnvRegion 环境地域
                     * 
                     */
                    std::string GetEnvRegion() const;

                    /**
                     * 设置环境地域
                     * @param _envRegion 环境地域
                     * 
                     */
                    void SetEnvRegion(const std::string& _envRegion);

                    /**
                     * 判断参数 EnvRegion 是否已赋值
                     * @return EnvRegion 是否已赋值
                     * 
                     */
                    bool EnvRegionHasBeenSet() const;

                    /**
                     * 获取资源包
                     * @return PkgId 资源包
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置资源包
                     * @param _pkgId 资源包
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取应用信息是否安装到cms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CmsProject 应用信息是否安装到cms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCmsProject() const;

                    /**
                     * 设置应用信息是否安装到cms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cmsProject 应用信息是否安装到cms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCmsProject(const int64_t& _cmsProject);

                    /**
                     * 判断参数 CmsProject 是否已赋值
                     * @return CmsProject 是否已赋值
                     * 
                     */
                    bool CmsProjectHasBeenSet() const;

                    /**
                     * 获取渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel 渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channel 渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取是否计费应用
                     * @return IsFree 是否计费应用
                     * 
                     */
                    bool GetIsFree() const;

                    /**
                     * 设置是否计费应用
                     * @param _isFree 是否计费应用
                     * 
                     */
                    void SetIsFree(const bool& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取应用内容类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentType 应用内容类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置应用内容类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentType 应用内容类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取应用类型，是否为B端应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppType 应用类型，是否为B端应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置应用类型，是否为B端应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appType 应用类型，是否为B端应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取关联B端一样id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachAppId 关联B端一样id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachAppId() const;

                    /**
                     * 设置关联B端一样id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachAppId 关联B端一样id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachAppId(const std::string& _attachAppId);

                    /**
                     * 判断参数 AttachAppId 是否已赋值
                     * @return AttachAppId 是否已赋值
                     * 
                     */
                    bool AttachAppIdHasBeenSet() const;

                    /**
                     * 获取应用类型，是否为企业应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EType 应用类型，是否为企业应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEType() const;

                    /**
                     * 设置应用类型，是否为企业应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eType 应用类型，是否为企业应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEType(const int64_t& _eType);

                    /**
                     * 判断参数 EType 是否已赋值
                     * @return EType 是否已赋值
                     * 
                     */
                    bool ETypeHasBeenSet() const;

                    /**
                     * 获取企业应用数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EData 企业应用数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEData() const;

                    /**
                     * 设置企业应用数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eData 企业应用数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEData(const std::string& _eData);

                    /**
                     * 判断参数 EData 是否已赋值
                     * @return EData 是否已赋值
                     * 
                     */
                    bool EDataHasBeenSet() const;

                    /**
                     * 获取最新一次小程序构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastMpCiId 最新一次小程序构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastMpCiId() const;

                    /**
                     * 设置最新一次小程序构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastMpCiId 最新一次小程序构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastMpCiId(const std::string& _lastMpCiId);

                    /**
                     * 判断参数 LastMpCiId 是否已赋值
                     * @return LastMpCiId 是否已赋值
                     * 
                     */
                    bool LastMpCiIdHasBeenSet() const;

                    /**
                     * 获取最新一次小程序状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastMpCiStatus 最新一次小程序状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastMpCiStatus() const;

                    /**
                     * 设置最新一次小程序状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastMpCiStatus 最新一次小程序状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastMpCiStatus(const std::string& _lastMpCiStatus);

                    /**
                     * 判断参数 LastMpCiStatus 是否已赋值
                     * @return LastMpCiStatus 是否已赋值
                     * 
                     */
                    bool LastMpCiStatusHasBeenSet() const;

                    /**
                     * 获取最新一次web构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastWebCiId 最新一次web构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastWebCiId() const;

                    /**
                     * 设置最新一次web构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastWebCiId 最新一次web构建id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastWebCiId(const std::string& _lastWebCiId);

                    /**
                     * 判断参数 LastWebCiId 是否已赋值
                     * @return LastWebCiId 是否已赋值
                     * 
                     */
                    bool LastWebCiIdHasBeenSet() const;

                    /**
                     * 获取最新一次web状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastWebCiStatus 最新一次web状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastWebCiStatus() const;

                    /**
                     * 设置最新一次web状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastWebCiStatus 最新一次web状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastWebCiStatus(const std::string& _lastWebCiStatus);

                    /**
                     * 判断参数 LastWebCiStatus 是否已赋值
                     * @return LastWebCiStatus 是否已赋值
                     * 
                     */
                    bool LastWebCiStatusHasBeenSet() const;

                    /**
                     * 获取最新部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastDeployTime 最新部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastDeployTime() const;

                    /**
                     * 设置最新部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastDeployTime 最新部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastDeployTime(const std::string& _lastDeployTime);

                    /**
                     * 判断参数 LastDeployTime 是否已赋值
                     * @return LastDeployTime 是否已赋值
                     * 
                     */
                    bool LastDeployTimeHasBeenSet() const;

                    /**
                     * 获取安装任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId 安装任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置安装任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowId 安装任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobInfo 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppJobInfo GetJobInfo() const;

                    /**
                     * 设置任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobInfo 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobInfo(const AppJobInfo& _jobInfo);

                    /**
                     * 判断参数 JobInfo 是否已赋值
                     * @return JobInfo 是否已赋值
                     * 
                     */
                    bool JobInfoHasBeenSet() const;

                    /**
                     * 获取应用端
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Platform 应用端
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置应用端
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _platform 应用端
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取最新一次web构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastWebCiMode 最新一次web构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastWebCiMode() const;

                    /**
                     * 设置最新一次web构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastWebCiMode 最新一次web构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastWebCiMode(const int64_t& _lastWebCiMode);

                    /**
                     * 判断参数 LastWebCiMode 是否已赋值
                     * @return LastWebCiMode 是否已赋值
                     * 
                     */
                    bool LastWebCiModeHasBeenSet() const;

                    /**
                     * 获取最新一次小程序构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastMpCiMode 最新一次小程序构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastMpCiMode() const;

                    /**
                     * 设置最新一次小程序构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastMpCiMode 最新一次小程序构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastMpCiMode(const int64_t& _lastMpCiMode);

                    /**
                     * 判断参数 LastMpCiMode 是否已赋值
                     * @return LastMpCiMode 是否已赋值
                     * 
                     */
                    bool LastMpCiModeHasBeenSet() const;

                    /**
                     * 获取应用场景化入口类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneType 应用场景化入口类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置应用场景化入口类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneType 应用场景化入口类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取client_Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientId client_Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置client_Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientId client_Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IconUrl 图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iconUrl 图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取页面图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaviconUrl 页面图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFaviconUrl() const;

                    /**
                     * 设置页面图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faviconUrl 页面图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFaviconUrl(const std::string& _faviconUrl);

                    /**
                     * 判断参数 FaviconUrl 是否已赋值
                     * @return FaviconUrl 是否已赋值
                     * 
                     */
                    bool FaviconUrlHasBeenSet() const;

                    /**
                     * 获取图标背景色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackgroundColor 图标背景色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置图标背景色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backgroundColor 图标背景色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取应用是否收藏
                     * @return Favorite 应用是否收藏
                     * 
                     */
                    bool GetFavorite() const;

                    /**
                     * 设置应用是否收藏
                     * @param _favorite 应用是否收藏
                     * 
                     */
                    void SetFavorite(const bool& _favorite);

                    /**
                     * 判断参数 Favorite 是否已赋值
                     * @return Favorite 是否已赋值
                     * 
                     */
                    bool FavoriteHasBeenSet() const;

                    /**
                     * 获取发布平台：web、mp、pc、adminPortal、xPagePC、cloudAdmin
                     * @return PublishPlatform 发布平台：web、mp、pc、adminPortal、xPagePC、cloudAdmin
                     * 
                     */
                    std::string GetPublishPlatform() const;

                    /**
                     * 设置发布平台：web、mp、pc、adminPortal、xPagePC、cloudAdmin
                     * @param _publishPlatform 发布平台：web、mp、pc、adminPortal、xPagePC、cloudAdmin
                     * 
                     */
                    void SetPublishPlatform(const std::string& _publishPlatform);

                    /**
                     * 判断参数 PublishPlatform 是否已赋值
                     * @return PublishPlatform 是否已赋值
                     * 
                     */
                    bool PublishPlatformHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 应用所属者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 标识
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 环境信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 状态.
0:已经安装
3:安装中
4:安装失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 环境信息
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 环境地域
                     */
                    std::string m_envRegion;
                    bool m_envRegionHasBeenSet;

                    /**
                     * 资源包
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 应用信息是否安装到cms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cmsProject;
                    bool m_cmsProjectHasBeenSet;

                    /**
                     * 渠道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 是否计费应用
                     */
                    bool m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * 应用内容类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 应用类型，是否为B端应用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 关联B端一样id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachAppId;
                    bool m_attachAppIdHasBeenSet;

                    /**
                     * 应用类型，是否为企业应用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eType;
                    bool m_eTypeHasBeenSet;

                    /**
                     * 企业应用数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eData;
                    bool m_eDataHasBeenSet;

                    /**
                     * 最新一次小程序构建id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastMpCiId;
                    bool m_lastMpCiIdHasBeenSet;

                    /**
                     * 最新一次小程序状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastMpCiStatus;
                    bool m_lastMpCiStatusHasBeenSet;

                    /**
                     * 最新一次web构建id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastWebCiId;
                    bool m_lastWebCiIdHasBeenSet;

                    /**
                     * 最新一次web状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastWebCiStatus;
                    bool m_lastWebCiStatusHasBeenSet;

                    /**
                     * 最新部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastDeployTime;
                    bool m_lastDeployTimeHasBeenSet;

                    /**
                     * 安装任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppJobInfo m_jobInfo;
                    bool m_jobInfoHasBeenSet;

                    /**
                     * 应用端
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 最新一次web构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastWebCiMode;
                    bool m_lastWebCiModeHasBeenSet;

                    /**
                     * 最新一次小程序构建模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastMpCiMode;
                    bool m_lastMpCiModeHasBeenSet;

                    /**
                     * 应用场景化入口类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * client_Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 页面图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_faviconUrl;
                    bool m_faviconUrlHasBeenSet;

                    /**
                     * 图标背景色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * 应用是否收藏
                     */
                    bool m_favorite;
                    bool m_favoriteHasBeenSet;

                    /**
                     * 发布平台：web、mp、pc、adminPortal、xPagePC、cloudAdmin
                     */
                    std::string m_publishPlatform;
                    bool m_publishPlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEAPP_H_
