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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFAPILISTRESPONSE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFAPILISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MsApiArray.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * TsfApiListResponse
                */
                class TsfApiListResponse : public AbstractModel
                {
                public:
                    TsfApiListResponse();
                    ~TsfApiListResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取API 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content API 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MsApiArray> GetContent() const;

                    /**
                     * 设置API 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content API 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::vector<MsApiArray>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * API 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MsApiArray> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFAPILISTRESPONSE_H_
