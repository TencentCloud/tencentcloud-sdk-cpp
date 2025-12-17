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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCESSTATUSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCESSTATUSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamGetTaskInstancesStatusInfoResponseInstance.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 分组获取编排空间测试运行记录
                */
                class DescribeTaskInstancesStatusDto : public AbstractModel
                {
                public:
                    DescribeTaskInstancesStatusDto();
                    ~DescribeTaskInstancesStatusDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取根据任务信息获取实例状态信息实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instances 根据任务信息获取实例状态信息实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamGetTaskInstancesStatusInfoResponseInstance> GetInstances() const;

                    /**
                     * 设置根据任务信息获取实例状态信息实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instances 根据任务信息获取实例状态信息实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstances(const std::vector<ParamGetTaskInstancesStatusInfoResponseInstance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 根据任务信息获取实例状态信息实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamGetTaskInstancesStatusInfoResponseInstance> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCESSTATUSDTO_H_
