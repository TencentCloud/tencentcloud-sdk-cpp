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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRWORKINFORESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRWORKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * DescribeCRWorkInfo返回参数结构体
                */
                class DescribeCRWorkInfoResponse : public AbstractModel
                {
                public:
                    DescribeCRWorkInfoResponse();
                    ~DescribeCRWorkInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取x
                     * @return WorkName x
                     */
                    std::string GetWorkName() const;

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取x
                     * @return MonitorStatus x
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取x
                     * @return AuthStatus x
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取x
                     * @return CommStatus x
                     */
                    int64_t GetCommStatus() const;

                    /**
                     * 判断参数 CommStatus 是否已赋值
                     * @return CommStatus 是否已赋值
                     */
                    bool CommStatusHasBeenSet() const;

                    /**
                     * 获取x
                     * @return IsProducer x
                     */
                    int64_t GetIsProducer() const;

                    /**
                     * 判断参数 IsProducer 是否已赋值
                     * @return IsProducer 是否已赋值
                     */
                    bool IsProducerHasBeenSet() const;

                private:

                    /**
                     * x
                     */
                    std::string m_workName;
                    bool m_workNameHasBeenSet;

                    /**
                     * x
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * x
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * x
                     */
                    int64_t m_commStatus;
                    bool m_commStatusHasBeenSet;

                    /**
                     * x
                     */
                    int64_t m_isProducer;
                    bool m_isProducerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRWORKINFORESPONSE_H_
