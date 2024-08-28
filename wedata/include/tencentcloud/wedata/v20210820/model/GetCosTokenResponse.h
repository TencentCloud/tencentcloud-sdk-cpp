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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CosTokenResponse.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetCosToken返回参数结构体
                */
                class GetCosTokenResponse : public AbstractModel
                {
                public:
                    GetCosTokenResponse();
                    ~GetCosTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cos地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region cos地域
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
                     * 获取Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosTokenResponse GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket 桶名
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
                     * 获取终止点（针对私有云环境）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPoint 终止点（针对私有云环境）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndPoint() const;

                    /**
                     * 判断参数 EndPoint 是否已赋值
                     * @return EndPoint 是否已赋值
                     * 
                     */
                    bool EndPointHasBeenSet() const;

                private:

                    /**
                     * cos地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosTokenResponse m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 终止点（针对私有云环境）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endPoint;
                    bool m_endPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETCOSTOKENRESPONSE_H_
