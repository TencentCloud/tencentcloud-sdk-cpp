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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DvAuths.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificate）返回参数键为 DvAuthDetail 的内容。
                */
                class DvAuthDetail : public AbstractModel
                {
                public:
                    DvAuthDetail();
                    ~DvAuthDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书域名验证记录Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthKey 证书域名验证记录Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDvAuthKey() const;

                    /**
                     * 设置证书域名验证记录Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dvAuthKey 证书域名验证记录Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDvAuthKey(const std::string& _dvAuthKey);

                    /**
                     * 判断参数 DvAuthKey 是否已赋值
                     * @return DvAuthKey 是否已赋值
                     * 
                     */
                    bool DvAuthKeyHasBeenSet() const;

                    /**
                     * 获取证书域名验证记录值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthValue 证书域名验证记录值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDvAuthValue() const;

                    /**
                     * 设置证书域名验证记录值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dvAuthValue 证书域名验证记录值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDvAuthValue(const std::string& _dvAuthValue);

                    /**
                     * 判断参数 DvAuthValue 是否已赋值
                     * @return DvAuthValue 是否已赋值
                     * 
                     */
                    bool DvAuthValueHasBeenSet() const;

                    /**
                     * 获取证书域名验证域名值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthDomain 证书域名验证域名值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDvAuthDomain() const;

                    /**
                     * 设置证书域名验证域名值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dvAuthDomain 证书域名验证域名值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDvAuthDomain(const std::string& _dvAuthDomain);

                    /**
                     * 判断参数 DvAuthDomain 是否已赋值
                     * @return DvAuthDomain 是否已赋值
                     * 
                     */
                    bool DvAuthDomainHasBeenSet() const;

                    /**
                     * 获取证书域名验证文件路径， 仅FILE、FILE_PROXY使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthPath 证书域名验证文件路径， 仅FILE、FILE_PROXY使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDvAuthPath() const;

                    /**
                     * 设置证书域名验证文件路径， 仅FILE、FILE_PROXY使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dvAuthPath 证书域名验证文件路径， 仅FILE、FILE_PROXY使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDvAuthPath(const std::string& _dvAuthPath);

                    /**
                     * 判断参数 DvAuthPath 是否已赋值
                     * @return DvAuthPath 是否已赋值
                     * 
                     */
                    bool DvAuthPathHasBeenSet() const;

                    /**
                     * 获取证书域名验证子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthKeySubDomain 证书域名验证子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDvAuthKeySubDomain() const;

                    /**
                     * 设置证书域名验证子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dvAuthKeySubDomain 证书域名验证子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDvAuthKeySubDomain(const std::string& _dvAuthKeySubDomain);

                    /**
                     * 判断参数 DvAuthKeySubDomain 是否已赋值
                     * @return DvAuthKeySubDomain 是否已赋值
                     * 
                     */
                    bool DvAuthKeySubDomainHasBeenSet() const;

                    /**
                     * 获取证书域名验证信息， 存在多个域名验证使用本字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuths 证书域名验证信息， 存在多个域名验证使用本字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DvAuths> GetDvAuths() const;

                    /**
                     * 设置证书域名验证信息， 存在多个域名验证使用本字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dvAuths 证书域名验证信息， 存在多个域名验证使用本字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDvAuths(const std::vector<DvAuths>& _dvAuths);

                    /**
                     * 判断参数 DvAuths 是否已赋值
                     * @return DvAuths 是否已赋值
                     * 
                     */
                    bool DvAuthsHasBeenSet() const;

                private:

                    /**
                     * 证书域名验证记录Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthKey;
                    bool m_dvAuthKeyHasBeenSet;

                    /**
                     * 证书域名验证记录值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthValue;
                    bool m_dvAuthValueHasBeenSet;

                    /**
                     * 证书域名验证域名值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthDomain;
                    bool m_dvAuthDomainHasBeenSet;

                    /**
                     * 证书域名验证文件路径， 仅FILE、FILE_PROXY使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthPath;
                    bool m_dvAuthPathHasBeenSet;

                    /**
                     * 证书域名验证子域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dvAuthKeySubDomain;
                    bool m_dvAuthKeySubDomainHasBeenSet;

                    /**
                     * 证书域名验证信息， 存在多个域名验证使用本字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DvAuths> m_dvAuths;
                    bool m_dvAuthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHDETAIL_H_
