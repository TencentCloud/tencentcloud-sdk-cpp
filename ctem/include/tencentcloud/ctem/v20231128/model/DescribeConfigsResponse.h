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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBECONFIGSRESPONSE_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBECONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayConfig.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DescribeConfigs返回参数结构体
                */
                class DescribeConfigsResponse : public AbstractModel
                {
                public:
                    DescribeConfigsResponse();
                    ~DescribeConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取数组
                     * @return List 数组
                     * 
                     */
                    std::vector<DisplayConfig> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取全部路径数量
                     * @return AllConfigNum 全部路径数量
                     * 
                     */
                    int64_t GetAllConfigNum() const;

                    /**
                     * 判断参数 AllConfigNum 是否已赋值
                     * @return AllConfigNum 是否已赋值
                     * 
                     */
                    bool AllConfigNumHasBeenSet() const;

                    /**
                     * 获取高风险路径数量
                     * @return HighRiskConfigNum 高风险路径数量
                     * 
                     */
                    int64_t GetHighRiskConfigNum() const;

                    /**
                     * 判断参数 HighRiskConfigNum 是否已赋值
                     * @return HighRiskConfigNum 是否已赋值
                     * 
                     */
                    bool HighRiskConfigNumHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 数组
                     */
                    std::vector<DisplayConfig> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 全部路径数量
                     */
                    int64_t m_allConfigNum;
                    bool m_allConfigNumHasBeenSet;

                    /**
                     * 高风险路径数量
                     */
                    int64_t m_highRiskConfigNum;
                    bool m_highRiskConfigNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBECONFIGSRESPONSE_H_
