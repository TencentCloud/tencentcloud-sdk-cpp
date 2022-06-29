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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificates请求参数结构体
                */
                class DescribeCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeCertificatesRequest();
                    ~DescribeCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量，从0开始。
                     * @return Offset 分页偏移量，从0开始。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始。
                     * @param Offset 分页偏移量，从0开始。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页数量，默认20。
                     * @return Limit 每页数量，默认20。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认20。
                     * @param Limit 每页数量，默认20。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键词，可搜索证书 ID、备注名称、域名。例如： a8xHcaIs。
                     * @return SearchKey 搜索关键词，可搜索证书 ID、备注名称、域名。例如： a8xHcaIs。
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键词，可搜索证书 ID、备注名称、域名。例如： a8xHcaIs。
                     * @param SearchKey 搜索关键词，可搜索证书 ID、备注名称、域名。例如： a8xHcaIs。
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @return CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @param CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param ProjectId 项目 ID。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取按到期时间排序：DESC = 降序， ASC = 升序。
                     * @return ExpirationSort 按到期时间排序：DESC = 降序， ASC = 升序。
                     */
                    std::string GetExpirationSort() const;

                    /**
                     * 设置按到期时间排序：DESC = 降序， ASC = 升序。
                     * @param ExpirationSort 按到期时间排序：DESC = 降序， ASC = 升序。
                     */
                    void SetExpirationSort(const std::string& _expirationSort);

                    /**
                     * 判断参数 ExpirationSort 是否已赋值
                     * @return ExpirationSort 是否已赋值
                     */
                    bool ExpirationSortHasBeenSet() const;

                    /**
                     * 获取证书状态。
                     * @return CertificateStatus 证书状态。
                     */
                    std::vector<uint64_t> GetCertificateStatus() const;

                    /**
                     * 设置证书状态。
                     * @param CertificateStatus 证书状态。
                     */
                    void SetCertificateStatus(const std::vector<uint64_t>& _certificateStatus);

                    /**
                     * 判断参数 CertificateStatus 是否已赋值
                     * @return CertificateStatus 是否已赋值
                     */
                    bool CertificateStatusHasBeenSet() const;

                    /**
                     * 获取是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     * @return Deployable 是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     */
                    uint64_t GetDeployable() const;

                    /**
                     * 设置是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     * @param Deployable 是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     */
                    void SetDeployable(const uint64_t& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取是否筛选上传托管的 1筛选，0不筛选
                     * @return Upload 是否筛选上传托管的 1筛选，0不筛选
                     */
                    int64_t GetUpload() const;

                    /**
                     * 设置是否筛选上传托管的 1筛选，0不筛选
                     * @param Upload 是否筛选上传托管的 1筛选，0不筛选
                     */
                    void SetUpload(const int64_t& _upload);

                    /**
                     * 判断参数 Upload 是否已赋值
                     * @return Upload 是否已赋值
                     */
                    bool UploadHasBeenSet() const;

                    /**
                     * 获取是否筛选可续期证书 1筛选 0不筛选
                     * @return Renew 是否筛选可续期证书 1筛选 0不筛选
                     */
                    int64_t GetRenew() const;

                    /**
                     * 设置是否筛选可续期证书 1筛选 0不筛选
                     * @param Renew 是否筛选可续期证书 1筛选 0不筛选
                     */
                    void SetRenew(const int64_t& _renew);

                    /**
                     * 判断参数 Renew 是否已赋值
                     * @return Renew 是否已赋值
                     */
                    bool RenewHasBeenSet() const;

                    /**
                     * 获取筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     * @return FilterSource 筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     */
                    std::string GetFilterSource() const;

                    /**
                     * 设置筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     * @param FilterSource 筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     */
                    void SetFilterSource(const std::string& _filterSource);

                    /**
                     * 判断参数 FilterSource 是否已赋值
                     * @return FilterSource 是否已赋值
                     */
                    bool FilterSourceHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量，从0开始。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词，可搜索证书 ID、备注名称、域名。例如： a8xHcaIs。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 按到期时间排序：DESC = 降序， ASC = 升序。
                     */
                    std::string m_expirationSort;
                    bool m_expirationSortHasBeenSet;

                    /**
                     * 证书状态。
                     */
                    std::vector<uint64_t> m_certificateStatus;
                    bool m_certificateStatusHasBeenSet;

                    /**
                     * 是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     */
                    uint64_t m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * 是否筛选上传托管的 1筛选，0不筛选
                     */
                    int64_t m_upload;
                    bool m_uploadHasBeenSet;

                    /**
                     * 是否筛选可续期证书 1筛选 0不筛选
                     */
                    int64_t m_renew;
                    bool m_renewHasBeenSet;

                    /**
                     * 筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     */
                    std::string m_filterSource;
                    bool m_filterSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
