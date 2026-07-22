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
                     * 获取<p>直接处置的记录 ID 列表，公共请求结构要求提供。TableType=AlertTable 时元素为告警日志 logid；TableType=InterceptionTable 时元素为拦截记录 unique_id。处理时会与 HandleEventIdList 解析出的日志 ID 合并，再删除空字符串并去重；因此仅按聚合事件处置时可传 [""] 作为空占位。HandleIdList 与 HandleEventIdList 不能同时为空。</p>
                     * @return HandleIdList <p>直接处置的记录 ID 列表，公共请求结构要求提供。TableType=AlertTable 时元素为告警日志 logid；TableType=InterceptionTable 时元素为拦截记录 unique_id。处理时会与 HandleEventIdList 解析出的日志 ID 合并，再删除空字符串并去重；因此仅按聚合事件处置时可传 [""] 作为空占位。HandleIdList 与 HandleEventIdList 不能同时为空。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleIdList() const;

                    /**
                     * 设置<p>直接处置的记录 ID 列表，公共请求结构要求提供。TableType=AlertTable 时元素为告警日志 logid；TableType=InterceptionTable 时元素为拦截记录 unique_id。处理时会与 HandleEventIdList 解析出的日志 ID 合并，再删除空字符串并去重；因此仅按聚合事件处置时可传 [""] 作为空占位。HandleIdList 与 HandleEventIdList 不能同时为空。</p>
                     * @param _handleIdList <p>直接处置的记录 ID 列表，公共请求结构要求提供。TableType=AlertTable 时元素为告警日志 logid；TableType=InterceptionTable 时元素为拦截记录 unique_id。处理时会与 HandleEventIdList 解析出的日志 ID 合并，再删除空字符串并去重；因此仅按聚合事件处置时可传 [""] 作为空占位。HandleIdList 与 HandleEventIdList 不能同时为空。</p>
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
                     * 获取<p>必填的忽略数据来源，只接受 AlertTable 或 InterceptionTable。AlertTable 更新租户告警表中 logid 命中的记录；InterceptionTable 更新租户拦截表中 unique_id 命中的记录。字段没有默认值，缺失、空字符串或其它值均返回参数错误。</p>
                     * @return TableType <p>必填的忽略数据来源，只接受 AlertTable 或 InterceptionTable。AlertTable 更新租户告警表中 logid 命中的记录；InterceptionTable 更新租户拦截表中 unique_id 命中的记录。字段没有默认值，缺失、空字符串或其它值均返回参数错误。</p>
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置<p>必填的忽略数据来源，只接受 AlertTable 或 InterceptionTable。AlertTable 更新租户告警表中 logid 命中的记录；InterceptionTable 更新租户拦截表中 unique_id 命中的记录。字段没有默认值，缺失、空字符串或其它值均返回参数错误。</p>
                     * @param _tableType <p>必填的忽略数据来源，只接受 AlertTable 或 InterceptionTable。AlertTable 更新租户告警表中 logid 命中的记录；InterceptionTable 更新租户拦截表中 unique_id 命中的记录。字段没有默认值，缺失、空字符串或其它值均返回参数错误。</p>
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
                     * 获取<p>可选的告警聚合事件 ID 列表。处理时逐个事件 ID 查询其对应的告警日志 logid，并将查询结果并入 HandleIdList；无法解析的事件 ID 不会产生目标 ID。该解析不会改写 TableType：若 TableType=InterceptionTable，解析出的 logid 仍会作为 unique_id 查询拦截表。字段可省略或传空数组，但 HandleIdList 与本字段不能同时为空；若最终合并、去空和去重后没有目标 ID，业务状态为失败。</p>
                     * @return HandleEventIdList <p>可选的告警聚合事件 ID 列表。处理时逐个事件 ID 查询其对应的告警日志 logid，并将查询结果并入 HandleIdList；无法解析的事件 ID 不会产生目标 ID。该解析不会改写 TableType：若 TableType=InterceptionTable，解析出的 logid 仍会作为 unique_id 查询拦截表。字段可省略或传空数组，但 HandleIdList 与本字段不能同时为空；若最终合并、去空和去重后没有目标 ID，业务状态为失败。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleEventIdList() const;

                    /**
                     * 设置<p>可选的告警聚合事件 ID 列表。处理时逐个事件 ID 查询其对应的告警日志 logid，并将查询结果并入 HandleIdList；无法解析的事件 ID 不会产生目标 ID。该解析不会改写 TableType：若 TableType=InterceptionTable，解析出的 logid 仍会作为 unique_id 查询拦截表。字段可省略或传空数组，但 HandleIdList 与本字段不能同时为空；若最终合并、去空和去重后没有目标 ID，业务状态为失败。</p>
                     * @param _handleEventIdList <p>可选的告警聚合事件 ID 列表。处理时逐个事件 ID 查询其对应的告警日志 logid，并将查询结果并入 HandleIdList；无法解析的事件 ID 不会产生目标 ID。该解析不会改写 TableType：若 TableType=InterceptionTable，解析出的 logid 仍会作为 unique_id 查询拦截表。字段可省略或传空数组，但 HandleIdList 与本字段不能同时为空；若最终合并、去空和去重后没有目标 ID，业务状态为失败。</p>
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
                     * <p>直接处置的记录 ID 列表，公共请求结构要求提供。TableType=AlertTable 时元素为告警日志 logid；TableType=InterceptionTable 时元素为拦截记录 unique_id。处理时会与 HandleEventIdList 解析出的日志 ID 合并，再删除空字符串并去重；因此仅按聚合事件处置时可传 [""] 作为空占位。HandleIdList 与 HandleEventIdList 不能同时为空。</p>
                     */
                    std::vector<std::string> m_handleIdList;
                    bool m_handleIdListHasBeenSet;

                    /**
                     * <p>必填的忽略数据来源，只接受 AlertTable 或 InterceptionTable。AlertTable 更新租户告警表中 logid 命中的记录；InterceptionTable 更新租户拦截表中 unique_id 命中的记录。字段没有默认值，缺失、空字符串或其它值均返回参数错误。</p>
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>可选的告警聚合事件 ID 列表。处理时逐个事件 ID 查询其对应的告警日志 logid，并将查询结果并入 HandleIdList；无法解析的事件 ID 不会产生目标 ID。该解析不会改写 TableType：若 TableType=InterceptionTable，解析出的 logid 仍会作为 unique_id 查询拦截表。字段可省略或传空数组，但 HandleIdList 与本字段不能同时为空；若最终合并、去空和去重后没有目标 ID，业务状态为失败。</p>
                     */
                    std::vector<std::string> m_handleEventIdList;
                    bool m_handleEventIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_
