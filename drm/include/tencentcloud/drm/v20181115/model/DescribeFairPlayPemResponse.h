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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEFAIRPLAYPEMRESPONSE_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEFAIRPLAYPEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/drm/v20181115/model/FairPlayPemDigestInfo.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeFairPlayPem返回参数结构体
                */
                class DescribeFairPlayPemResponse : public AbstractModel
                {
                public:
                    DescribeFairPlayPemResponse();
                    ~DescribeFairPlayPemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该账户下，所有设置的FairPlay私钥摘要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FairPlayPems 该账户下，所有设置的FairPlay私钥摘要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FairPlayPemDigestInfo> GetFairPlayPems() const;

                    /**
                     * 判断参数 FairPlayPems 是否已赋值
                     * @return FairPlayPems 是否已赋值
                     * 
                     */
                    bool FairPlayPemsHasBeenSet() const;

                private:

                    /**
                     * 该账户下，所有设置的FairPlay私钥摘要信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FairPlayPemDigestInfo> m_fairPlayPems;
                    bool m_fairPlayPemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEFAIRPLAYPEMRESPONSE_H_
