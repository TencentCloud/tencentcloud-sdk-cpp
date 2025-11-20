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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCESSLRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCESSLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeInstanceSSL返回参数结构体
                */
                class DescribeInstanceSSLResponse : public AbstractModel
                {
                public:
                    DescribeInstanceSSLResponse();
                    ~DescribeInstanceSSLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SSL开启状态。0为关闭，1为开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status SSL开启状态。0为关闭，1为开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书过期时间，格式为2023-05-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 证书过期时间，格式为2023-05-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取证书下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertUrl 证书下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertUrl() const;

                    /**
                     * 判断参数 CertUrl 是否已赋值
                     * @return CertUrl 是否已赋值
                     * 
                     */
                    bool CertUrlHasBeenSet() const;

                private:

                    /**
                     * SSL开启状态。0为关闭，1为开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书过期时间，格式为2023-05-01 12:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 证书下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certUrl;
                    bool m_certUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCESSLRESPONSE_H_
