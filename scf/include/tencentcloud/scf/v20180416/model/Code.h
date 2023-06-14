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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/ImageConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 函数代码
                */
                class Code : public AbstractModel
                {
                public:
                    Code();
                    ~Code() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）
                     * @return CosBucketName 对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）
                     * @param _cosBucketName 对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取对象存储中代码包文件路径，以/开头
                     * @return CosObjectName 对象存储中代码包文件路径，以/开头
                     * 
                     */
                    std::string GetCosObjectName() const;

                    /**
                     * 设置对象存储中代码包文件路径，以/开头
                     * @param _cosObjectName 对象存储中代码包文件路径，以/开头
                     * 
                     */
                    void SetCosObjectName(const std::string& _cosObjectName);

                    /**
                     * 判断参数 CosObjectName 是否已赋值
                     * @return CosObjectName 是否已赋值
                     * 
                     */
                    bool CosObjectNameHasBeenSet() const;

                    /**
                     * 获取包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * @return ZipFile 包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * 
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * @param _zipFile 包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * 
                     */
                    void SetZipFile(const std::string& _zipFile);

                    /**
                     * 判断参数 ZipFile 是否已赋值
                     * @return ZipFile 是否已赋值
                     * 
                     */
                    bool ZipFileHasBeenSet() const;

                    /**
                     * 获取对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     * @return CosBucketRegion 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     * @param _cosBucketRegion 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取如果是通过Demo创建的话，需要传入DemoId
                     * @return DemoId 如果是通过Demo创建的话，需要传入DemoId
                     * 
                     */
                    std::string GetDemoId() const;

                    /**
                     * 设置如果是通过Demo创建的话，需要传入DemoId
                     * @param _demoId 如果是通过Demo创建的话，需要传入DemoId
                     * 
                     */
                    void SetDemoId(const std::string& _demoId);

                    /**
                     * 判断参数 DemoId 是否已赋值
                     * @return DemoId 是否已赋值
                     * 
                     */
                    bool DemoIdHasBeenSet() const;

                    /**
                     * 获取如果是从TempCos创建的话，需要传入TempCosObjectName
                     * @return TempCosObjectName 如果是从TempCos创建的话，需要传入TempCosObjectName
                     * 
                     */
                    std::string GetTempCosObjectName() const;

                    /**
                     * 设置如果是从TempCos创建的话，需要传入TempCosObjectName
                     * @param _tempCosObjectName 如果是从TempCos创建的话，需要传入TempCosObjectName
                     * 
                     */
                    void SetTempCosObjectName(const std::string& _tempCosObjectName);

                    /**
                     * 判断参数 TempCosObjectName 是否已赋值
                     * @return TempCosObjectName 是否已赋值
                     * 
                     */
                    bool TempCosObjectNameHasBeenSet() const;

                    /**
                     * 获取Git地址。该功能已下线。
                     * @return GitUrl Git地址。该功能已下线。
                     * 
                     */
                    std::string GetGitUrl() const;

                    /**
                     * 设置Git地址。该功能已下线。
                     * @param _gitUrl Git地址。该功能已下线。
                     * 
                     */
                    void SetGitUrl(const std::string& _gitUrl);

                    /**
                     * 判断参数 GitUrl 是否已赋值
                     * @return GitUrl 是否已赋值
                     * 
                     */
                    bool GitUrlHasBeenSet() const;

                    /**
                     * 获取Git用户名。该功能已下线。
                     * @return GitUserName Git用户名。该功能已下线。
                     * 
                     */
                    std::string GetGitUserName() const;

                    /**
                     * 设置Git用户名。该功能已下线。
                     * @param _gitUserName Git用户名。该功能已下线。
                     * 
                     */
                    void SetGitUserName(const std::string& _gitUserName);

                    /**
                     * 判断参数 GitUserName 是否已赋值
                     * @return GitUserName 是否已赋值
                     * 
                     */
                    bool GitUserNameHasBeenSet() const;

                    /**
                     * 获取Git密码。该功能已下线。
                     * @return GitPassword Git密码。该功能已下线。
                     * 
                     */
                    std::string GetGitPassword() const;

                    /**
                     * 设置Git密码。该功能已下线。
                     * @param _gitPassword Git密码。该功能已下线。
                     * 
                     */
                    void SetGitPassword(const std::string& _gitPassword);

                    /**
                     * 判断参数 GitPassword 是否已赋值
                     * @return GitPassword 是否已赋值
                     * 
                     */
                    bool GitPasswordHasBeenSet() const;

                    /**
                     * 获取加密后的Git密码，一般无需指定。该功能已下线。
                     * @return GitPasswordSecret 加密后的Git密码，一般无需指定。该功能已下线。
                     * 
                     */
                    std::string GetGitPasswordSecret() const;

                    /**
                     * 设置加密后的Git密码，一般无需指定。该功能已下线。
                     * @param _gitPasswordSecret 加密后的Git密码，一般无需指定。该功能已下线。
                     * 
                     */
                    void SetGitPasswordSecret(const std::string& _gitPasswordSecret);

                    /**
                     * 判断参数 GitPasswordSecret 是否已赋值
                     * @return GitPasswordSecret 是否已赋值
                     * 
                     */
                    bool GitPasswordSecretHasBeenSet() const;

                    /**
                     * 获取Git分支。该功能已下线。
                     * @return GitBranch Git分支。该功能已下线。
                     * 
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置Git分支。该功能已下线。
                     * @param _gitBranch Git分支。该功能已下线。
                     * 
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     * 
                     */
                    bool GitBranchHasBeenSet() const;

                    /**
                     * 获取代码在Git仓库中的路径。该功能已下线。
                     * @return GitDirectory 代码在Git仓库中的路径。该功能已下线。
                     * 
                     */
                    std::string GetGitDirectory() const;

                    /**
                     * 设置代码在Git仓库中的路径。该功能已下线。
                     * @param _gitDirectory 代码在Git仓库中的路径。该功能已下线。
                     * 
                     */
                    void SetGitDirectory(const std::string& _gitDirectory);

                    /**
                     * 判断参数 GitDirectory 是否已赋值
                     * @return GitDirectory 是否已赋值
                     * 
                     */
                    bool GitDirectoryHasBeenSet() const;

                    /**
                     * 获取指定要拉取的版本。该功能已下线。
                     * @return GitCommitId 指定要拉取的版本。该功能已下线。
                     * 
                     */
                    std::string GetGitCommitId() const;

                    /**
                     * 设置指定要拉取的版本。该功能已下线。
                     * @param _gitCommitId 指定要拉取的版本。该功能已下线。
                     * 
                     */
                    void SetGitCommitId(const std::string& _gitCommitId);

                    /**
                     * 判断参数 GitCommitId 是否已赋值
                     * @return GitCommitId 是否已赋值
                     * 
                     */
                    bool GitCommitIdHasBeenSet() const;

                    /**
                     * 获取加密后的Git用户名，一般无需指定。该功能已下线。
                     * @return GitUserNameSecret 加密后的Git用户名，一般无需指定。该功能已下线。
                     * 
                     */
                    std::string GetGitUserNameSecret() const;

                    /**
                     * 设置加密后的Git用户名，一般无需指定。该功能已下线。
                     * @param _gitUserNameSecret 加密后的Git用户名，一般无需指定。该功能已下线。
                     * 
                     */
                    void SetGitUserNameSecret(const std::string& _gitUserNameSecret);

                    /**
                     * 判断参数 GitUserNameSecret 是否已赋值
                     * @return GitUserNameSecret 是否已赋值
                     * 
                     */
                    bool GitUserNameSecretHasBeenSet() const;

                    /**
                     * 获取镜像部署时配置TCR镜像信息
                     * @return ImageConfig 镜像部署时配置TCR镜像信息
                     * 
                     */
                    ImageConfig GetImageConfig() const;

                    /**
                     * 设置镜像部署时配置TCR镜像信息
                     * @param _imageConfig 镜像部署时配置TCR镜像信息
                     * 
                     */
                    void SetImageConfig(const ImageConfig& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                private:

                    /**
                     * 对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 对象存储中代码包文件路径，以/开头
                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * 包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     */
                    std::string m_zipFile;
                    bool m_zipFileHasBeenSet;

                    /**
                     * 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * 如果是通过Demo创建的话，需要传入DemoId
                     */
                    std::string m_demoId;
                    bool m_demoIdHasBeenSet;

                    /**
                     * 如果是从TempCos创建的话，需要传入TempCosObjectName
                     */
                    std::string m_tempCosObjectName;
                    bool m_tempCosObjectNameHasBeenSet;

                    /**
                     * Git地址。该功能已下线。
                     */
                    std::string m_gitUrl;
                    bool m_gitUrlHasBeenSet;

                    /**
                     * Git用户名。该功能已下线。
                     */
                    std::string m_gitUserName;
                    bool m_gitUserNameHasBeenSet;

                    /**
                     * Git密码。该功能已下线。
                     */
                    std::string m_gitPassword;
                    bool m_gitPasswordHasBeenSet;

                    /**
                     * 加密后的Git密码，一般无需指定。该功能已下线。
                     */
                    std::string m_gitPasswordSecret;
                    bool m_gitPasswordSecretHasBeenSet;

                    /**
                     * Git分支。该功能已下线。
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                    /**
                     * 代码在Git仓库中的路径。该功能已下线。
                     */
                    std::string m_gitDirectory;
                    bool m_gitDirectoryHasBeenSet;

                    /**
                     * 指定要拉取的版本。该功能已下线。
                     */
                    std::string m_gitCommitId;
                    bool m_gitCommitIdHasBeenSet;

                    /**
                     * 加密后的Git用户名，一般无需指定。该功能已下线。
                     */
                    std::string m_gitUserNameSecret;
                    bool m_gitUserNameSecretHasBeenSet;

                    /**
                     * 镜像部署时配置TCR镜像信息
                     */
                    ImageConfig m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_
