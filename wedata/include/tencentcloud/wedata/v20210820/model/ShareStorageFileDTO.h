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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SHARESTORAGEFILEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SHARESTORAGEFILEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ShareStorageFileMappingDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 业务需求中，存在临时文件上传和下载，上传文件需要先获取上传必要的信息，如访问秘钥、文件上传到什么位置等，文件下载时也需要知道文件在什么地方下载，下载访问秘钥等，请注意，如果是公有云，共享存储为 COS，如果是私有云，共享存储为 CSP
                */
                class ShareStorageFileDTO : public AbstractModel
                {
                public:
                    ShareStorageFileDTO();
                    ~ShareStorageFileDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享存储访问 Token，公有云里面为 Cos 访问 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token 共享存储访问 Token，公有云里面为 Cos 访问 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置共享存储访问 Token，公有云里面为 Cos 访问 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token 共享存储访问 Token，公有云里面为 Cos 访问 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取共享存储访问 SecretId，公有云里面为 Cos 访问 SecretId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretId 共享存储访问 SecretId，公有云里面为 Cos 访问 SecretId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置共享存储访问 SecretId，公有云里面为 Cos 访问 SecretId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretId 共享存储访问 SecretId，公有云里面为 Cos 访问 SecretId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取共享存储访问 SecretKey，公有云里面为 Cos 访问 SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey 共享存储访问 SecretKey，公有云里面为 Cos 访问 SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置共享存储访问 SecretKey，公有云里面为 Cos 访问 SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey 共享存储访问 SecretKey，公有云里面为 Cos 访问 SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Token 过期时间，时间戳类型，精确到秒，如果是 -1 则表示没有过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenExpiredTime Token 过期时间，时间戳类型，精确到秒，如果是 -1 则表示没有过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenExpiredTime() const;

                    /**
                     * 设置Token 过期时间，时间戳类型，精确到秒，如果是 -1 则表示没有过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenExpiredTime Token 过期时间，时间戳类型，精确到秒，如果是 -1 则表示没有过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenExpiredTime(const int64_t& _tokenExpiredTime);

                    /**
                     * 判断参数 TokenExpiredTime 是否已赋值
                     * @return TokenExpiredTime 是否已赋值
                     * 
                     */
                    bool TokenExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Token 创建时间，时间戳类型，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenCreateTime Token 创建时间，时间戳类型，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenCreateTime() const;

                    /**
                     * 设置Token 创建时间，时间戳类型，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenCreateTime Token 创建时间，时间戳类型，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenCreateTime(const int64_t& _tokenCreateTime);

                    /**
                     * 判断参数 TokenCreateTime 是否已赋值
                     * @return TokenCreateTime 是否已赋值
                     * 
                     */
                    bool TokenCreateTimeHasBeenSet() const;

                    /**
                     * 获取共享存储类型，公有云为 COS，私有化为 CSP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareStorageType 共享存储类型，公有云为 COS，私有化为 CSP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareStorageType() const;

                    /**
                     * 设置共享存储类型，公有云为 COS，私有化为 CSP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shareStorageType 共享存储类型，公有云为 COS，私有化为 CSP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShareStorageType(const std::string& _shareStorageType);

                    /**
                     * 判断参数 ShareStorageType 是否已赋值
                     * @return ShareStorageType 是否已赋值
                     * 
                     */
                    bool ShareStorageTypeHasBeenSet() const;

                    /**
                     * 获取共享存储 EndPoint，公有云可以不使用该值，私有化需要使用该值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareStorageEndPoint 共享存储 EndPoint，公有云可以不使用该值，私有化需要使用该值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareStorageEndPoint() const;

                    /**
                     * 设置共享存储 EndPoint，公有云可以不使用该值，私有化需要使用该值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shareStorageEndPoint 共享存储 EndPoint，公有云可以不使用该值，私有化需要使用该值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShareStorageEndPoint(const std::string& _shareStorageEndPoint);

                    /**
                     * 判断参数 ShareStorageEndPoint 是否已赋值
                     * @return ShareStorageEndPoint 是否已赋值
                     * 
                     */
                    bool ShareStorageEndPointHasBeenSet() const;

                    /**
                     * 获取存储桶 Region
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketRegion 存储桶 Region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置存储桶 Region
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketRegion 存储桶 Region
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketName 存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketName 存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件映射，导入文件时，可能会存在文件名冲突，WeData 后端会自动校验，如果出现冲突，会基于传入的名称生成新的名称，文件上传到共享存储时请使用新生成的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMappings 文件映射，导入文件时，可能会存在文件名冲突，WeData 后端会自动校验，如果出现冲突，会基于传入的名称生成新的名称，文件上传到共享存储时请使用新生成的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ShareStorageFileMappingDTO> GetFileMappings() const;

                    /**
                     * 设置文件映射，导入文件时，可能会存在文件名冲突，WeData 后端会自动校验，如果出现冲突，会基于传入的名称生成新的名称，文件上传到共享存储时请使用新生成的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMappings 文件映射，导入文件时，可能会存在文件名冲突，WeData 后端会自动校验，如果出现冲突，会基于传入的名称生成新的名称，文件上传到共享存储时请使用新生成的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMappings(const std::vector<ShareStorageFileMappingDTO>& _fileMappings);

                    /**
                     * 判断参数 FileMappings 是否已赋值
                     * @return FileMappings 是否已赋值
                     * 
                     */
                    bool FileMappingsHasBeenSet() const;

                    /**
                     * 获取文件过期时间，公有云中，默认的过期时间为 15 天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExpireTime 文件过期时间，公有云中，默认的过期时间为 15 天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileExpireTime() const;

                    /**
                     * 设置文件过期时间，公有云中，默认的过期时间为 15 天
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExpireTime 文件过期时间，公有云中，默认的过期时间为 15 天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileExpireTime(const int64_t& _fileExpireTime);

                    /**
                     * 判断参数 FileExpireTime 是否已赋值
                     * @return FileExpireTime 是否已赋值
                     * 
                     */
                    bool FileExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 共享存储访问 Token，公有云里面为 Cos 访问 Token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 共享存储访问 SecretId，公有云里面为 Cos 访问 SecretId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 共享存储访问 SecretKey，公有云里面为 Cos 访问 SecretKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Token 过期时间，时间戳类型，精确到秒，如果是 -1 则表示没有过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenExpiredTime;
                    bool m_tokenExpiredTimeHasBeenSet;

                    /**
                     * Token 创建时间，时间戳类型，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenCreateTime;
                    bool m_tokenCreateTimeHasBeenSet;

                    /**
                     * 共享存储类型，公有云为 COS，私有化为 CSP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareStorageType;
                    bool m_shareStorageTypeHasBeenSet;

                    /**
                     * 共享存储 EndPoint，公有云可以不使用该值，私有化需要使用该值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareStorageEndPoint;
                    bool m_shareStorageEndPointHasBeenSet;

                    /**
                     * 存储桶 Region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 文件映射，导入文件时，可能会存在文件名冲突，WeData 后端会自动校验，如果出现冲突，会基于传入的名称生成新的名称，文件上传到共享存储时请使用新生成的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ShareStorageFileMappingDTO> m_fileMappings;
                    bool m_fileMappingsHasBeenSet;

                    /**
                     * 文件过期时间，公有云中，默认的过期时间为 15 天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileExpireTime;
                    bool m_fileExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SHARESTORAGEFILEDTO_H_
