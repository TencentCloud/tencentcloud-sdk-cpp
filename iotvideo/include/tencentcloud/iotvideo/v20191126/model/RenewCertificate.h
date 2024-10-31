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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RENEWCERTIFICATE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RENEWCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 刷新证书信息
                */
                class RenewCertificate : public AbstractModel
                {
                public:
                    RenewCertificate();
                    ~RenewCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取刷新证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TempCertificate 刷新证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CertificateInfo GetTempCertificate() const;

                    /**
                     * 设置刷新证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tempCertificate 刷新证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTempCertificate(const CertificateInfo& _tempCertificate);

                    /**
                     * 判断参数 TempCertificate 是否已赋值
                     * @return TempCertificate 是否已赋值
                     * 
                     */
                    bool TempCertificateHasBeenSet() const;

                private:

                    /**
                     * 刷新证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateInfo m_tempCertificate;
                    bool m_tempCertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RENEWCERTIFICATE_H_
