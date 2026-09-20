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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEDIRECTUPLOADINFORESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEDIRECTUPLOADINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeSeeDirectUploadInfo返回参数结构体
                */
                class DescribeTWeSeeDirectUploadInfoResponse : public AbstractModel
                {
                public:
                    DescribeTWeSeeDirectUploadInfoResponse();
                    ~DescribeTWeSeeDirectUploadInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TWeSee 直传目录的 COS URI</p>
                     * @return COSURI <p>TWeSee 直传目录的 COS URI</p>
                     * 
                     */
                    std::string GetCOSURI() const;

                    /**
                     * 判断参数 COSURI 是否已赋值
                     * @return COSURI 是否已赋值
                     * 
                     */
                    bool COSURIHasBeenSet() const;

                    /**
                     * 获取<p>TWeSee 直传存储桶</p>
                     * @return StorageBucket <p>TWeSee 直传存储桶</p>
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
                     * 获取<p>TWeSee 直传目录路径</p>
                     * @return StoragePath <p>TWeSee 直传目录路径</p>
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                    /**
                     * 获取<p>TWeSee 直传存储地域</p>
                     * @return StorageRegion <p>TWeSee 直传存储地域</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                private:

                    /**
                     * <p>TWeSee 直传目录的 COS URI</p>
                     */
                    std::string m_cOSURI;
                    bool m_cOSURIHasBeenSet;

                    /**
                     * <p>TWeSee 直传存储桶</p>
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * <p>TWeSee 直传目录路径</p>
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * <p>TWeSee 直传存储地域</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEDIRECTUPLOADINFORESPONSE_H_
