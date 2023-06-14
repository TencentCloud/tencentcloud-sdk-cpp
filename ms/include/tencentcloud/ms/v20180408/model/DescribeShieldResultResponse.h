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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDRESULTRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AppDetailInfo.h>
#include <tencentcloud/ms/v20180408/model/ShieldInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeShieldResult返回参数结构体
                */
                class DescribeShieldResultResponse : public AbstractModel
                {
                public:
                    DescribeShieldResultResponse();
                    ~DescribeShieldResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态: 0-请返回,1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @return TaskStatus 任务状态: 0-请返回,1-已完成,2-处理中,3-处理出错,4-处理超时
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取app加固前的详细信息
                     * @return AppDetailInfo app加固前的详细信息
                     * 
                     */
                    AppDetailInfo GetAppDetailInfo() const;

                    /**
                     * 判断参数 AppDetailInfo 是否已赋值
                     * @return AppDetailInfo 是否已赋值
                     * 
                     */
                    bool AppDetailInfoHasBeenSet() const;

                    /**
                     * 获取app加固后的详细信息
                     * @return ShieldInfo app加固后的详细信息
                     * 
                     */
                    ShieldInfo GetShieldInfo() const;

                    /**
                     * 判断参数 ShieldInfo 是否已赋值
                     * @return ShieldInfo 是否已赋值
                     * 
                     */
                    bool ShieldInfoHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取状态指引
                     * @return StatusRef 状态指引
                     * 
                     */
                    std::string GetStatusRef() const;

                    /**
                     * 判断参数 StatusRef 是否已赋值
                     * @return StatusRef 是否已赋值
                     * 
                     */
                    bool StatusRefHasBeenSet() const;

                private:

                    /**
                     * 任务状态: 0-请返回,1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * app加固前的详细信息
                     */
                    AppDetailInfo m_appDetailInfo;
                    bool m_appDetailInfoHasBeenSet;

                    /**
                     * app加固后的详细信息
                     */
                    ShieldInfo m_shieldInfo;
                    bool m_shieldInfoHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 状态指引
                     */
                    std::string m_statusRef;
                    bool m_statusRefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDRESULTRESPONSE_H_
