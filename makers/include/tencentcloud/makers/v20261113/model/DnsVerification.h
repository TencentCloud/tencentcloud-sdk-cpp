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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DNSVERIFICATION_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DNSVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DNS 归属校验记录
                */
                class DnsVerification : public AbstractModel
                {
                public:
                    DnsVerification();
                    ~DnsVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>记录类型，TXT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordType <p>记录类型，TXT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置<p>记录类型，TXT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordType <p>记录类型，TXT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取<p>主机记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subdomain <p>主机记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置<p>主机记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subdomain <p>主机记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取<p>记录值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordValue <p>记录值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置<p>记录值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordValue <p>记录值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                private:

                    /**
                     * <p>记录类型，TXT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>主机记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * <p>记录值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DNSVERIFICATION_H_
