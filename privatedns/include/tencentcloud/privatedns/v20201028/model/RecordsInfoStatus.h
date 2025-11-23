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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_RECORDSINFOSTATUS_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_RECORDSINFOSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 批量添加解析记录结果
                */
                class RecordsInfoStatus : public AbstractModel
                {
                public:
                    RecordsInfoStatus();
                    ~RecordsInfoStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @return RecordType 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @param _recordType 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
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
                     * 获取子域名，例如 "www", "m", "@"
                     * @return SubDomain 子域名，例如 "www", "m", "@"
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子域名，例如 "www", "m", "@"
                     * @param _subDomain 子域名，例如 "www", "m", "@"
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * @return RecordValue 记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * @param _recordValue 记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                    /**
                     * 获取记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TTL 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tTL 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MX MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMX() const;

                    /**
                     * 设置MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mX MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMX(const int64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取是否添加成功：0是失败，1是成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 是否添加成功：0是失败，1是成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置是否添加成功：0是失败，1是成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 是否添加成功：0是失败，1是成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取若status为0，则此处为失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 若status为0，则此处为失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置若status为0，则此处为失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 若status为0，则此处为失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 子域名，例如 "www", "m", "@"
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * 记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 是否添加成功：0是失败，1是成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 若status为0，则此处为失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_RECORDSINFOSTATUS_H_
