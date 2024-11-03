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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnsVerification.h>
#include <tencentcloud/teo/v20220901/model/FileVerification.h>
#include <tencentcloud/teo/v20220901/model/NsVerification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 该结构体表示各种场景、模式下，用于验证用户对站点域名的归属权内容。
                */
                class OwnershipVerification : public AbstractModel
                {
                public:
                    OwnershipVerification();
                    ~OwnershipVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CNAME 、无域名接入时，使用 DNS 解析验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsVerification CNAME 、无域名接入时，使用 DNS 解析验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DnsVerification GetDnsVerification() const;

                    /**
                     * 设置CNAME 、无域名接入时，使用 DNS 解析验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsVerification CNAME 、无域名接入时，使用 DNS 解析验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDnsVerification(const DnsVerification& _dnsVerification);

                    /**
                     * 判断参数 DnsVerification 是否已赋值
                     * @return DnsVerification 是否已赋值
                     * 
                     */
                    bool DnsVerificationHasBeenSet() const;

                    /**
                     * 获取CNAME 、无域名接入时，使用文件验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileVerification CNAME 、无域名接入时，使用文件验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileVerification GetFileVerification() const;

                    /**
                     * 设置CNAME 、无域名接入时，使用文件验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileVerification CNAME 、无域名接入时，使用文件验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileVerification(const FileVerification& _fileVerification);

                    /**
                     * 判断参数 FileVerification 是否已赋值
                     * @return FileVerification 是否已赋值
                     * 
                     */
                    bool FileVerificationHasBeenSet() const;

                    /**
                     * 获取NS 接入，切换 DNS 服务器所需的信息。详情参考 [修改 DNS 服务器](https://cloud.tencent.com/document/product/1552/90452)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NsVerification NS 接入，切换 DNS 服务器所需的信息。详情参考 [修改 DNS 服务器](https://cloud.tencent.com/document/product/1552/90452)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NsVerification GetNsVerification() const;

                    /**
                     * 设置NS 接入，切换 DNS 服务器所需的信息。详情参考 [修改 DNS 服务器](https://cloud.tencent.com/document/product/1552/90452)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nsVerification NS 接入，切换 DNS 服务器所需的信息。详情参考 [修改 DNS 服务器](https://cloud.tencent.com/document/product/1552/90452)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNsVerification(const NsVerification& _nsVerification);

                    /**
                     * 判断参数 NsVerification 是否已赋值
                     * @return NsVerification 是否已赋值
                     * 
                     */
                    bool NsVerificationHasBeenSet() const;

                private:

                    /**
                     * CNAME 、无域名接入时，使用 DNS 解析验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DnsVerification m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * CNAME 、无域名接入时，使用文件验证时所需的信息。详情参考 [站点/域名归属权验证
](https://cloud.tencent.com/document/product/1552/70789#7af6ecf8-afca-4e35-8811-b5797ed1bde5)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileVerification m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                    /**
                     * NS 接入，切换 DNS 服务器所需的信息。详情参考 [修改 DNS 服务器](https://cloud.tencent.com/document/product/1552/90452)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NsVerification m_nsVerification;
                    bool m_nsVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
