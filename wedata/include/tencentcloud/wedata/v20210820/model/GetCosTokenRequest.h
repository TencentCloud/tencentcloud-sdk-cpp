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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取请求域名
                     * @return OriginDomain 请求域名
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 设置请求域名
                     * @param _originDomain 请求域名
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
                     * 获取是否需要跨域
                     * @return CrossFlag 是否需要跨域
                     * 
                     */
                    bool GetCrossFlag() const;

                    /**
                     * 设置是否需要跨域
                     * @param _crossFlag 是否需要跨域
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
                     * 获取桶名
                     * @return BucketName 桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名
                     * @param _bucketName 桶名
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
                     * 获取远程地址
                     * @return RemotePath 远程地址
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置远程地址
                     * @param _remotePath 远程地址
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
                     * 获取地域
                     * @return RemoteRegion 地域
                     * 
                     */
                    std::string GetRemoteRegion() const;

                    /**
                     * 设置地域
                     * @param _remoteRegion 地域
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
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请求域名
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                    /**
                     * 是否需要跨域
                     */
                    bool m_crossFlag;
                    bool m_crossFlagHasBeenSet;

                    /**
                     * 桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 远程地址
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENREQUEST_H_
