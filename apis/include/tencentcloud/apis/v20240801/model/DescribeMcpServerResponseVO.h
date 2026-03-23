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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMCPSERVERRESPONSEVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMCPSERVERRESPONSEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetHostDTO.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/IpConfig.h>
#include <tencentcloud/apis/v20240801/model/IDNameVO.h>
#include <tencentcloud/apis/v20240801/model/McpSecurityRulesVO.h>
#include <tencentcloud/apis/v20240801/model/ToolConfigVO.h>
#include <tencentcloud/apis/v20240801/model/McpUrlObj.h>
#include <tencentcloud/apis/v20240801/model/McpTool.h>
#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeMcpServerResponseVO
                */
                class DescribeMcpServerResponseVO : public AbstractModel
                {
                public:
                    DescribeMcpServerResponseVO();
                    ~DescribeMcpServerResponseVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelIDs 标签ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelIDs() const;

                    /**
                     * 设置标签ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelIDs 标签ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelIDs(const std::vector<std::string>& _labelIDs);

                    /**
                     * 判断参数 LabelIDs 是否已赋值
                     * @return LabelIDs 是否已赋值
                     * 
                     */
                    bool LabelIDsHasBeenSet() const;

                    /**
                     * 获取目录ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryIDs 目录ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCategoryIDs() const;

                    /**
                     * 设置目录ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryIDs 目录ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategoryIDs(const std::vector<std::string>& _categoryIDs);

                    /**
                     * 判断参数 CategoryIDs 是否已赋值
                     * @return CategoryIDs 是否已赋值
                     * 
                     */
                    bool CategoryIDsHasBeenSet() const;

                    /**
                     * 获取负载方式，robin random consistentHash
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSelect 负载方式，robin random consistentHash
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSelect() const;

                    /**
                     * 设置负载方式，robin random consistentHash
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSelect 负载方式，robin random consistentHash
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSelect(const std::string& _targetSelect);

                    /**
                     * 判断参数 TargetSelect 是否已赋值
                     * @return TargetSelect 是否已赋值
                     * 
                     */
                    bool TargetSelectHasBeenSet() const;

                    /**
                     * 获取目标服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHosts 目标服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置目标服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHosts 目标服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHosts(const std::vector<TargetHostDTO>& _targetHosts);

                    /**
                     * 判断参数 TargetHosts 是否已赋值
                     * @return TargetHosts 是否已赋值
                     * 
                     */
                    bool TargetHostsHasBeenSet() const;

                    /**
                     * 获取后端协议：http https
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpProtocolType 后端协议：http https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置后端协议：http https
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpProtocolType 后端协议：http https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpProtocolType(const std::string& _httpProtocolType);

                    /**
                     * 判断参数 HttpProtocolType 是否已赋值
                     * @return HttpProtocolType 是否已赋值
                     * 
                     */
                    bool HttpProtocolTypeHasBeenSet() const;

                    /**
                     * 获取证书检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckTargetCertsError 证书检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置证书检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkTargetCertsError 证书检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckTargetCertsError(const bool& _checkTargetCertsError);

                    /**
                     * 判断参数 CheckTargetCertsError 是否已赋值
                     * @return CheckTargetCertsError 是否已赋值
                     * 
                     */
                    bool CheckTargetCertsErrorHasBeenSet() const;

                    /**
                     * 获取目标路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetPath 目标路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置目标路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetPath 目标路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                    /**
                     * 获取流量控制状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokeLimitConfigStatus 流量控制状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置流量控制状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokeLimitConfigStatus 流量控制状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取流量控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokeLimitConfig 流量控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置流量控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokeLimitConfig 流量控制配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IP白名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpWhiteStatus IP白名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置IP白名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipWhiteStatus IP白名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IP白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpWhiteConfig IP白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpConfig GetIpWhiteConfig() const;

                    /**
                     * 设置IP白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipWhiteConfig IP白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpWhiteConfig(const IpConfig& _ipWhiteConfig);

                    /**
                     * 判断参数 IpWhiteConfig 是否已赋值
                     * @return IpWhiteConfig 是否已赋值
                     * 
                     */
                    bool IpWhiteConfigHasBeenSet() const;

                    /**
                     * 获取IP黑名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpBlackStatus IP黑名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置IP黑名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipBlackStatus IP黑名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IP黑名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpBlackConfig IP黑名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpConfig GetIpBlackConfig() const;

                    /**
                     * 设置IP黑名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipBlackConfig IP黑名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpBlackConfig(const IpConfig& _ipBlackConfig);

                    /**
                     * 判断参数 IpBlackConfig 是否已赋值
                     * @return IpBlackConfig 是否已赋值
                     * 
                     */
                    bool IpBlackConfigHasBeenSet() const;

                    /**
                     * 获取mcp server ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID mcp server ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置mcp server ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD mcp server ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取预览地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 预览地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置预览地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 预览地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return App 应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IDNameVO GetApp() const;

                    /**
                     * 设置应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _app 应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApp(const IDNameVO& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalogs 目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IDNameVO> GetCatalogs() const;

                    /**
                     * 设置目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogs 目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogs(const std::vector<IDNameVO>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IDNameVO> GetLabels() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<IDNameVO>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户appID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppID 用户appID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置用户appID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appID 用户appID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomHttpHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomHttpHost() const;

                    /**
                     * 设置自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customHttpHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomHttpHost(const std::string& _customHttpHost);

                    /**
                     * 判断参数 CustomHttpHost 是否已赋值
                     * @return CustomHttpHost 是否已赋值
                     * 
                     */
                    bool CustomHttpHostHasBeenSet() const;

                    /**
                     * 获取 Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpHostType  Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpHostType() const;

                    /**
                     * 设置 Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpHostType  Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpHostType(const std::string& _httpHostType);

                    /**
                     * 判断参数 HttpHostType 是否已赋值
                     * @return HttpHostType 是否已赋值
                     * 
                     */
                    bool HttpHostTypeHasBeenSet() const;

                    /**
                     * 获取请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取mcp server模式
                     * @return Mode mcp server模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置mcp server模式
                     * @param _mode mcp server模式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取mcp version
                     * @return McpVersion mcp version
                     * 
                     */
                    std::string GetMcpVersion() const;

                    /**
                     * 设置mcp version
                     * @param _mcpVersion mcp version
                     * 
                     */
                    void SetMcpVersion(const std::string& _mcpVersion);

                    /**
                     * 判断参数 McpVersion 是否已赋值
                     * @return McpVersion 是否已赋值
                     * 
                     */
                    bool McpVersionHasBeenSet() const;

                    /**
                     * 获取封装模式下绑定的服务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WrapServices 封装模式下绑定的服务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetWrapServices() const;

                    /**
                     * 设置封装模式下绑定的服务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wrapServices 封装模式下绑定的服务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWrapServices(const std::vector<std::string>& _wrapServices);

                    /**
                     * 判断参数 WrapServices 是否已赋值
                     * @return WrapServices 是否已赋值
                     * 
                     */
                    bool WrapServicesHasBeenSet() const;

                    /**
                     * 获取工具数量
                     * @return ToolNum 工具数量
                     * 
                     */
                    int64_t GetToolNum() const;

                    /**
                     * 设置工具数量
                     * @param _toolNum 工具数量
                     * 
                     */
                    void SetToolNum(const int64_t& _toolNum);

                    /**
                     * 判断参数 ToolNum 是否已赋值
                     * @return ToolNum 是否已赋值
                     * 
                     */
                    bool ToolNumHasBeenSet() const;

                    /**
                     * 获取安全规则集响应
                     * @return McpSecurityRulesVO 安全规则集响应
                     * 
                     */
                    std::vector<McpSecurityRulesVO> GetMcpSecurityRulesVO() const;

                    /**
                     * 设置安全规则集响应
                     * @param _mcpSecurityRulesVO 安全规则集响应
                     * 
                     */
                    void SetMcpSecurityRulesVO(const std::vector<McpSecurityRulesVO>& _mcpSecurityRulesVO);

                    /**
                     * 判断参数 McpSecurityRulesVO 是否已赋值
                     * @return McpSecurityRulesVO 是否已赋值
                     * 
                     */
                    bool McpSecurityRulesVOHasBeenSet() const;

                    /**
                     * 获取真实工具级别配置，实时拉取了tool/list做渲染的，如果tool/list不通，就拉不到。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolConfigs 真实工具级别配置，实时拉取了tool/list做渲染的，如果tool/list不通，就拉不到。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ToolConfigVO> GetToolConfigs() const;

                    /**
                     * 设置真实工具级别配置，实时拉取了tool/list做渲染的，如果tool/list不通，就拉不到。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolConfigs 真实工具级别配置，实时拉取了tool/list做渲染的，如果tool/list不通，就拉不到。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolConfigs(const std::vector<ToolConfigVO>& _toolConfigs);

                    /**
                     * 判断参数 ToolConfigs 是否已赋值
                     * @return ToolConfigs 是否已赋值
                     * 
                     */
                    bool ToolConfigsHasBeenSet() const;

                    /**
                     * 获取访问URL
                     * @return UrlObj 访问URL
                     * 
                     */
                    McpUrlObj GetUrlObj() const;

                    /**
                     * 设置访问URL
                     * @param _urlObj 访问URL
                     * 
                     */
                    void SetUrlObj(const McpUrlObj& _urlObj);

                    /**
                     * 判断参数 UrlObj 是否已赋值
                     * @return UrlObj 是否已赋值
                     * 
                     */
                    bool UrlObjHasBeenSet() const;

                    /**
                     * 获取后端mcp服务是否正常
                     * @return ToolMessage 后端mcp服务是否正常
                     * 
                     */
                    std::string GetToolMessage() const;

                    /**
                     * 设置后端mcp服务是否正常
                     * @param _toolMessage 后端mcp服务是否正常
                     * 
                     */
                    void SetToolMessage(const std::string& _toolMessage);

                    /**
                     * 判断参数 ToolMessage 是否已赋值
                     * @return ToolMessage 是否已赋值
                     * 
                     */
                    bool ToolMessageHasBeenSet() const;

                    /**
                     * 获取后端mcp服务的工具列表
                     * @return Tools 后端mcp服务的工具列表
                     * 
                     */
                    std::vector<McpTool> GetTools() const;

                    /**
                     * 设置后端mcp服务的工具列表
                     * @param _tools 后端mcp服务的工具列表
                     * 
                     */
                    void SetTools(const std::vector<McpTool>& _tools);

                    /**
                     * 判断参数 Tools 是否已赋值
                     * @return Tools 是否已赋值
                     * 
                     */
                    bool ToolsHasBeenSet() const;

                    /**
                     * 获取封装的API分组ID
                     * @return WrapPaasID 封装的API分组ID
                     * 
                     */
                    std::string GetWrapPaasID() const;

                    /**
                     * 设置封装的API分组ID
                     * @param _wrapPaasID 封装的API分组ID
                     * 
                     */
                    void SetWrapPaasID(const std::string& _wrapPaasID);

                    /**
                     * 判断参数 WrapPaasID 是否已赋值
                     * @return WrapPaasID 是否已赋值
                     * 
                     */
                    bool WrapPaasIDHasBeenSet() const;

                    /**
                     * 获取关联的agentApp数量
                     * @return RelateAgentAppNum 关联的agentApp数量
                     * 
                     */
                    int64_t GetRelateAgentAppNum() const;

                    /**
                     * 设置关联的agentApp数量
                     * @param _relateAgentAppNum 关联的agentApp数量
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

                private:

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 标签ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelIDs;
                    bool m_labelIDsHasBeenSet;

                    /**
                     * 目录ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_categoryIDs;
                    bool m_categoryIDsHasBeenSet;

                    /**
                     * 负载方式，robin random consistentHash
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSelect;
                    bool m_targetSelectHasBeenSet;

                    /**
                     * 目标服务器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * 后端协议：http https
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * 证书检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * 目标路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * 流量控制状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * 流量控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * IP白名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * IP白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpConfig m_ipWhiteConfig;
                    bool m_ipWhiteConfigHasBeenSet;

                    /**
                     * IP黑名单开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * IP黑名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpConfig m_ipBlackConfig;
                    bool m_ipBlackConfigHasBeenSet;

                    /**
                     * mcp server ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 预览地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 应用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IDNameVO m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IDNameVO> m_catalogs;
                    bool m_catalogsHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IDNameVO> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 用户appID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customHttpHost;
                    bool m_customHttpHostHasBeenSet;

                    /**
                     *  Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpHostType;
                    bool m_httpHostTypeHasBeenSet;

                    /**
                     * 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * mcp server模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * mcp version
                     */
                    std::string m_mcpVersion;
                    bool m_mcpVersionHasBeenSet;

                    /**
                     * 封装模式下绑定的服务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_wrapServices;
                    bool m_wrapServicesHasBeenSet;

                    /**
                     * 工具数量
                     */
                    int64_t m_toolNum;
                    bool m_toolNumHasBeenSet;

                    /**
                     * 安全规则集响应
                     */
                    std::vector<McpSecurityRulesVO> m_mcpSecurityRulesVO;
                    bool m_mcpSecurityRulesVOHasBeenSet;

                    /**
                     * 真实工具级别配置，实时拉取了tool/list做渲染的，如果tool/list不通，就拉不到。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ToolConfigVO> m_toolConfigs;
                    bool m_toolConfigsHasBeenSet;

                    /**
                     * 访问URL
                     */
                    McpUrlObj m_urlObj;
                    bool m_urlObjHasBeenSet;

                    /**
                     * 后端mcp服务是否正常
                     */
                    std::string m_toolMessage;
                    bool m_toolMessageHasBeenSet;

                    /**
                     * 后端mcp服务的工具列表
                     */
                    std::vector<McpTool> m_tools;
                    bool m_toolsHasBeenSet;

                    /**
                     * 封装的API分组ID
                     */
                    std::string m_wrapPaasID;
                    bool m_wrapPaasIDHasBeenSet;

                    /**
                     * 关联的agentApp数量
                     */
                    int64_t m_relateAgentAppNum;
                    bool m_relateAgentAppNumHasBeenSet;

                    /**
                     * 插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMCPSERVERRESPONSEVO_H_
