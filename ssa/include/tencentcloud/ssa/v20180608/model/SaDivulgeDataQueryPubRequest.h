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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUBREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUBREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SaDivulgeDataQueryPub请求参数结构体
                */
                class SaDivulgeDataQueryPubRequest : public AbstractModel
                {
                public:
                    SaDivulgeDataQueryPubRequest();
                    ~SaDivulgeDataQueryPubRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模糊查询字段(针对appid或者uin)
                     * @return QueryKey 模糊查询字段(针对appid或者uin)
                     */
                    std::string GetQueryKey() const;

                    /**
                     * 设置模糊查询字段(针对appid或者uin)
                     * @param QueryKey 模糊查询字段(针对appid或者uin)
                     */
                    void SetQueryKey(const std::string& _queryKey);

                    /**
                     * 判断参数 QueryKey 是否已赋值
                     * @return QueryKey 是否已赋值
                     */
                    bool QueryKeyHasBeenSet() const;

                    /**
                     * 获取安全事件名称
                     * @return EventName 安全事件名称
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置安全事件名称
                     * @param EventName 安全事件名称
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取监控源  0:全部 1:GitHub 2:暗网 默认值1
                     * @return DivulgeSoure 监控源  0:全部 1:GitHub 2:暗网 默认值1
                     */
                    std::string GetDivulgeSoure() const;

                    /**
                     * 设置监控源  0:全部 1:GitHub 2:暗网 默认值1
                     * @param DivulgeSoure 监控源  0:全部 1:GitHub 2:暗网 默认值1
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
                     * 获取起始时间
                     * @return StartTime 起始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param StartTime 起始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查询起始地址
                     * @return Offset 查询起始地址
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置查询起始地址
                     * @param Offset 查询起始地址
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询个数
                     * @return Limit 查询个数
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置查询个数
                     * @param Limit 查询个数
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 模糊查询字段(针对appid或者uin)
                     */
                    std::string m_queryKey;
                    bool m_queryKeyHasBeenSet;

                    /**
                     * 安全事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 监控源  0:全部 1:GitHub 2:暗网 默认值1
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
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询起始地址
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询个数
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUBREQUEST_H_
