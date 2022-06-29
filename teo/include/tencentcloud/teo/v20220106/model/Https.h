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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_HTTPS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Hsts.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 域名 https 加速配置，默认为关闭状态
                */
                class Https : public AbstractModel
                {
                public:
                    Https();
                    ~Https() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Http2 http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Http2 http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttp2(const std::string& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcspStapling OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcspStapling OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcspStapling(const std::string& _ocspStapling);

                    /**
                     * 判断参数 OcspStapling 是否已赋值
                     * @return OcspStapling 是否已赋值
                     */
                    bool OcspStaplingHasBeenSet() const;

                    /**
                     * 获取Tls版本设置，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TlsVersion Tls版本设置，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置Tls版本设置，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TlsVersion Tls版本设置，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTlsVersion(const std::vector<std::string>& _tlsVersion);

                    /**
                     * 判断参数 TlsVersion 是否已赋值
                     * @return TlsVersion 是否已赋值
                     */
                    bool TlsVersionHasBeenSet() const;

                    /**
                     * 获取HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hsts HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Hsts GetHsts() const;

                    /**
                     * 设置HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Hsts HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHsts(const Hsts& _hsts);

                    /**
                     * 判断参数 Hsts 是否已赋值
                     * @return Hsts 是否已赋值
                     */
                    bool HstsHasBeenSet() const;

                private:

                    /**
                     * http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * Tls版本设置，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                    /**
                     * HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Hsts m_hsts;
                    bool m_hstsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_HTTPS_H_
