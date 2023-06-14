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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_LINKINFOS_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_LINKINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hasim/v20210716/model/LinkInfo.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 云兔连接信息集合
                */
                class LinkInfos : public AbstractModel
                {
                public:
                    LinkInfos();
                    ~LinkInfos() = default;
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
                     * 获取云兔连接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 云兔连接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LinkInfo> GetList() const;

                    /**
                     * 设置云兔连接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 云兔连接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<LinkInfo>& _list);

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
                     * 云兔连接列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LinkInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_LINKINFOS_H_
