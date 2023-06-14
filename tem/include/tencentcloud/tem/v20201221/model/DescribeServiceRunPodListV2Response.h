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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBESERVICERUNPODLISTV2RESPONSE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBESERVICERUNPODLISTV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/DescribeRunPodPage.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DescribeServiceRunPodListV2返回参数结构体
                */
                class DescribeServiceRunPodListV2Response : public AbstractModel
                {
                public:
                    DescribeServiceRunPodListV2Response();
                    ~DescribeServiceRunPodListV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回结果
                     * @return Result 返回结果
                     * 
                     */
                    DescribeRunPodPage GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 返回结果
                     */
                    DescribeRunPodPage m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBESERVICERUNPODLISTV2RESPONSE_H_
