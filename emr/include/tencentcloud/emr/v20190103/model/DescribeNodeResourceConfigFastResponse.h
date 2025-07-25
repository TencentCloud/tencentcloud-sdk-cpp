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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODERESOURCECONFIGFASTRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODERESOURCECONFIGFASTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceConfig.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeResourceConfigFast返回参数结构体
                */
                class DescribeNodeResourceConfigFastResponse : public AbstractModel
                {
                public:
                    DescribeNodeResourceConfigFastResponse();
                    ~DescribeNodeResourceConfigFastResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeResourceConfig接口返回值
                     * @return Data DescribeResourceConfig接口返回值
                     * 
                     */
                    std::vector<DescribeResourceConfig> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * DescribeResourceConfig接口返回值
                     */
                    std::vector<DescribeResourceConfig> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODERESOURCECONFIGFASTRESPONSE_H_
