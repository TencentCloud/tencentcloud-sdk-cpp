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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTDETAILRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/DisposalSuggestionItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNDRDataLeakOutAlertDetail返回参数结构体
                */
                class DescribeNDRDataLeakOutAlertDetailResponse : public AbstractModel
                {
                public:
                    DescribeNDRDataLeakOutAlertDetailResponse();
                    ~DescribeNDRDataLeakOutAlertDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险事件ID
                     * @return RiskID 风险事件ID
                     * 
                     */
                    std::string GetRiskID() const;

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取资产实例ID
                     * @return InstanceId 资产实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资产实例名称
                     * @return InstanceName 资产实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取资产实例类型
                     * @return InstanceType 资产实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取资产所在地域
                     * @return Region 资产所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取源IP
                     * @return SrcIP 源IP
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取目的IP端口
                     * @return DstIPPort 目的IP端口
                     * 
                     */
                    std::string GetDstIPPort() const;

                    /**
                     * 判断参数 DstIPPort 是否已赋值
                     * @return DstIPPort 是否已赋值
                     * 
                     */
                    bool DstIPPortHasBeenSet() const;

                    /**
                     * 获取目的Host
                     * @return Hostname 目的Host
                     * 
                     */
                    std::string GetHostname() const;

                    /**
                     * 判断参数 Hostname 是否已赋值
                     * @return Hostname 是否已赋值
                     * 
                     */
                    bool HostnameHasBeenSet() const;

                    /**
                     * 获取目的服务类型
                     * @return DstServiceType 目的服务类型
                     * 
                     */
                    std::string GetDstServiceType() const;

                    /**
                     * 判断参数 DstServiceType 是否已赋值
                     * @return DstServiceType 是否已赋值
                     * 
                     */
                    bool DstServiceTypeHasBeenSet() const;

                    /**
                     * 获取目的服务名称
                     * @return DstServiceName 目的服务名称
                     * 
                     */
                    std::string GetDstServiceName() const;

                    /**
                     * 判断参数 DstServiceName 是否已赋值
                     * @return DstServiceName 是否已赋值
                     * 
                     */
                    bool DstServiceNameHasBeenSet() const;

                    /**
                     * 获取访问API
                     * @return ApiPattern 访问API
                     * 
                     */
                    std::string GetApiPattern() const;

                    /**
                     * 判断参数 ApiPattern 是否已赋值
                     * @return ApiPattern 是否已赋值
                     * 
                     */
                    bool ApiPatternHasBeenSet() const;

                    /**
                     * 获取目的IP地理信息
                     * @return DstGeoLocation 目的IP地理信息
                     * 
                     */
                    std::string GetDstGeoLocation() const;

                    /**
                     * 判断参数 DstGeoLocation 是否已赋值
                     * @return DstGeoLocation 是否已赋值
                     * 
                     */
                    bool DstGeoLocationHasBeenSet() const;

                    /**
                     * 获取应用层协议
                     * @return AppProto 应用层协议
                     * 
                     */
                    std::string GetAppProto() const;

                    /**
                     * 判断参数 AppProto 是否已赋值
                     * @return AppProto 是否已赋值
                     * 
                     */
                    bool AppProtoHasBeenSet() const;

                    /**
                     * 获取敏感类型集合
                     * @return LeakTypeSet 敏感类型集合
                     * 
                     */
                    std::string GetLeakTypeSet() const;

                    /**
                     * 判断参数 LeakTypeSet 是否已赋值
                     * @return LeakTypeSet 是否已赋值
                     * 
                     */
                    bool LeakTypeSetHasBeenSet() const;

                    /**
                     * 获取事件数量
                     * @return EventCount 事件数量
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取敏感数据数量
                     * @return LeakDataCount 敏感数据数量
                     * 
                     */
                    uint64_t GetLeakDataCount() const;

                    /**
                     * 判断参数 LeakDataCount 是否已赋值
                     * @return LeakDataCount 是否已赋值
                     * 
                     */
                    bool LeakDataCountHasBeenSet() const;

                    /**
                     * 获取原始风险等级
                     * @return Level 原始风险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取处置状态
                     * @return Status 处置状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取处置备注
                     * @return Comment 处置备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取首次识别时间
                     * @return FirstIdentificationTime 首次识别时间
                     * 
                     */
                    std::string GetFirstIdentificationTime() const;

                    /**
                     * 判断参数 FirstIdentificationTime 是否已赋值
                     * @return FirstIdentificationTime 是否已赋值
                     * 
                     */
                    bool FirstIdentificationTimeHasBeenSet() const;

                    /**
                     * 获取最近识别时间
                     * @return LatestIdentificationTime 最近识别时间
                     * 
                     */
                    std::string GetLatestIdentificationTime() const;

                    /**
                     * 判断参数 LatestIdentificationTime 是否已赋值
                     * @return LatestIdentificationTime 是否已赋值
                     * 
                     */
                    bool LatestIdentificationTimeHasBeenSet() const;

                    /**
                     * 获取AI任务分析状态
                     * @return AnalysisStatus AI任务分析状态
                     * 
                     */
                    int64_t GetAnalysisStatus() const;

                    /**
                     * 判断参数 AnalysisStatus 是否已赋值
                     * @return AnalysisStatus 是否已赋值
                     * 
                     */
                    bool AnalysisStatusHasBeenSet() const;

                    /**
                     * 获取AI任务失败原因
                     * @return AnalysisFailReason AI任务失败原因
                     * 
                     */
                    std::string GetAnalysisFailReason() const;

                    /**
                     * 判断参数 AnalysisFailReason 是否已赋值
                     * @return AnalysisFailReason 是否已赋值
                     * 
                     */
                    bool AnalysisFailReasonHasBeenSet() const;

                    /**
                     * 获取最近一次AI分析时间
                     * @return LastAnalysisTime 最近一次AI分析时间
                     * 
                     */
                    std::string GetLastAnalysisTime() const;

                    /**
                     * 判断参数 LastAnalysisTime 是否已赋值
                     * @return LastAnalysisTime 是否已赋值
                     * 
                     */
                    bool LastAnalysisTimeHasBeenSet() const;

                    /**
                     * 获取API业务类型
                     * @return ApiBizType API业务类型
                     * 
                     */
                    std::string GetApiBizType() const;

                    /**
                     * 判断参数 ApiBizType 是否已赋值
                     * @return ApiBizType 是否已赋值
                     * 
                     */
                    bool ApiBizTypeHasBeenSet() const;

                    /**
                     * 获取API业务描述
                     * @return ApiBizDescription API业务描述
                     * 
                     */
                    std::string GetApiBizDescription() const;

                    /**
                     * 判断参数 ApiBizDescription 是否已赋值
                     * @return ApiBizDescription 是否已赋值
                     * 
                     */
                    bool ApiBizDescriptionHasBeenSet() const;

                    /**
                     * 获取风险场景（类型）
                     * @return RiskScenario 风险场景（类型）
                     * 
                     */
                    std::string GetRiskScenario() const;

                    /**
                     * 判断参数 RiskScenario 是否已赋值
                     * @return RiskScenario 是否已赋值
                     * 
                     */
                    bool RiskScenarioHasBeenSet() const;

                    /**
                     * 获取风险场景（类型）描述
                     * @return RiskScenarioDetail 风险场景（类型）描述
                     * 
                     */
                    std::string GetRiskScenarioDetail() const;

                    /**
                     * 判断参数 RiskScenarioDetail 是否已赋值
                     * @return RiskScenarioDetail 是否已赋值
                     * 
                     */
                    bool RiskScenarioDetailHasBeenSet() const;

                    /**
                     * 获取风险总结（概览）
                     * @return RiskSummary 风险总结（概览）
                     * 
                     */
                    std::string GetRiskSummary() const;

                    /**
                     * 判断参数 RiskSummary 是否已赋值
                     * @return RiskSummary 是否已赋值
                     * 
                     */
                    bool RiskSummaryHasBeenSet() const;

                    /**
                     * 获取推断依据
                     * @return RiskBasis 推断依据
                     * 
                     */
                    std::string GetRiskBasis() const;

                    /**
                     * 判断参数 RiskBasis 是否已赋值
                     * @return RiskBasis 是否已赋值
                     * 
                     */
                    bool RiskBasisHasBeenSet() const;

                    /**
                     * 获取风险影响范围
                     * @return ImpactScope 风险影响范围
                     * 
                     */
                    std::string GetImpactScope() const;

                    /**
                     * 判断参数 ImpactScope 是否已赋值
                     * @return ImpactScope 是否已赋值
                     * 
                     */
                    bool ImpactScopeHasBeenSet() const;

                    /**
                     * 获取AI建议风险等级
                     * @return AiSuggestedLevel AI建议风险等级
                     * 
                     */
                    int64_t GetAiSuggestedLevel() const;

                    /**
                     * 判断参数 AiSuggestedLevel 是否已赋值
                     * @return AiSuggestedLevel 是否已赋值
                     * 
                     */
                    bool AiSuggestedLevelHasBeenSet() const;

                    /**
                     * 获取处置建议
                     * @return DisposalSuggestions 处置建议
                     * 
                     */
                    std::vector<DisposalSuggestionItem> GetDisposalSuggestions() const;

                    /**
                     * 判断参数 DisposalSuggestions 是否已赋值
                     * @return DisposalSuggestions 是否已赋值
                     * 
                     */
                    bool DisposalSuggestionsHasBeenSet() const;

                    /**
                     * 获取http请求头
                     * @return HttpRequestHeader http请求头
                     * 
                     */
                    std::string GetHttpRequestHeader() const;

                    /**
                     * 判断参数 HttpRequestHeader 是否已赋值
                     * @return HttpRequestHeader 是否已赋值
                     * 
                     */
                    bool HttpRequestHeaderHasBeenSet() const;

                    /**
                     * 获取http请求体
                     * @return HttpRequestBody http请求体
                     * 
                     */
                    std::string GetHttpRequestBody() const;

                    /**
                     * 判断参数 HttpRequestBody 是否已赋值
                     * @return HttpRequestBody 是否已赋值
                     * 
                     */
                    bool HttpRequestBodyHasBeenSet() const;

                    /**
                     * 获取http响应头
                     * @return HttpResponseHeader http响应头
                     * 
                     */
                    std::string GetHttpResponseHeader() const;

                    /**
                     * 判断参数 HttpResponseHeader 是否已赋值
                     * @return HttpResponseHeader 是否已赋值
                     * 
                     */
                    bool HttpResponseHeaderHasBeenSet() const;

                    /**
                     * 获取http响应体
                     * @return HttpResponseBody http响应体
                     * 
                     */
                    std::string GetHttpResponseBody() const;

                    /**
                     * 判断参数 HttpResponseBody 是否已赋值
                     * @return HttpResponseBody 是否已赋值
                     * 
                     */
                    bool HttpResponseBodyHasBeenSet() const;

                    /**
                     * 获取敏感数据条目
                     * @return LeakDataEntries 敏感数据条目
                     * 
                     */
                    std::string GetLeakDataEntries() const;

                    /**
                     * 判断参数 LeakDataEntries 是否已赋值
                     * @return LeakDataEntries 是否已赋值
                     * 
                     */
                    bool LeakDataEntriesHasBeenSet() const;

                    /**
                     * 获取脱敏状态
                     * @return MaskStatus 脱敏状态
                     * 
                     */
                    std::string GetMaskStatus() const;

                    /**
                     * 判断参数 MaskStatus 是否已赋值
                     * @return MaskStatus 是否已赋值
                     * 
                     */
                    bool MaskStatusHasBeenSet() const;

                    /**
                     * 获取最高敏感等级
                     * @return HighestLevel 最高敏感等级
                     * 
                     */
                    std::string GetHighestLevel() const;

                    /**
                     * 判断参数 HighestLevel 是否已赋值
                     * @return HighestLevel 是否已赋值
                     * 
                     */
                    bool HighestLevelHasBeenSet() const;

                private:

                    /**
                     * 风险事件ID
                     */
                    std::string m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * 资产实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 资产实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 资产所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 源IP
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 目的IP端口
                     */
                    std::string m_dstIPPort;
                    bool m_dstIPPortHasBeenSet;

                    /**
                     * 目的Host
                     */
                    std::string m_hostname;
                    bool m_hostnameHasBeenSet;

                    /**
                     * 目的服务类型
                     */
                    std::string m_dstServiceType;
                    bool m_dstServiceTypeHasBeenSet;

                    /**
                     * 目的服务名称
                     */
                    std::string m_dstServiceName;
                    bool m_dstServiceNameHasBeenSet;

                    /**
                     * 访问API
                     */
                    std::string m_apiPattern;
                    bool m_apiPatternHasBeenSet;

                    /**
                     * 目的IP地理信息
                     */
                    std::string m_dstGeoLocation;
                    bool m_dstGeoLocationHasBeenSet;

                    /**
                     * 应用层协议
                     */
                    std::string m_appProto;
                    bool m_appProtoHasBeenSet;

                    /**
                     * 敏感类型集合
                     */
                    std::string m_leakTypeSet;
                    bool m_leakTypeSetHasBeenSet;

                    /**
                     * 事件数量
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 敏感数据数量
                     */
                    uint64_t m_leakDataCount;
                    bool m_leakDataCountHasBeenSet;

                    /**
                     * 原始风险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 处置状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 处置备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 首次识别时间
                     */
                    std::string m_firstIdentificationTime;
                    bool m_firstIdentificationTimeHasBeenSet;

                    /**
                     * 最近识别时间
                     */
                    std::string m_latestIdentificationTime;
                    bool m_latestIdentificationTimeHasBeenSet;

                    /**
                     * AI任务分析状态
                     */
                    int64_t m_analysisStatus;
                    bool m_analysisStatusHasBeenSet;

                    /**
                     * AI任务失败原因
                     */
                    std::string m_analysisFailReason;
                    bool m_analysisFailReasonHasBeenSet;

                    /**
                     * 最近一次AI分析时间
                     */
                    std::string m_lastAnalysisTime;
                    bool m_lastAnalysisTimeHasBeenSet;

                    /**
                     * API业务类型
                     */
                    std::string m_apiBizType;
                    bool m_apiBizTypeHasBeenSet;

                    /**
                     * API业务描述
                     */
                    std::string m_apiBizDescription;
                    bool m_apiBizDescriptionHasBeenSet;

                    /**
                     * 风险场景（类型）
                     */
                    std::string m_riskScenario;
                    bool m_riskScenarioHasBeenSet;

                    /**
                     * 风险场景（类型）描述
                     */
                    std::string m_riskScenarioDetail;
                    bool m_riskScenarioDetailHasBeenSet;

                    /**
                     * 风险总结（概览）
                     */
                    std::string m_riskSummary;
                    bool m_riskSummaryHasBeenSet;

                    /**
                     * 推断依据
                     */
                    std::string m_riskBasis;
                    bool m_riskBasisHasBeenSet;

                    /**
                     * 风险影响范围
                     */
                    std::string m_impactScope;
                    bool m_impactScopeHasBeenSet;

                    /**
                     * AI建议风险等级
                     */
                    int64_t m_aiSuggestedLevel;
                    bool m_aiSuggestedLevelHasBeenSet;

                    /**
                     * 处置建议
                     */
                    std::vector<DisposalSuggestionItem> m_disposalSuggestions;
                    bool m_disposalSuggestionsHasBeenSet;

                    /**
                     * http请求头
                     */
                    std::string m_httpRequestHeader;
                    bool m_httpRequestHeaderHasBeenSet;

                    /**
                     * http请求体
                     */
                    std::string m_httpRequestBody;
                    bool m_httpRequestBodyHasBeenSet;

                    /**
                     * http响应头
                     */
                    std::string m_httpResponseHeader;
                    bool m_httpResponseHeaderHasBeenSet;

                    /**
                     * http响应体
                     */
                    std::string m_httpResponseBody;
                    bool m_httpResponseBodyHasBeenSet;

                    /**
                     * 敏感数据条目
                     */
                    std::string m_leakDataEntries;
                    bool m_leakDataEntriesHasBeenSet;

                    /**
                     * 脱敏状态
                     */
                    std::string m_maskStatus;
                    bool m_maskStatusHasBeenSet;

                    /**
                     * 最高敏感等级
                     */
                    std::string m_highestLevel;
                    bool m_highestLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTDETAILRESPONSE_H_
