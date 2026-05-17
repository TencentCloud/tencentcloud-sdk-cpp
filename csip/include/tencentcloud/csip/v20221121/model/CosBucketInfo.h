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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos存储桶详情信息
                */
                class CosBucketInfo : public AbstractModel
                {
                public:
                    CosBucketInfo();
                    ~CosBucketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取存储桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketName 存储桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置存储桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketName 存储桶名
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
                     * 获取地域信息
                     * @return BucketRegion 地域信息
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置地域信息
                     * @param _bucketRegion 地域信息
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
                     * 获取地域码值
                     * @return BucketRegionCode 地域码值
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置地域码值
                     * @param _bucketRegionCode 地域码值
                     * 
                     */
                    void SetBucketRegionCode(const std::string& _bucketRegionCode);

                    /**
                     * 判断参数 BucketRegionCode 是否已赋值
                     * @return BucketRegionCode 是否已赋值
                     * 
                     */
                    bool BucketRegionCodeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return BucketMarker 备注
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置备注
                     * @param _bucketMarker 备注
                     * 
                     */
                    void SetBucketMarker(const std::string& _bucketMarker);

                    /**
                     * 判断参数 BucketMarker 是否已赋值
                     * @return BucketMarker 是否已赋值
                     * 
                     */
                    bool BucketMarkerHasBeenSet() const;

                private:

                    /**
                     * appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 存储桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 地域码值
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETINFO_H_
