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
                     * 获取对象存储桶名称
                     * @return CosBucketName 对象存储桶名称
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置对象存储桶名称
                     * @param CosBucketName 对象存储桶名称
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取对象存储对象路径
                     * @return CosObjectName 对象存储对象路径
                     */
                    std::string GetCosObjectName() const;

                    /**
                     * 设置对象存储对象路径
                     * @param CosObjectName 对象存储对象路径
                     */
                    void SetCosObjectName(const std::string& _cosObjectName);

                    /**
                     * 判断参数 CosObjectName 是否已赋值
                     * @return CosObjectName 是否已赋值
                     */
                    bool CosObjectNameHasBeenSet() const;

                    /**
                     * 获取包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     * @return ZipFile 包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     * @param ZipFile 包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     */
                    void SetZipFile(const std::string& _zipFile);

                    /**
                     * 判断参数 ZipFile 是否已赋值
                     * @return ZipFile 是否已赋值
                     */
                    bool ZipFileHasBeenSet() const;

                    /**
                     * 获取对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     * @return CosBucketRegion 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     * @param CosBucketRegion 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取如果是通过Demo创建的话，需要传入DemoId
                     * @return DemoId 如果是通过Demo创建的话，需要传入DemoId
                     */
                    std::string GetDemoId() const;

                    /**
                     * 设置如果是通过Demo创建的话，需要传入DemoId
                     * @param DemoId 如果是通过Demo创建的话，需要传入DemoId
                     */
                    void SetDemoId(const std::string& _demoId);

                    /**
                     * 判断参数 DemoId 是否已赋值
                     * @return DemoId 是否已赋值
                     */
                    bool DemoIdHasBeenSet() const;

                    /**
                     * 获取如果是从TempCos创建的话，需要传入TempCosObjectName
                     * @return TempCosObjectName 如果是从TempCos创建的话，需要传入TempCosObjectName
                     */
                    std::string GetTempCosObjectName() const;

                    /**
                     * 设置如果是从TempCos创建的话，需要传入TempCosObjectName
                     * @param TempCosObjectName 如果是从TempCos创建的话，需要传入TempCosObjectName
                     */
                    void SetTempCosObjectName(const std::string& _tempCosObjectName);

                    /**
                     * 判断参数 TempCosObjectName 是否已赋值
                     * @return TempCosObjectName 是否已赋值
                     */
                    bool TempCosObjectNameHasBeenSet() const;

                    /**
                     * 获取Git地址
                     * @return GitUrl Git地址
                     */
                    std::string GetGitUrl() const;

                    /**
                     * 设置Git地址
                     * @param GitUrl Git地址
                     */
                    void SetGitUrl(const std::string& _gitUrl);

                    /**
                     * 判断参数 GitUrl 是否已赋值
                     * @return GitUrl 是否已赋值
                     */
                    bool GitUrlHasBeenSet() const;

                    /**
                     * 获取Git用户名
                     * @return GitUserName Git用户名
                     */
                    std::string GetGitUserName() const;

                    /**
                     * 设置Git用户名
                     * @param GitUserName Git用户名
                     */
                    void SetGitUserName(const std::string& _gitUserName);

                    /**
                     * 判断参数 GitUserName 是否已赋值
                     * @return GitUserName 是否已赋值
                     */
                    bool GitUserNameHasBeenSet() const;

                    /**
                     * 获取Git密码
                     * @return GitPassword Git密码
                     */
                    std::string GetGitPassword() const;

                    /**
                     * 设置Git密码
                     * @param GitPassword Git密码
                     */
                    void SetGitPassword(const std::string& _gitPassword);

                    /**
                     * 判断参数 GitPassword 是否已赋值
                     * @return GitPassword 是否已赋值
                     */
                    bool GitPasswordHasBeenSet() const;

                    /**
                     * 获取加密后的Git密码，一般无需指定
                     * @return GitPasswordSecret 加密后的Git密码，一般无需指定
                     */
                    std::string GetGitPasswordSecret() const;

                    /**
                     * 设置加密后的Git密码，一般无需指定
                     * @param GitPasswordSecret 加密后的Git密码，一般无需指定
                     */
                    void SetGitPasswordSecret(const std::string& _gitPasswordSecret);

                    /**
                     * 判断参数 GitPasswordSecret 是否已赋值
                     * @return GitPasswordSecret 是否已赋值
                     */
                    bool GitPasswordSecretHasBeenSet() const;

                    /**
                     * 获取Git分支
                     * @return GitBranch Git分支
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置Git分支
                     * @param GitBranch Git分支
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     */
                    bool GitBranchHasBeenSet() const;

                    /**
                     * 获取代码在Git仓库中的路径
                     * @return GitDirectory 代码在Git仓库中的路径
                     */
                    std::string GetGitDirectory() const;

                    /**
                     * 设置代码在Git仓库中的路径
                     * @param GitDirectory 代码在Git仓库中的路径
                     */
                    void SetGitDirectory(const std::string& _gitDirectory);

                    /**
                     * 判断参数 GitDirectory 是否已赋值
                     * @return GitDirectory 是否已赋值
                     */
                    bool GitDirectoryHasBeenSet() const;

                    /**
                     * 获取指定要拉取的版本
                     * @return GitCommitId 指定要拉取的版本
                     */
                    std::string GetGitCommitId() const;

                    /**
                     * 设置指定要拉取的版本
                     * @param GitCommitId 指定要拉取的版本
                     */
                    void SetGitCommitId(const std::string& _gitCommitId);

                    /**
                     * 判断参数 GitCommitId 是否已赋值
                     * @return GitCommitId 是否已赋值
                     */
                    bool GitCommitIdHasBeenSet() const;

                    /**
                     * 获取加密后的Git用户名，一般无需指定
                     * @return GitUserNameSecret 加密后的Git用户名，一般无需指定
                     */
                    std::string GetGitUserNameSecret() const;

                    /**
                     * 设置加密后的Git用户名，一般无需指定
                     * @param GitUserNameSecret 加密后的Git用户名，一般无需指定
                     */
                    void SetGitUserNameSecret(const std::string& _gitUserNameSecret);

                    /**
                     * 判断参数 GitUserNameSecret 是否已赋值
                     * @return GitUserNameSecret 是否已赋值
                     */
                    bool GitUserNameSecretHasBeenSet() const;

                private:

                    /**
                     * 对象存储桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 对象存储对象路径
                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * 包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
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
                     * Git地址
                     */
                    std::string m_gitUrl;
                    bool m_gitUrlHasBeenSet;

                    /**
                     * Git用户名
                     */
                    std::string m_gitUserName;
                    bool m_gitUserNameHasBeenSet;

                    /**
                     * Git密码
                     */
                    std::string m_gitPassword;
                    bool m_gitPasswordHasBeenSet;

                    /**
                     * 加密后的Git密码，一般无需指定
                     */
                    std::string m_gitPasswordSecret;
                    bool m_gitPasswordSecretHasBeenSet;

                    /**
                     * Git分支
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                    /**
                     * 代码在Git仓库中的路径
                     */
                    std::string m_gitDirectory;
                    bool m_gitDirectoryHasBeenSet;

                    /**
                     * 指定要拉取的版本
                     */
                    std::string m_gitCommitId;
                    bool m_gitCommitIdHasBeenSet;

                    /**
                     * 加密后的Git用户名，一般无需指定
                     */
                    std::string m_gitUserNameSecret;
                    bool m_gitUserNameSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CODE_H_
