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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL7RULESERRHEALTHRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL7RULESERRHEALTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeNewL7RulesErrHealth返回参数结构体
                */
                class DescribeNewL7RulesErrHealthResponse : public AbstractModel
                {
                public:
                    DescribeNewL7RulesErrHealthResponse();
                    ~DescribeNewL7RulesErrHealthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异常规则的总数
                     * @return Total 异常规则的总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取异常规则列表，返回值说明: Key值为规则ID，Value值为异常IP及错误信息，多个IP用","分割
                     * @return ErrHealths 异常规则列表，返回值说明: Key值为规则ID，Value值为异常IP及错误信息，多个IP用","分割
                     * 
                     */
                    std::vector<KeyValue> GetErrHealths() const;

                    /**
                     * 判断参数 ErrHealths 是否已赋值
                     * @return ErrHealths 是否已赋值
                     * 
                     */
                    bool ErrHealthsHasBeenSet() const;

                private:

                    /**
                     * 异常规则的总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 异常规则列表，返回值说明: Key值为规则ID，Value值为异常IP及错误信息，多个IP用","分割
                     */
                    std::vector<KeyValue> m_errHealths;
                    bool m_errHealthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL7RULESERRHEALTHRESPONSE_H_
