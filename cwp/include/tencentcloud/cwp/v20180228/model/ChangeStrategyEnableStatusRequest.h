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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHANGESTRATEGYENABLESTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHANGESTRATEGYENABLESTATUSREQUEST_H_

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
                * ChangeStrategyEnableStatus请求参数结构体
                */
                class ChangeStrategyEnableStatusRequest : public AbstractModel
                {
                public:
                    ChangeStrategyEnableStatusRequest();
                    ~ChangeStrategyEnableStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线策略id
                     * @return StrategyId 基线策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置基线策略id
                     * @param _strategyId 基线策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取开关状态
                     * @return Status 开关状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开关状态
                     * @param _status 开关状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 基线策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 开关状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHANGESTRATEGYENABLESTATUSREQUEST_H_
