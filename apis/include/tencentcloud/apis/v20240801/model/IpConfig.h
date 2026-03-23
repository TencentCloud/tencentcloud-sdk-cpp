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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_IPCONFIG_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_IPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/StartEndTime.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ip黑白名单配置
                */
                class IpConfig : public AbstractModel
                {
                public:
                    IpConfig();
                    ~IpConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ips ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ips ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取生效类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectType 生效类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEffectType() const;

                    /**
                     * 设置生效类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectType 生效类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEffectType(const std::string& _effectType);

                    /**
                     * 判断参数 EffectType 是否已赋值
                     * @return EffectType 是否已赋值
                     * 
                     */
                    bool EffectTypeHasBeenSet() const;

                    /**
                     * 获取生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectTimes 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StartEndTime> GetEffectTimes() const;

                    /**
                     * 设置生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectTimes 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEffectTimes(const std::vector<StartEndTime>& _effectTimes);

                    /**
                     * 判断参数 EffectTimes 是否已赋值
                     * @return EffectTimes 是否已赋值
                     * 
                     */
                    bool EffectTimesHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * 生效类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_effectType;
                    bool m_effectTypeHasBeenSet;

                    /**
                     * 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StartEndTime> m_effectTimes;
                    bool m_effectTimesHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_IPCONFIG_H_
