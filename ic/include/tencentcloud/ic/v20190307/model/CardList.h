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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_CARDLIST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_CARDLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ic/v20190307/model/CardInfo.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 卡片列表数据
                */
                class CardList : public AbstractModel
                {
                public:
                    CardList();
                    ~CardList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡片总数
                     * @return Total 卡片总数
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置卡片总数
                     * @param _total 卡片总数
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取卡片列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 卡片列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CardInfo> GetList() const;

                    /**
                     * 设置卡片列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 卡片列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<CardInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 卡片总数
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 卡片列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CardInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_CARDLIST_H_
