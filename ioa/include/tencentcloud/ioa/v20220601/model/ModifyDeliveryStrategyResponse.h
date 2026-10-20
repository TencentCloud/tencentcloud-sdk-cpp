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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/ModifyDeliveryStrategyData.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyDeliveryStrategy返回参数结构体
                */
                class ModifyDeliveryStrategyResponse : public AbstractModel
                {
                public:
                    ModifyDeliveryStrategyResponse();
                    ~ModifyDeliveryStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略返回内容</p>
                     * @return Data <p>策略返回内容</p>
                     * 
                     */
                    ModifyDeliveryStrategyData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>策略返回内容</p>
                     */
                    ModifyDeliveryStrategyData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSTRATEGYRESPONSE_H_
