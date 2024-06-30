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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/OccupiedSeal.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeOrganizationSeals返回参数结构体
                */
                class ChannelDescribeOrganizationSealsResponse : public AbstractModel
                {
                public:
                    ChannelDescribeOrganizationSealsResponse();
                    ~ChannelDescribeOrganizationSealsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取在设定了SealId时，返回值为0或1；若未设定SealId，则返回公司的总印章数量
                     * @return TotalCount 在设定了SealId时，返回值为0或1；若未设定SealId，则返回公司的总印章数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询到的印章结果数组
                     * @return Seals 查询到的印章结果数组
                     * 
                     */
                    std::vector<OccupiedSeal> GetSeals() const;

                    /**
                     * 判断参数 Seals 是否已赋值
                     * @return Seals 是否已赋值
                     * 
                     */
                    bool SealsHasBeenSet() const;

                private:

                    /**
                     * 在设定了SealId时，返回值为0或1；若未设定SealId，则返回公司的总印章数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询到的印章结果数组
                     */
                    std::vector<OccupiedSeal> m_seals;
                    bool m_sealsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSRESPONSE_H_
