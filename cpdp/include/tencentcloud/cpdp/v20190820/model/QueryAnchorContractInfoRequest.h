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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYANCHORCONTRACTINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYANCHORCONTRACTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryAnchorContractInfo请求参数结构体
                */
                class QueryAnchorContractInfoRequest : public AbstractModel
                {
                public:
                    QueryAnchorContractInfoRequest();
                    ~QueryAnchorContractInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间，格式为yyyy-MM-dd
                     * @return BeginTime 起始时间，格式为yyyy-MM-dd
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置起始时间，格式为yyyy-MM-dd
                     * @param _beginTime 起始时间，格式为yyyy-MM-dd
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取起始时间，格式为yyyy-MM-dd
                     * @return EndTime 起始时间，格式为yyyy-MM-dd
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置起始时间，格式为yyyy-MM-dd
                     * @param _endTime 起始时间，格式为yyyy-MM-dd
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 起始时间，格式为yyyy-MM-dd
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 起始时间，格式为yyyy-MM-dd
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYANCHORCONTRACTINFOREQUEST_H_
