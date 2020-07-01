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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_QUERYACTIVITYANTIRUSHADVANCEDRESPONSE_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_QUERYACTIVITYANTIRUSHADVANCEDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aa/v20200224/model/OutputActivityAntiRushAdvanced.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * QueryActivityAntiRushAdvanced返回参数结构体
                */
                class QueryActivityAntiRushAdvancedResponse : public AbstractModel
                {
                public:
                    QueryActivityAntiRushAdvancedResponse();
                    ~QueryActivityAntiRushAdvancedResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取结果信息
                     * @return Data 结果信息
                     */
                    OutputActivityAntiRushAdvanced GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 结果信息
                     */
                    OutputActivityAntiRushAdvanced m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_QUERYACTIVITYANTIRUSHADVANCEDRESPONSE_H_
