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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_BACKUPANDROIDINSTANCETOSTORAGEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_BACKUPANDROIDINSTANCETOSTORAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/COSOptions.h>
#include <tencentcloud/gs/v20191118/model/S3Options.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * BackUpAndroidInstanceToStorage请求参数结构体
                */
                class BackUpAndroidInstanceToStorageRequest : public AbstractModel
                {
                public:
                    BackUpAndroidInstanceToStorageRequest();
                    ~BackUpAndroidInstanceToStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例ID
                     * @return AndroidInstanceId 安卓实例ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置安卓实例ID
                     * @param _androidInstanceId 安卓实例ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取存储服务器类型，如 COS、S3。注意：使用 COS 和 S3 都将占用外网带宽。
                     * @return StorageType 存储服务器类型，如 COS、S3。注意：使用 COS 和 S3 都将占用外网带宽。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储服务器类型，如 COS、S3。注意：使用 COS 和 S3 都将占用外网带宽。
                     * @param _storageType 存储服务器类型，如 COS、S3。注意：使用 COS 和 S3 都将占用外网带宽。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取自定义对象Key
                     * @return ObjectKey 自定义对象Key
                     * 
                     */
                    std::string GetObjectKey() const;

                    /**
                     * 设置自定义对象Key
                     * @param _objectKey 自定义对象Key
                     * 
                     */
                    void SetObjectKey(const std::string& _objectKey);

                    /**
                     * 判断参数 ObjectKey 是否已赋值
                     * @return ObjectKey 是否已赋值
                     * 
                     */
                    bool ObjectKeyHasBeenSet() const;

                    /**
                     * 获取包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @return Includes 包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    std::vector<std::string> GetIncludes() const;

                    /**
                     * 设置包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @param _includes 包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    void SetIncludes(const std::vector<std::string>& _includes);

                    /**
                     * 判断参数 Includes 是否已赋值
                     * @return Includes 是否已赋值
                     * 
                     */
                    bool IncludesHasBeenSet() const;

                    /**
                     * 获取需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @return Excludes 需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    std::vector<std::string> GetExcludes() const;

                    /**
                     * 设置需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * @param _excludes 需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     * 
                     */
                    void SetExcludes(const std::vector<std::string>& _excludes);

                    /**
                     * 判断参数 Excludes 是否已赋值
                     * @return Excludes 是否已赋值
                     * 
                     */
                    bool ExcludesHasBeenSet() const;

                    /**
                     * 获取COS协议选项
                     * @return COSOptions COS协议选项
                     * 
                     */
                    COSOptions GetCOSOptions() const;

                    /**
                     * 设置COS协议选项
                     * @param _cOSOptions COS协议选项
                     * 
                     */
                    void SetCOSOptions(const COSOptions& _cOSOptions);

                    /**
                     * 判断参数 COSOptions 是否已赋值
                     * @return COSOptions 是否已赋值
                     * 
                     */
                    bool COSOptionsHasBeenSet() const;

                    /**
                     * 获取S3存储协议选项
                     * @return S3Options S3存储协议选项
                     * 
                     */
                    S3Options GetS3Options() const;

                    /**
                     * 设置S3存储协议选项
                     * @param _s3Options S3存储协议选项
                     * 
                     */
                    void SetS3Options(const S3Options& _s3Options);

                    /**
                     * 判断参数 S3Options 是否已赋值
                     * @return S3Options 是否已赋值
                     * 
                     */
                    bool S3OptionsHasBeenSet() const;

                private:

                    /**
                     * 安卓实例ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * 存储服务器类型，如 COS、S3。注意：使用 COS 和 S3 都将占用外网带宽。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 自定义对象Key
                     */
                    std::string m_objectKey;
                    bool m_objectKeyHasBeenSet;

                    /**
                     * 包含的路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     */
                    std::vector<std::string> m_includes;
                    bool m_includesHasBeenSet;

                    /**
                     * 需要排除路径，支持仅含一个通配符*，通配符不能出现在路径开始
                     */
                    std::vector<std::string> m_excludes;
                    bool m_excludesHasBeenSet;

                    /**
                     * COS协议选项
                     */
                    COSOptions m_cOSOptions;
                    bool m_cOSOptionsHasBeenSet;

                    /**
                     * S3存储协议选项
                     */
                    S3Options m_s3Options;
                    bool m_s3OptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_BACKUPANDROIDINSTANCETOSTORAGEREQUEST_H_
