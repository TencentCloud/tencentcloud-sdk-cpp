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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_GENERATEAPPLICATIONPACKAGEDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_GENERATEAPPLICATIONPACKAGEDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * GenerateApplicationPackageDownloadUrl请求参数结构体
                */
                class GenerateApplicationPackageDownloadUrlRequest : public AbstractModel
                {
                public:
                    GenerateApplicationPackageDownloadUrlRequest();
                    ~GenerateApplicationPackageDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取包名
                     * @return PkgName 包名
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置包名
                     * @param _pkgName 包名
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取需要下载的包版本
                     * @return DeployVersion 需要下载的包版本
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置需要下载的包版本
                     * @param _deployVersion 需要下载的包版本
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取来源 channel
                     * @return SourceChannel 来源 channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源 channel
                     * @param _sourceChannel 来源 channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 包名
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * 需要下载的包版本
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * 来源 channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_GENERATEAPPLICATIONPACKAGEDOWNLOADURLREQUEST_H_
