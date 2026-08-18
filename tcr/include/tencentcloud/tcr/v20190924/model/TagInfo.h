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
                     * 获取<p>Tag名称</p>
                     * @return TagName <p>Tag名称</p>
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置<p>Tag名称</p>
                     * @param _tagName <p>Tag名称</p>
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
                     * 获取<p>制品的 ID</p>
                     * @return TagId <p>制品的 ID</p>
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置<p>制品的 ID</p>
                     * @param _tagId <p>制品的 ID</p>
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
                     * 获取<p>docker image 可以看到的id</p>
                     * @return ImageId <p>docker image 可以看到的id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>docker image 可以看到的id</p>
                     * @param _imageId <p>docker image 可以看到的id</p>
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
                     * 获取<p>大小</p>
                     * @return Size <p>大小</p>
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置<p>大小</p>
                     * @param _size <p>大小</p>
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
                     * 获取<p>制品的创建时间</p>
                     * @return CreationTime <p>制品的创建时间</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>制品的创建时间</p>
                     * @param _creationTime <p>制品的创建时间</p>
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
                     * 获取<p>制品创建至今时间长度</p>
                     * @return DurationDays <p>制品创建至今时间长度</p>
                     * 
                     */
                    std::string GetDurationDays() const;

                    /**
                     * 设置<p>制品创建至今时间长度</p>
                     * @param _durationDays <p>制品创建至今时间长度</p>
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
                     * 获取<p>标注的制品作者</p>
                     * @return Author <p>标注的制品作者</p>
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置<p>标注的制品作者</p>
                     * @param _author <p>标注的制品作者</p>
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
                     * 获取<p>标注的制品平台</p>
                     * @return Architecture <p>标注的制品平台</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置<p>标注的制品平台</p>
                     * @param _architecture <p>标注的制品平台</p>
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
                     * 获取<p>创建制品的 Docker 版本</p>
                     * @return DockerVersion <p>创建制品的 Docker 版本</p>
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置<p>创建制品的 Docker 版本</p>
                     * @param _dockerVersion <p>创建制品的 Docker 版本</p>
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
                     * 获取<p>标注的制品操作系统</p>
                     * @return OS <p>标注的制品操作系统</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>标注的制品操作系统</p>
                     * @param _oS <p>标注的制品操作系统</p>
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
                     * 获取<p>制品大小，单位：Byte</p>
                     * @return SizeByte <p>制品大小，单位：Byte</p>
                     * 
                     */
                    int64_t GetSizeByte() const;

                    /**
                     * 设置<p>制品大小，单位：Byte</p>
                     * @param _sizeByte <p>制品大小，单位：Byte</p>
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
                     * 获取<p>序号</p>
                     * @return Id <p>序号</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>序号</p>
                     * @param _id <p>序号</p>
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
                     * 获取<p>数据更新时间</p>
                     * @return UpdateTime <p>数据更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>数据更新时间</p>
                     * @param _updateTime <p>数据更新时间</p>
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
                     * 获取<p>制品更新时间</p>
                     * @return PushTime <p>制品更新时间</p>
                     * 
                     */
                    std::string GetPushTime() const;

                    /**
                     * 设置<p>制品更新时间</p>
                     * @param _pushTime <p>制品更新时间</p>
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
                     * 获取<p>制品类型</p>
                     * @return Kind <p>制品类型</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>制品类型</p>
                     * @param _kind <p>制品类型</p>
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
                     * <p>Tag名称</p>
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * <p>制品的 ID</p>
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * <p>docker image 可以看到的id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>大小</p>
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>制品的创建时间</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>制品创建至今时间长度</p>
                     */
                    std::string m_durationDays;
                    bool m_durationDaysHasBeenSet;

                    /**
                     * <p>标注的制品作者</p>
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * <p>标注的制品平台</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>创建制品的 Docker 版本</p>
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * <p>标注的制品操作系统</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>制品大小，单位：Byte</p>
                     */
                    int64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * <p>序号</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>数据更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>制品更新时间</p>
                     */
                    std::string m_pushTime;
                    bool m_pushTimeHasBeenSet;

                    /**
                     * <p>制品类型</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFO_H_
