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
                     * 获取媒体库 ID
                     * @return LibraryId 媒体库 ID
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置媒体库 ID
                     * @param _libraryId 媒体库 ID
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
                     * 获取媒体库友好名称
                     * @return Name 媒体库友好名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体库友好名称
                     * @param _name 媒体库友好名称
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取媒体库绑定的 COS 存储桶
                     * @return BucketName 媒体库绑定的 COS 存储桶
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置媒体库绑定的 COS 存储桶
                     * @param _bucketName 媒体库绑定的 COS 存储桶
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
                     * 获取媒体库绑定的 COS 存储桶所在的地域
                     * @return BucketRegion 媒体库绑定的 COS 存储桶所在的地域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置媒体库绑定的 COS 存储桶所在的地域
                     * @param _bucketRegion 媒体库绑定的 COS 存储桶所在的地域
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
                     * 获取媒体库创建时间
                     * @return CreationTime 媒体库创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置媒体库创建时间
                     * @param _creationTime 媒体库创建时间
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
                     * 获取媒体库配置项
                     * @return LibraryExtension 媒体库配置项
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置媒体库配置项
                     * @param _libraryExtension 媒体库配置项
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
                     * 获取媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @return Size 媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @param _size 媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
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
                     * 获取媒体库目录数，由于数字类型精度限制，该字段为 String 类型。
                     * @return DirNum 媒体库目录数，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetDirNum() const;

                    /**
                     * 设置媒体库目录数，由于数字类型精度限制，该字段为 String 类型。
                     * @param _dirNum 媒体库目录数，由于数字类型精度限制，该字段为 String 类型。
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
                     * 获取媒体库文件数，由于数字类型精度限制，该字段为 String 类型。
                     * @return FileNum 媒体库文件数，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetFileNum() const;

                    /**
                     * 设置媒体库文件数，由于数字类型精度限制，该字段为 String 类型。
                     * @param _fileNum 媒体库文件数，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    void SetFileNum(const std::string& _fileNum);

                    /**
                     * 判断参数 FileNum 是否已赋值
                     * @return FileNum 是否已赋值
                     * 
                     */
                    bool FileNumHasBeenSet() const;

                private:

                    /**
                     * 媒体库 ID
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 媒体库友好名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 媒体库绑定的 COS 存储桶
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 媒体库绑定的 COS 存储桶所在的地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 媒体库创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 媒体库配置项
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                    /**
                     * 媒体库用量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 媒体库目录数，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_dirNum;
                    bool m_dirNumHasBeenSet;

                    /**
                     * 媒体库文件数，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_fileNum;
                    bool m_fileNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_
