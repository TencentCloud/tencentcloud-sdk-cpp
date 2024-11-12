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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEDETECT_H_

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
                * 基线规则检测
                */
                class BaselineRuleDetect : public AbstractModel
                {
                public:
                    BaselineRuleDetect();
                    ~BaselineRuleDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
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
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取规则描述
                     * @return RuleDesc 规则描述
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置规则描述
                     * @param _ruleDesc 规则描述
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取关联项数
                     * @return ItemCount 关联项数
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置关联项数
                     * @param _itemCount 关联项数
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取关联主机数
                     * @return HostCount 关联主机数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置关联主机数
                     * @param _hostCount 关联主机数
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
                     * 获取string
                     * @return LastTime string
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置string
                     * @param _lastTime string
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
                     * 获取ItemID集合
                     * @return ItemIds ItemID集合
                     * 
                     */
                    std::vector<int64_t> GetItemIds() const;

                    /**
                     * 设置ItemID集合
                     * @param _itemIds ItemID集合
                     * 
                     */
                    void SetItemIds(const std::vector<int64_t>& _itemIds);

                    /**
                     * 判断参数 ItemIds 是否已赋值
                     * @return ItemIds 是否已赋值
                     * 
                     */
                    bool ItemIdsHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * 关联项数
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * 关联主机数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 首次检测时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * string
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 0:未通过 1:忽略 3:通过 5:检测中
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * ItemID集合
                     */
                    std::vector<int64_t> m_itemIds;
                    bool m_itemIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEDETECT_H_
