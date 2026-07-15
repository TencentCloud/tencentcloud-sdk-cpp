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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEASYNCREQUESTINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEASYNCREQUESTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAsyncRequestInfo返回参数结构体
                */
                class DescribeAsyncRequestInfoResponse : public AbstractModel
                {
                public:
                    DescribeAsyncRequestInfoResponse();
                    ~DescribeAsyncRequestInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务执行结果。</p><p>枚举值：</p><ul><li>INITIAL： 初始化。</li><li>RUNNING： 运行中。</li><li>SUCCESS： 执行成功。</li><li>FAILED： 执行失败。</li><li>KILLED： 已终止。</li><li>REMOVED： 已删除。</li><li>PAUSED： 终止中。</li><li>UNDEFINED： 任务已创建但未开始执行，在 WaitSwitch = true 场景下，表示任务正在等待维护时间窗到来。</li></ul>
                     * @return Status <p>任务执行结果。</p><p>枚举值：</p><ul><li>INITIAL： 初始化。</li><li>RUNNING： 运行中。</li><li>SUCCESS： 执行成功。</li><li>FAILED： 执行失败。</li><li>KILLED： 已终止。</li><li>REMOVED： 已删除。</li><li>PAUSED： 终止中。</li><li>UNDEFINED： 任务已创建但未开始执行，在 WaitSwitch = true 场景下，表示任务正在等待维护时间窗到来。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务执行信息描述。</p>
                     * @return Info <p>任务执行信息描述。</p>
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * <p>任务执行结果。</p><p>枚举值：</p><ul><li>INITIAL： 初始化。</li><li>RUNNING： 运行中。</li><li>SUCCESS： 执行成功。</li><li>FAILED： 执行失败。</li><li>KILLED： 已终止。</li><li>REMOVED： 已删除。</li><li>PAUSED： 终止中。</li><li>UNDEFINED： 任务已创建但未开始执行，在 WaitSwitch = true 场景下，表示任务正在等待维护时间窗到来。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务执行信息描述。</p>
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEASYNCREQUESTINFORESPONSE_H_
