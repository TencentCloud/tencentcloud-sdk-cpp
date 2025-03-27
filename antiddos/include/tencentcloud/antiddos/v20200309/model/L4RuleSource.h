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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L4RULESOURCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L4RULESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * L4规则回源列表
                */
                class L4RuleSource : public AbstractModel
                {
                public:
                    L4RuleSource();
                    ~L4RuleSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源IP或域名
                     * @return Source 回源IP或域名
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置回源IP或域名
                     * @param _source 回源IP或域名
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
                     * 获取权重值，取值[0,100]，暂不支持
                     * @return Weight 权重值，取值[0,100]，暂不支持
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重值，取值[0,100]，暂不支持
                     * @param _weight 权重值，取值[0,100]，暂不支持
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取8000
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 8000
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置8000
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 8000
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取备份源站，1: 备份源站，0: 普通源站
                     * @return Backup 备份源站，1: 备份源站，0: 普通源站
                     * 
                     */
                    uint64_t GetBackup() const;

                    /**
                     * 设置备份源站，1: 备份源站，0: 普通源站
                     * @param _backup 备份源站，1: 备份源站，0: 普通源站
                     * 
                     */
                    void SetBackup(const uint64_t& _backup);

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     * 
                     */
                    bool BackupHasBeenSet() const;

                private:

                    /**
                     * 回源IP或域名
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 权重值，取值[0,100]，暂不支持
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 8000
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 备份源站，1: 备份源站，0: 普通源站
                     */
                    uint64_t m_backup;
                    bool m_backupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L4RULESOURCE_H_
