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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 批量多域名黑白名单列表Ip
                */
                class BatchIpAccessControlItem : public AbstractModel
                {
                public:
                    BatchIpAccessControlItem();
                    ~BatchIpAccessControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取mongo表自增Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id mongo表自增Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置mongo表自增Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id mongo表自增Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取黑名单42或白名单40
                     * @return ActionType 黑名单42或白名单40
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置黑名单42或白名单40
                     * @param _actionType 黑名单42或白名单40
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取黑白名单的IP
                     * @return Ip 黑白名单的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置黑白名单的IP
                     * @param _ip 黑白名单的IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取添加路径
                     * @return Source 添加路径
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置添加路径
                     * @param _source 添加路径
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return TsVersion 修改时间
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置修改时间
                     * @param _tsVersion 修改时间
                     * 
                     */
                    void SetTsVersion(const uint64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取超时时间
                     * @return ValidTs 超时时间
                     * 
                     */
                    int64_t GetValidTs() const;

                    /**
                     * 设置超时时间
                     * @param _validTs 超时时间
                     * 
                     */
                    void SetValidTs(const int64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                    /**
                     * 获取域名列表
                     * @return Hosts 域名列表
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置域名列表
                     * @param _hosts 域名列表
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取55101145
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 55101145
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置55101145
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 55101145
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpList IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipList IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * mongo表自增Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 黑名单42或白名单40
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 黑白名单的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 添加路径
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 修改时间
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 超时时间
                     */
                    int64_t m_validTs;
                    bool m_validTsHasBeenSet;

                    /**
                     * 域名列表
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 55101145
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_
