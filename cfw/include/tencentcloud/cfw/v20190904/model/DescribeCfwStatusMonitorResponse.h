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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwStatusMonitor返回参数结构体
                */
                class DescribeCfwStatusMonitorResponse : public AbstractModel
                {
                public:
                    DescribeCfwStatusMonitorResponse();
                    ~DescribeCfwStatusMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果。UTF-8 JSON object 字符串；调用方需解析 Response.Data。describe_scene 的 scene 返回 metric_options、perspective_options、default_metric、default_perspective、selection_required_by_metric、selection_kind_by_metric 和 time_preset_options；selection.available_options 返回可用于 SelectionId/SelectionName/SelectionInstanceId 的选项。fetch_scene 返回选中场景的 data 快照，可能包含 overview、table 或 detail。下方示例是字段结构节选，数组仅展示代表值。
                     * @return Data 查询结果。UTF-8 JSON object 字符串；调用方需解析 Response.Data。describe_scene 的 scene 返回 metric_options、perspective_options、default_metric、default_perspective、selection_required_by_metric、selection_kind_by_metric 和 time_preset_options；selection.available_options 返回可用于 SelectionId/SelectionName/SelectionInstanceId 的选项。fetch_scene 返回选中场景的 data 快照，可能包含 overview、table 或 detail。下方示例是字段结构节选，数组仅展示代表值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 查询结果。UTF-8 JSON object 字符串；调用方需解析 Response.Data。describe_scene 的 scene 返回 metric_options、perspective_options、default_metric、default_perspective、selection_required_by_metric、selection_kind_by_metric 和 time_preset_options；selection.available_options 返回可用于 SelectionId/SelectionName/SelectionInstanceId 的选项。fetch_scene 返回选中场景的 data 快照，可能包含 overview、table 或 detail。下方示例是字段结构节选，数组仅展示代表值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORRESPONSE_H_
