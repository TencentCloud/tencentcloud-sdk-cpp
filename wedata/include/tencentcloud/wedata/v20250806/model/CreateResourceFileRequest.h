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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateResourceFile请求参数结构体
                */
                class CreateResourceFileRequest : public AbstractModel
                {
                public:
                    CreateResourceFileRequest();
                    ~CreateResourceFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取资源文件名称, 尽可能和上传文件名保持一致
                     * @return ResourceName 资源文件名称, 尽可能和上传文件名保持一致
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源文件名称, 尽可能和上传文件名保持一致
                     * @param _resourceName 资源文件名称, 尽可能和上传文件名保持一致
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取cos存储桶名称, 可从GetResourceCosPath接口获取
                     * @return BucketName cos存储桶名称, 可从GetResourceCosPath接口获取
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置cos存储桶名称, 可从GetResourceCosPath接口获取
                     * @param _bucketName cos存储桶名称, 可从GetResourceCosPath接口获取
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
                     * 获取BucketName桶对应的cos存储桶区域
                     * @return CosRegion BucketName桶对应的cos存储桶区域
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置BucketName桶对应的cos存储桶区域
                     * @param _cosRegion BucketName桶对应的cos存储桶区域
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取项目中资源文件上传的路径, 取值示例: /wedata/qxxxm/, 根目录,请使用/即可
                     * @return ParentFolderPath 项目中资源文件上传的路径, 取值示例: /wedata/qxxxm/, 根目录,请使用/即可
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置项目中资源文件上传的路径, 取值示例: /wedata/qxxxm/, 根目录,请使用/即可
                     * @param _parentFolderPath 项目中资源文件上传的路径, 取值示例: /wedata/qxxxm/, 根目录,请使用/即可
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取- 上传文件及手填两种方式只能选择其一，如果两者均提供，取值顺序为文件>手填值
-   手填值必须是存在的cos路径, parentFolderPath为父文件夹路径, name为文件名, 手填值取值示例:     /datastudio/resource/projectId/parentFolderPath/name 

                     * @return ResourceFile - 上传文件及手填两种方式只能选择其一，如果两者均提供，取值顺序为文件>手填值
-   手填值必须是存在的cos路径, parentFolderPath为父文件夹路径, name为文件名, 手填值取值示例:     /datastudio/resource/projectId/parentFolderPath/name 

                     * 
                     */
                    std::string GetResourceFile() const;

                    /**
                     * 设置- 上传文件及手填两种方式只能选择其一，如果两者均提供，取值顺序为文件>手填值
-   手填值必须是存在的cos路径, parentFolderPath为父文件夹路径, name为文件名, 手填值取值示例:     /datastudio/resource/projectId/parentFolderPath/name 

                     * @param _resourceFile - 上传文件及手填两种方式只能选择其一，如果两者均提供，取值顺序为文件>手填值
-   手填值必须是存在的cos路径, parentFolderPath为父文件夹路径, name为文件名, 手填值取值示例:     /datastudio/resource/projectId/parentFolderPath/name 

                     * 
                     */
                    void SetResourceFile(const std::string& _resourceFile);

                    /**
                     * 判断参数 ResourceFile 是否已赋值
                     * @return ResourceFile 是否已赋值
                     * 
                     */
                    bool ResourceFileHasBeenSet() const;

                    /**
                     * 获取bundle客户端ID
                     * @return BundleId bundle客户端ID
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置bundle客户端ID
                     * @param _bundleId bundle客户端ID
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取bundle客户端信息
                     * @return BundleInfo bundle客户端信息
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置bundle客户端信息
                     * @param _bundleInfo bundle客户端信息
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源文件名称, 尽可能和上传文件名保持一致
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * cos存储桶名称, 可从GetResourceCosPath接口获取
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * BucketName桶对应的cos存储桶区域
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 项目中资源文件上传的路径, 取值示例: /wedata/qxxxm/, 根目录,请使用/即可
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * - 上传文件及手填两种方式只能选择其一，如果两者均提供，取值顺序为文件>手填值
-   手填值必须是存在的cos路径, parentFolderPath为父文件夹路径, name为文件名, 手填值取值示例:     /datastudio/resource/projectId/parentFolderPath/name 

                     */
                    std::string m_resourceFile;
                    bool m_resourceFileHasBeenSet;

                    /**
                     * bundle客户端ID
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * bundle客户端信息
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFILEREQUEST_H_
