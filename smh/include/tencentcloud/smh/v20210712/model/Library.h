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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smh/v20210712/model/LibraryExtension.h>
#include <tencentcloud/smh/v20210712/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * PaaS 服务媒体库信息
                */
                class Library : public AbstractModel
                {
                public:
                    Library();
                    ~Library() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>媒体库 ID</p>
                     * @return LibraryId <p>媒体库 ID</p>
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置<p>媒体库 ID</p>
                     * @param _libraryId <p>媒体库 ID</p>
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取<p>媒体库友好名称</p>
                     * @return Name <p>媒体库友好名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>媒体库友好名称</p>
                     * @param _name <p>媒体库友好名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>媒体库绑定的 COS 存储桶</p>
                     * @return BucketName <p>媒体库绑定的 COS 存储桶</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>媒体库绑定的 COS 存储桶</p>
                     * @param _bucketName <p>媒体库绑定的 COS 存储桶</p>
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
                     * 获取<p>媒体库绑定的 COS 存储桶所在的地域</p>
                     * @return BucketRegion <p>媒体库绑定的 COS 存储桶所在的地域</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>媒体库绑定的 COS 存储桶所在的地域</p>
                     * @param _bucketRegion <p>媒体库绑定的 COS 存储桶所在的地域</p>
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取<p>该媒体库的业务 API 访问域名</p>
                     * @return AccessDomain <p>该媒体库的业务 API 访问域名</p>
                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置<p>该媒体库的业务 API 访问域名</p>
                     * @param _accessDomain <p>该媒体库的业务 API 访问域名</p>
                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                    /**
                     * 获取<p>媒体库创建时间</p>
                     * @return CreationTime <p>媒体库创建时间</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>媒体库创建时间</p>
                     * @param _creationTime <p>媒体库创建时间</p>
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
                     * 获取<p>媒体库配置项</p>
                     * @return LibraryExtension <p>媒体库配置项</p>
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置<p>媒体库配置项</p>
                     * @param _libraryExtension <p>媒体库配置项</p>
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                    /**
                     * 获取<p>媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。</p>
                     * @return Size <p>媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。</p>
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置<p>媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。</p>
                     * @param _size <p>媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。</p>
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
                     * 获取<p>媒体库目录数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * @return DirNum <p>媒体库目录数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * 
                     */
                    std::string GetDirNum() const;

                    /**
                     * 设置<p>媒体库目录数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * @param _dirNum <p>媒体库目录数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * 
                     */
                    void SetDirNum(const std::string& _dirNum);

                    /**
                     * 判断参数 DirNum 是否已赋值
                     * @return DirNum 是否已赋值
                     * 
                     */
                    bool DirNumHasBeenSet() const;

                    /**
                     * 获取<p>媒体库文件数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * @return FileNum <p>媒体库文件数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * 
                     */
                    std::string GetFileNum() const;

                    /**
                     * 设置<p>媒体库文件数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * @param _fileNum <p>媒体库文件数，由于数字类型精度限制，该字段为 String 类型。</p>
                     * 
                     */
                    void SetFileNum(const std::string& _fileNum);

                    /**
                     * 判断参数 FileNum 是否已赋值
                     * @return FileNum 是否已赋值
                     * 
                     */
                    bool FileNumHasBeenSet() const;

                    /**
                     * 获取<p>媒体库关联的标签列表。</p>
                     * @return Tags <p>媒体库关联的标签列表。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置<p>媒体库关联的标签列表。</p>
                     * @param _tags <p>媒体库关联的标签列表。</p>
                     * 
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>媒体库 ID</p>
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * <p>媒体库友好名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>媒体库绑定的 COS 存储桶</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>媒体库绑定的 COS 存储桶所在的地域</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>该媒体库的业务 API 访问域名</p>
                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                    /**
                     * <p>媒体库创建时间</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>媒体库配置项</p>
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                    /**
                     * <p>媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。</p>
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>媒体库目录数，由于数字类型精度限制，该字段为 String 类型。</p>
                     */
                    std::string m_dirNum;
                    bool m_dirNumHasBeenSet;

                    /**
                     * <p>媒体库文件数，由于数字类型精度限制，该字段为 String 类型。</p>
                     */
                    std::string m_fileNum;
                    bool m_fileNumHasBeenSet;

                    /**
                     * <p>媒体库关联的标签列表。</p>
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_
