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
                     * 获取Id
                     * @return Id Id
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id
                     * @param Id Id
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Uin
                     * @return Uin Uin
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin
                     * @param Uin Uin
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取AppId
                     * @return AppId AppId
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置AppId
                     * @param AppId AppId
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取EventName
                     * @return EventName EventName
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置EventName
                     * @param EventName EventName
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取DivulgeSoure
                     * @return DivulgeSoure DivulgeSoure
                     */
                    std::string GetDivulgeSoure() const;

                    /**
                     * 设置DivulgeSoure
                     * @param DivulgeSoure DivulgeSoure
                     */
                    void SetDivulgeSoure(const std::string& _divulgeSoure);

                    /**
                     * 判断参数 DivulgeSoure 是否已赋值
                     * @return DivulgeSoure 是否已赋值
                     */
                    bool DivulgeSoureHasBeenSet() const;

                    /**
                     * 获取Asset
                     * @return Asset Asset
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置Asset
                     * @param Asset Asset
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取RuleName
                     * @return RuleName RuleName
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置RuleName
                     * @param RuleName RuleName
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取RuleId
                     * @return RuleId RuleId
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置RuleId
                     * @param RuleId RuleId
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取RuleWord
                     * @return RuleWord RuleWord
                     */
                    std::string GetRuleWord() const;

                    /**
                     * 设置RuleWord
                     * @param RuleWord RuleWord
                     */
                    void SetRuleWord(const std::string& _ruleWord);

                    /**
                     * 判断参数 RuleWord 是否已赋值
                     * @return RuleWord 是否已赋值
                     */
                    bool RuleWordHasBeenSet() const;

                    /**
                     * 获取ScanUrl
                     * @return ScanUrl ScanUrl
                     */
                    std::string GetScanUrl() const;

                    /**
                     * 设置ScanUrl
                     * @param ScanUrl ScanUrl
                     */
                    void SetScanUrl(const std::string& _scanUrl);

                    /**
                     * 判断参数 ScanUrl 是否已赋值
                     * @return ScanUrl 是否已赋值
                     */
                    bool ScanUrlHasBeenSet() const;

                    /**
                     * 获取ScanCount
                     * @return ScanCount ScanCount
                     */
                    std::string GetScanCount() const;

                    /**
                     * 设置ScanCount
                     * @param ScanCount ScanCount
                     */
                    void SetScanCount(const std::string& _scanCount);

                    /**
                     * 判断参数 ScanCount 是否已赋值
                     * @return ScanCount 是否已赋值
                     */
                    bool ScanCountHasBeenSet() const;

                    /**
                     * 获取Level
                     * @return Level Level
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Level
                     * @param Level Level
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param Status Status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取EventTime
                     * @return EventTime EventTime
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置EventTime
                     * @param EventTime EventTime
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取InsertTime
                     * @return InsertTime InsertTime
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置InsertTime
                     * @param InsertTime InsertTime
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取UpdateTime
                     * @return UpdateTime UpdateTime
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置UpdateTime
                     * @param UpdateTime UpdateTime
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * EventName
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * DivulgeSoure
                     */
                    std::string m_divulgeSoure;
                    bool m_divulgeSoureHasBeenSet;

                    /**
                     * Asset
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * RuleName
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * RuleId
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * RuleWord
                     */
                    std::string m_ruleWord;
                    bool m_ruleWordHasBeenSet;

                    /**
                     * ScanUrl
                     */
                    std::string m_scanUrl;
                    bool m_scanUrlHasBeenSet;

                    /**
                     * ScanCount
                     */
                    std::string m_scanCount;
                    bool m_scanCountHasBeenSet;

                    /**
                     * Level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * EventTime
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * InsertTime
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * UpdateTime
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUB_H_
