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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 服务器证书
                */
                class Certificate : public AbstractModel
                {
                public:
                    Certificate();
                    ~Certificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书ID
                     * @return CertificateId 证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书ID
                     * @param _certificateId 证书ID
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书名称（旧参数，请使用CertificateAlias）。
                     * @return CertificateName 证书名称（旧参数，请使用CertificateAlias）。
                     * 
                     */
                    std::string GetCertificateName() const;

                    /**
                     * 设置证书名称（旧参数，请使用CertificateAlias）。
                     * @param _certificateName 证书名称（旧参数，请使用CertificateAlias）。
                     * 
                     */
                    void SetCertificateName(const std::string& _certificateName);

                    /**
                     * 判断参数 CertificateName 是否已赋值
                     * @return CertificateName 是否已赋值
                     * 
                     */
                    bool CertificateNameHasBeenSet() const;

                    /**
                     * 获取证书类型。
                     * @return CertificateType 证书类型。
                     * 
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置证书类型。
                     * @param _certificateType 证书类型。
                     * 
                     */
                    void SetCertificateType(const int64_t& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取证书名称。
                     * @return CertificateAlias 证书名称。
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置证书名称。
                     * @param _certificateAlias 证书名称。
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取证书创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @return CreateTime 证书创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置证书创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @param _createTime 证书创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取证书生效起始时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @return BeginTime 证书生效起始时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置证书生效起始时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @param _beginTime 证书生效起始时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取证书过期时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @return EndTime 证书过期时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置证书过期时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @param _endTime 证书过期时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取证书签发者通用名称。
                     * @return IssuerCN 证书签发者通用名称。
                     * 
                     */
                    std::string GetIssuerCN() const;

                    /**
                     * 设置证书签发者通用名称。
                     * @param _issuerCN 证书签发者通用名称。
                     * 
                     */
                    void SetIssuerCN(const std::string& _issuerCN);

                    /**
                     * 判断参数 IssuerCN 是否已赋值
                     * @return IssuerCN 是否已赋值
                     * 
                     */
                    bool IssuerCNHasBeenSet() const;

                    /**
                     * 获取证书主题通用名称。
                     * @return SubjectCN 证书主题通用名称。
                     * 
                     */
                    std::string GetSubjectCN() const;

                    /**
                     * 设置证书主题通用名称。
                     * @param _subjectCN 证书主题通用名称。
                     * 
                     */
                    void SetSubjectCN(const std::string& _subjectCN);

                    /**
                     * 判断参数 SubjectCN 是否已赋值
                     * @return SubjectCN 是否已赋值
                     * 
                     */
                    bool SubjectCNHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 证书名称（旧参数，请使用CertificateAlias）。
                     */
                    std::string m_certificateName;
                    bool m_certificateNameHasBeenSet;

                    /**
                     * 证书类型。
                     */
                    int64_t m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证书名称。
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * 证书创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 证书生效起始时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 证书过期时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 证书签发者通用名称。
                     */
                    std::string m_issuerCN;
                    bool m_issuerCNHasBeenSet;

                    /**
                     * 证书主题通用名称。
                     */
                    std::string m_subjectCN;
                    bool m_subjectCNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATE_H_
