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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTFAILEDPAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTFAILEDPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 文档解析失败记录
                */
                class ReconstructDocumentFailedPage : public AbstractModel
                {
                public:
                    ReconstructDocumentFailedPage();
                    ~ReconstructDocumentFailedPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取失败页码	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 失败页码	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置失败页码	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 失败页码	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 失败页码	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTFAILEDPAGE_H_
