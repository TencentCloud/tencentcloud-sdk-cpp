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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LISTTABLESRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LISTTABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/TableInfo.h>
#include <tencentcloud/tcb/v20180608/model/Pager.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ListTables返回参数结构体
                */
                class ListTablesResponse : public AbstractModel
                {
                public:
                    ListTablesResponse();
                    ~ListTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tables 表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableInfo> GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取分页信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pager 分页信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Pager GetPager() const;

                    /**
                     * 判断参数 Pager 是否已赋值
                     * @return Pager 是否已赋值
                     * 
                     */
                    bool PagerHasBeenSet() const;

                private:

                    /**
                     * 表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableInfo> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 分页信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Pager m_pager;
                    bool m_pagerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LISTTABLESRESPONSE_H_
