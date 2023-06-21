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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLibrary请求参数结构体
                */
                class CreateLibraryRequest : public AbstractModel
                {
                public:
                    CreateLibraryRequest();
                    ~CreateLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体库名称，最多 50 个字符
                     * @return Name 媒体库名称，最多 50 个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体库名称，最多 50 个字符
                     * @param _name 媒体库名称，最多 50 个字符
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
                     * 获取备注，最多 250 个字符
                     * @return Remark 备注，最多 250 个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，最多 250 个字符
                     * @param _remark 备注，最多 250 个字符
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
                     * 获取存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。
                     * @return BucketName 存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。
                     * @param _bucketName 存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。
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
                     * 获取存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。
                     * @return BucketRegion 存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。
                     * @param _bucketRegion 存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。
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
                     * 获取媒体库配置项，部分参数新建后不可更改
                     * @return LibraryExtension 媒体库配置项，部分参数新建后不可更改
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置媒体库配置项，部分参数新建后不可更改
                     * @param _libraryExtension 媒体库配置项，部分参数新建后不可更改
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                private:

                    /**
                     * 媒体库名称，最多 50 个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注，最多 250 个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 媒体库配置项，部分参数新建后不可更改
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_
