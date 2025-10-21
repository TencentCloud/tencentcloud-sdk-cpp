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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEDATAMASKSTRATEGYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEDATAMASKSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteDataMaskStrategy请求参数结构体
                */
                class DeleteDataMaskStrategyRequest : public AbstractModel
                {
                public:
                    DeleteDataMaskStrategyRequest();
                    ~DeleteDataMaskStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据脱敏策略Id
                     * @return StrategyId 数据脱敏策略Id
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置数据脱敏策略Id
                     * @param _strategyId 数据脱敏策略Id
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * 数据脱敏策略Id
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEDATAMASKSTRATEGYREQUEST_H_
