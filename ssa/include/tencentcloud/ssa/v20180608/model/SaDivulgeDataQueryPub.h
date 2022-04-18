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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUB_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询_通用字段
                */
                class SaDivulgeDataQueryPub : public AbstractModel
                {
                public:
                    SaDivulgeDataQueryPub();
                    ~SaDivulgeDataQueryPub() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Id信息
                     * @return Id Id信息
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id信息
                     * @param Id Id信息
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
                     * @param Uin 用户Uin
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param AppId 用户AppId
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return EventName 事件名称
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
                     * @param EventName 事件名称
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取监控源 0:全部 1:GitHub 2:暗网 默认值1
                     * @return DivulgeSoure 监控源 0:全部 1:GitHub 2:暗网 默认值1
                     */
                    std::string GetDivulgeSoure() const;

                    /**
                     * 设置监控源 0:全部 1:GitHub 2:暗网 默认值1
                     * @param DivulgeSoure 监控源 0:全部 1:GitHub 2:暗网 默认值1
                     */
                    void SetDivulgeSoure(const std::string& _divulgeSoure);

                    /**
                     * 判断参数 DivulgeSoure 是否已赋值
                     * @return DivulgeSoure 是否已赋值
                     */
                    bool DivulgeSoureHasBeenSet() const;

                    /**
                     * 获取受影响资产
                     * @return Asset 受影响资产
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置受影响资产
                     * @param Asset 受影响资产
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取命中主题集下的规则topic名称
                     * @return RuleName 命中主题集下的规则topic名称
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置命中主题集下的规则topic名称
                     * @param RuleName 命中主题集下的规则topic名称
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取命中主题集下的规则topic唯一id
                     * @return RuleId 命中主题集下的规则topic唯一id
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置命中主题集下的规则topic唯一id
                     * @param RuleId 命中主题集下的规则topic唯一id
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取命中主题集下的自定义规则策略
                     * @return RuleWord 命中主题集下的自定义规则策略
                     */
                    std::string GetRuleWord() const;

                    /**
                     * 设置命中主题集下的自定义规则策略
                     * @param RuleWord 命中主题集下的自定义规则策略
                     */
                    void SetRuleWord(const std::string& _ruleWord);

                    /**
                     * 判断参数 RuleWord 是否已赋值
                     * @return RuleWord 是否已赋值
                     */
                    bool RuleWordHasBeenSet() const;

                    /**
                     * 获取扫描监测url
                     * @return ScanUrl 扫描监测url
                     */
                    std::string GetScanUrl() const;

                    /**
                     * 设置扫描监测url
                     * @param ScanUrl 扫描监测url
                     */
                    void SetScanUrl(const std::string& _scanUrl);

                    /**
                     * 判断参数 ScanUrl 是否已赋值
                     * @return ScanUrl 是否已赋值
                     */
                    bool ScanUrlHasBeenSet() const;

                    /**
                     * 获取扫描监测命中次数
                     * @return ScanCount 扫描监测命中次数
                     */
                    std::string GetScanCount() const;

                    /**
                     * 设置扫描监测命中次数
                     * @param ScanCount 扫描监测命中次数
                     */
                    void SetScanCount(const std::string& _scanCount);

                    /**
                     * 判断参数 ScanCount 是否已赋值
                     * @return ScanCount 是否已赋值
                     */
                    bool ScanCountHasBeenSet() const;

                    /**
                     * 获取风险等级 -1:未知 1:低危 2:中危 3:高危 4:严重
                     * @return Level 风险等级 -1:未知 1:低危 2:中危 3:高危 4:严重
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级 -1:未知 1:低危 2:中危 3:高危 4:严重
                     * @param Level 风险等级 -1:未知 1:低危 2:中危 3:高危 4:严重
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取安全事件处理状态 -1:未知 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     * @return Status 安全事件处理状态 -1:未知 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置安全事件处理状态 -1:未知 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     * @param Status 安全事件处理状态 -1:未知 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取安全事件发生时间
                     * @return EventTime 安全事件发生时间
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置安全事件发生时间
                     * @param EventTime 安全事件发生时间
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取事件插入时间
                     * @return InsertTime 事件插入时间
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置事件插入时间
                     * @param InsertTime 事件插入时间
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取事件更新时间
                     * @return UpdateTime 事件更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置事件更新时间
                     * @param UpdateTime 事件更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Id信息
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 监控源 0:全部 1:GitHub 2:暗网 默认值1
                     */
                    std::string m_divulgeSoure;
                    bool m_divulgeSoureHasBeenSet;

                    /**
                     * 受影响资产
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 命中主题集下的规则topic名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 命中主题集下的规则topic唯一id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 命中主题集下的自定义规则策略
                     */
                    std::string m_ruleWord;
                    bool m_ruleWordHasBeenSet;

                    /**
                     * 扫描监测url
                     */
                    std::string m_scanUrl;
                    bool m_scanUrlHasBeenSet;

                    /**
                     * 扫描监测命中次数
                     */
                    std::string m_scanCount;
                    bool m_scanCountHasBeenSet;

                    /**
                     * 风险等级 -1:未知 1:低危 2:中危 3:高危 4:严重
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 安全事件处理状态 -1:未知 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 安全事件发生时间
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 事件插入时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 事件更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUB_H_
