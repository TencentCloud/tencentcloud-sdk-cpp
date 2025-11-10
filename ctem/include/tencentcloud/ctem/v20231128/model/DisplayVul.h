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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYVUL_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 漏洞详情
                */
                class DisplayVul : public AbstractModel
                {
                public:
                    DisplayVul();
                    ~DisplayVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取解析的IP
                     * @return Ip 解析的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置解析的IP
                     * @param _ip 解析的IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Url地址
                     * @return Url Url地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url地址
                     * @param _url Url地址
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
                     * 获取风险等级：1：提示, 2:低危, 3:中危, 4:高危, 5: 严重
                     * @return Level 风险等级：1：提示, 2:低危, 3:中危, 4:高危, 5: 严重
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级：1：提示, 2:低危, 3:中危, 4:高危, 5: 严重
                     * @param _level 风险等级：1：提示, 2:低危, 3:中危, 4:高危, 5: 严重
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return Name 漏洞名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名称
                     * @param _name 漏洞名称
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
                     * 获取是否修复，0:未修复，1:已修复
                     * @return RepairStatus 是否修复，0:未修复，1:已修复
                     * 
                     */
                    int64_t GetRepairStatus() const;

                    /**
                     * 设置是否修复，0:未修复，1:已修复
                     * @param _repairStatus 是否修复，0:未修复，1:已修复
                     * 
                     */
                    void SetRepairStatus(const int64_t& _repairStatus);

                    /**
                     * 判断参数 RepairStatus 是否已赋值
                     * @return RepairStatus 是否已赋值
                     * 
                     */
                    bool RepairStatusHasBeenSet() const;

                    /**
                     * 获取建议
                     * @return Suggestion 建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议
                     * @param _suggestion 建议
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
                     * 获取发现时间
                     * @return DiscoverTime 发现时间
                     * 
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置发现时间
                     * @param _discoverTime 发现时间
                     * 
                     */
                    void SetDiscoverTime(const std::string& _discoverTime);

                    /**
                     * 判断参数 DiscoverTime 是否已赋值
                     * @return DiscoverTime 是否已赋值
                     * 
                     */
                    bool DiscoverTimeHasBeenSet() const;

                    /**
                     * 获取AI研判
                     * @return AiJudge AI研判
                     * 
                     */
                    std::string GetAiJudge() const;

                    /**
                     * 设置AI研判
                     * @param _aiJudge AI研判
                     * 
                     */
                    void SetAiJudge(const std::string& _aiJudge);

                    /**
                     * 判断参数 AiJudge 是否已赋值
                     * @return AiJudge 是否已赋值
                     * 
                     */
                    bool AiJudgeHasBeenSet() const;

                    /**
                     * 获取状态：unrepaired:未修复，repaired:已修复, offline:资产已下线, ignore:已忽略
                     * @return Status 状态：unrepaired:未修复，repaired:已修复, offline:资产已下线, ignore:已忽略
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：unrepaired:未修复，repaired:已修复, offline:资产已下线, ignore:已忽略
                     * @param _status 状态：unrepaired:未修复，repaired:已修复, offline:资产已下线, ignore:已忽略
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
                     * 获取上次复测时间
                     * @return LastCheckTime 上次复测时间
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置上次复测时间
                     * @param _lastCheckTime 上次复测时间
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取是否为云资产：0-非云资产 1-是云资产
                     * @return IsCloudAsset 是否为云资产：0-非云资产 1-是云资产
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置是否为云资产：0-非云资产 1-是云资产
                     * @param _isCloudAsset 是否为云资产：0-非云资产 1-是云资产
                     * 
                     */
                    void SetIsCloudAsset(const int64_t& _isCloudAsset);

                    /**
                     * 判断参数 IsCloudAsset 是否已赋值
                     * @return IsCloudAsset 是否已赋值
                     * 
                     */
                    bool IsCloudAssetHasBeenSet() const;

                    /**
                     * 获取云资产是否下线：-1-已下线 0-正常
                     * @return CloudAssetStatus 云资产是否下线：-1-已下线 0-正常
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置云资产是否下线：-1-已下线 0-正常
                     * @param _cloudAssetStatus 云资产是否下线：-1-已下线 0-正常
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                    /**
                     * 获取域名解析状态 1:异常 0:正常
                     * @return AnalysisState 域名解析状态 1:异常 0:正常
                     * 
                     */
                    int64_t GetAnalysisState() const;

                    /**
                     * 设置域名解析状态 1:异常 0:正常
                     * @param _analysisState 域名解析状态 1:异常 0:正常
                     * 
                     */
                    void SetAnalysisState(const int64_t& _analysisState);

                    /**
                     * 判断参数 AnalysisState 是否已赋值
                     * @return AnalysisState 是否已赋值
                     * 
                     */
                    bool AnalysisStateHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 解析的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Url地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 风险等级：1：提示, 2:低危, 3:中危, 4:高危, 5: 严重
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否修复，0:未修复，1:已修复
                     */
                    int64_t m_repairStatus;
                    bool m_repairStatusHasBeenSet;

                    /**
                     * 建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 发现时间
                     */
                    std::string m_discoverTime;
                    bool m_discoverTimeHasBeenSet;

                    /**
                     * AI研判
                     */
                    std::string m_aiJudge;
                    bool m_aiJudgeHasBeenSet;

                    /**
                     * 状态：unrepaired:未修复，repaired:已修复, offline:资产已下线, ignore:已忽略
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 上次复测时间
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 是否为云资产：0-非云资产 1-是云资产
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * 云资产是否下线：-1-已下线 0-正常
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * 域名解析状态 1:异常 0:正常
                     */
                    int64_t m_analysisState;
                    bool m_analysisStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYVUL_H_
