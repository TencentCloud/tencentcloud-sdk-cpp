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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEPRIVILEGEEVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEPRIVILEGEEVENTSREQUEST_H_

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
                * DeletePrivilegeEvents请求参数结构体
                */
                class DeletePrivilegeEventsRequest : public AbstractModel
                {
                public:
                    DeletePrivilegeEventsRequest();
                    ~DeletePrivilegeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID数组. (最大100条)
                     * @return Ids ID数组. (最大100条)
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置ID数组. (最大100条)
                     * @param _ids ID数组. (最大100条)
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
                     * 获取是否删除全部
                     * @return All 是否删除全部
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否删除全部
                     * @param _all 是否删除全部
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
                     * ID数组. (最大100条)
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 是否删除全部
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEPRIVILEGEEVENTSREQUEST_H_
