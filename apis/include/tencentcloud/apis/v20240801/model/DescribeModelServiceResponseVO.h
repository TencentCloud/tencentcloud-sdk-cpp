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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICERESPONSEVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICERESPONSEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetModelDTO.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/TokenLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/TmsConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PromptModerateConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/SensitiveDataCheckConfigDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 查询模型服务详情的响应
                */
                class DescribeModelServiceResponseVO : public AbstractModel
                {
                public:
                    DescribeModelServiceResponseVO();
                    ~DescribeModelServiceResponseVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>腾讯云AppID</p>
                     * @return AppID <p>腾讯云AppID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>腾讯云AppID</p>
                     * @param _appID <p>腾讯云AppID</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云Uin</p>
                     * @return Uin <p>腾讯云Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>腾讯云Uin</p>
                     * @param _uin <p>腾讯云Uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>模型ID</p>
                     * @return ID <p>模型ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>模型ID</p>
                     * @param _iD <p>模型ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return Name <p>模型名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _name <p>模型名称</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>访问路径</p>
                     * @return PubPath <p>访问路径</p>
                     * 
                     */
                    std::string GetPubPath() const;

                    /**
                     * 设置<p>访问路径</p>
                     * @param _pubPath <p>访问路径</p>
                     * 
                     */
                    void SetPubPath(const std::string& _pubPath);

                    /**
                     * 判断参数 PubPath 是否已赋值
                     * @return PubPath 是否已赋值
                     * 
                     */
                    bool PubPathHasBeenSet() const;

                    /**
                     * 获取<p>路径匹配方式：absolute，prefix，regex</p>
                     * @return PathMatchType <p>路径匹配方式：absolute，prefix，regex</p>
                     * 
                     */
                    std::string GetPathMatchType() const;

                    /**
                     * 设置<p>路径匹配方式：absolute，prefix，regex</p>
                     * @param _pathMatchType <p>路径匹配方式：absolute，prefix，regex</p>
                     * 
                     */
                    void SetPathMatchType(const std::string& _pathMatchType);

                    /**
                     * 判断参数 PathMatchType 是否已赋值
                     * @return PathMatchType 是否已赋值
                     * 
                     */
                    bool PathMatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetModels <p>目标模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetModelDTO> GetTargetModels() const;

                    /**
                     * 设置<p>目标模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetModels <p>目标模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetModels(const std::vector<TargetModelDTO>& _targetModels);

                    /**
                     * 判断参数 TargetModels 是否已赋值
                     * @return TargetModels 是否已赋值
                     * 
                     */
                    bool TargetModelsHasBeenSet() const;

                    /**
                     * 获取<p>模板模型的名称列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelNames <p>模板模型的名称列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetModelNames() const;

                    /**
                     * 设置<p>模板模型的名称列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelNames <p>模板模型的名称列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelNames(const std::vector<std::string>& _modelNames);

                    /**
                     * 判断参数 ModelNames 是否已赋值
                     * @return ModelNames 是否已赋值
                     * 
                     */
                    bool ModelNamesHasBeenSet() const;

                    /**
                     * 获取<p>是否开启限流</p>
                     * @return InvokeLimitConfigStatus <p>是否开启限流</p>
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置<p>是否开启限流</p>
                     * @param _invokeLimitConfigStatus <p>是否开启限流</p>
                     * 
                     */
                    void SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus);

                    /**
                     * 判断参数 InvokeLimitConfigStatus 是否已赋值
                     * @return InvokeLimitConfigStatus 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigStatusHasBeenSet() const;

                    /**
                     * 获取<p>限流配置</p>
                     * @return InvokeLimitConfig <p>限流配置</p>
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置<p>限流配置</p>
                     * @param _invokeLimitConfig <p>限流配置</p>
                     * 
                     */
                    void SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig);

                    /**
                     * 判断参数 InvokeLimitConfig 是否已赋值
                     * @return InvokeLimitConfig 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最后修改时间</p>
                     * @return LastUpdateTime <p>最后修改时间</p>
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置<p>最后修改时间</p>
                     * @param _lastUpdateTime <p>最后修改时间</p>
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启token控制</p>
                     * @return TokenLimitStatus <p>是否开启token控制</p>
                     * 
                     */
                    bool GetTokenLimitStatus() const;

                    /**
                     * 设置<p>是否开启token控制</p>
                     * @param _tokenLimitStatus <p>是否开启token控制</p>
                     * 
                     */
                    void SetTokenLimitStatus(const bool& _tokenLimitStatus);

                    /**
                     * 判断参数 TokenLimitStatus 是否已赋值
                     * @return TokenLimitStatus 是否已赋值
                     * 
                     */
                    bool TokenLimitStatusHasBeenSet() const;

                    /**
                     * 获取<p>token控制</p>
                     * @return TokenLimitConfig <p>token控制</p>
                     * 
                     */
                    TokenLimitConfigDTO GetTokenLimitConfig() const;

                    /**
                     * 设置<p>token控制</p>
                     * @param _tokenLimitConfig <p>token控制</p>
                     * 
                     */
                    void SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig);

                    /**
                     * 判断参数 TokenLimitConfig 是否已赋值
                     * @return TokenLimitConfig 是否已赋值
                     * 
                     */
                    bool TokenLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启tms配置</p>
                     * @return TmsStatus <p>是否开启tms配置</p>
                     * 
                     */
                    bool GetTmsStatus() const;

                    /**
                     * 设置<p>是否开启tms配置</p>
                     * @param _tmsStatus <p>是否开启tms配置</p>
                     * 
                     */
                    void SetTmsStatus(const bool& _tmsStatus);

                    /**
                     * 判断参数 TmsStatus 是否已赋值
                     * @return TmsStatus 是否已赋值
                     * 
                     */
                    bool TmsStatusHasBeenSet() const;

                    /**
                     * 获取<p>tms配置</p>
                     * @return TmsConfig <p>tms配置</p>
                     * 
                     */
                    TmsConfigDTO GetTmsConfig() const;

                    /**
                     * 设置<p>tms配置</p>
                     * @param _tmsConfig <p>tms配置</p>
                     * 
                     */
                    void SetTmsConfig(const TmsConfigDTO& _tmsConfig);

                    /**
                     * 判断参数 TmsConfig 是否已赋值
                     * @return TmsConfig 是否已赋值
                     * 
                     */
                    bool TmsConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启IP白名单</p>
                     * @return IpWhiteStatus <p>是否开启IP白名单</p>
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置<p>是否开启IP白名单</p>
                     * @param _ipWhiteStatus <p>是否开启IP白名单</p>
                     * 
                     */
                    void SetIpWhiteStatus(const bool& _ipWhiteStatus);

                    /**
                     * 判断参数 IpWhiteStatus 是否已赋值
                     * @return IpWhiteStatus 是否已赋值
                     * 
                     */
                    bool IpWhiteStatusHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpWhiteList <p>IP白名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置<p>IP白名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipWhiteList <p>IP白名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     * 
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>是否开启IP黑名单</p>
                     * @return IpBlackStatus <p>是否开启IP黑名单</p>
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置<p>是否开启IP黑名单</p>
                     * @param _ipBlackStatus <p>是否开启IP黑名单</p>
                     * 
                     */
                    void SetIpBlackStatus(const bool& _ipBlackStatus);

                    /**
                     * 判断参数 IpBlackStatus 是否已赋值
                     * @return IpBlackStatus 是否已赋值
                     * 
                     */
                    bool IpBlackStatusHasBeenSet() const;

                    /**
                     * 获取<p>IP黑名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpBlackList <p>IP黑名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpBlackList() const;

                    /**
                     * 设置<p>IP黑名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipBlackList <p>IP黑名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpBlackList(const std::vector<std::string>& _ipBlackList);

                    /**
                     * 判断参数 IpBlackList 是否已赋值
                     * @return IpBlackList 是否已赋值
                     * 
                     */
                    bool IpBlackListHasBeenSet() const;

                    /**
                     * 获取<p>插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginConfigs <p>插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PluginConfigDTO> GetPluginConfigs() const;

                    /**
                     * 设置<p>插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginConfigs <p>插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginConfigs(const std::vector<PluginConfigDTO>& _pluginConfigs);

                    /**
                     * 判断参数 PluginConfigs 是否已赋值
                     * @return PluginConfigs 是否已赋值
                     * 
                     */
                    bool PluginConfigsHasBeenSet() const;

                    /**
                     * 获取<p>超时配置，单位秒</p>
                     * @return Timeout <p>超时配置，单位秒</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>超时配置，单位秒</p>
                     * @param _timeout <p>超时配置，单位秒</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>状态：normal，disabled</p>
                     * @return Status <p>状态：normal，disabled</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态：normal，disabled</p>
                     * @param _status <p>状态：normal，disabled</p>
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
                     * 获取<p>关联应用数</p>
                     * @return RelateAgentAppNum <p>关联应用数</p>
                     * 
                     */
                    int64_t GetRelateAgentAppNum() const;

                    /**
                     * 设置<p>关联应用数</p>
                     * @param _relateAgentAppNum <p>关联应用数</p>
                     * 
                     */
                    void SetRelateAgentAppNum(const int64_t& _relateAgentAppNum);

                    /**
                     * 判断参数 RelateAgentAppNum 是否已赋值
                     * @return RelateAgentAppNum 是否已赋值
                     * 
                     */
                    bool RelateAgentAppNumHasBeenSet() const;

                    /**
                     * 获取<p>请求路径</p>
                     * @return Url <p>请求路径</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>请求路径</p>
                     * @param _url <p>请求路径</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>是否开启提示词安全检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptModerateStatus <p>是否开启提示词安全检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPromptModerateStatus() const;

                    /**
                     * 设置<p>是否开启提示词安全检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptModerateStatus <p>是否开启提示词安全检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromptModerateStatus(const bool& _promptModerateStatus);

                    /**
                     * 判断参数 PromptModerateStatus 是否已赋值
                     * @return PromptModerateStatus 是否已赋值
                     * 
                     */
                    bool PromptModerateStatusHasBeenSet() const;

                    /**
                     * 获取<p>提示词安全检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptModerateConfig <p>提示词安全检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PromptModerateConfigDTO GetPromptModerateConfig() const;

                    /**
                     * 设置<p>提示词安全检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptModerateConfig <p>提示词安全检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromptModerateConfig(const PromptModerateConfigDTO& _promptModerateConfig);

                    /**
                     * 判断参数 PromptModerateConfig 是否已赋值
                     * @return PromptModerateConfig 是否已赋值
                     * 
                     */
                    bool PromptModerateConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启敏感数据检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SensitiveDataCheckStatus <p>是否开启敏感数据检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSensitiveDataCheckStatus() const;

                    /**
                     * 设置<p>是否开启敏感数据检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sensitiveDataCheckStatus <p>是否开启敏感数据检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSensitiveDataCheckStatus(const bool& _sensitiveDataCheckStatus);

                    /**
                     * 判断参数 SensitiveDataCheckStatus 是否已赋值
                     * @return SensitiveDataCheckStatus 是否已赋值
                     * 
                     */
                    bool SensitiveDataCheckStatusHasBeenSet() const;

                    /**
                     * 获取<p>敏感数据检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SensitiveDataCheckConfig <p>敏感数据检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SensitiveDataCheckConfigDTO GetSensitiveDataCheckConfig() const;

                    /**
                     * 设置<p>敏感数据检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sensitiveDataCheckConfig <p>敏感数据检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSensitiveDataCheckConfig(const SensitiveDataCheckConfigDTO& _sensitiveDataCheckConfig);

                    /**
                     * 判断参数 SensitiveDataCheckConfig 是否已赋值
                     * @return SensitiveDataCheckConfig 是否已赋值
                     * 
                     */
                    bool SensitiveDataCheckConfigHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云AppID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>腾讯云Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>访问路径</p>
                     */
                    std::string m_pubPath;
                    bool m_pubPathHasBeenSet;

                    /**
                     * <p>路径匹配方式：absolute，prefix，regex</p>
                     */
                    std::string m_pathMatchType;
                    bool m_pathMatchTypeHasBeenSet;

                    /**
                     * <p>目标模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetModelDTO> m_targetModels;
                    bool m_targetModelsHasBeenSet;

                    /**
                     * <p>模板模型的名称列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_modelNames;
                    bool m_modelNamesHasBeenSet;

                    /**
                     * <p>是否开启限流</p>
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * <p>限流配置</p>
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * <p>是否开启token控制</p>
                     */
                    bool m_tokenLimitStatus;
                    bool m_tokenLimitStatusHasBeenSet;

                    /**
                     * <p>token控制</p>
                     */
                    TokenLimitConfigDTO m_tokenLimitConfig;
                    bool m_tokenLimitConfigHasBeenSet;

                    /**
                     * <p>是否开启tms配置</p>
                     */
                    bool m_tmsStatus;
                    bool m_tmsStatusHasBeenSet;

                    /**
                     * <p>tms配置</p>
                     */
                    TmsConfigDTO m_tmsConfig;
                    bool m_tmsConfigHasBeenSet;

                    /**
                     * <p>是否开启IP白名单</p>
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * <p>IP白名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>是否开启IP黑名单</p>
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * <p>IP黑名单列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipBlackList;
                    bool m_ipBlackListHasBeenSet;

                    /**
                     * <p>插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * <p>超时配置，单位秒</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>状态：normal，disabled</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关联应用数</p>
                     */
                    int64_t m_relateAgentAppNum;
                    bool m_relateAgentAppNumHasBeenSet;

                    /**
                     * <p>请求路径</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>是否开启提示词安全检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_promptModerateStatus;
                    bool m_promptModerateStatusHasBeenSet;

                    /**
                     * <p>提示词安全检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PromptModerateConfigDTO m_promptModerateConfig;
                    bool m_promptModerateConfigHasBeenSet;

                    /**
                     * <p>是否开启敏感数据检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sensitiveDataCheckStatus;
                    bool m_sensitiveDataCheckStatusHasBeenSet;

                    /**
                     * <p>敏感数据检测配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SensitiveDataCheckConfigDTO m_sensitiveDataCheckConfig;
                    bool m_sensitiveDataCheckConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICERESPONSEVO_H_
