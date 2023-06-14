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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TempCertificate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ApplyUpload返回参数结构体
                */
                class ApplyUploadResponse : public AbstractModel
                {
                public:
                    ApplyUploadResponse();
                    ~ApplyUploadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存储桶，用于上传接口 URL 的 bucket_name。
                     * @return StorageBucket 存储桶，用于上传接口 URL 的 bucket_name。
                     * 
                     */
                    std::string GetStorageBucket() const;

                    /**
                     * 判断参数 StorageBucket 是否已赋值
                     * @return StorageBucket 是否已赋值
                     * 
                     */
                    bool StorageBucketHasBeenSet() const;

                    /**
                     * 获取存储园区，用于上传接口 Host 的 Region。
                     * @return StorageRegion 存储园区，用于上传接口 Host 的 Region。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取点播会话，用于确认上传接口的参数 VodSessionKey。
                     * @return VodSessionKey 点播会话，用于确认上传接口的参数 VodSessionKey。
                     * 
                     */
                    std::string GetVodSessionKey() const;

                    /**
                     * 判断参数 VodSessionKey 是否已赋值
                     * @return VodSessionKey 是否已赋值
                     * 
                     */
                    bool VodSessionKeyHasBeenSet() const;

                    /**
                     * 获取媒体存储路径，用于上传接口存储媒体的对象键（Key）。
                     * @return MediaStoragePath 媒体存储路径，用于上传接口存储媒体的对象键（Key）。
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取封面存储路径，用于上传接口存储封面的对象键（Key）。
                     * @return CoverStoragePath 封面存储路径，用于上传接口存储封面的对象键（Key）。
                     * 
                     */
                    std::string GetCoverStoragePath() const;

                    /**
                     * 判断参数 CoverStoragePath 是否已赋值
                     * @return CoverStoragePath 是否已赋值
                     * 
                     */
                    bool CoverStoragePathHasBeenSet() const;

                    /**
                     * 获取临时凭证，用于上传接口的权限验证。
                     * @return TempCertificate 临时凭证，用于上传接口的权限验证。
                     * 
                     */
                    TempCertificate GetTempCertificate() const;

                    /**
                     * 判断参数 TempCertificate 是否已赋值
                     * @return TempCertificate 是否已赋值
                     * 
                     */
                    bool TempCertificateHasBeenSet() const;

                private:

                    /**
                     * 存储桶，用于上传接口 URL 的 bucket_name。
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * 存储园区，用于上传接口 Host 的 Region。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 点播会话，用于确认上传接口的参数 VodSessionKey。
                     */
                    std::string m_vodSessionKey;
                    bool m_vodSessionKeyHasBeenSet;

                    /**
                     * 媒体存储路径，用于上传接口存储媒体的对象键（Key）。
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * 封面存储路径，用于上传接口存储封面的对象键（Key）。
                     */
                    std::string m_coverStoragePath;
                    bool m_coverStoragePathHasBeenSet;

                    /**
                     * 临时凭证，用于上传接口的权限验证。
                     */
                    TempCertificate m_tempCertificate;
                    bool m_tempCertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADRESPONSE_H_
