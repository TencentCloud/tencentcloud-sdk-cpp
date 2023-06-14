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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBETRAJECTORYDATARESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBETRAJECTORYDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/TrajectorySunData.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeTrajectoryData返回参数结构体
                */
                class DescribeTrajectoryDataResponse : public AbstractModel
                {
                public:
                    DescribeTrajectoryDataResponse();
                    ~DescribeTrajectoryDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取店铺ID
                     * @return ShopId 店铺ID
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取总人数
                     * @return TotalPerson 总人数
                     * 
                     */
                    int64_t GetTotalPerson() const;

                    /**
                     * 判断参数 TotalPerson 是否已赋值
                     * @return TotalPerson 是否已赋值
                     * 
                     */
                    bool TotalPersonHasBeenSet() const;

                    /**
                     * 获取总动迹数目
                     * @return TotalTrajectory 总动迹数目
                     * 
                     */
                    int64_t GetTotalTrajectory() const;

                    /**
                     * 判断参数 TotalTrajectory 是否已赋值
                     * @return TotalTrajectory 是否已赋值
                     * 
                     */
                    bool TotalTrajectoryHasBeenSet() const;

                    /**
                     * 获取返回动迹中的总人数
                     * @return Person 返回动迹中的总人数
                     * 
                     */
                    int64_t GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取返回动迹的数目
                     * @return Trajectory 返回动迹的数目
                     * 
                     */
                    int64_t GetTrajectory() const;

                    /**
                     * 判断参数 Trajectory 是否已赋值
                     * @return Trajectory 是否已赋值
                     * 
                     */
                    bool TrajectoryHasBeenSet() const;

                    /**
                     * 获取返回动迹的具体信息
                     * @return Data 返回动迹的具体信息
                     * 
                     */
                    std::vector<TrajectorySunData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺ID
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 总人数
                     */
                    int64_t m_totalPerson;
                    bool m_totalPersonHasBeenSet;

                    /**
                     * 总动迹数目
                     */
                    int64_t m_totalTrajectory;
                    bool m_totalTrajectoryHasBeenSet;

                    /**
                     * 返回动迹中的总人数
                     */
                    int64_t m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 返回动迹的数目
                     */
                    int64_t m_trajectory;
                    bool m_trajectoryHasBeenSet;

                    /**
                     * 返回动迹的具体信息
                     */
                    std::vector<TrajectorySunData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBETRAJECTORYDATARESPONSE_H_
