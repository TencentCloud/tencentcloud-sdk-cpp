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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetCosToken请求参数结构体
                */
                class GetCosTokenRequest : public AbstractModel
                {
                public:
                    GetCosTokenRequest();
                    ~GetCosTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>请求域名</p>
                     * @return OriginDomain <p>请求域名</p>
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 设置<p>请求域名</p>
                     * @param _originDomain <p>请求域名</p>
                     * 
                     */
                    void SetOriginDomain(const std::string& _originDomain);

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                    /**
                     * 获取<p>是否需要跨域</p>
                     * @return CrossFlag <p>是否需要跨域</p>
                     * 
                     */
                    bool GetCrossFlag() const;

                    /**
                     * 设置<p>是否需要跨域</p>
                     * @param _crossFlag <p>是否需要跨域</p>
                     * 
                     */
                    void SetCrossFlag(const bool& _crossFlag);

                    /**
                     * 判断参数 CrossFlag 是否已赋值
                     * @return CrossFlag 是否已赋值
                     * 
                     */
                    bool CrossFlagHasBeenSet() const;

                    /**
                     * 获取<p>桶名</p>
                     * @return BucketName <p>桶名</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>桶名</p>
                     * @param _bucketName <p>桶名</p>
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取<p>远程地址</p>
                     * @return RemotePath <p>远程地址</p>
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置<p>远程地址</p>
                     * @param _remotePath <p>远程地址</p>
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return RemoteRegion <p>地域</p>
                     * 
                     */
                    std::string GetRemoteRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _remoteRegion <p>地域</p>
                     * 
                     */
                    void SetRemoteRegion(const std::string& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                private:

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>请求域名</p>
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                    /**
                     * <p>是否需要跨域</p>
                     */
                    bool m_crossFlag;
                    bool m_crossFlagHasBeenSet;

                    /**
                     * <p>桶名</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>远程地址</p>
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENREQUEST_H_
