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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVLIMITRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVLIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEnvLimit返回参数结构体
                */
                class DescribeEnvLimitResponse : public AbstractModel
                {
                public:
                    DescribeEnvLimitResponse();
                    ~DescribeEnvLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取环境总数上限
                     * @return MaxEnvNum 环境总数上限
                     */
                    int64_t GetMaxEnvNum() const;

                    /**
                     * 判断参数 MaxEnvNum 是否已赋值
                     * @return MaxEnvNum 是否已赋值
                     */
                    bool MaxEnvNumHasBeenSet() const;

                    /**
                     * 获取目前环境总数
                     * @return CurrentEnvNum 目前环境总数
                     */
                    int64_t GetCurrentEnvNum() const;

                    /**
                     * 判断参数 CurrentEnvNum 是否已赋值
                     * @return CurrentEnvNum 是否已赋值
                     */
                    bool CurrentEnvNumHasBeenSet() const;

                    /**
                     * 获取免费环境数量上限
                     * @return MaxFreeEnvNum 免费环境数量上限
                     */
                    int64_t GetMaxFreeEnvNum() const;

                    /**
                     * 判断参数 MaxFreeEnvNum 是否已赋值
                     * @return MaxFreeEnvNum 是否已赋值
                     */
                    bool MaxFreeEnvNumHasBeenSet() const;

                    /**
                     * 获取目前免费环境数量
                     * @return CurrentFreeEnvNum 目前免费环境数量
                     */
                    int64_t GetCurrentFreeEnvNum() const;

                    /**
                     * 判断参数 CurrentFreeEnvNum 是否已赋值
                     * @return CurrentFreeEnvNum 是否已赋值
                     */
                    bool CurrentFreeEnvNumHasBeenSet() const;

                    /**
                     * 获取总计允许销毁环境次数上限
                     * @return MaxDeleteTotal 总计允许销毁环境次数上限
                     */
                    int64_t GetMaxDeleteTotal() const;

                    /**
                     * 判断参数 MaxDeleteTotal 是否已赋值
                     * @return MaxDeleteTotal 是否已赋值
                     */
                    bool MaxDeleteTotalHasBeenSet() const;

                    /**
                     * 获取目前已销毁环境次数
                     * @return CurrentDeleteTotal 目前已销毁环境次数
                     */
                    int64_t GetCurrentDeleteTotal() const;

                    /**
                     * 判断参数 CurrentDeleteTotal 是否已赋值
                     * @return CurrentDeleteTotal 是否已赋值
                     */
                    bool CurrentDeleteTotalHasBeenSet() const;

                    /**
                     * 获取每月允许销毁环境次数上限
                     * @return MaxDeleteMonthly 每月允许销毁环境次数上限
                     */
                    int64_t GetMaxDeleteMonthly() const;

                    /**
                     * 判断参数 MaxDeleteMonthly 是否已赋值
                     * @return MaxDeleteMonthly 是否已赋值
                     */
                    bool MaxDeleteMonthlyHasBeenSet() const;

                    /**
                     * 获取本月已销毁环境次数
                     * @return CurrentDeleteMonthly 本月已销毁环境次数
                     */
                    int64_t GetCurrentDeleteMonthly() const;

                    /**
                     * 判断参数 CurrentDeleteMonthly 是否已赋值
                     * @return CurrentDeleteMonthly 是否已赋值
                     */
                    bool CurrentDeleteMonthlyHasBeenSet() const;

                private:

                    /**
                     * 环境总数上限
                     */
                    int64_t m_maxEnvNum;
                    bool m_maxEnvNumHasBeenSet;

                    /**
                     * 目前环境总数
                     */
                    int64_t m_currentEnvNum;
                    bool m_currentEnvNumHasBeenSet;

                    /**
                     * 免费环境数量上限
                     */
                    int64_t m_maxFreeEnvNum;
                    bool m_maxFreeEnvNumHasBeenSet;

                    /**
                     * 目前免费环境数量
                     */
                    int64_t m_currentFreeEnvNum;
                    bool m_currentFreeEnvNumHasBeenSet;

                    /**
                     * 总计允许销毁环境次数上限
                     */
                    int64_t m_maxDeleteTotal;
                    bool m_maxDeleteTotalHasBeenSet;

                    /**
                     * 目前已销毁环境次数
                     */
                    int64_t m_currentDeleteTotal;
                    bool m_currentDeleteTotalHasBeenSet;

                    /**
                     * 每月允许销毁环境次数上限
                     */
                    int64_t m_maxDeleteMonthly;
                    bool m_maxDeleteMonthlyHasBeenSet;

                    /**
                     * 本月已销毁环境次数
                     */
                    int64_t m_currentDeleteMonthly;
                    bool m_currentDeleteMonthlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVLIMITRESPONSE_H_
