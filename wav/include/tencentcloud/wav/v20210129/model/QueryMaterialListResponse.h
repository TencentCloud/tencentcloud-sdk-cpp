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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYMATERIALLISTRESPONSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYMATERIALLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/MaterialInfo.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryMaterialList返回参数结构体
                */
                class QueryMaterialListResponse : public AbstractModel
                {
                public:
                    QueryMaterialListResponse();
                    ~QueryMaterialListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页游标，再下次请求时填写以获取之后分页的记录，如果已经没有更多的数据则返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextCursor 分页游标，再下次请求时填写以获取之后分页的记录，如果已经没有更多的数据则返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取企业素材列表响应数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageData 企业素材列表响应数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MaterialInfo> GetPageData() const;

                    /**
                     * 判断参数 PageData 是否已赋值
                     * @return PageData 是否已赋值
                     * 
                     */
                    bool PageDataHasBeenSet() const;

                private:

                    /**
                     * 分页游标，再下次请求时填写以获取之后分页的记录，如果已经没有更多的数据则返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * 企业素材列表响应数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MaterialInfo> m_pageData;
                    bool m_pageDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYMATERIALLISTRESPONSE_H_
