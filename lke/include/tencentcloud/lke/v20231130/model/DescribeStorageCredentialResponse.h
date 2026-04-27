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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Credentials.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeStorageCredential返回参数结构体
                */
                class DescribeStorageCredentialResponse : public AbstractModel
                {
                public:
                    DescribeStorageCredentialResponse();
                    ~DescribeStorageCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>密钥信息</p>
                     * @return Credentials <p>密钥信息</p>
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取<p>失效时间，为 Unix 时间戳</p><p>单位：秒</p>
                     * @return ExpiredTime <p>失效时间，为 Unix 时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，为 Unix 时间戳</p><p>单位：秒</p>
                     * @return StartTime <p>开始时间，为 Unix 时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>对象存储桶</p>
                     * @return Bucket <p>对象存储桶</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>对象存储可用区</p>
                     * @return Region <p>对象存储可用区</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>文件存储目录</p>
                     * @return FilePath <p>文件存储目录</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取<p>存储类型</p>
                     * @return Type <p>存储类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>企业主账号</p>
                     * @return CorpUin <p>企业主账号</p>
                     * 
                     */
                    std::string GetCorpUin() const;

                    /**
                     * 判断参数 CorpUin 是否已赋值
                     * @return CorpUin 是否已赋值
                     * 
                     */
                    bool CorpUinHasBeenSet() const;

                    /**
                     * 获取<p>图片存储目录</p>
                     * @return ImagePath <p>图片存储目录</p>
                     * 
                     */
                    std::string GetImagePath() const;

                    /**
                     * 判断参数 ImagePath 是否已赋值
                     * @return ImagePath 是否已赋值
                     * 
                     */
                    bool ImagePathHasBeenSet() const;

                    /**
                     * 获取<p>上传存储路径，到具体文件</p>
                     * @return UploadPath <p>上传存储路径，到具体文件</p>
                     * 
                     */
                    std::string GetUploadPath() const;

                    /**
                     * 判断参数 UploadPath 是否已赋值
                     * @return UploadPath 是否已赋值
                     * 
                     */
                    bool UploadPathHasBeenSet() const;

                    /**
                     * 获取<p>文件上传地址，使用put请求上传文件到该地址</p>
                     * @return UploadUrl <p>文件上传地址，使用put请求上传文件到该地址</p>
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取<p>文件的预签名地址，支持下载</p>
                     * @return FileUrl <p>文件的预签名地址，支持下载</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * <p>密钥信息</p>
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * <p>失效时间，为 Unix 时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>开始时间，为 Unix 时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>对象存储桶</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>对象存储可用区</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>文件存储目录</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>存储类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>企业主账号</p>
                     */
                    std::string m_corpUin;
                    bool m_corpUinHasBeenSet;

                    /**
                     * <p>图片存储目录</p>
                     */
                    std::string m_imagePath;
                    bool m_imagePathHasBeenSet;

                    /**
                     * <p>上传存储路径，到具体文件</p>
                     */
                    std::string m_uploadPath;
                    bool m_uploadPathHasBeenSet;

                    /**
                     * <p>文件上传地址，使用put请求上传文件到该地址</p>
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * <p>文件的预签名地址，支持下载</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_
