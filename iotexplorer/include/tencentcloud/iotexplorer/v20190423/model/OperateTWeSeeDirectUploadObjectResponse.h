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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OPERATETWESEEDIRECTUPLOADOBJECTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OPERATETWESEEDIRECTUPLOADOBJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectListing.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectMetadata.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * OperateTWeSeeDirectUploadObject返回参数结构体
                */
                class OperateTWeSeeDirectUploadObjectResponse : public AbstractModel
                {
                public:
                    OperateTWeSeeDirectUploadObjectResponse();
                    ~OperateTWeSeeDirectUploadObjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对象列举结果
                     * @return ListingResponse 对象列举结果
                     * 
                     */
                    SeeObjectListing GetListingResponse() const;

                    /**
                     * 判断参数 ListingResponse 是否已赋值
                     * @return ListingResponse 是否已赋值
                     * 
                     */
                    bool ListingResponseHasBeenSet() const;

                    /**
                     * 获取对象元数据
                     * @return ObjectResponse 对象元数据
                     * 
                     */
                    SeeObjectMetadata GetObjectResponse() const;

                    /**
                     * 判断参数 ObjectResponse 是否已赋值
                     * @return ObjectResponse 是否已赋值
                     * 
                     */
                    bool ObjectResponseHasBeenSet() const;

                    /**
                     * 获取操作结果状态码
                     * @return Status 操作结果状态码
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 对象列举结果
                     */
                    SeeObjectListing m_listingResponse;
                    bool m_listingResponseHasBeenSet;

                    /**
                     * 对象元数据
                     */
                    SeeObjectMetadata m_objectResponse;
                    bool m_objectResponseHasBeenSet;

                    /**
                     * 操作结果状态码
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OPERATETWESEEDIRECTUPLOADOBJECTRESPONSE_H_
