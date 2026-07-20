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
                     * 获取分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。
                     * @return Scenario 分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。
                     * @param _scenario 分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。
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
                     * 获取查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。
                     * @return StartTime 查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。
                     * @param _startTime 查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。
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
                     * 获取查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。
                     * @return EndTime 查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。
                     * @param _endTime 查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。
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
                     * 获取分析对象类型。可选，默认 user；user 表示租户全局，asset 表示资产上下文，vpc 表示 VPC 上下文，domain 表示域名上下文。选择非 user 时建议同时传 ObjectId 以限定具体对象；当前未传 ObjectId 时仍按该对象类型执行宽查询。
                     * @return ObjectType 分析对象类型。可选，默认 user；user 表示租户全局，asset 表示资产上下文，vpc 表示 VPC 上下文，domain 表示域名上下文。选择非 user 时建议同时传 ObjectId 以限定具体对象；当前未传 ObjectId 时仍按该对象类型执行宽查询。
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置分析对象类型。可选，默认 user；user 表示租户全局，asset 表示资产上下文，vpc 表示 VPC 上下文，domain 表示域名上下文。选择非 user 时建议同时传 ObjectId 以限定具体对象；当前未传 ObjectId 时仍按该对象类型执行宽查询。
                     * @param _objectType 分析对象类型。可选，默认 user；user 表示租户全局，asset 表示资产上下文，vpc 表示 VPC 上下文，domain 表示域名上下文。选择非 user 时建议同时传 ObjectId 以限定具体对象；当前未传 ObjectId 时仍按该对象类型执行宽查询。
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
                     * 获取分析对象标识。ObjectType 为 asset、vpc 或 domain 时可传，用于限定具体 IP、实例 ID、VPC ID 或域名；当前为可选参数，省略时不会按具体对象过滤。
                     * @return ObjectId 分析对象标识。ObjectType 为 asset、vpc 或 domain 时可传，用于限定具体 IP、实例 ID、VPC ID 或域名；当前为可选参数，省略时不会按具体对象过滤。
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置分析对象标识。ObjectType 为 asset、vpc 或 domain 时可传，用于限定具体 IP、实例 ID、VPC ID 或域名；当前为可选参数，省略时不会按具体对象过滤。
                     * @param _objectId 分析对象标识。ObjectType 为 asset、vpc 或 domain 时可传，用于限定具体 IP、实例 ID、VPC ID 或域名；当前为可选参数，省略时不会按具体对象过滤。
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
                     * 获取目标 IP 或域名过滤。可选，常用于 access_troubleshoot，也可用于其他 Scenario；传入后优先于 ObjectType/ObjectId，并对该场景全部分析段追加源 IP、目的 IP 或目的域名过滤。
                     * @return Target 目标 IP 或域名过滤。可选，常用于 access_troubleshoot，也可用于其他 Scenario；传入后优先于 ObjectType/ObjectId，并对该场景全部分析段追加源 IP、目的 IP 或目的域名过滤。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标 IP 或域名过滤。可选，常用于 access_troubleshoot，也可用于其他 Scenario；传入后优先于 ObjectType/ObjectId，并对该场景全部分析段追加源 IP、目的 IP 或目的域名过滤。
                     * @param _target 目标 IP 或域名过滤。可选，常用于 access_troubleshoot，也可用于其他 Scenario；传入后优先于 ObjectType/ObjectId，并对该场景全部分析段追加源 IP、目的 IP 或目的域名过滤。
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
                     * 获取需要跳过的分析段名称列表。可选；不传或传空数组时执行该场景全部分析段。full_traffic 支持 beacon、dns_large、dns_dga、dns_dga_fine、dns_tunnel、icmp_tunnel、mining、p2p、remote_tool、file_transfer、high_risk_outbound、lateral_baseline、vpc_sensitive、smb_write、outbound_baseline、inbound_high_risk、tls_expired、tls_self_signed、first_seen_ip、first_seen_country、first_seen_port；east_west 支持 vpc_inter_vpc、subnet_inter、service_port、lateral_baseline、vpc_sensitive、smb_write、database_lateral；alert_comprehensive 支持 outbound_baseline、lateral_baseline、beacon、inbound_high_risk、first_seen_ip、first_seen_country、first_seen_port；asset_exposure 支持 inbound_high_risk、tls_expired、tls_self_signed、high_risk_outbound；access_troubleshoot 支持 acl_border_block、acl_nat_block、acl_vpc_block、ips_block。传入当前 Scenario 不支持的名称会返回 InvalidParameter。
                     * @return SkipSections 需要跳过的分析段名称列表。可选；不传或传空数组时执行该场景全部分析段。full_traffic 支持 beacon、dns_large、dns_dga、dns_dga_fine、dns_tunnel、icmp_tunnel、mining、p2p、remote_tool、file_transfer、high_risk_outbound、lateral_baseline、vpc_sensitive、smb_write、outbound_baseline、inbound_high_risk、tls_expired、tls_self_signed、first_seen_ip、first_seen_country、first_seen_port；east_west 支持 vpc_inter_vpc、subnet_inter、service_port、lateral_baseline、vpc_sensitive、smb_write、database_lateral；alert_comprehensive 支持 outbound_baseline、lateral_baseline、beacon、inbound_high_risk、first_seen_ip、first_seen_country、first_seen_port；asset_exposure 支持 inbound_high_risk、tls_expired、tls_self_signed、high_risk_outbound；access_troubleshoot 支持 acl_border_block、acl_nat_block、acl_vpc_block、ips_block。传入当前 Scenario 不支持的名称会返回 InvalidParameter。
                     * 
                     */
                    std::vector<std::string> GetSkipSections() const;

                    /**
                     * 设置需要跳过的分析段名称列表。可选；不传或传空数组时执行该场景全部分析段。full_traffic 支持 beacon、dns_large、dns_dga、dns_dga_fine、dns_tunnel、icmp_tunnel、mining、p2p、remote_tool、file_transfer、high_risk_outbound、lateral_baseline、vpc_sensitive、smb_write、outbound_baseline、inbound_high_risk、tls_expired、tls_self_signed、first_seen_ip、first_seen_country、first_seen_port；east_west 支持 vpc_inter_vpc、subnet_inter、service_port、lateral_baseline、vpc_sensitive、smb_write、database_lateral；alert_comprehensive 支持 outbound_baseline、lateral_baseline、beacon、inbound_high_risk、first_seen_ip、first_seen_country、first_seen_port；asset_exposure 支持 inbound_high_risk、tls_expired、tls_self_signed、high_risk_outbound；access_troubleshoot 支持 acl_border_block、acl_nat_block、acl_vpc_block、ips_block。传入当前 Scenario 不支持的名称会返回 InvalidParameter。
                     * @param _skipSections 需要跳过的分析段名称列表。可选；不传或传空数组时执行该场景全部分析段。full_traffic 支持 beacon、dns_large、dns_dga、dns_dga_fine、dns_tunnel、icmp_tunnel、mining、p2p、remote_tool、file_transfer、high_risk_outbound、lateral_baseline、vpc_sensitive、smb_write、outbound_baseline、inbound_high_risk、tls_expired、tls_self_signed、first_seen_ip、first_seen_country、first_seen_port；east_west 支持 vpc_inter_vpc、subnet_inter、service_port、lateral_baseline、vpc_sensitive、smb_write、database_lateral；alert_comprehensive 支持 outbound_baseline、lateral_baseline、beacon、inbound_high_risk、first_seen_ip、first_seen_country、first_seen_port；asset_exposure 支持 inbound_high_risk、tls_expired、tls_self_signed、high_risk_outbound；access_troubleshoot 支持 acl_border_block、acl_nat_block、acl_vpc_block、ips_block。传入当前 Scenario 不支持的名称会返回 InvalidParameter。
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
                     * 分析场景。必填。full_traffic 表示全流量深度分析；east_west 表示东西向流量分析；alert_comprehensive 表示告警综合分析；asset_exposure 表示资产暴露面分析；access_troubleshoot 表示访问阻断排障分析。
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                    /**
                     * 查询开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认查询最近 7 天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；不传时默认当前时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分析对象类型。可选，默认 user；user 表示租户全局，asset 表示资产上下文，vpc 表示 VPC 上下文，domain 表示域名上下文。选择非 user 时建议同时传 ObjectId 以限定具体对象；当前未传 ObjectId 时仍按该对象类型执行宽查询。
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 分析对象标识。ObjectType 为 asset、vpc 或 domain 时可传，用于限定具体 IP、实例 ID、VPC ID 或域名；当前为可选参数，省略时不会按具体对象过滤。
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 目标 IP 或域名过滤。可选，常用于 access_troubleshoot，也可用于其他 Scenario；传入后优先于 ObjectType/ObjectId，并对该场景全部分析段追加源 IP、目的 IP 或目的域名过滤。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 需要跳过的分析段名称列表。可选；不传或传空数组时执行该场景全部分析段。full_traffic 支持 beacon、dns_large、dns_dga、dns_dga_fine、dns_tunnel、icmp_tunnel、mining、p2p、remote_tool、file_transfer、high_risk_outbound、lateral_baseline、vpc_sensitive、smb_write、outbound_baseline、inbound_high_risk、tls_expired、tls_self_signed、first_seen_ip、first_seen_country、first_seen_port；east_west 支持 vpc_inter_vpc、subnet_inter、service_port、lateral_baseline、vpc_sensitive、smb_write、database_lateral；alert_comprehensive 支持 outbound_baseline、lateral_baseline、beacon、inbound_high_risk、first_seen_ip、first_seen_country、first_seen_port；asset_exposure 支持 inbound_high_risk、tls_expired、tls_self_signed、high_risk_outbound；access_troubleshoot 支持 acl_border_block、acl_nat_block、acl_vpc_block、ips_block。传入当前 Scenario 不支持的名称会返回 InvalidParameter。
                     */
                    std::vector<std::string> m_skipSections;
                    bool m_skipSectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATAREQUEST_H_
