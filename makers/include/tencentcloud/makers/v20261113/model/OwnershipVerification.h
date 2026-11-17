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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_OWNERSHIPVERIFICATION_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_OWNERSHIPVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/DnsVerification.h>
#include <tencentcloud/makers/v20261113/model/FileVerification.h>
#include <tencentcloud/makers/v20261113/model/NsVerification.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 域名归属校验信息
                */
                class OwnershipVerification : public AbstractModel
                {
                public:
                    OwnershipVerification();
                    ~OwnershipVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DNS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsVerification <p>DNS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DnsVerification GetDnsVerification() const;

                    /**
                     * 设置<p>DNS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsVerification <p>DNS 校验</p>
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
                     * 获取<p>文件校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileVerification <p>文件校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileVerification GetFileVerification() const;

                    /**
                     * 设置<p>文件校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileVerification <p>文件校验</p>
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
                     * 获取<p>NS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NsVerification <p>NS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NsVerification GetNsVerification() const;

                    /**
                     * 设置<p>NS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nsVerification <p>NS 校验</p>
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
                     * <p>DNS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DnsVerification m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * <p>文件校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileVerification m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                    /**
                     * <p>NS 校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NsVerification m_nsVerification;
                    bool m_nsVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_OWNERSHIPVERIFICATION_H_
