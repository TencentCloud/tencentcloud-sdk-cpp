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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_ASSIGNCLIENTSTOSALESRESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_ASSIGNCLIENTSTOSALESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * AssignClientsToSales返回参数结构体
                */
                class AssignClientsToSalesResponse : public AbstractModel
                {
                public:
                    AssignClientsToSalesResponse();
                    ~AssignClientsToSalesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取处理成功的代客uin列表
                     * @return SucceedUins 处理成功的代客uin列表
                     * 
                     */
                    std::vector<std::string> GetSucceedUins() const;

                    /**
                     * 判断参数 SucceedUins 是否已赋值
                     * @return SucceedUins 是否已赋值
                     * 
                     */
                    bool SucceedUinsHasBeenSet() const;

                    /**
                     * 获取处理失败的代客uin列表
                     * @return FailedUins 处理失败的代客uin列表
                     * 
                     */
                    std::vector<std::string> GetFailedUins() const;

                    /**
                     * 判断参数 FailedUins 是否已赋值
                     * @return FailedUins 是否已赋值
                     * 
                     */
                    bool FailedUinsHasBeenSet() const;

                private:

                    /**
                     * 处理成功的代客uin列表
                     */
                    std::vector<std::string> m_succeedUins;
                    bool m_succeedUinsHasBeenSet;

                    /**
                     * 处理失败的代客uin列表
                     */
                    std::vector<std::string> m_failedUins;
                    bool m_failedUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_ASSIGNCLIENTSTOSALESRESPONSE_H_
