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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_MUSKPROMPTINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_MUSKPROMPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * musk prompt详情
                */
                class MuskPromptInfo : public AbstractModel
                {
                public:
                    MuskPromptInfo();
                    ~MuskPromptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取workflow id
                     * @return WorkflowId workflow id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置workflow id
                     * @param _workflowId workflow id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取workgroup id
                     * @return WorkgroupId workgroup id
                     * 
                     */
                    std::string GetWorkgroupId() const;

                    /**
                     * 设置workgroup id
                     * @param _workgroupId workgroup id
                     * 
                     */
                    void SetWorkgroupId(const std::string& _workgroupId);

                    /**
                     * 判断参数 WorkgroupId 是否已赋值
                     * @return WorkgroupId 是否已赋值
                     * 
                     */
                    bool WorkgroupIdHasBeenSet() const;

                    /**
                     * 获取prompt id
                     * @return PromptId prompt id
                     * 
                     */
                    std::string GetPromptId() const;

                    /**
                     * 设置prompt id
                     * @param _promptId prompt id
                     * 
                     */
                    void SetPromptId(const std::string& _promptId);

                    /**
                     * 判断参数 PromptId 是否已赋值
                     * @return PromptId 是否已赋值
                     * 
                     */
                    bool PromptIdHasBeenSet() const;

                    /**
                     * 获取生成的内容
                     * @return OutputResource 生成的内容
                     * 
                     */
                    std::vector<std::string> GetOutputResource() const;

                    /**
                     * 设置生成的内容
                     * @param _outputResource 生成的内容
                     * 
                     */
                    void SetOutputResource(const std::vector<std::string>& _outputResource);

                    /**
                     * 判断参数 OutputResource 是否已赋值
                     * @return OutputResource 是否已赋值
                     * 
                     */
                    bool OutputResourceHasBeenSet() const;

                    /**
                     * 获取prompt status 
0: 执行中
1: 执行成功
2: 执行失败
                     * @return Status prompt status 
0: 执行中
1: 执行成功
2: 执行失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置prompt status 
0: 执行中
1: 执行成功
2: 执行失败
                     * @param _status prompt status 
0: 执行中
1: 执行成功
2: 执行失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务执行耗时，单位毫秒
                     * @return Cost 任务执行耗时，单位毫秒
                     * 
                     */
                    uint64_t GetCost() const;

                    /**
                     * 设置任务执行耗时，单位毫秒
                     * @param _cost 任务执行耗时，单位毫秒
                     * 
                     */
                    void SetCost(const uint64_t& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取任务执行失败错误信息
                     * @return ErrorMessage 任务执行失败错误信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置任务执行失败错误信息
                     * @param _errorMessage 任务执行失败错误信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * workflow id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * workgroup id
                     */
                    std::string m_workgroupId;
                    bool m_workgroupIdHasBeenSet;

                    /**
                     * prompt id
                     */
                    std::string m_promptId;
                    bool m_promptIdHasBeenSet;

                    /**
                     * 生成的内容
                     */
                    std::vector<std::string> m_outputResource;
                    bool m_outputResourceHasBeenSet;

                    /**
                     * prompt status 
0: 执行中
1: 执行成功
2: 执行失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务执行耗时，单位毫秒
                     */
                    uint64_t m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * 任务执行失败错误信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_MUSKPROMPTINFO_H_
