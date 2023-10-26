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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PrivateParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站组记录
                */
                class OriginRecord : public AbstractModel
                {
                public:
                    OriginRecord();
                    ~OriginRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站记录值，不包含端口信息，可以为：IPv4，IPv6，域名格式。
                     * @return Record 源站记录值，不包含端口信息，可以为：IPv4，IPv6，域名格式。
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置源站记录值，不包含端口信息，可以为：IPv4，IPv6，域名格式。
                     * @param _record 源站记录值，不包含端口信息，可以为：IPv4，IPv6，域名格式。
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6、域名类型源站；</li>
<li>COS：COS源。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
                     * @return Type 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6、域名类型源站；</li>
<li>COS：COS源。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6、域名类型源站；</li>
<li>COS：COS源。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
                     * @param _type 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6、域名类型源站；</li>
<li>COS：COS源。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取源站记录ID。
                     * @return RecordId 源站记录ID。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置源站记录ID。
                     * @param _recordId 源站记录ID。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取源站权重，取值为0-100, 不填表示不设置权重，由系统自由调度，填0表示权重为0, 流量将不会调度到此源站。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 源站权重，取值为0-100, 不填表示不设置权重，由系统自由调度，填0表示权重为0, 流量将不会调度到此源站。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置源站权重，取值为0-100, 不填表示不设置权重，由系统自由调度，填0表示权重为0, 流量将不会调度到此源站。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 源站权重，取值为0-100, 不填表示不设置权重，由系统自由调度，填0表示权重为0, 流量将不会调度到此源站。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否私有鉴权，当源站类型 RecordType=COS/AWS_S3 时生效，取值有：
<li>true：使用私有鉴权；</li>
<li>false：不使用私有鉴权。</li>不填写，默认值为：false。

                     * @return Private 是否私有鉴权，当源站类型 RecordType=COS/AWS_S3 时生效，取值有：
<li>true：使用私有鉴权；</li>
<li>false：不使用私有鉴权。</li>不填写，默认值为：false。

                     * 
                     */
                    bool GetPrivate() const;

                    /**
                     * 设置是否私有鉴权，当源站类型 RecordType=COS/AWS_S3 时生效，取值有：
<li>true：使用私有鉴权；</li>
<li>false：不使用私有鉴权。</li>不填写，默认值为：false。

                     * @param _private 是否私有鉴权，当源站类型 RecordType=COS/AWS_S3 时生效，取值有：
<li>true：使用私有鉴权；</li>
<li>false：不使用私有鉴权。</li>不填写，默认值为：false。

                     * 
                     */
                    void SetPrivate(const bool& _private);

                    /**
                     * 判断参数 Private 是否已赋值
                     * @return Private 是否已赋值
                     * 
                     */
                    bool PrivateHasBeenSet() const;

                    /**
                     * 获取私有鉴权参数，当源站类型Private=true时有效。
                     * @return PrivateParameters 私有鉴权参数，当源站类型Private=true时有效。
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置私有鉴权参数，当源站类型Private=true时有效。
                     * @param _privateParameters 私有鉴权参数，当源站类型Private=true时有效。
                     * 
                     */
                    void SetPrivateParameters(const std::vector<PrivateParameter>& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                private:

                    /**
                     * 源站记录值，不包含端口信息，可以为：IPv4，IPv6，域名格式。
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6、域名类型源站；</li>
<li>COS：COS源。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源站记录ID。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 源站权重，取值为0-100, 不填表示不设置权重，由系统自由调度，填0表示权重为0, 流量将不会调度到此源站。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 是否私有鉴权，当源站类型 RecordType=COS/AWS_S3 时生效，取值有：
<li>true：使用私有鉴权；</li>
<li>false：不使用私有鉴权。</li>不填写，默认值为：false。

                     */
                    bool m_private;
                    bool m_privateHasBeenSet;

                    /**
                     * 私有鉴权参数，当源站类型Private=true时有效。
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_
