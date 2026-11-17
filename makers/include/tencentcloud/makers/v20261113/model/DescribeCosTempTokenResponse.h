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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBECOSTEMPTOKENRESPONSE_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBECOSTEMPTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/CosCredentials.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeCosTempToken返回参数结构体
                */
                class DescribeCosTempTokenResponse : public AbstractModel
                {
                public:
                    DescribeCosTempTokenResponse();
                    ~DescribeCosTempTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>COS 桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket <p>COS 桶</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>COS 地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>COS 地域</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>上传路径，格式 appId/projectName/时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetPath <p>上传路径，格式 appId/projectName/时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                    /**
                     * 获取<p>临时密钥过期时间，Unix 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime <p>临时密钥过期时间，Unix 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>临时密钥过期时间，ISO 8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expiration <p>临时密钥过期时间，ISO 8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取<p>临时密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Credentials <p>临时密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosCredentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                private:

                    /**
                     * <p>COS 桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>COS 地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>上传路径，格式 appId/projectName/时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>临时密钥过期时间，Unix 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>临时密钥过期时间，ISO 8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * <p>临时密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosCredentials m_credentials;
                    bool m_credentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBECOSTEMPTOKENRESPONSE_H_
