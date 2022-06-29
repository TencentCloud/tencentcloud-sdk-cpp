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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeEventBaseInfo.h>
#include <tencentcloud/tcss/v20201101/model/ProcessDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ProcessDetailBaseInfo.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessEventDescription.h>
#include <tencentcloud/tcss/v20201101/model/ProcessBaseInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAbnormalProcessDetail返回参数结构体
                */
                class DescribeAbnormalProcessDetailResponse : public AbstractModel
                {
                public:
                    DescribeAbnormalProcessDetailResponse();
                    ~DescribeAbnormalProcessDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件基本信息
                     * @return EventBaseInfo 事件基本信息
                     */
                    RunTimeEventBaseInfo GetEventBaseInfo() const;

                    /**
                     * 判断参数 EventBaseInfo 是否已赋值
                     * @return EventBaseInfo 是否已赋值
                     */
                    bool EventBaseInfoHasBeenSet() const;

                    /**
                     * 获取进程信息
                     * @return ProcessInfo 进程信息
                     */
                    ProcessDetailInfo GetProcessInfo() const;

                    /**
                     * 判断参数 ProcessInfo 是否已赋值
                     * @return ProcessInfo 是否已赋值
                     */
                    bool ProcessInfoHasBeenSet() const;

                    /**
                     * 获取父进程信息
                     * @return ParentProcessInfo 父进程信息
                     */
                    ProcessDetailBaseInfo GetParentProcessInfo() const;

                    /**
                     * 判断参数 ParentProcessInfo 是否已赋值
                     * @return ParentProcessInfo 是否已赋值
                     */
                    bool ParentProcessInfoHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return EventDetail 事件描述
                     */
                    AbnormalProcessEventDescription GetEventDetail() const;

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取祖先进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AncestorProcessInfo 祖先进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessBaseInfo GetAncestorProcessInfo() const;

                    /**
                     * 判断参数 AncestorProcessInfo 是否已赋值
                     * @return AncestorProcessInfo 是否已赋值
                     */
                    bool AncestorProcessInfoHasBeenSet() const;

                private:

                    /**
                     * 事件基本信息
                     */
                    RunTimeEventBaseInfo m_eventBaseInfo;
                    bool m_eventBaseInfoHasBeenSet;

                    /**
                     * 进程信息
                     */
                    ProcessDetailInfo m_processInfo;
                    bool m_processInfoHasBeenSet;

                    /**
                     * 父进程信息
                     */
                    ProcessDetailBaseInfo m_parentProcessInfo;
                    bool m_parentProcessInfoHasBeenSet;

                    /**
                     * 事件描述
                     */
                    AbnormalProcessEventDescription m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * 祖先进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessBaseInfo m_ancestorProcessInfo;
                    bool m_ancestorProcessInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSDETAILRESPONSE_H_
