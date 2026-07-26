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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_

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
                * CreateAlertCenterOmit请求参数结构体
                */
                class CreateAlertCenterOmitRequest : public AbstractModel
                {
                public:
                    CreateAlertCenterOmitRequest();
                    ~CreateAlertCenterOmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要忽略的记录 ID 列表。TableType=AlertTable 时，使用 DescribeLogs（Index=rule_threatinfo）返回的 log_id；仅通过 HandleEventIdList 指定事件时传 [""]。TableType=InterceptionTable 时，使用 DescribeBlockList 返回的 Data[].UniqueId 或 TopData[].UniqueId。</p>
                     * @return HandleIdList <p>要忽略的记录 ID 列表。TableType=AlertTable 时，使用 DescribeLogs（Index=rule_threatinfo）返回的 log_id；仅通过 HandleEventIdList 指定事件时传 [""]。TableType=InterceptionTable 时，使用 DescribeBlockList 返回的 Data[].UniqueId 或 TopData[].UniqueId。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleIdList() const;

                    /**
                     * 设置<p>要忽略的记录 ID 列表。TableType=AlertTable 时，使用 DescribeLogs（Index=rule_threatinfo）返回的 log_id；仅通过 HandleEventIdList 指定事件时传 [""]。TableType=InterceptionTable 时，使用 DescribeBlockList 返回的 Data[].UniqueId 或 TopData[].UniqueId。</p>
                     * @param _handleIdList <p>要忽略的记录 ID 列表。TableType=AlertTable 时，使用 DescribeLogs（Index=rule_threatinfo）返回的 log_id；仅通过 HandleEventIdList 指定事件时传 [""]。TableType=InterceptionTable 时，使用 DescribeBlockList 返回的 Data[].UniqueId 或 TopData[].UniqueId。</p>
                     * 
                     */
                    void SetHandleIdList(const std::vector<std::string>& _handleIdList);

                    /**
                     * 判断参数 HandleIdList 是否已赋值
                     * @return HandleIdList 是否已赋值
                     * 
                     */
                    bool HandleIdListHasBeenSet() const;

                    /**
                     * 获取<p>必填的记录来源类型：AlertTable 表示告警中心，InterceptionTable 表示拦截列表。</p>
                     * @return TableType <p>必填的记录来源类型：AlertTable 表示告警中心，InterceptionTable 表示拦截列表。</p>
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置<p>必填的记录来源类型：AlertTable 表示告警中心，InterceptionTable 表示拦截列表。</p>
                     * @param _tableType <p>必填的记录来源类型：AlertTable 表示告警中心，InterceptionTable 表示拦截列表。</p>
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取<p>告警事件 ID 列表，可省略且仅用于 TableType=AlertTable。HandleEventIdList 与 HandleIdList 至少指定一种目标；仅按事件忽略时，HandleIdList 固定传 [""]。事件 ID 通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * @return HandleEventIdList <p>告警事件 ID 列表，可省略且仅用于 TableType=AlertTable。HandleEventIdList 与 HandleIdList 至少指定一种目标；仅按事件忽略时，HandleIdList 固定传 [""]。事件 ID 通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleEventIdList() const;

                    /**
                     * 设置<p>告警事件 ID 列表，可省略且仅用于 TableType=AlertTable。HandleEventIdList 与 HandleIdList 至少指定一种目标；仅按事件忽略时，HandleIdList 固定传 [""]。事件 ID 通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * @param _handleEventIdList <p>告警事件 ID 列表，可省略且仅用于 TableType=AlertTable。HandleEventIdList 与 HandleIdList 至少指定一种目标；仅按事件忽略时，HandleIdList 固定传 [""]。事件 ID 通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * 
                     */
                    void SetHandleEventIdList(const std::vector<std::string>& _handleEventIdList);

                    /**
                     * 判断参数 HandleEventIdList 是否已赋值
                     * @return HandleEventIdList 是否已赋值
                     * 
                     */
                    bool HandleEventIdListHasBeenSet() const;

                private:

                    /**
                     * <p>要忽略的记录 ID 列表。TableType=AlertTable 时，使用 DescribeLogs（Index=rule_threatinfo）返回的 log_id；仅通过 HandleEventIdList 指定事件时传 [""]。TableType=InterceptionTable 时，使用 DescribeBlockList 返回的 Data[].UniqueId 或 TopData[].UniqueId。</p>
                     */
                    std::vector<std::string> m_handleIdList;
                    bool m_handleIdListHasBeenSet;

                    /**
                     * <p>必填的记录来源类型：AlertTable 表示告警中心，InterceptionTable 表示拦截列表。</p>
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>告警事件 ID 列表，可省略且仅用于 TableType=AlertTable。HandleEventIdList 与 HandleIdList 至少指定一种目标；仅按事件忽略时，HandleIdList 固定传 [""]。事件 ID 通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     */
                    std::vector<std::string> m_handleEventIdList;
                    bool m_handleEventIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_
