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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Stat.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeTokenUsageGraph返回参数结构体
                */
                class DescribeTokenUsageGraphResponse : public AbstractModel
                {
                public:
                    DescribeTokenUsageGraphResponse();
                    ~DescribeTokenUsageGraphResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token消耗总量
                     * @return Total Token消耗总量
                     * 
                     */
                    std::vector<Stat> GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取输入Token消耗量
                     * @return Input 输入Token消耗量
                     * 
                     */
                    std::vector<Stat> GetInput() const;

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取输出Token消耗量
                     * @return Output 输出Token消耗量
                     * 
                     */
                    std::vector<Stat> GetOutput() const;

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Token消耗总量
                     */
                    std::vector<Stat> m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 输入Token消耗量
                     */
                    std::vector<Stat> m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 输出Token消耗量
                     */
                    std::vector<Stat> m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHRESPONSE_H_
