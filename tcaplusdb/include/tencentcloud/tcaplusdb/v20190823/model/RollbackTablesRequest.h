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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * RollbackTables请求参数结构体
                */
                class RollbackTablesRequest : public AbstractModel
                {
                public:
                    RollbackTablesRequest();
                    ~RollbackTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待回档表所在应用实例ID
                     * @return ApplicationId 待回档表所在应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置待回档表所在应用实例ID
                     * @param ApplicationId 待回档表所在应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取待回档表列表
                     * @return SelectedTables 待回档表列表
                     */
                    std::vector<SelectedTableInfo> GetSelectedTables() const;

                    /**
                     * 设置待回档表列表
                     * @param SelectedTables 待回档表列表
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfo>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取待回档时间
                     * @return RollbackTime 待回档时间
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置待回档时间
                     * @param RollbackTime 待回档时间
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取回档模式，支持：`KEYS`
                     * @return Mode 回档模式，支持：`KEYS`
                     */
                    std::string GetMode() const;

                    /**
                     * 设置回档模式，支持：`KEYS`
                     * @param Mode 回档模式，支持：`KEYS`
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 待回档表所在应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 待回档表列表
                     */
                    std::vector<SelectedTableInfo> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * 待回档时间
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * 回档模式，支持：`KEYS`
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESREQUEST_H_
