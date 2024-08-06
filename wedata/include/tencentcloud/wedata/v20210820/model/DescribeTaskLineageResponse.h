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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKLINEAGERESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKLINEAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskLineageInfoPair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskLineage返回参数结构体
                */
                class DescribeTaskLineageResponse : public AbstractModel
                {
                public:
                    DescribeTaskLineageResponse();
                    ~DescribeTaskLineageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取通过任务ID查询集成任务信息列表
                     * @return TaskLineageInfos 通过任务ID查询集成任务信息列表
                     * 
                     */
                    std::vector<TaskLineageInfoPair> GetTaskLineageInfos() const;

                    /**
                     * 判断参数 TaskLineageInfos 是否已赋值
                     * @return TaskLineageInfos 是否已赋值
                     * 
                     */
                    bool TaskLineageInfosHasBeenSet() const;

                private:

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 通过任务ID查询集成任务信息列表
                     */
                    std::vector<TaskLineageInfoPair> m_taskLineageInfos;
                    bool m_taskLineageInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKLINEAGERESPONSE_H_
