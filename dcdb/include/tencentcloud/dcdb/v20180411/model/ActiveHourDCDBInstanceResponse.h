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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_ACTIVEHOURDCDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_ACTIVEHOURDCDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ActiveHourDCDBInstance返回参数结构体
                */
                class ActiveHourDCDBInstanceResponse : public AbstractModel
                {
                public:
                    ActiveHourDCDBInstanceResponse();
                    ~ActiveHourDCDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解隔离成功的实例id列表
                     * @return SuccessInstanceIds 解隔离成功的实例id列表
                     * 
                     */
                    std::vector<std::string> GetSuccessInstanceIds() const;

                    /**
                     * 判断参数 SuccessInstanceIds 是否已赋值
                     * @return SuccessInstanceIds 是否已赋值
                     * 
                     */
                    bool SuccessInstanceIdsHasBeenSet() const;

                    /**
                     * 获取解隔离失败的实例id列表
                     * @return FailedInstanceIds 解隔离失败的实例id列表
                     * 
                     */
                    std::vector<std::string> GetFailedInstanceIds() const;

                    /**
                     * 判断参数 FailedInstanceIds 是否已赋值
                     * @return FailedInstanceIds 是否已赋值
                     * 
                     */
                    bool FailedInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 解隔离成功的实例id列表
                     */
                    std::vector<std::string> m_successInstanceIds;
                    bool m_successInstanceIdsHasBeenSet;

                    /**
                     * 解隔离失败的实例id列表
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_ACTIVEHOURDCDBINSTANCERESPONSE_H_
