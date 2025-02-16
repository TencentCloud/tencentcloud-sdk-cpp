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
#include <tencentcloud/ssl/v20191205/model/Tags.h>


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
                     * 获取分页偏移量，从0开始。 默认为0
                     * @return Offset 分页偏移量，从0开始。 默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始。 默认为0
                     * @param _offset 分页偏移量，从0开始。 默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页数量，默认10。最大值1000，如超过1000按1000处理
                     * @return Limit 每页数量，默认10。最大值1000，如超过1000按1000处理
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认10。最大值1000，如超过1000按1000处理
                     * @param _limit 每页数量，默认10。最大值1000，如超过1000按1000处理
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键词，模糊匹配证书 ID、备注名称、证书域名
                     * @return SearchKey 搜索关键词，模糊匹配证书 ID、备注名称、证书域名
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键词，模糊匹配证书 ID、备注名称、证书域名
                     * @param _searchKey 搜索关键词，模糊匹配证书 ID、备注名称、证书域名
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @return CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @param _certificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param _projectId 项目 ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。
                     * @return ExpirationSort 默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。
                     * 
                     */
                    std::string GetExpirationSort() const;

                    /**
                     * 设置默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。
                     * @param _expirationSort 默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。
                     * 
                     */
                    void SetExpirationSort(const std::string& _expirationSort);

                    /**
                     * 判断参数 ExpirationSort 是否已赋值
                     * @return ExpirationSort 是否已赋值
                     * 
                     */
                    bool ExpirationSortHasBeenSet() const;

                    /**
                     * 获取证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中
                     * @return CertificateStatus 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中
                     * 
                     */
                    std::vector<uint64_t> GetCertificateStatus() const;

                    /**
                     * 设置证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中
                     * @param _certificateStatus 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中
                     * 
                     */
                    void SetCertificateStatus(const std::vector<uint64_t>& _certificateStatus);

                    /**
                     * 判断参数 CertificateStatus 是否已赋值
                     * @return CertificateStatus 是否已赋值
                     * 
                     */
                    bool CertificateStatusHasBeenSet() const;

                    /**
                     * 获取是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     * @return Deployable 是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     * 
                     */
                    uint64_t GetDeployable() const;

                    /**
                     * 设置是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     * @param _deployable 是否可部署，可选值：1 = 可部署，0 =  不可部署。
                     * 
                     */
                    void SetDeployable(const uint64_t& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取是否筛选上传托管的 1筛选，0不筛选
                     * @return Upload 是否筛选上传托管的 1筛选，0不筛选
                     * 
                     */
                    int64_t GetUpload() const;

                    /**
                     * 设置是否筛选上传托管的 1筛选，0不筛选
                     * @param _upload 是否筛选上传托管的 1筛选，0不筛选
                     * 
                     */
                    void SetUpload(const int64_t& _upload);

                    /**
                     * 判断参数 Upload 是否已赋值
                     * @return Upload 是否已赋值
                     * 
                     */
                    bool UploadHasBeenSet() const;

                    /**
                     * 获取是否筛选可续期证书 1筛选 0不筛选
                     * @return Renew 是否筛选可续期证书 1筛选 0不筛选
                     * 
                     */
                    int64_t GetRenew() const;

                    /**
                     * 设置是否筛选可续期证书 1筛选 0不筛选
                     * @param _renew 是否筛选可续期证书 1筛选 0不筛选
                     * 
                     */
                    void SetRenew(const int64_t& _renew);

                    /**
                     * 判断参数 Renew 是否已赋值
                     * @return Renew 是否已赋值
                     * 
                     */
                    bool RenewHasBeenSet() const;

                    /**
                     * 获取筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     * @return FilterSource 筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     * 
                     */
                    std::string GetFilterSource() const;

                    /**
                     * 设置筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     * @param _filterSource 筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部
                     * 
                     */
                    void SetFilterSource(const std::string& _filterSource);

                    /**
                     * 判断参数 FilterSource 是否已赋值
                     * @return FilterSource 是否已赋值
                     * 
                     */
                    bool FilterSourceHasBeenSet() const;

                    /**
                     * 获取是否筛选国密证书。1:筛选  0:不筛选
                     * @return IsSM 是否筛选国密证书。1:筛选  0:不筛选
                     * 
                     */
                    int64_t GetIsSM() const;

                    /**
                     * 设置是否筛选国密证书。1:筛选  0:不筛选
                     * @param _isSM 是否筛选国密证书。1:筛选  0:不筛选
                     * 
                     */
                    void SetIsSM(const int64_t& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取筛选证书是否即将过期，传1是筛选，0不筛选
                     * @return FilterExpiring 筛选证书是否即将过期，传1是筛选，0不筛选
                     * 
                     */
                    uint64_t GetFilterExpiring() const;

                    /**
                     * 设置筛选证书是否即将过期，传1是筛选，0不筛选
                     * @param _filterExpiring 筛选证书是否即将过期，传1是筛选，0不筛选
                     * 
                     */
                    void SetFilterExpiring(const uint64_t& _filterExpiring);

                    /**
                     * 判断参数 FilterExpiring 是否已赋值
                     * @return FilterExpiring 是否已赋值
                     * 
                     */
                    bool FilterExpiringHasBeenSet() const;

                    /**
                     * 获取是否可托管，可选值：1 = 可托管，0 =  不可托管。
                     * @return Hostable 是否可托管，可选值：1 = 可托管，0 =  不可托管。
                     * 
                     */
                    uint64_t GetHostable() const;

                    /**
                     * 设置是否可托管，可选值：1 = 可托管，0 =  不可托管。
                     * @param _hostable 是否可托管，可选值：1 = 可托管，0 =  不可托管。
                     * 
                     */
                    void SetHostable(const uint64_t& _hostable);

                    /**
                     * 判断参数 Hostable 是否已赋值
                     * @return Hostable 是否已赋值
                     * 
                     */
                    bool HostableHasBeenSet() const;

                    /**
                     * 获取筛选指定标签的证书
                     * @return Tags 筛选指定标签的证书
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置筛选指定标签的证书
                     * @param _tags 筛选指定标签的证书
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否筛选等待签发的证书，传1是筛选，0和null不筛选
                     * @return IsPendingIssue 是否筛选等待签发的证书，传1是筛选，0和null不筛选
                     * 
                     */
                    int64_t GetIsPendingIssue() const;

                    /**
                     * 设置是否筛选等待签发的证书，传1是筛选，0和null不筛选
                     * @param _isPendingIssue 是否筛选等待签发的证书，传1是筛选，0和null不筛选
                     * 
                     */
                    void SetIsPendingIssue(const int64_t& _isPendingIssue);

                    /**
                     * 判断参数 IsPendingIssue 是否已赋值
                     * @return IsPendingIssue 是否已赋值
                     * 
                     */
                    bool IsPendingIssueHasBeenSet() const;

                    /**
                     * 获取筛选指定证书ID的证书，只支持有权限的证书ID
                     * @return CertIds 筛选指定证书ID的证书，只支持有权限的证书ID
                     * 
                     */
                    std::vector<std::string> GetCertIds() const;

                    /**
                     * 设置筛选指定证书ID的证书，只支持有权限的证书ID
                     * @param _certIds 筛选指定证书ID的证书，只支持有权限的证书ID
                     * 
                     */
                    void SetCertIds(const std::vector<std::string>& _certIds);

                    /**
                     * 判断参数 CertIds 是否已赋值
                     * @return CertIds 是否已赋值
                     * 
                     */
                    bool CertIdsHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量，从0开始。 默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认10。最大值1000，如超过1000按1000处理
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词，模糊匹配证书 ID、备注名称、证书域名
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
                     * 默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。
                     */
                    std::string m_expirationSort;
                    bool m_expirationSortHasBeenSet;

                    /**
                     * 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中
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

                    /**
                     * 是否筛选国密证书。1:筛选  0:不筛选
                     */
                    int64_t m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * 筛选证书是否即将过期，传1是筛选，0不筛选
                     */
                    uint64_t m_filterExpiring;
                    bool m_filterExpiringHasBeenSet;

                    /**
                     * 是否可托管，可选值：1 = 可托管，0 =  不可托管。
                     */
                    uint64_t m_hostable;
                    bool m_hostableHasBeenSet;

                    /**
                     * 筛选指定标签的证书
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否筛选等待签发的证书，传1是筛选，0和null不筛选
                     */
                    int64_t m_isPendingIssue;
                    bool m_isPendingIssueHasBeenSet;

                    /**
                     * 筛选指定证书ID的证书，只支持有权限的证书ID
                     */
                    std::vector<std::string> m_certIds;
                    bool m_certIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
