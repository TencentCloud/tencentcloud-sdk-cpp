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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyJavaMemShellsStatus请求参数结构体
                */
                class ModifyJavaMemShellsStatusRequest : public AbstractModel
                {
                public:
                    ModifyJavaMemShellsStatusRequest();
                    ~ModifyJavaMemShellsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标处理状态： 0 - 待处理 1 - 已加白 2 - 已删除 3 - 已忽略 4 - 已手动处理
                     * @return Status 目标处理状态： 0 - 待处理 1 - 已加白 2 - 已删除 3 - 已忽略 4 - 已手动处理
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置目标处理状态： 0 - 待处理 1 - 已加白 2 - 已删除 3 - 已忽略 4 - 已手动处理
                     * @param _status 目标处理状态： 0 - 待处理 1 - 已加白 2 - 已删除 3 - 已忽略 4 - 已手动处理
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件Id数组
                     * @return Ids 事件Id数组
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置事件Id数组
                     * @param _ids 事件Id数组
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取是否更新全部，只支持忽略、已处理、删除
                     * @return UpdateAll 是否更新全部，只支持忽略、已处理、删除
                     * 
                     */
                    bool GetUpdateAll() const;

                    /**
                     * 设置是否更新全部，只支持忽略、已处理、删除
                     * @param _updateAll 是否更新全部，只支持忽略、已处理、删除
                     * 
                     */
                    void SetUpdateAll(const bool& _updateAll);

                    /**
                     * 判断参数 UpdateAll 是否已赋值
                     * @return UpdateAll 是否已赋值
                     * 
                     */
                    bool UpdateAllHasBeenSet() const;

                private:

                    /**
                     * 目标处理状态： 0 - 待处理 1 - 已加白 2 - 已删除 3 - 已忽略 4 - 已手动处理
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件Id数组
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 是否更新全部，只支持忽略、已处理、删除
                     */
                    bool m_updateAll;
                    bool m_updateAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLSSTATUSREQUEST_H_
