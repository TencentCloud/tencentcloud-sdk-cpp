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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 镜像tag信息
                */
                class TagInfo : public AbstractModel
                {
                public:
                    TagInfo();
                    ~TagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag名称
                     * @return TagName Tag名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置Tag名称
                     * @param _tagName Tag名称
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
                     * 获取制品的 ID
                     * @return TagId 制品的 ID
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置制品的 ID
                     * @param _tagId 制品的 ID
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
                     * 获取docker image 可以看到的id
                     * @return ImageId docker image 可以看到的id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置docker image 可以看到的id
                     * @param _imageId docker image 可以看到的id
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
                     * 获取制品的创建时间
                     * @return CreationTime 制品的创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置制品的创建时间
                     * @param _creationTime 制品的创建时间
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
                     * 获取制品创建至今时间长度
                     * @return DurationDays 制品创建至今时间长度
                     * 
                     */
                    std::string GetDurationDays() const;

                    /**
                     * 设置制品创建至今时间长度
                     * @param _durationDays 制品创建至今时间长度
                     * 
                     */
                    void SetDurationDays(const std::string& _durationDays);

                    /**
                     * 判断参数 DurationDays 是否已赋值
                     * @return DurationDays 是否已赋值
                     * 
                     */
                    bool DurationDaysHasBeenSet() const;

                    /**
                     * 获取标注的制品作者
                     * @return Author 标注的制品作者
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置标注的制品作者
                     * @param _author 标注的制品作者
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
                     * 获取标注的制品平台
                     * @return Architecture 标注的制品平台
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置标注的制品平台
                     * @param _architecture 标注的制品平台
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
                     * 获取创建制品的 Docker 版本
                     * @return DockerVersion 创建制品的 Docker 版本
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置创建制品的 Docker 版本
                     * @param _dockerVersion 创建制品的 Docker 版本
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
                     * 获取标注的制品操作系统
                     * @return OS 标注的制品操作系统
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置标注的制品操作系统
                     * @param _oS 标注的制品操作系统
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取制品大小
                     * @return SizeByte 制品大小
                     * 
                     */
                    int64_t GetSizeByte() const;

                    /**
                     * 设置制品大小
                     * @param _sizeByte 制品大小
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
                     * 获取序号
                     * @return Id 序号
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置序号
                     * @param _id 序号
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取数据更新时间
                     * @return UpdateTime 数据更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _updateTime 数据更新时间
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
                     * 获取制品更新时间
                     * @return PushTime 制品更新时间
                     * 
                     */
                    std::string GetPushTime() const;

                    /**
                     * 设置制品更新时间
                     * @param _pushTime 制品更新时间
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
                     * 获取制品类型
                     * @return Kind 制品类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置制品类型
                     * @param _kind 制品类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * Tag名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 制品的 ID
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * docker image 可以看到的id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 大小
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 制品的创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 制品创建至今时间长度
                     */
                    std::string m_durationDays;
                    bool m_durationDaysHasBeenSet;

                    /**
                     * 标注的制品作者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 标注的制品平台
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 创建制品的 Docker 版本
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * 标注的制品操作系统
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * 制品大小
                     */
                    int64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * 序号
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 制品更新时间
                     */
                    std::string m_pushTime;
                    bool m_pushTimeHasBeenSet;

                    /**
                     * 制品类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFO_H_
