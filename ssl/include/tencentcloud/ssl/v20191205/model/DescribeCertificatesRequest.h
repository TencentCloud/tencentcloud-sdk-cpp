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
                     * 获取<p>分页偏移量，从0开始。 默认为0</p>
                     * @return Offset <p>分页偏移量，从0开始。 默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，从0开始。 默认为0</p>
                     * @param _offset <p>分页偏移量，从0开始。 默认为0</p>
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
                     * 获取<p>每页数量，默认10。最大值1000，如超过1000按1000处理</p>
                     * @return Limit <p>每页数量，默认10。最大值1000，如超过1000按1000处理</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认10。最大值1000，如超过1000按1000处理</p>
                     * @param _limit <p>每页数量，默认10。最大值1000，如超过1000按1000处理</p>
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
                     * 获取<p>搜索关键词，模糊匹配证书 ID、备注名称、证书域名</p>
                     * @return SearchKey <p>搜索关键词，模糊匹配证书 ID、备注名称、证书域名</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>搜索关键词，模糊匹配证书 ID、备注名称、证书域名</p>
                     * @param _searchKey <p>搜索关键词，模糊匹配证书 ID、备注名称、证书域名</p>
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
                     * 获取<p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * @return CertificateType <p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置<p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * @param _certificateType <p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
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
                     * 获取<p>项目 ID。</p>
                     * @return ProjectId <p>项目 ID。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。</p>
                     * @param _projectId <p>项目 ID。</p>
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
                     * 获取<p>默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。</p>
                     * @return ExpirationSort <p>默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。</p>
                     * 
                     */
                    std::string GetExpirationSort() const;

                    /**
                     * 设置<p>默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。</p>
                     * @param _expirationSort <p>默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。</p>
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
                     * 获取<p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中</p>
                     * @return CertificateStatus <p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中</p>
                     * 
                     */
                    std::vector<uint64_t> GetCertificateStatus() const;

                    /**
                     * 设置<p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中</p>
                     * @param _certificateStatus <p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中</p>
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
                     * 获取<p>是否可部署，可选值：1 = 可部署，0 =  不可部署。</p>
                     * @return Deployable <p>是否可部署，可选值：1 = 可部署，0 =  不可部署。</p>
                     * 
                     */
                    uint64_t GetDeployable() const;

                    /**
                     * 设置<p>是否可部署，可选值：1 = 可部署，0 =  不可部署。</p>
                     * @param _deployable <p>是否可部署，可选值：1 = 可部署，0 =  不可部署。</p>
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
                     * 获取<p>是否筛选上传托管的 1筛选，0不筛选</p>
                     * @return Upload <p>是否筛选上传托管的 1筛选，0不筛选</p>
                     * 
                     */
                    int64_t GetUpload() const;

                    /**
                     * 设置<p>是否筛选上传托管的 1筛选，0不筛选</p>
                     * @param _upload <p>是否筛选上传托管的 1筛选，0不筛选</p>
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
                     * 获取<p>是否筛选可续期证书 1筛选 0不筛选</p>
                     * @return Renew <p>是否筛选可续期证书 1筛选 0不筛选</p>
                     * 
                     */
                    int64_t GetRenew() const;

                    /**
                     * 设置<p>是否筛选可续期证书 1筛选 0不筛选</p>
                     * @param _renew <p>是否筛选可续期证书 1筛选 0不筛选</p>
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
                     * 获取<p>筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部</p>
                     * @return FilterSource <p>筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部</p>
                     * 
                     */
                    std::string GetFilterSource() const;

                    /**
                     * 设置<p>筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部</p>
                     * @param _filterSource <p>筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部</p>
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
                     * 获取<p>是否筛选国密证书。1:筛选  0:不筛选</p>
                     * @return IsSM <p>是否筛选国密证书。1:筛选  0:不筛选</p>
                     * 
                     */
                    int64_t GetIsSM() const;

                    /**
                     * 设置<p>是否筛选国密证书。1:筛选  0:不筛选</p>
                     * @param _isSM <p>是否筛选国密证书。1:筛选  0:不筛选</p>
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
                     * 获取<p>筛选证书是否即将过期，传1是筛选，0不筛选</p>
                     * @return FilterExpiring <p>筛选证书是否即将过期，传1是筛选，0不筛选</p>
                     * 
                     */
                    uint64_t GetFilterExpiring() const;

                    /**
                     * 设置<p>筛选证书是否即将过期，传1是筛选，0不筛选</p>
                     * @param _filterExpiring <p>筛选证书是否即将过期，传1是筛选，0不筛选</p>
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
                     * 获取<p>是否可托管，可选值：1 = 可托管，0 =  不可托管。</p>
                     * @return Hostable <p>是否可托管，可选值：1 = 可托管，0 =  不可托管。</p>
                     * 
                     */
                    uint64_t GetHostable() const;

                    /**
                     * 设置<p>是否可托管，可选值：1 = 可托管，0 =  不可托管。</p>
                     * @param _hostable <p>是否可托管，可选值：1 = 可托管，0 =  不可托管。</p>
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
                     * 获取<p>筛选指定标签的证书</p>
                     * @return Tags <p>筛选指定标签的证书</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>筛选指定标签的证书</p>
                     * @param _tags <p>筛选指定标签的证书</p>
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
                     * 获取<p>是否筛选等待签发的证书，传1是筛选，0和null不筛选</p>
                     * @return IsPendingIssue <p>是否筛选等待签发的证书，传1是筛选，0和null不筛选</p>
                     * 
                     */
                    int64_t GetIsPendingIssue() const;

                    /**
                     * 设置<p>是否筛选等待签发的证书，传1是筛选，0和null不筛选</p>
                     * @param _isPendingIssue <p>是否筛选等待签发的证书，传1是筛选，0和null不筛选</p>
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
                     * 获取<p>筛选指定证书ID的证书，只支持有权限的证书ID</p>
                     * @return CertIds <p>筛选指定证书ID的证书，只支持有权限的证书ID</p>
                     * 
                     */
                    std::vector<std::string> GetCertIds() const;

                    /**
                     * 设置<p>筛选指定证书ID的证书，只支持有权限的证书ID</p>
                     * @param _certIds <p>筛选指定证书ID的证书，只支持有权限的证书ID</p>
                     * 
                     */
                    void SetCertIds(const std::vector<std::string>& _certIds);

                    /**
                     * 判断参数 CertIds 是否已赋值
                     * @return CertIds 是否已赋值
                     * 
                     */
                    bool CertIdsHasBeenSet() const;

                    /**
                     * 获取<p>订阅服务ID</p>
                     * @return ServiceId <p>订阅服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>订阅服务ID</p>
                     * @param _serviceId <p>订阅服务ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>分页偏移量，从0开始。 默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认10。最大值1000，如超过1000按1000处理</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>搜索关键词，模糊匹配证书 ID、备注名称、证书域名</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * <p>项目 ID。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>默认按照证书申请时间降序； 若传排序则按到期时间排序：DESC = 证书到期时间降序， ASC = 证书到期时间升序。</p>
                     */
                    std::string m_expirationSort;
                    bool m_expirationSortHasBeenSet;

                    /**
                     * <p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 已退款。 15 = 证书迁移中</p>
                     */
                    std::vector<uint64_t> m_certificateStatus;
                    bool m_certificateStatusHasBeenSet;

                    /**
                     * <p>是否可部署，可选值：1 = 可部署，0 =  不可部署。</p>
                     */
                    uint64_t m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * <p>是否筛选上传托管的 1筛选，0不筛选</p>
                     */
                    int64_t m_upload;
                    bool m_uploadHasBeenSet;

                    /**
                     * <p>是否筛选可续期证书 1筛选 0不筛选</p>
                     */
                    int64_t m_renew;
                    bool m_renewHasBeenSet;

                    /**
                     * <p>筛选来源， upload：上传证书， buy：腾讯云证书， 不传默认全部</p>
                     */
                    std::string m_filterSource;
                    bool m_filterSourceHasBeenSet;

                    /**
                     * <p>是否筛选国密证书。1:筛选  0:不筛选</p>
                     */
                    int64_t m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * <p>筛选证书是否即将过期，传1是筛选，0不筛选</p>
                     */
                    uint64_t m_filterExpiring;
                    bool m_filterExpiringHasBeenSet;

                    /**
                     * <p>是否可托管，可选值：1 = 可托管，0 =  不可托管。</p>
                     */
                    uint64_t m_hostable;
                    bool m_hostableHasBeenSet;

                    /**
                     * <p>筛选指定标签的证书</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否筛选等待签发的证书，传1是筛选，0和null不筛选</p>
                     */
                    int64_t m_isPendingIssue;
                    bool m_isPendingIssueHasBeenSet;

                    /**
                     * <p>筛选指定证书ID的证书，只支持有权限的证书ID</p>
                     */
                    std::vector<std::string> m_certIds;
                    bool m_certIdsHasBeenSet;

                    /**
                     * <p>订阅服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
