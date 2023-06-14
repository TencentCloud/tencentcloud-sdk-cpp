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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPONSE_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/icr/v20211014/model/RspMetadata.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespPayload.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * GetIndustryV1HomeMembers返回参数结构体
                */
                class GetIndustryV1HomeMembersResponse : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersResponse();
                    ~GetIndustryV1HomeMembersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RspMetadata GetMetadata() const;

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Payload 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GetIndustryV1HomeMembersRespPayload GetPayload() const;

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RspMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GetIndustryV1HomeMembersRespPayload m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPONSE_H_
