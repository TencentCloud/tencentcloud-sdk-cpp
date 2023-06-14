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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSREQUEST_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersReqPayload.h>
#include <tencentcloud/icr/v20211014/model/ReqMetadata.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * GetIndustryV1HomeMembers请求参数结构体
                */
                class GetIndustryV1HomeMembersRequest : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersRequest();
                    ~GetIndustryV1HomeMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Payload 无
                     * 
                     */
                    GetIndustryV1HomeMembersReqPayload GetPayload() const;

                    /**
                     * 设置无
                     * @param _payload 无
                     * 
                     */
                    void SetPayload(const GetIndustryV1HomeMembersReqPayload& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Metadata 无
                     * 
                     */
                    ReqMetadata GetMetadata() const;

                    /**
                     * 设置无
                     * @param _metadata 无
                     * 
                     */
                    void SetMetadata(const ReqMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    GetIndustryV1HomeMembersReqPayload m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 无
                     */
                    ReqMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSREQUEST_H_
