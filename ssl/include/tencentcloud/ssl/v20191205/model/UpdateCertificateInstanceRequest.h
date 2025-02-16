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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ResourceTypeRegions.h>
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
                * UpdateCertificateInstance请求参数结构体
                */
                class UpdateCertificateInstanceRequest : public AbstractModel
                {
                public:
                    UpdateCertificateInstanceRequest();
                    ~UpdateCertificateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * @return OldCertificateId 一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * @param _oldCertificateId 一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取需要部署的资源类型，参数值可选（小写）：clb、cdn、waf、live、ddos、teo、apigateway、vod、tke、tcb、tse、cos
                     * @return ResourceTypes 需要部署的资源类型，参数值可选（小写）：clb、cdn、waf、live、ddos、teo、apigateway、vod、tke、tcb、tse、cos
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置需要部署的资源类型，参数值可选（小写）：clb、cdn、waf、live、ddos、teo、apigateway、vod、tke、tcb、tse、cos
                     * @param _resourceTypes 需要部署的资源类型，参数值可选（小写）：clb、cdn、waf、live、ddos、teo、apigateway、vod、tke、tcb、tse、cos
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取一键更新的新证书ID。 不传该参数，则公钥证书和私钥证书必传
                     * @return CertificateId 一键更新的新证书ID。 不传该参数，则公钥证书和私钥证书必传
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置一键更新的新证书ID。 不传该参数，则公钥证书和私钥证书必传
                     * @param _certificateId 一键更新的新证书ID。 不传该参数，则公钥证书和私钥证书必传
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
                     * 获取需要部署的地域列表（废弃）
                     * @return Regions 需要部署的地域列表（废弃）
                     * @deprecated
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置需要部署的地域列表（废弃）
                     * @param _regions 需要部署的地域列表（废弃）
                     * @deprecated
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * @deprecated
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb、tke、apigateway、waf、tcb、tse、cos
                     * @return ResourceTypesRegions 云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb、tke、apigateway、waf、tcb、tse、cos
                     * 
                     */
                    std::vector<ResourceTypeRegions> GetResourceTypesRegions() const;

                    /**
                     * 设置云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb、tke、apigateway、waf、tcb、tse、cos
                     * @param _resourceTypesRegions 云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb、tke、apigateway、waf、tcb、tse、cos
                     * 
                     */
                    void SetResourceTypesRegions(const std::vector<ResourceTypeRegions>& _resourceTypesRegions);

                    /**
                     * 判断参数 ResourceTypesRegions 是否已赋值
                     * @return ResourceTypesRegions 是否已赋值
                     * 
                     */
                    bool ResourceTypesRegionsHasBeenSet() const;

                    /**
                     * 获取公钥证书， 若上传公钥证书，那么私钥证书必传。  则CertificateId不用传
                     * @return CertificatePublicKey 公钥证书， 若上传公钥证书，那么私钥证书必传。  则CertificateId不用传
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置公钥证书， 若上传公钥证书，那么私钥证书必传。  则CertificateId不用传
                     * @param _certificatePublicKey 公钥证书， 若上传公钥证书，那么私钥证书必传。  则CertificateId不用传
                     * 
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取私钥证书，若上传私钥证书， 那么公钥证书必传；  则CertificateId不用传
                     * @return CertificatePrivateKey 私钥证书，若上传私钥证书， 那么公钥证书必传；  则CertificateId不用传
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置私钥证书，若上传私钥证书， 那么公钥证书必传；  则CertificateId不用传
                     * @param _certificatePrivateKey 私钥证书，若上传私钥证书， 那么公钥证书必传；  则CertificateId不用传
                     * 
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取旧证书是否忽略到期提醒  0:不忽略通知。1:忽略通知，忽略OldCertificateId到期提醒
                     * @return ExpiringNotificationSwitch 旧证书是否忽略到期提醒  0:不忽略通知。1:忽略通知，忽略OldCertificateId到期提醒
                     * 
                     */
                    uint64_t GetExpiringNotificationSwitch() const;

                    /**
                     * 设置旧证书是否忽略到期提醒  0:不忽略通知。1:忽略通知，忽略OldCertificateId到期提醒
                     * @param _expiringNotificationSwitch 旧证书是否忽略到期提醒  0:不忽略通知。1:忽略通知，忽略OldCertificateId到期提醒
                     * 
                     */
                    void SetExpiringNotificationSwitch(const uint64_t& _expiringNotificationSwitch);

                    /**
                     * 判断参数 ExpiringNotificationSwitch 是否已赋值
                     * @return ExpiringNotificationSwitch 是否已赋值
                     * 
                     */
                    bool ExpiringNotificationSwitchHasBeenSet() const;

                    /**
                     * 获取相同的证书是否允许重复上传，若选择上传公钥私钥证书， 则可以配置该参数。 若存在相同重复证书，则更新任务会失败
                     * @return Repeatable 相同的证书是否允许重复上传，若选择上传公钥私钥证书， 则可以配置该参数。 若存在相同重复证书，则更新任务会失败
                     * 
                     */
                    bool GetRepeatable() const;

                    /**
                     * 设置相同的证书是否允许重复上传，若选择上传公钥私钥证书， 则可以配置该参数。 若存在相同重复证书，则更新任务会失败
                     * @param _repeatable 相同的证书是否允许重复上传，若选择上传公钥私钥证书， 则可以配置该参数。 若存在相同重复证书，则更新任务会失败
                     * 
                     */
                    void SetRepeatable(const bool& _repeatable);

                    /**
                     * 判断参数 Repeatable 是否已赋值
                     * @return Repeatable 是否已赋值
                     * 
                     */
                    bool RepeatableHasBeenSet() const;

                    /**
                     * 获取是否允许下载，若选择上传公私钥证书， 则可以配置该参数
                     * @return AllowDownload 是否允许下载，若选择上传公私钥证书， 则可以配置该参数
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置是否允许下载，若选择上传公私钥证书， 则可以配置该参数
                     * @param _allowDownload 是否允许下载，若选择上传公私钥证书， 则可以配置该参数
                     * 
                     */
                    void SetAllowDownload(const bool& _allowDownload);

                    /**
                     * 判断参数 AllowDownload 是否已赋值
                     * @return AllowDownload 是否已赋值
                     * 
                     */
                    bool AllowDownloadHasBeenSet() const;

                    /**
                     * 获取标签列表，若选择上传公私钥证书， 则可以配置该参数
                     * @return Tags 标签列表，若选择上传公私钥证书， 则可以配置该参数
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签列表，若选择上传公私钥证书， 则可以配置该参数
                     * @param _tags 标签列表，若选择上传公私钥证书， 则可以配置该参数
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
                     * 获取项目 ID，若选择上传公私钥证书， 则可以配置该参数
                     * @return ProjectId 项目 ID，若选择上传公私钥证书， 则可以配置该参数
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，若选择上传公私钥证书， 则可以配置该参数
                     * @param _projectId 项目 ID，若选择上传公私钥证书， 则可以配置该参数
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 需要部署的资源类型，参数值可选（小写）：clb、cdn、waf、live、ddos、teo、apigateway、vod、tke、tcb、tse、cos
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * 一键更新的新证书ID。 不传该参数，则公钥证书和私钥证书必传
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 需要部署的地域列表（废弃）
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * 云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb、tke、apigateway、waf、tcb、tse、cos
                     */
                    std::vector<ResourceTypeRegions> m_resourceTypesRegions;
                    bool m_resourceTypesRegionsHasBeenSet;

                    /**
                     * 公钥证书， 若上传公钥证书，那么私钥证书必传。  则CertificateId不用传
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * 私钥证书，若上传私钥证书， 那么公钥证书必传；  则CertificateId不用传
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * 旧证书是否忽略到期提醒  0:不忽略通知。1:忽略通知，忽略OldCertificateId到期提醒
                     */
                    uint64_t m_expiringNotificationSwitch;
                    bool m_expiringNotificationSwitchHasBeenSet;

                    /**
                     * 相同的证书是否允许重复上传，若选择上传公钥私钥证书， 则可以配置该参数。 若存在相同重复证书，则更新任务会失败
                     */
                    bool m_repeatable;
                    bool m_repeatableHasBeenSet;

                    /**
                     * 是否允许下载，若选择上传公私钥证书， 则可以配置该参数
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * 标签列表，若选择上传公私钥证书， 则可以配置该参数
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 项目 ID，若选择上传公私钥证书， 则可以配置该参数
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
