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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEBILLINGINFOREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEBILLINGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeBillingInfo请求参数结构体
                */
                class DescribeBillingInfoRequest : public AbstractModel
                {
                public:
                    DescribeBillingInfoRequest();
                    ~DescribeBillingInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>环境列表，当环境列表不为空时，查询的环境以该参数为准</p>
                     * @return EnvIds <p>环境列表，当环境列表不为空时，查询的环境以该参数为准</p>
                     * 
                     */
                    std::vector<std::string> GetEnvIds() const;

                    /**
                     * 设置<p>环境列表，当环境列表不为空时，查询的环境以该参数为准</p>
                     * @param _envIds <p>环境列表，当环境列表不为空时，查询的环境以该参数为准</p>
                     * 
                     */
                    void SetEnvIds(const std::vector<std::string>& _envIds);

                    /**
                     * 判断参数 EnvIds 是否已赋值
                     * @return EnvIds 是否已赋值
                     * 
                     */
                    bool EnvIdsHasBeenSet() const;

                    /**
                     * 获取<p>每页条数（用于拉取列表时分页）</p>
                     * @return Limit <p>每页条数（用于拉取列表时分页）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数（用于拉取列表时分页）</p>
                     * @param _limit <p>每页条数（用于拉取列表时分页）</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移</p>
                     * @return Offset <p>偏移</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移</p>
                     * @param _offset <p>偏移</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>环境列表，当环境列表不为空时，查询的环境以该参数为准</p>
                     */
                    std::vector<std::string> m_envIds;
                    bool m_envIdsHasBeenSet;

                    /**
                     * <p>每页条数（用于拉取列表时分页）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEBILLINGINFOREQUEST_H_
