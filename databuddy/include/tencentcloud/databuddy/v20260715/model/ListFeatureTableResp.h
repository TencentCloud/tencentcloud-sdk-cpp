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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFEATURETABLERESP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFEATURETABLERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FeatureTable.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListFeatureTableResp返回
                */
                class ListFeatureTableResp : public AbstractModel
                {
                public:
                    ListFeatureTableResp();
                    ~ListFeatureTableResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const std::string& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FeatureTable> GetItems() const;

                    /**
                     * 设置返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<FeatureTable>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取下一页token，为空表示没有更多数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextPageToken 下一页token，为空表示没有更多数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextPageToken() const;

                    /**
                     * 设置下一页token，为空表示没有更多数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextPageToken 下一页token，为空表示没有更多数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextPageToken(const std::string& _nextPageToken);

                    /**
                     * 判断参数 NextPageToken 是否已赋值
                     * @return NextPageToken 是否已赋值
                     * 
                     */
                    bool NextPageTokenHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FeatureTable> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 下一页token，为空表示没有更多数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextPageToken;
                    bool m_nextPageTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFEATURETABLERESP_H_
