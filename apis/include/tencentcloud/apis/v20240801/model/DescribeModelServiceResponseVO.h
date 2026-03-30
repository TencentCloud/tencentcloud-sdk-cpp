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
                     * 获取腾讯云AppID
                     * @return AppID 腾讯云AppID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置腾讯云AppID
                     * @param _appID 腾讯云AppID
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
                     * 获取腾讯云Uin
                     * @return Uin 腾讯云Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置腾讯云Uin
                     * @param _uin 腾讯云Uin
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取模型ID
                     * @return ID 模型ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置模型ID
                     * @param _iD 模型ID
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
                     * 获取模型名称
                     * @return Name 模型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
                     * @param _name 模型名称
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
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取访问路径
                     * @return PubPath 访问路径
                     * 
                     */
                    std::string GetPubPath() const;

                    /**
                     * 设置访问路径
                     * @param _pubPath 访问路径
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
                     * 获取路径匹配方式：absolute，prefix，regex
                     * @return PathMatchType 路径匹配方式：absolute，prefix，regex
                     * 
                     */
                    std::string GetPathMatchType() const;

                    /**
                     * 设置路径匹配方式：absolute，prefix，regex
                     * @param _pathMatchType 路径匹配方式：absolute，prefix，regex
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
                     * 获取目标模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetModels 目标模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetModelDTO> GetTargetModels() const;

                    /**
                     * 设置目标模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetModels 目标模型列表
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
                     * 获取模板模型的名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelNames 模板模型的名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetModelNames() const;

                    /**
                     * 设置模板模型的名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelNames 模板模型的名称列表
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
                     * 获取是否开启限流
                     * @return InvokeLimitConfigStatus 是否开启限流
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置是否开启限流
                     * @param _invokeLimitConfigStatus 是否开启限流
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
                     * 获取限流配置
                     * @return InvokeLimitConfig 限流配置
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置限流配置
                     * @param _invokeLimitConfig 限流配置
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
                     * 获取最后修改时间
                     * @return LastUpdateTime 最后修改时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后修改时间
                     * @param _lastUpdateTime 最后修改时间
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
                     * 获取是否开启token控制
                     * @return TokenLimitStatus 是否开启token控制
                     * 
                     */
                    bool GetTokenLimitStatus() const;

                    /**
                     * 设置是否开启token控制
                     * @param _tokenLimitStatus 是否开启token控制
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
                     * 获取token控制
                     * @return TokenLimitConfig token控制
                     * 
                     */
                    TokenLimitConfigDTO GetTokenLimitConfig() const;

                    /**
                     * 设置token控制
                     * @param _tokenLimitConfig token控制
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
                     * 获取是否开启tms配置
                     * @return TmsStatus 是否开启tms配置
                     * 
                     */
                    bool GetTmsStatus() const;

                    /**
                     * 设置是否开启tms配置
                     * @param _tmsStatus 是否开启tms配置
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
                     * 获取tms配置
                     * @return TmsConfig tms配置
                     * 
                     */
                    TmsConfigDTO GetTmsConfig() const;

                    /**
                     * 设置tms配置
                     * @param _tmsConfig tms配置
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
                     * 获取是否开启IP白名单
                     * @return IpWhiteStatus 是否开启IP白名单
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置是否开启IP白名单
                     * @param _ipWhiteStatus 是否开启IP白名单
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
                     * 获取IP白名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpWhiteList IP白名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置IP白名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipWhiteList IP白名单列表
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
                     * 获取是否开启IP黑名单
                     * @return IpBlackStatus 是否开启IP黑名单
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置是否开启IP黑名单
                     * @param _ipBlackStatus 是否开启IP黑名单
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
                     * 获取IP黑名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpBlackList IP黑名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpBlackList() const;

                    /**
                     * 设置IP黑名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipBlackList IP黑名单列表
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
                     * 获取插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginConfigs 插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PluginConfigDTO> GetPluginConfigs() const;

                    /**
                     * 设置插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginConfigs 插件配置
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
                     * 获取超时配置，单位秒
                     * @return Timeout 超时配置，单位秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时配置，单位秒
                     * @param _timeout 超时配置，单位秒
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
                     * 获取状态：normal，disabled
                     * @return Status 状态：normal，disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：normal，disabled
                     * @param _status 状态：normal，disabled
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
                     * 获取关联应用数
                     * @return RelateAgentAppNum 关联应用数
                     * 
                     */
                    int64_t GetRelateAgentAppNum() const;

                    /**
                     * 设置关联应用数
                     * @param _relateAgentAppNum 关联应用数
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
                     * 获取请求路径
                     * @return Url 请求路径
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求路径
                     * @param _url 请求路径
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
                     * 获取是否开启提示词安全检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptModerateStatus 是否开启提示词安全检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPromptModerateStatus() const;

                    /**
                     * 设置是否开启提示词安全检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptModerateStatus 是否开启提示词安全检测
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
                     * 获取提示词安全检测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptModerateConfig 提示词安全检测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PromptModerateConfigDTO GetPromptModerateConfig() const;

                    /**
                     * 设置提示词安全检测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptModerateConfig 提示词安全检测配置
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

                private:

                    /**
                     * 腾讯云AppID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 腾讯云Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 访问路径
                     */
                    std::string m_pubPath;
                    bool m_pubPathHasBeenSet;

                    /**
                     * 路径匹配方式：absolute，prefix，regex
                     */
                    std::string m_pathMatchType;
                    bool m_pathMatchTypeHasBeenSet;

                    /**
                     * 目标模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetModelDTO> m_targetModels;
                    bool m_targetModelsHasBeenSet;

                    /**
                     * 模板模型的名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_modelNames;
                    bool m_modelNamesHasBeenSet;

                    /**
                     * 是否开启限流
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * 限流配置
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 是否开启token控制
                     */
                    bool m_tokenLimitStatus;
                    bool m_tokenLimitStatusHasBeenSet;

                    /**
                     * token控制
                     */
                    TokenLimitConfigDTO m_tokenLimitConfig;
                    bool m_tokenLimitConfigHasBeenSet;

                    /**
                     * 是否开启tms配置
                     */
                    bool m_tmsStatus;
                    bool m_tmsStatusHasBeenSet;

                    /**
                     * tms配置
                     */
                    TmsConfigDTO m_tmsConfig;
                    bool m_tmsConfigHasBeenSet;

                    /**
                     * 是否开启IP白名单
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * IP白名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * 是否开启IP黑名单
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * IP黑名单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipBlackList;
                    bool m_ipBlackListHasBeenSet;

                    /**
                     * 插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * 超时配置，单位秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 状态：normal，disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联应用数
                     */
                    int64_t m_relateAgentAppNum;
                    bool m_relateAgentAppNumHasBeenSet;

                    /**
                     * 请求路径
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 是否开启提示词安全检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_promptModerateStatus;
                    bool m_promptModerateStatusHasBeenSet;

                    /**
                     * 提示词安全检测配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PromptModerateConfigDTO m_promptModerateConfig;
                    bool m_promptModerateConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICERESPONSEVO_H_
