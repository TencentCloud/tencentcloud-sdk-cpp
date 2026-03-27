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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EXTERNALSTORAGE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EXTERNALSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 外部存储。
标识该存储介质，并非由云开发CloudBase创建，而是绑定的其他存储介质。
目前仅支持 [腾讯云-对象存储](https://cloud.tencent.com/document/product/436)。
                */
                class ExternalStorage : public AbstractModel
                {
                public:
                    ExternalStorage();
                    ~ExternalStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桶名。
当 Provider=cos 时，表示腾讯云对象存储桶。
                     * @return BucketName 桶名。
当 Provider=cos 时，表示腾讯云对象存储桶。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名。
当 Provider=cos 时，表示腾讯云对象存储桶。
                     * @param _bucketName 桶名。
当 Provider=cos 时，表示腾讯云对象存储桶。
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
                     * 获取Bucket所属地域。
当 Provider=cos 时，表示腾讯云对象存储桶的所属地域。
                     * @return Region Bucket所属地域。
当 Provider=cos 时，表示腾讯云对象存储桶的所属地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Bucket所属地域。
当 Provider=cos 时，表示腾讯云对象存储桶的所属地域。
                     * @param _region Bucket所属地域。
当 Provider=cos 时，表示腾讯云对象存储桶的所属地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取基础路径。
绑定之后，用户访问云存储内的文件，后台会自动以BasePath作为前缀，拼接到所访问的文件中。
例如：
  BasePath=my-cloudbase-path ， 当用户访问云存储内的 /tencentcloud.png 时，实际访问的完整路径是：/my-cloudbase-path/tencentcloud.png
                     * @return BasePath 基础路径。
绑定之后，用户访问云存储内的文件，后台会自动以BasePath作为前缀，拼接到所访问的文件中。
例如：
  BasePath=my-cloudbase-path ， 当用户访问云存储内的 /tencentcloud.png 时，实际访问的完整路径是：/my-cloudbase-path/tencentcloud.png
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置基础路径。
绑定之后，用户访问云存储内的文件，后台会自动以BasePath作为前缀，拼接到所访问的文件中。
例如：
  BasePath=my-cloudbase-path ， 当用户访问云存储内的 /tencentcloud.png 时，实际访问的完整路径是：/my-cloudbase-path/tencentcloud.png
                     * @param _basePath 基础路径。
绑定之后，用户访问云存储内的文件，后台会自动以BasePath作为前缀，拼接到所访问的文件中。
例如：
  BasePath=my-cloudbase-path ， 当用户访问云存储内的 /tencentcloud.png 时，实际访问的完整路径是：/my-cloudbase-path/tencentcloud.png
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取是否启用外部存储
                     * @return Enabled 是否启用外部存储
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用外部存储
                     * @param _enabled 是否启用外部存储
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 桶名。
当 Provider=cos 时，表示腾讯云对象存储桶。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Bucket所属地域。
当 Provider=cos 时，表示腾讯云对象存储桶的所属地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 基础路径。
绑定之后，用户访问云存储内的文件，后台会自动以BasePath作为前缀，拼接到所访问的文件中。
例如：
  BasePath=my-cloudbase-path ， 当用户访问云存储内的 /tencentcloud.png 时，实际访问的完整路径是：/my-cloudbase-path/tencentcloud.png
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * 是否启用外部存储
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EXTERNALSTORAGE_H_
