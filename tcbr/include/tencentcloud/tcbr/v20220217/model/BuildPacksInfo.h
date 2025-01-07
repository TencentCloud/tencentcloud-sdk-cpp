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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_BUILDPACKSINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_BUILDPACKSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * BuildPacks信息
                */
                class BuildPacksInfo : public AbstractModel
                {
                public:
                    BuildPacksInfo();
                    ~BuildPacksInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基础镜像
                     * @return BaseImage 基础镜像
                     * 
                     */
                    std::string GetBaseImage() const;

                    /**
                     * 设置基础镜像
                     * @param _baseImage 基础镜像
                     * 
                     */
                    void SetBaseImage(const std::string& _baseImage);

                    /**
                     * 判断参数 BaseImage 是否已赋值
                     * @return BaseImage 是否已赋值
                     * 
                     */
                    bool BaseImageHasBeenSet() const;

                    /**
                     * 获取启动命令
                     * @return EntryPoint 启动命令
                     * 
                     */
                    std::string GetEntryPoint() const;

                    /**
                     * 设置启动命令
                     * @param _entryPoint 启动命令
                     * 
                     */
                    void SetEntryPoint(const std::string& _entryPoint);

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     * 
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取语言
                     * @return RepoLanguage 语言
                     * 
                     */
                    std::string GetRepoLanguage() const;

                    /**
                     * 设置语言
                     * @param _repoLanguage 语言
                     * 
                     */
                    void SetRepoLanguage(const std::string& _repoLanguage);

                    /**
                     * 判断参数 RepoLanguage 是否已赋值
                     * @return RepoLanguage 是否已赋值
                     * 
                     */
                    bool RepoLanguageHasBeenSet() const;

                    /**
                     * 获取上传文件名
                     * @return UploadFilename 上传文件名
                     * 
                     */
                    std::string GetUploadFilename() const;

                    /**
                     * 设置上传文件名
                     * @param _uploadFilename 上传文件名
                     * 
                     */
                    void SetUploadFilename(const std::string& _uploadFilename);

                    /**
                     * 判断参数 UploadFilename 是否已赋值
                     * @return UploadFilename 是否已赋值
                     * 
                     */
                    bool UploadFilenameHasBeenSet() const;

                    /**
                     * 获取语言版本
                     * @return LanguageVersion 语言版本
                     * 
                     */
                    std::string GetLanguageVersion() const;

                    /**
                     * 设置语言版本
                     * @param _languageVersion 语言版本
                     * 
                     */
                    void SetLanguageVersion(const std::string& _languageVersion);

                    /**
                     * 判断参数 LanguageVersion 是否已赋值
                     * @return LanguageVersion 是否已赋值
                     * 
                     */
                    bool LanguageVersionHasBeenSet() const;

                private:

                    /**
                     * 基础镜像
                     */
                    std::string m_baseImage;
                    bool m_baseImageHasBeenSet;

                    /**
                     * 启动命令
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * 语言
                     */
                    std::string m_repoLanguage;
                    bool m_repoLanguageHasBeenSet;

                    /**
                     * 上传文件名
                     */
                    std::string m_uploadFilename;
                    bool m_uploadFilenameHasBeenSet;

                    /**
                     * 语言版本
                     */
                    std::string m_languageVersion;
                    bool m_languageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_BUILDPACKSINFO_H_
