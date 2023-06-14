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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DNSCONFIG_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DNSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 施压机 DNS 配置
                */
                class DNSConfig : public AbstractModel
                {
                public:
                    DNSConfig();
                    ~DNSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DNS IP 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nameservers DNS IP 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNameservers() const;

                    /**
                     * 设置DNS IP 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameservers DNS IP 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameservers(const std::vector<std::string>& _nameservers);

                    /**
                     * 判断参数 Nameservers 是否已赋值
                     * @return Nameservers 是否已赋值
                     * 
                     */
                    bool NameserversHasBeenSet() const;

                private:

                    /**
                     * DNS IP 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nameservers;
                    bool m_nameserversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DNSCONFIG_H_
