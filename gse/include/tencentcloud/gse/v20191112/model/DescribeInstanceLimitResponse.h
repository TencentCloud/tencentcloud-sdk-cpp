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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEINSTANCELIMITRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEINSTANCELIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/ExtraInfos.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeInstanceLimit返回参数结构体
                */
                class DescribeInstanceLimitResponse : public AbstractModel
                {
                public:
                    DescribeInstanceLimitResponse();
                    ~DescribeInstanceLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取限额
                     * @return Limit 限额
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取详细信息
                     * @return ExtraInfos 详细信息
                     * 
                     */
                    std::vector<ExtraInfos> GetExtraInfos() const;

                    /**
                     * 判断参数 ExtraInfos 是否已赋值
                     * @return ExtraInfos 是否已赋值
                     * 
                     */
                    bool ExtraInfosHasBeenSet() const;

                private:

                    /**
                     * 限额
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 详细信息
                     */
                    std::vector<ExtraInfos> m_extraInfos;
                    bool m_extraInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEINSTANCELIMITRESPONSE_H_
