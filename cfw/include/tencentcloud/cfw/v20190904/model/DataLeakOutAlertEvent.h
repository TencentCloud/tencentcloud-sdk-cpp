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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DATALEAKOUTALERTEVENT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DATALEAKOUTALERTEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NDR出站数据泄露-告警事件
                */
                class DataLeakOutAlertEvent : public AbstractModel
                {
                public:
                    DataLeakOutAlertEvent();
                    ~DataLeakOutAlertEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险ID
                     * @return RiskID 风险ID
                     * 
                     */
                    std::string GetRiskID() const;

                    /**
                     * 设置风险ID
                     * @param _riskID 风险ID
                     * 
                     */
                    void SetRiskID(const std::string& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

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
                     * 设置源IP
                     * @param _srcIP 源IP
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取目的IP端口，多个以逗号连接：1.1.1.1:80,1.1.1.1:8080
                     * @return DstIPPort 目的IP端口，多个以逗号连接：1.1.1.1:80,1.1.1.1:8080
                     * 
                     */
                    std::string GetDstIPPort() const;

                    /**
                     * 设置目的IP端口，多个以逗号连接：1.1.1.1:80,1.1.1.1:8080
                     * @param _dstIPPort 目的IP端口，多个以逗号连接：1.1.1.1:80,1.1.1.1:8080
                     * 
                     */
                    void SetDstIPPort(const std::string& _dstIPPort);

                    /**
                     * 判断参数 DstIPPort 是否已赋值
                     * @return DstIPPort 是否已赋值
                     * 
                     */
                    bool DstIPPortHasBeenSet() const;

                    /**
                     * 获取hostname
                     * @return Hostname hostname
                     * 
                     */
                    std::string GetHostname() const;

                    /**
                     * 设置hostname
                     * @param _hostname hostname
                     * 
                     */
                    void SetHostname(const std::string& _hostname);

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
                     * 设置目的服务类型
                     * @param _dstServiceType 目的服务类型
                     * 
                     */
                    void SetDstServiceType(const std::string& _dstServiceType);

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
                     * 设置目的服务名称
                     * @param _dstServiceName 目的服务名称
                     * 
                     */
                    void SetDstServiceName(const std::string& _dstServiceName);

                    /**
                     * 判断参数 DstServiceName 是否已赋值
                     * @return DstServiceName 是否已赋值
                     * 
                     */
                    bool DstServiceNameHasBeenSet() const;

                    /**
                     * 获取以逗号连接的敏感类型ID集合: 10001,10002,10003
                     * @return LeakTypeSet 以逗号连接的敏感类型ID集合: 10001,10002,10003
                     * 
                     */
                    std::string GetLeakTypeSet() const;

                    /**
                     * 设置以逗号连接的敏感类型ID集合: 10001,10002,10003
                     * @param _leakTypeSet 以逗号连接的敏感类型ID集合: 10001,10002,10003
                     * 
                     */
                    void SetLeakTypeSet(const std::string& _leakTypeSet);

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
                     * 设置事件数量
                     * @param _eventCount 事件数量
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取首次识别时间
                     * @return FirstIdentificationTime 首次识别时间
                     * 
                     */
                    std::string GetFirstIdentificationTime() const;

                    /**
                     * 设置首次识别时间
                     * @param _firstIdentificationTime 首次识别时间
                     * 
                     */
                    void SetFirstIdentificationTime(const std::string& _firstIdentificationTime);

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
                     * 设置最近识别时间
                     * @param _latestIdentificationTime 最近识别时间
                     * 
                     */
                    void SetLatestIdentificationTime(const std::string& _latestIdentificationTime);

                    /**
                     * 判断参数 LatestIdentificationTime 是否已赋值
                     * @return LatestIdentificationTime 是否已赋值
                     * 
                     */
                    bool LatestIdentificationTimeHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

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
                    uint64_t GetStatus() const;

                    /**
                     * 设置处置状态
                     * @param _status 处置状态
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
                     * 获取备注
                     * @return Comment 备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
                     * @param _comment 备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取API
                     * @return ApiPattern API
                     * 
                     */
                    std::string GetApiPattern() const;

                    /**
                     * 设置API
                     * @param _apiPattern API
                     * 
                     */
                    void SetApiPattern(const std::string& _apiPattern);

                    /**
                     * 判断参数 ApiPattern 是否已赋值
                     * @return ApiPattern 是否已赋值
                     * 
                     */
                    bool ApiPatternHasBeenSet() const;

                    /**
                     * 获取AI分析状态
                     * @return AnalysisStatus AI分析状态
                     * 
                     */
                    uint64_t GetAnalysisStatus() const;

                    /**
                     * 设置AI分析状态
                     * @param _analysisStatus AI分析状态
                     * 
                     */
                    void SetAnalysisStatus(const uint64_t& _analysisStatus);

                    /**
                     * 判断参数 AnalysisStatus 是否已赋值
                     * @return AnalysisStatus 是否已赋值
                     * 
                     */
                    bool AnalysisStatusHasBeenSet() const;

                    /**
                     * 获取AI分析失败原因（失败时）
                     * @return AnalysisFailReason AI分析失败原因（失败时）
                     * 
                     */
                    std::string GetAnalysisFailReason() const;

                    /**
                     * 设置AI分析失败原因（失败时）
                     * @param _analysisFailReason AI分析失败原因（失败时）
                     * 
                     */
                    void SetAnalysisFailReason(const std::string& _analysisFailReason);

                    /**
                     * 判断参数 AnalysisFailReason 是否已赋值
                     * @return AnalysisFailReason 是否已赋值
                     * 
                     */
                    bool AnalysisFailReasonHasBeenSet() const;

                    /**
                     * 获取API业务类型
                     * @return ApiBizType API业务类型
                     * 
                     */
                    std::string GetApiBizType() const;

                    /**
                     * 设置API业务类型
                     * @param _apiBizType API业务类型
                     * 
                     */
                    void SetApiBizType(const std::string& _apiBizType);

                    /**
                     * 判断参数 ApiBizType 是否已赋值
                     * @return ApiBizType 是否已赋值
                     * 
                     */
                    bool ApiBizTypeHasBeenSet() const;

                    /**
                     * 获取风险类型（风险场景）
                     * @return RiskScenario 风险类型（风险场景）
                     * 
                     */
                    std::string GetRiskScenario() const;

                    /**
                     * 设置风险类型（风险场景）
                     * @param _riskScenario 风险类型（风险场景）
                     * 
                     */
                    void SetRiskScenario(const std::string& _riskScenario);

                    /**
                     * 判断参数 RiskScenario 是否已赋值
                     * @return RiskScenario 是否已赋值
                     * 
                     */
                    bool RiskScenarioHasBeenSet() const;

                    /**
                     * 获取AI建议风险等级
                     * @return AiSuggestedLevel AI建议风险等级
                     * 
                     */
                    int64_t GetAiSuggestedLevel() const;

                    /**
                     * 设置AI建议风险等级
                     * @param _aiSuggestedLevel AI建议风险等级
                     * 
                     */
                    void SetAiSuggestedLevel(const int64_t& _aiSuggestedLevel);

                    /**
                     * 判断参数 AiSuggestedLevel 是否已赋值
                     * @return AiSuggestedLevel 是否已赋值
                     * 
                     */
                    bool AiSuggestedLevelHasBeenSet() const;

                    /**
                     * 获取目的IP地理信息
                     * @return DstGeoLocation 目的IP地理信息
                     * 
                     */
                    std::string GetDstGeoLocation() const;

                    /**
                     * 设置目的IP地理信息
                     * @param _dstGeoLocation 目的IP地理信息
                     * 
                     */
                    void SetDstGeoLocation(const std::string& _dstGeoLocation);

                    /**
                     * 判断参数 DstGeoLocation 是否已赋值
                     * @return DstGeoLocation 是否已赋值
                     * 
                     */
                    bool DstGeoLocationHasBeenSet() const;

                    /**
                     * 获取最高敏感等级
                     * @return HighestLevel 最高敏感等级
                     * 
                     */
                    std::string GetHighestLevel() const;

                    /**
                     * 设置最高敏感等级
                     * @param _highestLevel 最高敏感等级
                     * 
                     */
                    void SetHighestLevel(const std::string& _highestLevel);

                    /**
                     * 判断参数 HighestLevel 是否已赋值
                     * @return HighestLevel 是否已赋值
                     * 
                     */
                    bool HighestLevelHasBeenSet() const;

                private:

                    /**
                     * 风险ID
                     */
                    std::string m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 源IP
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 目的IP端口，多个以逗号连接：1.1.1.1:80,1.1.1.1:8080
                     */
                    std::string m_dstIPPort;
                    bool m_dstIPPortHasBeenSet;

                    /**
                     * hostname
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
                     * 以逗号连接的敏感类型ID集合: 10001,10002,10003
                     */
                    std::string m_leakTypeSet;
                    bool m_leakTypeSetHasBeenSet;

                    /**
                     * 事件数量
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

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
                     * 风险等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 处置状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * API
                     */
                    std::string m_apiPattern;
                    bool m_apiPatternHasBeenSet;

                    /**
                     * AI分析状态
                     */
                    uint64_t m_analysisStatus;
                    bool m_analysisStatusHasBeenSet;

                    /**
                     * AI分析失败原因（失败时）
                     */
                    std::string m_analysisFailReason;
                    bool m_analysisFailReasonHasBeenSet;

                    /**
                     * API业务类型
                     */
                    std::string m_apiBizType;
                    bool m_apiBizTypeHasBeenSet;

                    /**
                     * 风险类型（风险场景）
                     */
                    std::string m_riskScenario;
                    bool m_riskScenarioHasBeenSet;

                    /**
                     * AI建议风险等级
                     */
                    int64_t m_aiSuggestedLevel;
                    bool m_aiSuggestedLevelHasBeenSet;

                    /**
                     * 目的IP地理信息
                     */
                    std::string m_dstGeoLocation;
                    bool m_dstGeoLocationHasBeenSet;

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

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DATALEAKOUTALERTEVENT_H_
