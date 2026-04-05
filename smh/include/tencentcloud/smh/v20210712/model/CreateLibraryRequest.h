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
                     * 获取<p>媒体库名称，最多 50 个字符</p>
                     * @return Name <p>媒体库名称，最多 50 个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>媒体库名称，最多 50 个字符</p>
                     * @param _name <p>媒体库名称，最多 50 个字符</p>
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
                     * 获取<p>备注，最多 250 个字符</p>
                     * @return Remark <p>备注，最多 250 个字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，最多 250 个字符</p>
                     * @param _remark <p>备注，最多 250 个字符</p>
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
                     * 获取<p>存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。</p>
                     * @return BucketName <p>存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。</p>
                     * @param _bucketName <p>存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。</p>
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
                     * 获取<p>存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。</p>
                     * @return BucketRegion <p>存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。</p>
                     * @param _bucketRegion <p>存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。</p>
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
                     * 获取<p>媒体库配置项，部分参数新建后不可更改</p>
                     * @return LibraryExtension <p>媒体库配置项，部分参数新建后不可更改</p>
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置<p>媒体库配置项，部分参数新建后不可更改</p>
                     * @param _libraryExtension <p>媒体库配置项，部分参数新建后不可更改</p>
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
                     * <p>媒体库名称，最多 50 个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备注，最多 250 个字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>存储桶全名，新建后不可更改。当前版本不再支持指定存储桶。</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>存储桶所在地域，新建后不可更改。当前版本不再支持指定存储桶所在地域。</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>媒体库配置项，部分参数新建后不可更改</p>
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_
