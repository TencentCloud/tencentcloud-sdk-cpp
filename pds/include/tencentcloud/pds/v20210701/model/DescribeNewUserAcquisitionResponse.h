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

#ifndef TENCENTCLOUD_PDS_V20210701_MODEL_DESCRIBENEWUSERACQUISITIONRESPONSE_H_
#define TENCENTCLOUD_PDS_V20210701_MODEL_DESCRIBENEWUSERACQUISITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pds/v20210701/model/Score.h>


namespace TencentCloud
{
    namespace Pds
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeNewUserAcquisition返回参数结构体
                */
                class DescribeNewUserAcquisitionResponse : public AbstractModel
                {
                public:
                    DescribeNewUserAcquisitionResponse();
                    ~DescribeNewUserAcquisitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信誉分，1-5从低到高
                     * @return ServiceRsp 用户信誉分，1-5从低到高
                     * 
                     */
                    Score GetServiceRsp() const;

                    /**
                     * 判断参数 ServiceRsp 是否已赋值
                     * @return ServiceRsp 是否已赋值
                     * 
                     */
                    bool ServiceRspHasBeenSet() const;

                private:

                    /**
                     * 用户信誉分，1-5从低到高
                     */
                    Score m_serviceRsp;
                    bool m_serviceRspHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PDS_V20210701_MODEL_DESCRIBENEWUSERACQUISITIONRESPONSE_H_
