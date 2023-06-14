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

#ifndef TENCENTCLOUD_PDS_V20210701_MODEL_DESCRIBESTOCKESTIMATIONREQUEST_H_
#define TENCENTCLOUD_PDS_V20210701_MODEL_DESCRIBESTOCKESTIMATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pds/v20210701/model/UserInfos.h>


namespace TencentCloud
{
    namespace Pds
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeStockEstimation请求参数结构体
                */
                class DescribeStockEstimationRequest : public AbstractModel
                {
                public:
                    DescribeStockEstimationRequest();
                    ~DescribeStockEstimationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息
                     * @return ServiceParams 用户信息
                     * 
                     */
                    UserInfos GetServiceParams() const;

                    /**
                     * 设置用户信息
                     * @param _serviceParams 用户信息
                     * 
                     */
                    void SetServiceParams(const UserInfos& _serviceParams);

                    /**
                     * 判断参数 ServiceParams 是否已赋值
                     * @return ServiceParams 是否已赋值
                     * 
                     */
                    bool ServiceParamsHasBeenSet() const;

                private:

                    /**
                     * 用户信息
                     */
                    UserInfos m_serviceParams;
                    bool m_serviceParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PDS_V20210701_MODEL_DESCRIBESTOCKESTIMATIONREQUEST_H_
