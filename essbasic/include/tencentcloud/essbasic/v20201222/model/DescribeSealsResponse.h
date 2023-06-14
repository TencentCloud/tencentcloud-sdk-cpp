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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESEALSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESEALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Seal.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeSeals返回参数结构体
                */
                class DescribeSealsResponse : public AbstractModel
                {
                public:
                    DescribeSealsResponse();
                    ~DescribeSealsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取印章信息
                     * @return Seals 印章信息
                     * 
                     */
                    std::vector<Seal> GetSeals() const;

                    /**
                     * 判断参数 Seals 是否已赋值
                     * @return Seals 是否已赋值
                     * 
                     */
                    bool SealsHasBeenSet() const;

                private:

                    /**
                     * 印章信息
                     */
                    std::vector<Seal> m_seals;
                    bool m_sealsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESEALSRESPONSE_H_
