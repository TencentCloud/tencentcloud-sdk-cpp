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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/DocumentInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeDocumentsByRoom返回参数结构体
                */
                class DescribeDocumentsByRoomResponse : public AbstractModel
                {
                public:
                    DescribeDocumentsByRoomResponse();
                    ~DescribeDocumentsByRoomResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文档信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Documents 文档信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DocumentInfo> GetDocuments() const;

                    /**
                     * 判断参数 Documents 是否已赋值
                     * @return Documents 是否已赋值
                     * 
                     */
                    bool DocumentsHasBeenSet() const;

                    /**
                     * 获取符合查询条件文档总数
                     * @return Total 符合查询条件文档总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 文档信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DocumentInfo> m_documents;
                    bool m_documentsHasBeenSet;

                    /**
                     * 符合查询条件文档总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMRESPONSE_H_
