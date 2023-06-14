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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESDATAREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MergeTablesInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * MergeTablesData请求参数结构体
                */
                class MergeTablesDataRequest : public AbstractModel
                {
                public:
                    MergeTablesDataRequest();
                    ~MergeTablesDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取选取的表格
                     * @return SelectedTables 选取的表格
                     * 
                     */
                    std::vector<MergeTablesInfo> GetSelectedTables() const;

                    /**
                     * 设置选取的表格
                     * @param _selectedTables 选取的表格
                     * 
                     */
                    void SetSelectedTables(const std::vector<MergeTablesInfo>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取true只做对比，false既对比又执行
                     * @return IsOnlyCompare true只做对比，false既对比又执行
                     * 
                     */
                    bool GetIsOnlyCompare() const;

                    /**
                     * 设置true只做对比，false既对比又执行
                     * @param _isOnlyCompare true只做对比，false既对比又执行
                     * 
                     */
                    void SetIsOnlyCompare(const bool& _isOnlyCompare);

                    /**
                     * 判断参数 IsOnlyCompare 是否已赋值
                     * @return IsOnlyCompare 是否已赋值
                     * 
                     */
                    bool IsOnlyCompareHasBeenSet() const;

                private:

                    /**
                     * 选取的表格
                     */
                    std::vector<MergeTablesInfo> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * true只做对比，false既对比又执行
                     */
                    bool m_isOnlyCompare;
                    bool m_isOnlyCompareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESDATAREQUEST_H_
