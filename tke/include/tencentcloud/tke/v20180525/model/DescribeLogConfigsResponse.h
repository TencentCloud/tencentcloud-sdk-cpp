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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeLogConfigs返回参数结构体
                */
                class DescribeLogConfigsResponse : public AbstractModel
                {
                public:
                    DescribeLogConfigsResponse();
                    ~DescribeLogConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查找时返回采集规则总数
                     * @return Total 分页查找时返回采集规则总数
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
                     * 获取指定采集规则名称查找，部分失败时返回失败采集规则名称及最后一个失败原因
                     * @return Message 指定采集规则名称查找，部分失败时返回失败采集规则名称及最后一个失败原因
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取采集规则查询结果
                     * @return LogConfigs 采集规则查询结果
                     * 
                     */
                    std::string GetLogConfigs() const;

                    /**
                     * 判断参数 LogConfigs 是否已赋值
                     * @return LogConfigs 是否已赋值
                     * 
                     */
                    bool LogConfigsHasBeenSet() const;

                private:

                    /**
                     * 分页查找时返回采集规则总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 指定采集规则名称查找，部分失败时返回失败采集规则名称及最后一个失败原因
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 采集规则查询结果
                     */
                    std::string m_logConfigs;
                    bool m_logConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSRESPONSE_H_
