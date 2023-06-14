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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLITEM_H_

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
                * ip黑白名单
                */
                class IpAccessControlItem : public AbstractModel
                {
                public:
                    IpAccessControlItem();
                    ~IpAccessControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作
                     * @return ActionType 动作
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置动作
                     * @param _actionType 动作
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return Ip ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip
                     * @param _ip ip
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
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
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
                     * 获取更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TsVersion 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tsVersion 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取有效截止时间戳
                     * @return ValidTs 有效截止时间戳
                     * 
                     */
                    uint64_t GetValidTs() const;

                    /**
                     * 设置有效截止时间戳
                     * @param _validTs 有效截止时间戳
                     * 
                     */
                    void SetValidTs(const uint64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                private:

                    /**
                     * 动作
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 有效截止时间戳
                     */
                    uint64_t m_validTs;
                    bool m_validTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLITEM_H_
