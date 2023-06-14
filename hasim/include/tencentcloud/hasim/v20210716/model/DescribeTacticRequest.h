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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBETACTICREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBETACTICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DescribeTactic请求参数结构体
                */
                class DescribeTacticRequest : public AbstractModel
                {
                public:
                    DescribeTacticRequest();
                    ~DescribeTacticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID
                     * @return TacticID 策略ID
                     * 
                     */
                    int64_t GetTacticID() const;

                    /**
                     * 设置策略ID
                     * @param _tacticID 策略ID
                     * 
                     */
                    void SetTacticID(const int64_t& _tacticID);

                    /**
                     * 判断参数 TacticID 是否已赋值
                     * @return TacticID 是否已赋值
                     * 
                     */
                    bool TacticIDHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    int64_t m_tacticID;
                    bool m_tacticIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBETACTICREQUEST_H_
