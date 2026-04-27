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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APIKEYAUTHAPPLYVOLIST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APIKEYAUTHAPPLYVOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ApiKeyAuthApplyVO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ApiKey列表
                */
                class ApiKeyAuthApplyVOList : public AbstractModel
                {
                public:
                    ApiKeyAuthApplyVOList();
                    ~ApiKeyAuthApplyVOList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPages <p>页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 设置<p>页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPages <p>页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPages(const int64_t& _totalPages);

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取<p>列表数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List <p>列表数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiKeyAuthApplyVO> GetList() const;

                    /**
                     * 设置<p>列表数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list <p>列表数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<ApiKeyAuthApplyVO>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * <p>列表数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiKeyAuthApplyVO> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APIKEYAUTHAPPLYVOLIST_H_
