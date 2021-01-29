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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCHAINCODEINITIALIZERESULTFORUSERRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCHAINCODEINITIALIZERESULTFORUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetChaincodeInitializeResultForUser返回参数结构体
                */
                class GetChaincodeInitializeResultForUserResponse : public AbstractModel
                {
                public:
                    GetChaincodeInitializeResultForUserResponse();
                    ~GetChaincodeInitializeResultForUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取实例化结果：0，实例化中；1，实例化成功；2，实例化失败
                     * @return InitResult 实例化结果：0，实例化中；1，实例化成功；2，实例化失败
                     */
                    uint64_t GetInitResult() const;

                    /**
                     * 判断参数 InitResult 是否已赋值
                     * @return InitResult 是否已赋值
                     */
                    bool InitResultHasBeenSet() const;

                    /**
                     * 获取实例化信息
                     * @return InitMessage 实例化信息
                     */
                    std::string GetInitMessage() const;

                    /**
                     * 判断参数 InitMessage 是否已赋值
                     * @return InitMessage 是否已赋值
                     */
                    bool InitMessageHasBeenSet() const;

                private:

                    /**
                     * 实例化结果：0，实例化中；1，实例化成功；2，实例化失败
                     */
                    uint64_t m_initResult;
                    bool m_initResultHasBeenSet;

                    /**
                     * 实例化信息
                     */
                    std::string m_initMessage;
                    bool m_initMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCHAINCODEINITIALIZERESULTFORUSERRESPONSE_H_
