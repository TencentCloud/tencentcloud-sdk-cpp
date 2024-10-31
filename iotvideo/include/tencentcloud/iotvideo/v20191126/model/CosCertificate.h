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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_COSCERTIFICATE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_COSCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 申请上传证书回包
                */
                class CosCertificate : public AbstractModel
                {
                public:
                    CosCertificate();
                    ~CosCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageBucket cos存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageBucket() const;

                    /**
                     * 设置cos存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageBucket cos存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageBucket(const std::string& _storageBucket);

                    /**
                     * 判断参数 StorageBucket 是否已赋值
                     * @return StorageBucket 是否已赋值
                     * 
                     */
                    bool StorageBucketHasBeenSet() const;

                    /**
                     * 获取cos存储园区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageRegion cos存储园区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置cos存储园区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageRegion cos存储园区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取存储路径，录制场景下该值为存储目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoragePath 存储路径，录制场景下该值为存储目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 设置存储路径，录制场景下该值为存储目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storagePath 存储路径，录制场景下该值为存储目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoragePath(const std::string& _storagePath);

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                    /**
                     * 获取证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TempCertificate 证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CertificateInfo GetTempCertificate() const;

                    /**
                     * 设置证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tempCertificate 证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTempCertificate(const CertificateInfo& _tempCertificate);

                    /**
                     * 判断参数 TempCertificate 是否已赋值
                     * @return TempCertificate 是否已赋值
                     * 
                     */
                    bool TempCertificateHasBeenSet() const;

                    /**
                     * 获取SessionKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionKey SessionKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionKey() const;

                    /**
                     * 设置SessionKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionKey SessionKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionKey(const std::string& _sessionKey);

                    /**
                     * 判断参数 SessionKey 是否已赋值
                     * @return SessionKey 是否已赋值
                     * 
                     */
                    bool SessionKeyHasBeenSet() const;

                private:

                    /**
                     * cos存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * cos存储园区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 存储路径，录制场景下该值为存储目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * 证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateInfo m_tempCertificate;
                    bool m_tempCertificateHasBeenSet;

                    /**
                     * SessionKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionKey;
                    bool m_sessionKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_COSCERTIFICATE_H_
