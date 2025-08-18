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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAMASKSTRATEGYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAMASKSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataMaskStrategyInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateDataMaskStrategy请求参数结构体
                */
                class UpdateDataMaskStrategyRequest : public AbstractModel
                {
                public:
                    UpdateDataMaskStrategyRequest();
                    ~UpdateDataMaskStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据脱敏策略详情
                     * @return Strategy 数据脱敏策略详情
                     * 
                     */
                    DataMaskStrategyInfo GetStrategy() const;

                    /**
                     * 设置数据脱敏策略详情
                     * @param _strategy 数据脱敏策略详情
                     * 
                     */
                    void SetStrategy(const DataMaskStrategyInfo& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                private:

                    /**
                     * 数据脱敏策略详情
                     */
                    DataMaskStrategyInfo m_strategy;
                    bool m_strategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAMASKSTRATEGYREQUEST_H_
