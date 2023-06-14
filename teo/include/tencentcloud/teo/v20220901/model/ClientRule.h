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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 客户端规则信息
                */
                class ClientRule : public AbstractModel
                {
                public:
                    ClientRule();
                    ~ClientRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端ip。
                     * @return ClientIp 客户端ip。
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端ip。
                     * @param _clientIp 客户端ip。
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取规则类型。
                     * @return RuleType 规则类型。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型。
                     * @param _ruleType 规则类型。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则id。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取封禁状态，取值有：
<li>block ：封禁 ；</li>
<li>allow ：放行 。</li>
                     * @return IpStatus 封禁状态，取值有：
<li>block ：封禁 ；</li>
<li>allow ：放行 。</li>
                     * 
                     */
                    std::string GetIpStatus() const;

                    /**
                     * 设置封禁状态，取值有：
<li>block ：封禁 ；</li>
<li>allow ：放行 。</li>
                     * @param _ipStatus 封禁状态，取值有：
<li>block ：封禁 ；</li>
<li>allow ：放行 。</li>
                     * 
                     */
                    void SetIpStatus(const std::string& _ipStatus);

                    /**
                     * 判断参数 IpStatus 是否已赋值
                     * @return IpStatus 是否已赋值
                     * 
                     */
                    bool IpStatusHasBeenSet() const;

                    /**
                     * 获取封禁时间，采用unix秒级时间戳。
                     * @return BlockTime 封禁时间，采用unix秒级时间戳。
                     * 
                     */
                    int64_t GetBlockTime() const;

                    /**
                     * 设置封禁时间，采用unix秒级时间戳。
                     * @param _blockTime 封禁时间，采用unix秒级时间戳。
                     * 
                     */
                    void SetBlockTime(const int64_t& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     * 
                     */
                    bool BlockTimeHasBeenSet() const;

                    /**
                     * 获取每条数据的唯一标识id。
                     * @return Id 每条数据的唯一标识id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置每条数据的唯一标识id。
                     * @param _id 每条数据的唯一标识id。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 客户端ip。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 规则类型。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 封禁状态，取值有：
<li>block ：封禁 ；</li>
<li>allow ：放行 。</li>
                     */
                    std::string m_ipStatus;
                    bool m_ipStatusHasBeenSet;

                    /**
                     * 封禁时间，采用unix秒级时间戳。
                     */
                    int64_t m_blockTime;
                    bool m_blockTimeHasBeenSet;

                    /**
                     * 每条数据的唯一标识id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTRULE_H_
