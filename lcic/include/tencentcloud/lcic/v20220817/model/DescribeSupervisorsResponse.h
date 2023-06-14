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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeSupervisors返回参数结构体
                */
                class DescribeSupervisorsResponse : public AbstractModel
                {
                public:
                    DescribeSupervisorsResponse();
                    ~DescribeSupervisorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据总量
                     * @return Total 数据总量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取分页查询当前页数
                     * @return Page 分页查询当前页数
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取当前页数据量
                     * @return Limit 当前页数据量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取巡课列表
                     * @return UserIds 巡课列表
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * 数据总量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分页查询当前页数
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 当前页数据量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 巡课列表
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSRESPONSE_H_
