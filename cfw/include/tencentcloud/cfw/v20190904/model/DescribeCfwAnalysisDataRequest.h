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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCfwAnalysisData请求参数结构体
                */
                class DescribeCfwAnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeCfwAnalysisDataRequest();
                    ~DescribeCfwAnalysisDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。</p>
                     * @return Scenario <p>分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。</p>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。</p>
                     * @param _scenario <p>分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。</p>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。</p>
                     * @return StartTime <p>查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。</p>
                     * @param _startTime <p>查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。</p>
                     * @return EndTime <p>查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。</p>
                     * @param _endTime <p>查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>分析对象类型。可选，默认 user；user 表示租户全局，asset 表示单个资产，vpc 表示 VPC，domain 表示域名。</p>
                     * @return ObjectType <p>分析对象类型。可选，默认 user；user 表示租户全局，asset 表示单个资产，vpc 表示 VPC，domain 表示域名。</p>
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>分析对象类型。可选，默认 user；user 表示租户全局，asset 表示单个资产，vpc 表示 VPC，domain 表示域名。</p>
                     * @param _objectType <p>分析对象类型。可选，默认 user；user 表示租户全局，asset 表示单个资产，vpc 表示 VPC，domain 表示域名。</p>
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>分析对象标识。ObjectType 为 asset、vpc 或 domain 时按需传入，可填写 IP、实例 ID、VPC ID 或域名。</p>
                     * @return ObjectId <p>分析对象标识。ObjectType 为 asset、vpc 或 domain 时按需传入，可填写 IP、实例 ID、VPC ID 或域名。</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>分析对象标识。ObjectType 为 asset、vpc 或 domain 时按需传入，可填写 IP、实例 ID、VPC ID 或域名。</p>
                     * @param _objectId <p>分析对象标识。ObjectType 为 asset、vpc 或 domain 时按需传入，可填写 IP、实例 ID、VPC ID 或域名。</p>
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>排障目标。可选，主要用于 access_troubleshoot 场景，可填写 IP 或域名。</p>
                     * @return Target <p>排障目标。可选，主要用于 access_troubleshoot 场景，可填写 IP 或域名。</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>排障目标。可选，主要用于 access_troubleshoot 场景，可填写 IP 或域名。</p>
                     * @param _target <p>排障目标。可选，主要用于 access_troubleshoot 场景，可填写 IP 或域名。</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>需要跳过的分析段名称列表。可选；不传时执行该场景全部分析段。</p>
                     * @return SkipSections <p>需要跳过的分析段名称列表。可选；不传时执行该场景全部分析段。</p>
                     * 
                     */
                    std::vector<std::string> GetSkipSections() const;

                    /**
                     * 设置<p>需要跳过的分析段名称列表。可选；不传时执行该场景全部分析段。</p>
                     * @param _skipSections <p>需要跳过的分析段名称列表。可选；不传时执行该场景全部分析段。</p>
                     * 
                     */
                    void SetSkipSections(const std::vector<std::string>& _skipSections);

                    /**
                     * 判断参数 SkipSections 是否已赋值
                     * @return SkipSections 是否已赋值
                     * 
                     */
                    bool SkipSectionsHasBeenSet() const;

                private:

                    /**
                     * <p>分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。</p>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                    /**
                     * <p>查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分析对象类型。可选，默认 user；user 表示租户全局，asset 表示单个资产，vpc 表示 VPC，domain 表示域名。</p>
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>分析对象标识。ObjectType 为 asset、vpc 或 domain 时按需传入，可填写 IP、实例 ID、VPC ID 或域名。</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>排障目标。可选，主要用于 access_troubleshoot 场景，可填写 IP 或域名。</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>需要跳过的分析段名称列表。可选；不传时执行该场景全部分析段。</p>
                     */
                    std::vector<std::string> m_skipSections;
                    bool m_skipSectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATAREQUEST_H_
