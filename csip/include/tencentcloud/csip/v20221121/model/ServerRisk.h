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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ServerRiskSuggestion.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 服务风险
                */
                class ServerRisk : public AbstractModel
                {
                public:
                    ServerRisk();
                    ~ServerRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取测绘标签
                     * @return ServiceTag 测绘标签
                     * 
                     */
                    std::string GetServiceTag() const;

                    /**
                     * 设置测绘标签
                     * @param _serviceTag 测绘标签
                     * 
                     */
                    void SetServiceTag(const std::string& _serviceTag);

                    /**
                     * 判断参数 ServiceTag 是否已赋值
                     * @return ServiceTag 是否已赋值
                     * 
                     */
                    bool ServiceTagHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取影响资产
                     * @return AffectAsset 影响资产
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置影响资产
                     * @param _affectAsset 影响资产
                     * 
                     */
                    void SetAffectAsset(const std::string& _affectAsset);

                    /**
                     * 判断参数 AffectAsset 是否已赋值
                     * @return AffectAsset 是否已赋值
                     * 
                     */
                    bool AffectAssetHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return InstanceType 资产类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置资产类型
                     * @param _instanceType 资产类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取风险等级 low:低危 high:高危 middle:中危 info:提示 extreme:严重
                     * @return Level 风险等级 low:低危 high:高危 middle:中危 info:提示 extreme:严重
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级 low:低危 high:高危 middle:中危 info:提示 extreme:严重
                     * @param _level 风险等级 low:低危 high:高危 middle:中危 info:提示 extreme:严重
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

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
                     * 获取组件
                     * @return Component 组件
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件
                     * @param _component 组件
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取服务
                     * @return Service 服务
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务
                     * @param _service 服务
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取最近识别时间
                     * @return RecentTime 最近识别时间
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置最近识别时间
                     * @param _recentTime 最近识别时间
                     * 
                     */
                    void SetRecentTime(const std::string& _recentTime);

                    /**
                     * 判断参数 RecentTime 是否已赋值
                     * @return RecentTime 是否已赋值
                     * 
                     */
                    bool RecentTimeHasBeenSet() const;

                    /**
                     * 获取首次识别时间
                     * @return FirstTime 首次识别时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次识别时间
                     * @param _firstTime 首次识别时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取风险详情
                     * @return RiskDetails 风险详情
                     * 
                     */
                    std::string GetRiskDetails() const;

                    /**
                     * 设置风险详情
                     * @param _riskDetails 风险详情
                     * 
                     */
                    void SetRiskDetails(const std::string& _riskDetails);

                    /**
                     * 判断参数 RiskDetails 是否已赋值
                     * @return RiskDetails 是否已赋值
                     * 
                     */
                    bool RiskDetailsHasBeenSet() const;

                    /**
                     * 获取处置建议
                     * @return Suggestion 处置建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置处置建议
                     * @param _suggestion 处置建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取状态，0未处理、1已处置、2已忽略、3云防已防护
                     * @return Status 状态，0未处理、1已处置、2已忽略、3云防已防护
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，0未处理、1已处置、2已忽略、3云防已防护
                     * @param _status 状态，0未处理、1已处置、2已忽略、3云防已防护
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取资产唯一id
                     * @return Id 资产唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资产唯一id
                     * @param _id 资产唯一id
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
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户昵称
                     * @return Nick 用户昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
                     * @param _nick 用户昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
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
                     * 获取服务快照
                     * @return ServiceSnapshot 服务快照
                     * 
                     */
                    std::string GetServiceSnapshot() const;

                    /**
                     * 设置服务快照
                     * @param _serviceSnapshot 服务快照
                     * 
                     */
                    void SetServiceSnapshot(const std::string& _serviceSnapshot);

                    /**
                     * 判断参数 ServiceSnapshot 是否已赋值
                     * @return ServiceSnapshot 是否已赋值
                     * 
                     */
                    bool ServiceSnapshotHasBeenSet() const;

                    /**
                     * 获取服务访问的url
                     * @return Url 服务访问的url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置服务访问的url
                     * @param _url 服务访问的url
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
                     * 获取列表索引值
                     * @return Index 列表索引值
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置列表索引值
                     * @param _index 列表索引值
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取风险列表
                     * @return RiskList 风险列表
                     * 
                     */
                    std::vector<ServerRiskSuggestion> GetRiskList() const;

                    /**
                     * 设置风险列表
                     * @param _riskList 风险列表
                     * 
                     */
                    void SetRiskList(const std::vector<ServerRiskSuggestion>& _riskList);

                    /**
                     * 判断参数 RiskList 是否已赋值
                     * @return RiskList 是否已赋值
                     * 
                     */
                    bool RiskListHasBeenSet() const;

                    /**
                     * 获取建议列表
                     * @return SuggestionList 建议列表
                     * 
                     */
                    std::vector<ServerRiskSuggestion> GetSuggestionList() const;

                    /**
                     * 设置建议列表
                     * @param _suggestionList 建议列表
                     * 
                     */
                    void SetSuggestionList(const std::vector<ServerRiskSuggestion>& _suggestionList);

                    /**
                     * 判断参数 SuggestionList 是否已赋值
                     * @return SuggestionList 是否已赋值
                     * 
                     */
                    bool SuggestionListHasBeenSet() const;

                    /**
                     * 获取HTTP响应状态码
                     * @return StatusCode HTTP响应状态码
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置HTTP响应状态码
                     * @param _statusCode HTTP响应状态码
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取新风险等级,high_risk 高危 suspect 疑似 Normal 暂无风险
                     * @return NewLevel 新风险等级,high_risk 高危 suspect 疑似 Normal 暂无风险
                     * 
                     */
                    std::string GetNewLevel() const;

                    /**
                     * 设置新风险等级,high_risk 高危 suspect 疑似 Normal 暂无风险
                     * @param _newLevel 新风险等级,high_risk 高危 suspect 疑似 Normal 暂无风险
                     * 
                     */
                    void SetNewLevel(const std::string& _newLevel);

                    /**
                     * 判断参数 NewLevel 是否已赋值
                     * @return NewLevel 是否已赋值
                     * 
                     */
                    bool NewLevelHasBeenSet() const;

                    /**
                     * 获取状态，0未处理、1已处置、2已忽略、3云防已防护、4无需处理
                     * @return XspmStatus 状态，0未处理、1已处置、2已忽略、3云防已防护、4无需处理
                     * 
                     */
                    uint64_t GetXspmStatus() const;

                    /**
                     * 设置状态，0未处理、1已处置、2已忽略、3云防已防护、4无需处理
                     * @param _xspmStatus 状态，0未处理、1已处置、2已忽略、3云防已防护、4无需处理
                     * 
                     */
                    void SetXspmStatus(const uint64_t& _xspmStatus);

                    /**
                     * 判断参数 XspmStatus 是否已赋值
                     * @return XspmStatus 是否已赋值
                     * 
                     */
                    bool XspmStatusHasBeenSet() const;

                private:

                    /**
                     * 测绘标签
                     */
                    std::string m_serviceTag;
                    bool m_serviceTagHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 影响资产
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 风险等级 low:低危 high:高危 middle:中危 info:提示 extreme:严重
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 组件
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 服务
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 最近识别时间
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * 首次识别时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 风险详情
                     */
                    std::string m_riskDetails;
                    bool m_riskDetailsHasBeenSet;

                    /**
                     * 处置建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 状态，0未处理、1已处置、2已忽略、3云防已防护
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资产唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 服务快照
                     */
                    std::string m_serviceSnapshot;
                    bool m_serviceSnapshotHasBeenSet;

                    /**
                     * 服务访问的url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 列表索引值
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 风险列表
                     */
                    std::vector<ServerRiskSuggestion> m_riskList;
                    bool m_riskListHasBeenSet;

                    /**
                     * 建议列表
                     */
                    std::vector<ServerRiskSuggestion> m_suggestionList;
                    bool m_suggestionListHasBeenSet;

                    /**
                     * HTTP响应状态码
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 新风险等级,high_risk 高危 suspect 疑似 Normal 暂无风险
                     */
                    std::string m_newLevel;
                    bool m_newLevelHasBeenSet;

                    /**
                     * 状态，0未处理、1已处置、2已忽略、3云防已防护、4无需处理
                     */
                    uint64_t m_xspmStatus;
                    bool m_xspmStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISK_H_
