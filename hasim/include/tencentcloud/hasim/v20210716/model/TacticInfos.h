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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_TACTICINFOS_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_TACTICINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hasim/v20210716/model/Tactic.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 策略信息集合
                */
                class TacticInfos : public AbstractModel
                {
                public:
                    TacticInfos();
                    ~TacticInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总量
                     * @return Total 总量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总量
                     * @param _total 总量
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
                     * 获取策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tactic> GetList() const;

                    /**
                     * 设置策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<Tactic>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tactic> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_TACTICINFOS_H_
