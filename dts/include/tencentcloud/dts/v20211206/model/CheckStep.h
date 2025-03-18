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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DetailCheckItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 检查步骤
                */
                class CheckStep : public AbstractModel
                {
                public:
                    CheckStep();
                    ~CheckStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤编号
                     * @return StepNo 步骤编号
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置步骤编号
                     * @param _stepNo 步骤编号
                     * 
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取步骤Id， 如：ConnectDBCheck、VersionCheck、SrcPrivilegeCheck等，具体校验项和源目标实例相关
                     * @return StepId 步骤Id， 如：ConnectDBCheck、VersionCheck、SrcPrivilegeCheck等，具体校验项和源目标实例相关
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置步骤Id， 如：ConnectDBCheck、VersionCheck、SrcPrivilegeCheck等，具体校验项和源目标实例相关
                     * @param _stepId 步骤Id， 如：ConnectDBCheck、VersionCheck、SrcPrivilegeCheck等，具体校验项和源目标实例相关
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取步骤名称
                     * @return StepName 步骤名称
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置步骤名称
                     * @param _stepName 步骤名称
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取此检查步骤的结果，pass(校验通过)、failed(校验失败)、notStarted(校验还未开始进行)、blocked(检验阻塞)、warning(校验有告警，但仍通过)
                     * @return StepStatus 此检查步骤的结果，pass(校验通过)、failed(校验失败)、notStarted(校验还未开始进行)、blocked(检验阻塞)、warning(校验有告警，但仍通过)
                     * 
                     */
                    std::string GetStepStatus() const;

                    /**
                     * 设置此检查步骤的结果，pass(校验通过)、failed(校验失败)、notStarted(校验还未开始进行)、blocked(检验阻塞)、warning(校验有告警，但仍通过)
                     * @param _stepStatus 此检查步骤的结果，pass(校验通过)、failed(校验失败)、notStarted(校验还未开始进行)、blocked(检验阻塞)、warning(校验有告警，但仍通过)
                     * 
                     */
                    void SetStepStatus(const std::string& _stepStatus);

                    /**
                     * 判断参数 StepStatus 是否已赋值
                     * @return StepStatus 是否已赋值
                     * 
                     */
                    bool StepStatusHasBeenSet() const;

                    /**
                     * 获取此检查步骤的错误消息
                     * @return StepMessage 此检查步骤的错误消息
                     * 
                     */
                    std::string GetStepMessage() const;

                    /**
                     * 设置此检查步骤的错误消息
                     * @param _stepMessage 此检查步骤的错误消息
                     * 
                     */
                    void SetStepMessage(const std::string& _stepMessage);

                    /**
                     * 判断参数 StepMessage 是否已赋值
                     * @return StepMessage 是否已赋值
                     * 
                     */
                    bool StepMessageHasBeenSet() const;

                    /**
                     * 获取每个检查步骤里的具体检查项
                     * @return DetailCheckItems 每个检查步骤里的具体检查项
                     * 
                     */
                    std::vector<DetailCheckItem> GetDetailCheckItems() const;

                    /**
                     * 设置每个检查步骤里的具体检查项
                     * @param _detailCheckItems 每个检查步骤里的具体检查项
                     * 
                     */
                    void SetDetailCheckItems(const std::vector<DetailCheckItem>& _detailCheckItems);

                    /**
                     * 判断参数 DetailCheckItems 是否已赋值
                     * @return DetailCheckItems 是否已赋值
                     * 
                     */
                    bool DetailCheckItemsHasBeenSet() const;

                    /**
                     * 获取是否已跳过
                     * @return HasSkipped 是否已跳过
                     * 
                     */
                    bool GetHasSkipped() const;

                    /**
                     * 设置是否已跳过
                     * @param _hasSkipped 是否已跳过
                     * 
                     */
                    void SetHasSkipped(const bool& _hasSkipped);

                    /**
                     * 判断参数 HasSkipped 是否已赋值
                     * @return HasSkipped 是否已赋值
                     * 
                     */
                    bool HasSkippedHasBeenSet() const;

                private:

                    /**
                     * 步骤编号
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * 步骤Id， 如：ConnectDBCheck、VersionCheck、SrcPrivilegeCheck等，具体校验项和源目标实例相关
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * 步骤名称
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 此检查步骤的结果，pass(校验通过)、failed(校验失败)、notStarted(校验还未开始进行)、blocked(检验阻塞)、warning(校验有告警，但仍通过)
                     */
                    std::string m_stepStatus;
                    bool m_stepStatusHasBeenSet;

                    /**
                     * 此检查步骤的错误消息
                     */
                    std::string m_stepMessage;
                    bool m_stepMessageHasBeenSet;

                    /**
                     * 每个检查步骤里的具体检查项
                     */
                    std::vector<DetailCheckItem> m_detailCheckItems;
                    bool m_detailCheckItemsHasBeenSet;

                    /**
                     * 是否已跳过
                     */
                    bool m_hasSkipped;
                    bool m_hasSkippedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEP_H_
