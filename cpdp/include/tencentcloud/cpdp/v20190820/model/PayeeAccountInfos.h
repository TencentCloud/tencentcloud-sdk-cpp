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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTINFOS_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/PayeeAccountInfoResult.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 账户信息列表
                */
                class PayeeAccountInfos : public AbstractModel
                {
                public:
                    PayeeAccountInfos();
                    ~PayeeAccountInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PayeeAccountInfoResult> GetList() const;

                    /**
                     * 设置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<PayeeAccountInfoResult>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PayeeAccountInfoResult> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTINFOS_H_
