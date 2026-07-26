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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCREQUEST_H_

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
                * CreateAlertCenterRuleAsync请求参数结构体
                */
                class CreateAlertCenterRuleAsyncRequest : public AbstractModel
                {
                public:
                    CreateAlertCenterRuleAsyncRequest();
                    ~CreateAlertCenterRuleAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>必填的告警方向：0 出向，1 入向，3 内网。用于 HandleIpList 中 IP 目标的处置方向；其它目标也必须传上述有效值。从 DescribeCfwAlerts 复制方向时，将 alerts[].direction 的 outbound、inbound、lateral 分别转换为 JSON 整数 0、1、3。</p>
                     * @return AlertDirection <p>必填的告警方向：0 出向，1 入向，3 内网。用于 HandleIpList 中 IP 目标的处置方向；其它目标也必须传上述有效值。从 DescribeCfwAlerts 复制方向时，将 alerts[].direction 的 outbound、inbound、lateral 分别转换为 JSON 整数 0、1、3。</p>
                     * 
                     */
                    int64_t GetAlertDirection() const;

                    /**
                     * 设置<p>必填的告警方向：0 出向，1 入向，3 内网。用于 HandleIpList 中 IP 目标的处置方向；其它目标也必须传上述有效值。从 DescribeCfwAlerts 复制方向时，将 alerts[].direction 的 outbound、inbound、lateral 分别转换为 JSON 整数 0、1、3。</p>
                     * @param _alertDirection <p>必填的告警方向：0 出向，1 入向，3 内网。用于 HandleIpList 中 IP 目标的处置方向；其它目标也必须传上述有效值。从 DescribeCfwAlerts 复制方向时，将 alerts[].direction 的 outbound、inbound、lateral 分别转换为 JSON 整数 0、1、3。</p>
                     * 
                     */
                    void SetAlertDirection(const int64_t& _alertDirection);

                    /**
                     * 判断参数 AlertDirection 是否已赋值
                     * @return AlertDirection 是否已赋值
                     * 
                     */
                    bool AlertDirectionHasBeenSet() const;

                    /**
                     * 获取<p>必填的处置生效方向。支持空字符串、0（互联网出向）、1（互联网入向）、0,1/1,0（互联网双向）、3（内网访问）、5（内网访问源）、6（内网访问目的）及 5,6/6,5。空字符串表示按告警原方向处置；同一 IP 的已有规则方向会与本次方向合并。</p>
                     * @return HandleDirection <p>必填的处置生效方向。支持空字符串、0（互联网出向）、1（互联网入向）、0,1/1,0（互联网双向）、3（内网访问）、5（内网访问源）、6（内网访问目的）及 5,6/6,5。空字符串表示按告警原方向处置；同一 IP 的已有规则方向会与本次方向合并。</p>
                     * 
                     */
                    std::string GetHandleDirection() const;

                    /**
                     * 设置<p>必填的处置生效方向。支持空字符串、0（互联网出向）、1（互联网入向）、0,1/1,0（互联网双向）、3（内网访问）、5（内网访问源）、6（内网访问目的）及 5,6/6,5。空字符串表示按告警原方向处置；同一 IP 的已有规则方向会与本次方向合并。</p>
                     * @param _handleDirection <p>必填的处置生效方向。支持空字符串、0（互联网出向）、1（互联网入向）、0,1/1,0（互联网双向）、3（内网访问）、5（内网访问源）、6（内网访问目的）及 5,6/6,5。空字符串表示按告警原方向处置；同一 IP 的已有规则方向会与本次方向合并。</p>
                     * 
                     */
                    void SetHandleDirection(const std::string& _handleDirection);

                    /**
                     * 判断参数 HandleDirection 是否已赋值
                     * @return HandleDirection 是否已赋值
                     * 
                     */
                    bool HandleDirectionHasBeenSet() const;

                    /**
                     * 获取<p>处置有效期：1 表示 1 天，7 表示 7 天，-2 表示永久。</p>
                     * @return HandleTime <p>处置有效期：1 表示 1 天，7 表示 7 天，-2 表示永久。</p>
                     * 
                     */
                    int64_t GetHandleTime() const;

                    /**
                     * 设置<p>处置有效期：1 表示 1 天，7 表示 7 天，-2 表示永久。</p>
                     * @param _handleTime <p>处置有效期：1 表示 1 天，7 表示 7 天，-2 表示永久。</p>
                     * 
                     */
                    void SetHandleTime(const int64_t& _handleTime);

                    /**
                     * 判断参数 HandleTime 是否已赋值
                     * @return HandleTime 是否已赋值
                     * 
                     */
                    bool HandleTimeHasBeenSet() const;

                    /**
                     * 获取<p>必填的处置类型：1 按 HandleIdList 或 HandleEventIdList 封禁，2 按 HandleIdList、HandleEventIdList 或 BlockDomain 加白，3 按 HandleIpList 加白 IP，4 按 HandleIpList 封禁 IP，5 将 HandleIdList 或 HandleEventIdList 对应的安全基线告警地址加入指定方向的安全基线列表，8 按 HandleEventIdList 关联资产或 AssetIdList 新增隔离。五类目标至少提供一类；HandleType=8 未能从事件解析出资产时必须提供 AssetIdList。IsolateType 和 WhiteIpList 仅用于类型 8。</p>
                     * @return HandleType <p>必填的处置类型：1 按 HandleIdList 或 HandleEventIdList 封禁，2 按 HandleIdList、HandleEventIdList 或 BlockDomain 加白，3 按 HandleIpList 加白 IP，4 按 HandleIpList 封禁 IP，5 将 HandleIdList 或 HandleEventIdList 对应的安全基线告警地址加入指定方向的安全基线列表，8 按 HandleEventIdList 关联资产或 AssetIdList 新增隔离。五类目标至少提供一类；HandleType=8 未能从事件解析出资产时必须提供 AssetIdList。IsolateType 和 WhiteIpList 仅用于类型 8。</p>
                     * 
                     */
                    int64_t GetHandleType() const;

                    /**
                     * 设置<p>必填的处置类型：1 按 HandleIdList 或 HandleEventIdList 封禁，2 按 HandleIdList、HandleEventIdList 或 BlockDomain 加白，3 按 HandleIpList 加白 IP，4 按 HandleIpList 封禁 IP，5 将 HandleIdList 或 HandleEventIdList 对应的安全基线告警地址加入指定方向的安全基线列表，8 按 HandleEventIdList 关联资产或 AssetIdList 新增隔离。五类目标至少提供一类；HandleType=8 未能从事件解析出资产时必须提供 AssetIdList。IsolateType 和 WhiteIpList 仅用于类型 8。</p>
                     * @param _handleType <p>必填的处置类型：1 按 HandleIdList 或 HandleEventIdList 封禁，2 按 HandleIdList、HandleEventIdList 或 BlockDomain 加白，3 按 HandleIpList 加白 IP，4 按 HandleIpList 封禁 IP，5 将 HandleIdList 或 HandleEventIdList 对应的安全基线告警地址加入指定方向的安全基线列表，8 按 HandleEventIdList 关联资产或 AssetIdList 新增隔离。五类目标至少提供一类；HandleType=8 未能从事件解析出资产时必须提供 AssetIdList。IsolateType 和 WhiteIpList 仅用于类型 8。</p>
                     * 
                     */
                    void SetHandleType(const int64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产隔离目标列表，可省略；仅 HandleType=8 使用。直接按资产隔离时，调用 DescribeCfwAssets，传 AssetType=host 和目标 InstanceId，解析返回结果；仅在唯一 assets[].instance_id 与目标完全相等时将其写入本字段，不使用资产名称。</p>
                     * @return AssetIdList <p>资产隔离目标列表，可省略；仅 HandleType=8 使用。直接按资产隔离时，调用 DescribeCfwAssets，传 AssetType=host 和目标 InstanceId，解析返回结果；仅在唯一 assets[].instance_id 与目标完全相等时将其写入本字段，不使用资产名称。</p>
                     * 
                     */
                    std::vector<std::string> GetAssetIdList() const;

                    /**
                     * 设置<p>资产隔离目标列表，可省略；仅 HandleType=8 使用。直接按资产隔离时，调用 DescribeCfwAssets，传 AssetType=host 和目标 InstanceId，解析返回结果；仅在唯一 assets[].instance_id 与目标完全相等时将其写入本字段，不使用资产名称。</p>
                     * @param _assetIdList <p>资产隔离目标列表，可省略；仅 HandleType=8 使用。直接按资产隔离时，调用 DescribeCfwAssets，传 AssetType=host 和目标 InstanceId，解析返回结果；仅在唯一 assets[].instance_id 与目标完全相等时将其写入本字段，不使用资产名称。</p>
                     * 
                     */
                    void SetAssetIdList(const std::vector<std::string>& _assetIdList);

                    /**
                     * 判断参数 AssetIdList 是否已赋值
                     * @return AssetIdList 是否已赋值
                     * 
                     */
                    bool AssetIdListHasBeenSet() const;

                    /**
                     * 获取<p>域名加白目标，传合法域名；HandleType 必须为 2，并同时传 TargetEventIdList。</p>
                     * @return BlockDomain <p>域名加白目标，传合法域名；HandleType 必须为 2，并同时传 TargetEventIdList。</p>
                     * 
                     */
                    std::string GetBlockDomain() const;

                    /**
                     * 设置<p>域名加白目标，传合法域名；HandleType 必须为 2，并同时传 TargetEventIdList。</p>
                     * @param _blockDomain <p>域名加白目标，传合法域名；HandleType 必须为 2，并同时传 TargetEventIdList。</p>
                     * 
                     */
                    void SetBlockDomain(const std::string& _blockDomain);

                    /**
                     * 判断参数 BlockDomain 是否已赋值
                     * @return BlockDomain 是否已赋值
                     * 
                     */
                    bool BlockDomainHasBeenSet() const;

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
                     * 获取<p>可选处置说明，最多 50 个 Unicode 字符。</p>
                     * @return HandleComment <p>可选处置说明，最多 50 个 Unicode 字符。</p>
                     * 
                     */
                    std::string GetHandleComment() const;

                    /**
                     * 设置<p>可选处置说明，最多 50 个 Unicode 字符。</p>
                     * @param _handleComment <p>可选处置说明，最多 50 个 Unicode 字符。</p>
                     * 
                     */
                    void SetHandleComment(const std::string& _handleComment);

                    /**
                     * 判断参数 HandleComment 是否已赋值
                     * @return HandleComment 是否已赋值
                     * 
                     */
                    bool HandleCommentHasBeenSet() const;

                    /**
                     * 获取<p>告警事件 ID 列表，可省略。通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。事件对应的告警日志会与 HandleIdList 合并后参与处置。</p>
                     * @return HandleEventIdList <p>告警事件 ID 列表，可省略。通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。事件对应的告警日志会与 HandleIdList 合并后参与处置。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleEventIdList() const;

                    /**
                     * 设置<p>告警事件 ID 列表，可省略。通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。事件对应的告警日志会与 HandleIdList 合并后参与处置。</p>
                     * @param _handleEventIdList <p>告警事件 ID 列表，可省略。通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。事件对应的告警日志会与 HandleIdList 合并后参与处置。</p>
                     * 
                     */
                    void SetHandleEventIdList(const std::vector<std::string>& _handleEventIdList);

                    /**
                     * 判断参数 HandleEventIdList 是否已赋值
                     * @return HandleEventIdList 是否已赋值
                     * 
                     */
                    bool HandleEventIdListHasBeenSet() const;

                    /**
                     * 获取<p>告警日志 ID 列表，可省略；可与 HandleEventIdList 同时使用。调用 DescribeLogs，传 Index=rule_threatinfo 和目标日志的查询条件，解析返回结果，仅使用目标记录的 log_id。告警事件 ID 使用 HandleEventIdList。</p>
                     * @return HandleIdList <p>告警日志 ID 列表，可省略；可与 HandleEventIdList 同时使用。调用 DescribeLogs，传 Index=rule_threatinfo 和目标日志的查询条件，解析返回结果，仅使用目标记录的 log_id。告警事件 ID 使用 HandleEventIdList。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleIdList() const;

                    /**
                     * 设置<p>告警日志 ID 列表，可省略；可与 HandleEventIdList 同时使用。调用 DescribeLogs，传 Index=rule_threatinfo 和目标日志的查询条件，解析返回结果，仅使用目标记录的 log_id。告警事件 ID 使用 HandleEventIdList。</p>
                     * @param _handleIdList <p>告警日志 ID 列表，可省略；可与 HandleEventIdList 同时使用。调用 DescribeLogs，传 Index=rule_threatinfo 和目标日志的查询条件，解析返回结果，仅使用目标记录的 log_id。告警事件 ID 使用 HandleEventIdList。</p>
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
                     * 获取<p>IP 处置目标列表，每项必须是有效 IP 地址。HandleType=3 表示加白，HandleType=4 表示封禁；可使用 DescribeCfwAlerts 返回的 alerts[].src_ip_list 或 alerts[].dst_ip_list。</p>
                     * @return HandleIpList <p>IP 处置目标列表，每项必须是有效 IP 地址。HandleType=3 表示加白，HandleType=4 表示封禁；可使用 DescribeCfwAlerts 返回的 alerts[].src_ip_list 或 alerts[].dst_ip_list。</p>
                     * 
                     */
                    std::vector<std::string> GetHandleIpList() const;

                    /**
                     * 设置<p>IP 处置目标列表，每项必须是有效 IP 地址。HandleType=3 表示加白，HandleType=4 表示封禁；可使用 DescribeCfwAlerts 返回的 alerts[].src_ip_list 或 alerts[].dst_ip_list。</p>
                     * @param _handleIpList <p>IP 处置目标列表，每项必须是有效 IP 地址。HandleType=3 表示加白，HandleType=4 表示封禁；可使用 DescribeCfwAlerts 返回的 alerts[].src_ip_list 或 alerts[].dst_ip_list。</p>
                     * 
                     */
                    void SetHandleIpList(const std::vector<std::string>& _handleIpList);

                    /**
                     * 判断参数 HandleIpList 是否已赋值
                     * @return HandleIpList 是否已赋值
                     * 
                     */
                    bool HandleIpListHasBeenSet() const;

                    /**
                     * 获取<p>处置原因，可省略：0 未指定原因，1 重复，2 误报，3 紧急加白；主要用于加白记录。</p>
                     * @return IgnoreReason <p>处置原因，可省略：0 未指定原因，1 重复，2 误报，3 紧急加白；主要用于加白记录。</p>
                     * 
                     */
                    int64_t GetIgnoreReason() const;

                    /**
                     * 设置<p>处置原因，可省略：0 未指定原因，1 重复，2 误报，3 紧急加白；主要用于加白记录。</p>
                     * @param _ignoreReason <p>处置原因，可省略：0 未指定原因，1 重复，2 误报，3 紧急加白；主要用于加白记录。</p>
                     * 
                     */
                    void SetIgnoreReason(const int64_t& _ignoreReason);

                    /**
                     * 判断参数 IgnoreReason 是否已赋值
                     * @return IgnoreReason 是否已赋值
                     * 
                     */
                    bool IgnoreReasonHasBeenSet() const;

                    /**
                     * 获取<p>隔离范围数组，可省略：1 互联网入站，2 互联网出站，4 内网访问。仅 HandleType=8 使用；组合多个范围时传入对应值且不要重复，重复值会改变最终隔离范围。</p>
                     * @return IsolateType <p>隔离范围数组，可省略：1 互联网入站，2 互联网出站，4 内网访问。仅 HandleType=8 使用；组合多个范围时传入对应值且不要重复，重复值会改变最终隔离范围。</p>
                     * 
                     */
                    std::vector<int64_t> GetIsolateType() const;

                    /**
                     * 设置<p>隔离范围数组，可省略：1 互联网入站，2 互联网出站，4 内网访问。仅 HandleType=8 使用；组合多个范围时传入对应值且不要重复，重复值会改变最终隔离范围。</p>
                     * @param _isolateType <p>隔离范围数组，可省略：1 互联网入站，2 互联网出站，4 内网访问。仅 HandleType=8 使用；组合多个范围时传入对应值且不要重复，重复值会改变最终隔离范围。</p>
                     * 
                     */
                    void SetIsolateType(const std::vector<int64_t>& _isolateType);

                    /**
                     * 判断参数 IsolateType 是否已赋值
                     * @return IsolateType 是否已赋值
                     * 
                     */
                    bool IsolateTypeHasBeenSet() const;

                    /**
                     * 获取<p>处置关联的来源事件 ID 列表，仅用于 HandleIpList 或 BlockDomain。BlockDomain 处置时必填，HandleIpList 处置时可省略；通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * @return TargetEventIdList <p>处置关联的来源事件 ID 列表，仅用于 HandleIpList 或 BlockDomain。BlockDomain 处置时必填，HandleIpList 处置时可省略；通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * 
                     */
                    std::vector<std::string> GetTargetEventIdList() const;

                    /**
                     * 设置<p>处置关联的来源事件 ID 列表，仅用于 HandleIpList 或 BlockDomain。BlockDomain 处置时必填，HandleIpList 处置时可省略；通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * @param _targetEventIdList <p>处置关联的来源事件 ID 列表，仅用于 HandleIpList 或 BlockDomain。BlockDomain 处置时必填，HandleIpList 处置时可省略；通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     * 
                     */
                    void SetTargetEventIdList(const std::vector<std::string>& _targetEventIdList);

                    /**
                     * 判断参数 TargetEventIdList 是否已赋值
                     * @return TargetEventIdList 是否已赋值
                     * 
                     */
                    bool TargetEventIdListHasBeenSet() const;

                    /**
                     * 获取<p>隔离后仍允许通信的 IPv4 地址列表，仅 HandleType=8 使用。可省略或传空数组；非空时每项必须是有效 IPv4 地址。</p>
                     * @return WhiteIpList <p>隔离后仍允许通信的 IPv4 地址列表，仅 HandleType=8 使用。可省略或传空数组；非空时每项必须是有效 IPv4 地址。</p>
                     * 
                     */
                    std::vector<std::string> GetWhiteIpList() const;

                    /**
                     * 设置<p>隔离后仍允许通信的 IPv4 地址列表，仅 HandleType=8 使用。可省略或传空数组；非空时每项必须是有效 IPv4 地址。</p>
                     * @param _whiteIpList <p>隔离后仍允许通信的 IPv4 地址列表，仅 HandleType=8 使用。可省略或传空数组；非空时每项必须是有效 IPv4 地址。</p>
                     * 
                     */
                    void SetWhiteIpList(const std::vector<std::string>& _whiteIpList);

                    /**
                     * 判断参数 WhiteIpList 是否已赋值
                     * @return WhiteIpList 是否已赋值
                     * 
                     */
                    bool WhiteIpListHasBeenSet() const;

                private:

                    /**
                     * <p>必填的告警方向：0 出向，1 入向，3 内网。用于 HandleIpList 中 IP 目标的处置方向；其它目标也必须传上述有效值。从 DescribeCfwAlerts 复制方向时，将 alerts[].direction 的 outbound、inbound、lateral 分别转换为 JSON 整数 0、1、3。</p>
                     */
                    int64_t m_alertDirection;
                    bool m_alertDirectionHasBeenSet;

                    /**
                     * <p>必填的处置生效方向。支持空字符串、0（互联网出向）、1（互联网入向）、0,1/1,0（互联网双向）、3（内网访问）、5（内网访问源）、6（内网访问目的）及 5,6/6,5。空字符串表示按告警原方向处置；同一 IP 的已有规则方向会与本次方向合并。</p>
                     */
                    std::string m_handleDirection;
                    bool m_handleDirectionHasBeenSet;

                    /**
                     * <p>处置有效期：1 表示 1 天，7 表示 7 天，-2 表示永久。</p>
                     */
                    int64_t m_handleTime;
                    bool m_handleTimeHasBeenSet;

                    /**
                     * <p>必填的处置类型：1 按 HandleIdList 或 HandleEventIdList 封禁，2 按 HandleIdList、HandleEventIdList 或 BlockDomain 加白，3 按 HandleIpList 加白 IP，4 按 HandleIpList 封禁 IP，5 将 HandleIdList 或 HandleEventIdList 对应的安全基线告警地址加入指定方向的安全基线列表，8 按 HandleEventIdList 关联资产或 AssetIdList 新增隔离。五类目标至少提供一类；HandleType=8 未能从事件解析出资产时必须提供 AssetIdList。IsolateType 和 WhiteIpList 仅用于类型 8。</p>
                     */
                    int64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                    /**
                     * <p>资产隔离目标列表，可省略；仅 HandleType=8 使用。直接按资产隔离时，调用 DescribeCfwAssets，传 AssetType=host 和目标 InstanceId，解析返回结果；仅在唯一 assets[].instance_id 与目标完全相等时将其写入本字段，不使用资产名称。</p>
                     */
                    std::vector<std::string> m_assetIdList;
                    bool m_assetIdListHasBeenSet;

                    /**
                     * <p>域名加白目标，传合法域名；HandleType 必须为 2，并同时传 TargetEventIdList。</p>
                     */
                    std::string m_blockDomain;
                    bool m_blockDomainHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>可选处置说明，最多 50 个 Unicode 字符。</p>
                     */
                    std::string m_handleComment;
                    bool m_handleCommentHasBeenSet;

                    /**
                     * <p>告警事件 ID 列表，可省略。通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。事件对应的告警日志会与 HandleIdList 合并后参与处置。</p>
                     */
                    std::vector<std::string> m_handleEventIdList;
                    bool m_handleEventIdListHasBeenSet;

                    /**
                     * <p>告警日志 ID 列表，可省略；可与 HandleEventIdList 同时使用。调用 DescribeLogs，传 Index=rule_threatinfo 和目标日志的查询条件，解析返回结果，仅使用目标记录的 log_id。告警事件 ID 使用 HandleEventIdList。</p>
                     */
                    std::vector<std::string> m_handleIdList;
                    bool m_handleIdListHasBeenSet;

                    /**
                     * <p>IP 处置目标列表，每项必须是有效 IP 地址。HandleType=3 表示加白，HandleType=4 表示封禁；可使用 DescribeCfwAlerts 返回的 alerts[].src_ip_list 或 alerts[].dst_ip_list。</p>
                     */
                    std::vector<std::string> m_handleIpList;
                    bool m_handleIpListHasBeenSet;

                    /**
                     * <p>处置原因，可省略：0 未指定原因，1 重复，2 误报，3 紧急加白；主要用于加白记录。</p>
                     */
                    int64_t m_ignoreReason;
                    bool m_ignoreReasonHasBeenSet;

                    /**
                     * <p>隔离范围数组，可省略：1 互联网入站，2 互联网出站，4 内网访问。仅 HandleType=8 使用；组合多个范围时传入对应值且不要重复，重复值会改变最终隔离范围。</p>
                     */
                    std::vector<int64_t> m_isolateType;
                    bool m_isolateTypeHasBeenSet;

                    /**
                     * <p>处置关联的来源事件 ID 列表，仅用于 HandleIpList 或 BlockDomain。BlockDomain 处置时必填，HandleIpList 处置时可省略；通过 DescribeCfwAlerts 获取，返回 alerts[].current_event_id 时使用该值，否则使用 alerts[].event_id。</p>
                     */
                    std::vector<std::string> m_targetEventIdList;
                    bool m_targetEventIdListHasBeenSet;

                    /**
                     * <p>隔离后仍允许通信的 IPv4 地址列表，仅 HandleType=8 使用。可省略或传空数组；非空时每项必须是有效 IPv4 地址。</p>
                     */
                    std::vector<std::string> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCREQUEST_H_
