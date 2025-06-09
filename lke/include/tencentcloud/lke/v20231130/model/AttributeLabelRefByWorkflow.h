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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABELREFBYWORKFLOW_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABELREFBYWORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WorkflowRef.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 标签值引用的工作流详情
                */
                class AttributeLabelRefByWorkflow : public AbstractModel
                {
                public:
                    AttributeLabelRefByWorkflow();
                    ~AttributeLabelRefByWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签值id
                     * @return AttributeLabelBizId 标签值id
                     * 
                     */
                    std::string GetAttributeLabelBizId() const;

                    /**
                     * 设置标签值id
                     * @param _attributeLabelBizId 标签值id
                     * 
                     */
                    void SetAttributeLabelBizId(const std::string& _attributeLabelBizId);

                    /**
                     * 判断参数 AttributeLabelBizId 是否已赋值
                     * @return AttributeLabelBizId 是否已赋值
                     * 
                     */
                    bool AttributeLabelBizIdHasBeenSet() const;

                    /**
                     * 获取标签值引用的工作流列表
                     * @return WorkflowList 标签值引用的工作流列表
                     * 
                     */
                    std::vector<WorkflowRef> GetWorkflowList() const;

                    /**
                     * 设置标签值引用的工作流列表
                     * @param _workflowList 标签值引用的工作流列表
                     * 
                     */
                    void SetWorkflowList(const std::vector<WorkflowRef>& _workflowList);

                    /**
                     * 判断参数 WorkflowList 是否已赋值
                     * @return WorkflowList 是否已赋值
                     * 
                     */
                    bool WorkflowListHasBeenSet() const;

                private:

                    /**
                     * 标签值id
                     */
                    std::string m_attributeLabelBizId;
                    bool m_attributeLabelBizIdHasBeenSet;

                    /**
                     * 标签值引用的工作流列表
                     */
                    std::vector<WorkflowRef> m_workflowList;
                    bool m_workflowListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABELREFBYWORKFLOW_H_
