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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_IMAGETAG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_IMAGETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 列表信息
                */
                class ImageTag : public AbstractModel
                {
                public:
                    ImageTag();
                    ~ImageTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名
                     * @return RepoName 仓库名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名
                     * @param _repoName 仓库名
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取版本名称
                     * @return TagName 版本名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置版本名称
                     * @param _tagName 版本名称
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取版本ID
                     * @return TagId 版本ID
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置版本ID
                     * @param _tagId 版本ID
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取大小
                     * @return Size 大小
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置大小
                     * @param _size 大小
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取镜像制作者
                     * @return Author 镜像制作者
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置镜像制作者
                     * @param _author 镜像制作者
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取CPU架构
                     * @return Architecture CPU架构
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置CPU架构
                     * @param _architecture CPU架构
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取Docker客户端版本
                     * @return DockerVersion Docker客户端版本
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置Docker客户端版本
                     * @param _dockerVersion Docker客户端版本
                     * 
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return Os 操作系统
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置操作系统
                     * @param _os 操作系统
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取push时间
                     * @return PushTime push时间
                     * 
                     */
                    std::string GetPushTime() const;

                    /**
                     * 设置push时间
                     * @param _pushTime push时间
                     * 
                     */
                    void SetPushTime(const std::string& _pushTime);

                    /**
                     * 判断参数 PushTime 是否已赋值
                     * @return PushTime 是否已赋值
                     * 
                     */
                    bool PushTimeHasBeenSet() const;

                    /**
                     * 获取单位为字节
                     * @return SizeByte 单位为字节
                     * 
                     */
                    int64_t GetSizeByte() const;

                    /**
                     * 设置单位为字节
                     * @param _sizeByte 单位为字节
                     * 
                     */
                    void SetSizeByte(const int64_t& _sizeByte);

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     * 
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取TcrRepoInfo值
                     * @return TcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TcrRepoInfo值
                     * @param _tcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     * 
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                private:

                    /**
                     * 仓库名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 版本ID
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 大小
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 镜像制作者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * CPU架构
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * Docker客户端版本
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * push时间
                     */
                    std::string m_pushTime;
                    bool m_pushTimeHasBeenSet;

                    /**
                     * 单位为字节
                     */
                    int64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * TcrRepoInfo值
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_IMAGETAG_H_
