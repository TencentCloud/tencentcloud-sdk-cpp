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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEEPERSONSRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEEPERSONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeePersonInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ListTWeSeePersons返回参数结构体
                */
                class ListTWeSeePersonsResponse : public AbstractModel
                {
                public:
                    ListTWeSeePersonsResponse();
                    ~ListTWeSeePersonsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次请求的分页数量
                     * @return Limit 本次请求的分页数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取本次请求的分页偏移
                     * @return Offset 本次请求的分页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取人员列表
                     * @return Persons 人员列表
                     * 
                     */
                    std::vector<SeePersonInfo> GetPersons() const;

                    /**
                     * 判断参数 Persons 是否已赋值
                     * @return Persons 是否已赋值
                     * 
                     */
                    bool PersonsHasBeenSet() const;

                    /**
                     * 获取符合条件的人员总数
                     * @return TotalCount 符合条件的人员总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 本次请求的分页数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 本次请求的分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 人员列表
                     */
                    std::vector<SeePersonInfo> m_persons;
                    bool m_personsHasBeenSet;

                    /**
                     * 符合条件的人员总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEEPERSONSRESPONSE_H_
