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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSEEVENTSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSEEVENTSSTATUSREQUEST_H_

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
                * ModifyRansomDefenseEventsStatus请求参数结构体
                */
                class ModifyRansomDefenseEventsStatusRequest : public AbstractModel
                {
                public:
                    ModifyRansomDefenseEventsStatusRequest();
                    ~ModifyRansomDefenseEventsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的事件id 数组，支持批量
                     * @return Ids 需要修改的事件id 数组，支持批量
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置需要修改的事件id 数组，支持批量
                     * @param _ids 需要修改的事件id 数组，支持批量
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
                     * 获取操作 0待处理，1已处理,2信任,9:删除记录
                     * @return Status 操作 0待处理，1已处理,2信任,9:删除记录
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置操作 0待处理，1已处理,2信任,9:删除记录
                     * @param _status 操作 0待处理，1已处理,2信任,9:删除记录
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
                     * 获取是否更新所有同路径事件
                     * @return All 是否更新所有同路径事件
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否更新所有同路径事件
                     * @param _all 是否更新所有同路径事件
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                private:

                    /**
                     * 需要修改的事件id 数组，支持批量
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 操作 0待处理，1已处理,2信任,9:删除记录
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否更新所有同路径事件
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSEEVENTSSTATUSREQUEST_H_
