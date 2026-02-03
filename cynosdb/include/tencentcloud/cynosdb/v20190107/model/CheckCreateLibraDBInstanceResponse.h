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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKCREATELIBRADBINSTANCERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKCREATELIBRADBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CheckItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CheckCreateLibraDBInstance返回参数结构体
                */
                class CheckCreateLibraDBInstanceResponse : public AbstractModel
                {
                public:
                    CheckCreateLibraDBInstanceResponse();
                    ~CheckCreateLibraDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取整体校验状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 整体校验状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取校验项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckItem 校验项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CheckItem> GetCheckItem() const;

                    /**
                     * 判断参数 CheckItem 是否已赋值
                     * @return CheckItem 是否已赋值
                     * 
                     */
                    bool CheckItemHasBeenSet() const;

                private:

                    /**
                     * 整体校验状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 校验项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CheckItem> m_checkItem;
                    bool m_checkItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKCREATELIBRADBINSTANCERESPONSE_H_
