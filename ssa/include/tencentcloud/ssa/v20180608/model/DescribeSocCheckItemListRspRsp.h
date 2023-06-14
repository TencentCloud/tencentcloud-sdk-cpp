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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKITEMLISTRSPRSP_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKITEMLISTRSPRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SocCheckItemV1.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云安全配置检查项列表
                */
                class DescribeSocCheckItemListRspRsp : public AbstractModel
                {
                public:
                    DescribeSocCheckItemListRspRsp();
                    ~DescribeSocCheckItemListRspRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 检查项详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SocCheckItemV1> GetList() const;

                    /**
                     * 设置检查项详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 检查项详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<SocCheckItemV1>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取检查项总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 检查项总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置检查项总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 检查项总数
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

                private:

                    /**
                     * 检查项详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SocCheckItemV1> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 检查项总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKITEMLISTRSPRSP_H_
