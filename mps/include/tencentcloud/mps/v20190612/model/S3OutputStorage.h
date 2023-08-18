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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_S3OUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_S3OUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AWS S3 输出位置
                */
                class S3OutputStorage : public AbstractModel
                {
                public:
                    S3OutputStorage();
                    ~S3OutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取S3 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3Bucket S3 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3Bucket() const;

                    /**
                     * 设置S3 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3Bucket S3 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3Bucket(const std::string& _s3Bucket);

                    /**
                     * 判断参数 S3Bucket 是否已赋值
                     * @return S3Bucket 是否已赋值
                     * 
                     */
                    bool S3BucketHasBeenSet() const;

                    /**
                     * 获取S3 bucket 对应的区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3Region S3 bucket 对应的区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3Region() const;

                    /**
                     * 设置S3 bucket 对应的区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3Region S3 bucket 对应的区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3Region(const std::string& _s3Region);

                    /**
                     * 判断参数 S3Region 是否已赋值
                     * @return S3Region 是否已赋值
                     * 
                     */
                    bool S3RegionHasBeenSet() const;

                    /**
                     * 获取AWS 内网上传 媒体资源的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3SecretId AWS 内网上传 媒体资源的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3SecretId() const;

                    /**
                     * 设置AWS 内网上传 媒体资源的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3SecretId AWS 内网上传 媒体资源的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3SecretId(const std::string& _s3SecretId);

                    /**
                     * 判断参数 S3SecretId 是否已赋值
                     * @return S3SecretId 是否已赋值
                     * 
                     */
                    bool S3SecretIdHasBeenSet() const;

                    /**
                     * 获取AWS 内网上传 媒体资源的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3SecretKey AWS 内网上传 媒体资源的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3SecretKey() const;

                    /**
                     * 设置AWS 内网上传 媒体资源的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3SecretKey AWS 内网上传 媒体资源的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3SecretKey(const std::string& _s3SecretKey);

                    /**
                     * 判断参数 S3SecretKey 是否已赋值
                     * @return S3SecretKey 是否已赋值
                     * 
                     */
                    bool S3SecretKeyHasBeenSet() const;

                private:

                    /**
                     * S3 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3Bucket;
                    bool m_s3BucketHasBeenSet;

                    /**
                     * S3 bucket 对应的区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3Region;
                    bool m_s3RegionHasBeenSet;

                    /**
                     * AWS 内网上传 媒体资源的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3SecretId;
                    bool m_s3SecretIdHasBeenSet;

                    /**
                     * AWS 内网上传 媒体资源的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3SecretKey;
                    bool m_s3SecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_S3OUTPUTSTORAGE_H_
