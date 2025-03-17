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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEBUILDSERVICERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEBUILDSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/KVPair.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseBuildService返回参数结构体
                */
                class DescribeCloudBaseBuildServiceResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseBuildServiceResponse();
                    ~DescribeCloudBaseBuildServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取上传url
                     * @return UploadUrl 上传url
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取上传header
                     * @return UploadHeaders 上传header
                     * 
                     */
                    std::vector<KVPair> GetUploadHeaders() const;

                    /**
                     * 判断参数 UploadHeaders 是否已赋值
                     * @return UploadHeaders 是否已赋值
                     * 
                     */
                    bool UploadHeadersHasBeenSet() const;

                    /**
                     * 获取包名
                     * @return PackageName 包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取包版本
                     * @return PackageVersion 包版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取下载链接
                     * @return DownloadUrl 下载链接
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取下载Httpheader
                     * @return DownloadHeaders 下载Httpheader
                     * 
                     */
                    std::vector<KVPair> GetDownloadHeaders() const;

                    /**
                     * 判断参数 DownloadHeaders 是否已赋值
                     * @return DownloadHeaders 是否已赋值
                     * 
                     */
                    bool DownloadHeadersHasBeenSet() const;

                    /**
                     * 获取下载链接是否过期
                     * @return OutDate 下载链接是否过期
                     * 
                     */
                    bool GetOutDate() const;

                    /**
                     * 判断参数 OutDate 是否已赋值
                     * @return OutDate 是否已赋值
                     * 
                     */
                    bool OutDateHasBeenSet() const;

                private:

                    /**
                     * 上传url
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 上传header
                     */
                    std::vector<KVPair> m_uploadHeaders;
                    bool m_uploadHeadersHasBeenSet;

                    /**
                     * 包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 包版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 下载链接
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 下载Httpheader
                     */
                    std::vector<KVPair> m_downloadHeaders;
                    bool m_downloadHeadersHasBeenSet;

                    /**
                     * 下载链接是否过期
                     */
                    bool m_outDate;
                    bool m_outDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEBUILDSERVICERESPONSE_H_
