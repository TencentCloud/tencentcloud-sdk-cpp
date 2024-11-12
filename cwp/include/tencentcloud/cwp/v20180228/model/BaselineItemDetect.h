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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线检测项
                */
                class BaselineItemDetect : public AbstractModel
                {
                public:
                    BaselineItemDetect();
                    ~BaselineItemDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项Id
                     * @return ItemId 项Id
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置项Id
                     * @param _itemId 项Id
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取项名称
                     * @return ItemName 项名称
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置项名称
                     * @param _itemName 项名称
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取项描述
                     * @return ItemDesc 项描述
                     * 
                     */
                    std::string GetItemDesc() const;

                    /**
                     * 设置项描述
                     * @param _itemDesc 项描述
                     * 
                     */
                    void SetItemDesc(const std::string& _itemDesc);

                    /**
                     * 判断参数 ItemDesc 是否已赋值
                     * @return ItemDesc 是否已赋值
                     * 
                     */
                    bool ItemDescHasBeenSet() const;

                    /**
                     * 获取修复方法
                     * @return FixMethod 修复方法
                     * 
                     */
                    std::string GetFixMethod() const;

                    /**
                     * 设置修复方法
                     * @param _fixMethod 修复方法
                     * 
                     */
                    void SetFixMethod(const std::string& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取所属规则
                     * @return RuleName 所属规则
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置所属规则
                     * @param _ruleName 所属规则
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取0:未通过 1:忽略 3:通过 5:检测中
                     * @return DetectStatus 0:未通过 1:忽略 3:通过 5:检测中
                     * 
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置0:未通过 1:忽略 3:通过 5:检测中
                     * @param _detectStatus 0:未通过 1:忽略 3:通过 5:检测中
                     * 
                     */
                    void SetDetectStatus(const int64_t& _detectStatus);

                    /**
                     * 判断参数 DetectStatus 是否已赋值
                     * @return DetectStatus 是否已赋值
                     * 
                     */
                    bool DetectStatusHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
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
                     * 获取影响服务器数
                     * @return HostCount 影响服务器数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置影响服务器数
                     * @param _hostCount 影响服务器数
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取首次检测时间
                     * @return FirstTime 首次检测时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次检测时间
                     * @param _firstTime 首次检测时间
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
                     * 获取最后检测时间
                     * @return LastTime 最后检测时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后检测时间
                     * @param _lastTime 最后检测时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取检测结果,Json字符串
                     * @return DetectResult 检测结果,Json字符串
                     * 
                     */
                    std::string GetDetectResult() const;

                    /**
                     * 设置检测结果,Json字符串
                     * @param _detectResult 检测结果,Json字符串
                     * 
                     */
                    void SetDetectResult(const std::string& _detectResult);

                    /**
                     * 判断参数 DetectResult 是否已赋值
                     * @return DetectResult 是否已赋值
                     * 
                     */
                    bool DetectResultHasBeenSet() const;

                    /**
                     * 获取所属规则ID
                     * @return RuleId 所属规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置所属规则ID
                     * @param _ruleId 所属规则ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取通过的服务器数
                     * @return PassedHostCount 通过的服务器数
                     * 
                     */
                    int64_t GetPassedHostCount() const;

                    /**
                     * 设置通过的服务器数
                     * @param _passedHostCount 通过的服务器数
                     * 
                     */
                    void SetPassedHostCount(const int64_t& _passedHostCount);

                    /**
                     * 判断参数 PassedHostCount 是否已赋值
                     * @return PassedHostCount 是否已赋值
                     * 
                     */
                    bool PassedHostCountHasBeenSet() const;

                    /**
                     * 获取未通过的服务器数
                     * @return NotPassedHostCount 未通过的服务器数
                     * 
                     */
                    int64_t GetNotPassedHostCount() const;

                    /**
                     * 设置未通过的服务器数
                     * @param _notPassedHostCount 未通过的服务器数
                     * 
                     */
                    void SetNotPassedHostCount(const int64_t& _notPassedHostCount);

                    /**
                     * 判断参数 NotPassedHostCount 是否已赋值
                     * @return NotPassedHostCount 是否已赋值
                     * 
                     */
                    bool NotPassedHostCountHasBeenSet() const;

                private:

                    /**
                     * 项Id
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 项名称
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 项描述
                     */
                    std::string m_itemDesc;
                    bool m_itemDescHasBeenSet;

                    /**
                     * 修复方法
                     */
                    std::string m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * 所属规则
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 0:未通过 1:忽略 3:通过 5:检测中
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * 风险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 影响服务器数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 首次检测时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 检测结果,Json字符串
                     */
                    std::string m_detectResult;
                    bool m_detectResultHasBeenSet;

                    /**
                     * 所属规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 通过的服务器数
                     */
                    int64_t m_passedHostCount;
                    bool m_passedHostCountHasBeenSet;

                    /**
                     * 未通过的服务器数
                     */
                    int64_t m_notPassedHostCount;
                    bool m_notPassedHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMDETECT_H_
