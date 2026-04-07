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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/FailedInstance.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceChargeType返回参数结构体
                */
                class ModifyInstanceChargeTypeResponse : public AbstractModel
                {
                public:
                    ModifyInstanceChargeTypeResponse();
                    ~ModifyInstanceChargeTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>修改失败的实例信息汇总</p>
                     * @return FailedInstanceIds <p>修改失败的实例信息汇总</p>
                     * 
                     */
                    std::vector<FailedInstance> GetFailedInstanceIds() const;

                    /**
                     * 判断参数 FailedInstanceIds 是否已赋值
                     * @return FailedInstanceIds 是否已赋值
                     * 
                     */
                    bool FailedInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>修改失败的实例信息汇总</p>
                     */
                    std::vector<FailedInstance> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPERESPONSE_H_
