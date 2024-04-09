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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATEINSTANCEREQUEST_H_

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
                * DeployCertificateInstance请求参数结构体
                */
                class DeployCertificateInstanceRequest : public AbstractModel
                {
                public:
                    DeployCertificateInstanceRequest();
                    ~DeployCertificateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待部署的证书ID
                     * @return CertificateId 待部署的证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置待部署的证书ID
                     * @param _certificateId 待部署的证书ID
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
                     * 获取需要部署实例列表
                     * @return InstanceIdList 需要部署实例列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置需要部署实例列表
                     * @param _instanceIdList 需要部署实例列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取部署的云资源类型
                     * @return ResourceType 部署的云资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置部署的云资源类型
                     * @param _resourceType 部署的云资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取部署云资源状态：
云直播：
-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * @return Status 部署云资源状态：
云直播：
-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置部署云资源状态：
云直播：
-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * @param _status 部署云资源状态：
云直播：
-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * @return IsCache 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * 
                     */
                    uint64_t GetIsCache() const;

                    /**
                     * 设置是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * @param _isCache 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * 
                     */
                    void SetIsCache(const uint64_t& _isCache);

                    /**
                     * 判断参数 IsCache 是否已赋值
                     * @return IsCache 是否已赋值
                     * 
                     */
                    bool IsCacheHasBeenSet() const;

                private:

                    /**
                     * 待部署的证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 需要部署实例列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 部署的云资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 部署云资源状态：
云直播：
-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     */
                    uint64_t m_isCache;
                    bool m_isCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATEINSTANCEREQUEST_H_
