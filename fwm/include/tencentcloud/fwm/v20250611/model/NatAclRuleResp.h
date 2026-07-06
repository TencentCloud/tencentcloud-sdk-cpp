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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_NATACLRULERESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_NATACLRULERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * NAT边界规则响应结构
                */
                class NatAclRuleResp : public AbstractModel
                {
                public:
                    NatAclRuleResp();
                    ~NatAclRuleResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Sequence 优先级
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置优先级
                     * @param _sequence 优先级
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取规则方向：0-出向，1-入向
                     * @return Direction 规则方向：0-出向，1-入向
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置规则方向：0-出向，1-入向
                     * @param _direction 规则方向：0-出向，1-入向
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取源地址内容
                     * @return SourceContent 源地址内容
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置源地址内容
                     * @param _sourceContent 源地址内容
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取源类型
                     * @return SourceType 源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置源类型
                     * @param _sourceType 源类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceName 源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceName 源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取目的地址内容
                     * @return TargetContent 目的地址内容
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置目的地址内容
                     * @param _targetContent 目的地址内容
                     * 
                     */
                    void SetTargetContent(const std::string& _targetContent);

                    /**
                     * 判断参数 TargetContent 是否已赋值
                     * @return TargetContent 是否已赋值
                     * 
                     */
                    bool TargetContentHasBeenSet() const;

                    /**
                     * 获取目的类型
                     * @return TargetType 目的类型
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置目的类型
                     * @param _targetType 目的类型
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetName 目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetName 目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取动作：accept/drop/log
                     * @return RuleAction 动作：accept/drop/log
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置动作：accept/drop/log
                     * @param _ruleAction 动作：accept/drop/log
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述
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
                     * 获取规则生效范围
                     * @return Scope 规则生效范围
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置规则生效范围
                     * @param _scope 规则生效范围
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取规则生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScopeDesc 规则生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScopeDesc() const;

                    /**
                     * 设置规则生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scopeDesc 规则生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScopeDesc(const std::string& _scopeDesc);

                    /**
                     * 判断参数 ScopeDesc 是否已赋值
                     * @return ScopeDesc 是否已赋值
                     * 
                     */
                    bool ScopeDescHasBeenSet() const;

                    /**
                     * 获取防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwInsId 防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwInsId 防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountryName 国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountryName() const;

                    /**
                     * 设置国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countryName 国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountryName(const std::string& _countryName);

                    /**
                     * 判断参数 CountryName 是否已赋值
                     * @return CountryName 是否已赋值
                     * 
                     */
                    bool CountryNameHasBeenSet() const;

                    /**
                     * 获取城市名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityName 城市名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置城市名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityName 城市名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     * 
                     */
                    bool CityNameHasBeenSet() const;

                    /**
                     * 获取国家代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountryCode 国家代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCountryCode() const;

                    /**
                     * 设置国家代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countryCode 国家代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountryCode(const int64_t& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取城市代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityCode 城市代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCityCode() const;

                    /**
                     * 设置城市代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityCode 城市代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityCode(const int64_t& _cityCode);

                    /**
                     * 判断参数 CityCode 是否已赋值
                     * @return CityCode 是否已赋值
                     * 
                     */
                    bool CityCodeHasBeenSet() const;

                    /**
                     * 获取国家键值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountryKey 国家键值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountryKey() const;

                    /**
                     * 设置国家键值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countryKey 国家键值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountryKey(const std::string& _countryKey);

                    /**
                     * 判断参数 CountryKey 是否已赋值
                     * @return CountryKey 是否已赋值
                     * 
                     */
                    bool CountryKeyHasBeenSet() const;

                    /**
                     * 获取城市键值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityKey 城市键值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCityKey() const;

                    /**
                     * 设置城市键值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityKey 城市键值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityKey(const std::string& _cityKey);

                    /**
                     * 判断参数 CityKey 是否已赋值
                     * @return CityKey 是否已赋值
                     * 
                     */
                    bool CityKeyHasBeenSet() const;

                    /**
                     * 获取是否地域规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRegion 是否地域规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsRegion() const;

                    /**
                     * 设置是否地域规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRegion 是否地域规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsRegion(const int64_t& _isRegion);

                    /**
                     * 判断参数 IsRegion 是否已赋值
                     * @return IsRegion 是否已赋值
                     * 
                     */
                    bool IsRegionHasBeenSet() const;

                    /**
                     * 获取云厂商代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudCode 云厂商代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置云厂商代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudCode 云厂商代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudCode(const std::string& _cloudCode);

                    /**
                     * 判断参数 CloudCode 是否已赋值
                     * @return CloudCode 是否已赋值
                     * 
                     */
                    bool CloudCodeHasBeenSet() const;

                    /**
                     * 获取是否云厂商规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCloud 是否云厂商规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsCloud() const;

                    /**
                     * 设置是否云厂商规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCloud 是否云厂商规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCloud(const int64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTemplateId 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTemplateId 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTemplateName 端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTemplateName 端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTemplateName(const std::string& _paramTemplateName);

                    /**
                     * 判断参数 ParamTemplateName 是否已赋值
                     * @return ParamTemplateName 是否已赋值
                     * 
                     */
                    bool ParamTemplateNameHasBeenSet() const;

                    /**
                     * 获取规则是否失效：0-有效，1-失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Invalid 规则是否失效：0-有效，1-失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置规则是否失效：0-有效，1-失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalid 规则是否失效：0-有效，1-失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalid(const int64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                    /**
                     * 获取规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongMember 规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemberInfo GetBelongMember() const;

                    /**
                     * 设置规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongMember 规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBelongMember(const MemberInfo& _belongMember);

                    /**
                     * 判断参数 BelongMember 是否已赋值
                     * @return BelongMember 是否已赋值
                     * 
                     */
                    bool BelongMemberHasBeenSet() const;

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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取域名数
                     * @return DnsParseCnt 域名数
                     * 
                     */
                    int64_t GetDnsParseCnt() const;

                    /**
                     * 设置域名数
                     * @param _dnsParseCnt 域名数
                     * 
                     */
                    void SetDnsParseCnt(const int64_t& _dnsParseCnt);

                    /**
                     * 判断参数 DnsParseCnt 是否已赋值
                     * @return DnsParseCnt 是否已赋值
                     * 
                     */
                    bool DnsParseCntHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 规则方向：0-出向，1-入向
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 源地址内容
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 目的地址内容
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * 目的类型
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 动作：accept/drop/log
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则生效范围
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 规则生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scopeDesc;
                    bool m_scopeDescHasBeenSet;

                    /**
                     * 防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * 国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_countryName;
                    bool m_countryNameHasBeenSet;

                    /**
                     * 城市名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * 国家代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 城市代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cityCode;
                    bool m_cityCodeHasBeenSet;

                    /**
                     * 国家键值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_countryKey;
                    bool m_countryKeyHasBeenSet;

                    /**
                     * 城市键值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityKey;
                    bool m_cityKeyHasBeenSet;

                    /**
                     * 是否地域规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRegion;
                    bool m_isRegionHasBeenSet;

                    /**
                     * 云厂商代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                    /**
                     * 是否云厂商规则：0-否，1-是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * 规则是否失效：0-有效，1-失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * 规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemberInfo m_belongMember;
                    bool m_belongMemberHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 域名数
                     */
                    int64_t m_dnsParseCnt;
                    bool m_dnsParseCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_NATACLRULERESP_H_
