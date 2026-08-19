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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTCONFIGSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTCONFIGSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAgentConfigSetting请求参数结构体
                */
                class ModifyAgentConfigSettingRequest : public AbstractModel
                {
                public:
                    ModifyAgentConfigSettingRequest();
                    ~ModifyAgentConfigSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>日志采集类型列表，可选值：tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * @return LogCollectSettings <p>日志采集类型列表，可选值：tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 设置<p>日志采集类型列表，可选值：tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * @param _logCollectSettings <p>日志采集类型列表，可选值：tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * 
                     */
                    void SetLogCollectSettings(const std::vector<std::string>& _logCollectSettings);

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                    /**
                     * 获取<p>资产选择方式：all-全部付费资产，tag-按标签选择，direct-直接选择</p>
                     * @return AssetSelectionType <p>资产选择方式：all-全部付费资产，tag-按标签选择，direct-直接选择</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 设置<p>资产选择方式：all-全部付费资产，tag-按标签选择，direct-直接选择</p>
                     * @param _assetSelectionType <p>资产选择方式：all-全部付费资产，tag-按标签选择，direct-直接选择</p>
                     * 
                     */
                    void SetAssetSelectionType(const std::string& _assetSelectionType);

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>按标签选择时的标签ID数组（AssetSelectionType=tag时使用）</p>
                     * @return TagIds <p>按标签选择时的标签ID数组（AssetSelectionType=tag时使用）</p>
                     * 
                     */
                    std::vector<std::string> GetTagIds() const;

                    /**
                     * 设置<p>按标签选择时的标签ID数组（AssetSelectionType=tag时使用）</p>
                     * @param _tagIds <p>按标签选择时的标签ID数组（AssetSelectionType=tag时使用）</p>
                     * 
                     */
                    void SetTagIds(const std::vector<std::string>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>直接选择的主机instance_id列表（AssetSelectionType=direct时使用）</p>
                     * @return InstanceIDs <p>直接选择的主机instance_id列表（AssetSelectionType=direct时使用）</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>直接选择的主机instance_id列表（AssetSelectionType=direct时使用）</p>
                     * @param _instanceIDs <p>直接选择的主机instance_id列表（AssetSelectionType=direct时使用）</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>排除的主机instance_id列表（AssetSelectionType=all时使用）</p>
                     * @return ExcludeInstanceIDs <p>排除的主机instance_id列表（AssetSelectionType=all时使用）</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 设置<p>排除的主机instance_id列表（AssetSelectionType=all时使用）</p>
                     * @param _excludeInstanceIDs <p>排除的主机instance_id列表（AssetSelectionType=all时使用）</p>
                     * 
                     */
                    void SetExcludeInstanceIDs(const std::vector<std::string>& _excludeInstanceIDs);

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>日志采集类型列表，可选值：tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     */
                    std::vector<std::string> m_logCollectSettings;
                    bool m_logCollectSettingsHasBeenSet;

                    /**
                     * <p>资产选择方式：all-全部付费资产，tag-按标签选择，direct-直接选择</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>按标签选择时的标签ID数组（AssetSelectionType=tag时使用）</p>
                     */
                    std::vector<std::string> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>直接选择的主机instance_id列表（AssetSelectionType=direct时使用）</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>排除的主机instance_id列表（AssetSelectionType=all时使用）</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTCONFIGSETTINGREQUEST_H_
