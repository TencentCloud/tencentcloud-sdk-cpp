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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEEVENTTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEEVENTTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 待处理逃逸事件趋势
                */
                class EscapeEventTendencyInfo : public AbstractModel
                {
                public:
                    EscapeEventTendencyInfo();
                    ~EscapeEventTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待处理风险容器事件总数
                     * @return RiskContainerEventCount 待处理风险容器事件总数
                     * 
                     */
                    int64_t GetRiskContainerEventCount() const;

                    /**
                     * 设置待处理风险容器事件总数
                     * @param _riskContainerEventCount 待处理风险容器事件总数
                     * 
                     */
                    void SetRiskContainerEventCount(const int64_t& _riskContainerEventCount);

                    /**
                     * 判断参数 RiskContainerEventCount 是否已赋值
                     * @return RiskContainerEventCount 是否已赋值
                     * 
                     */
                    bool RiskContainerEventCountHasBeenSet() const;

                    /**
                     * 获取待处理程序特权事件总数
                     * @return ProcessPrivilegeEventCount 待处理程序特权事件总数
                     * 
                     */
                    int64_t GetProcessPrivilegeEventCount() const;

                    /**
                     * 设置待处理程序特权事件总数
                     * @param _processPrivilegeEventCount 待处理程序特权事件总数
                     * 
                     */
                    void SetProcessPrivilegeEventCount(const int64_t& _processPrivilegeEventCount);

                    /**
                     * 判断参数 ProcessPrivilegeEventCount 是否已赋值
                     * @return ProcessPrivilegeEventCount 是否已赋值
                     * 
                     */
                    bool ProcessPrivilegeEventCountHasBeenSet() const;

                    /**
                     * 获取待处理容器逃逸事件总数
                     * @return ContainerEscapeEventCount 待处理容器逃逸事件总数
                     * 
                     */
                    int64_t GetContainerEscapeEventCount() const;

                    /**
                     * 设置待处理容器逃逸事件总数
                     * @param _containerEscapeEventCount 待处理容器逃逸事件总数
                     * 
                     */
                    void SetContainerEscapeEventCount(const int64_t& _containerEscapeEventCount);

                    /**
                     * 判断参数 ContainerEscapeEventCount 是否已赋值
                     * @return ContainerEscapeEventCount 是否已赋值
                     * 
                     */
                    bool ContainerEscapeEventCountHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 待处理风险容器事件总数
                     */
                    int64_t m_riskContainerEventCount;
                    bool m_riskContainerEventCountHasBeenSet;

                    /**
                     * 待处理程序特权事件总数
                     */
                    int64_t m_processPrivilegeEventCount;
                    bool m_processPrivilegeEventCountHasBeenSet;

                    /**
                     * 待处理容器逃逸事件总数
                     */
                    int64_t m_containerEscapeEventCount;
                    bool m_containerEscapeEventCountHasBeenSet;

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEEVENTTENDENCYINFO_H_
