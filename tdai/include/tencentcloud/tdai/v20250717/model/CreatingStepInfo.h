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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATINGSTEPINFO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATINGSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 发货步骤详情
                */
                class CreatingStepInfo : public AbstractModel
                {
                public:
                    CreatingStepInfo();
                    ~CreatingStepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>步骤名称</p>
                     * @return StepName <p>步骤名称</p>
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置<p>步骤名称</p>
                     * @param _stepName <p>步骤名称</p>
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
                     * 获取<p>步骤描述</p>
                     * @return StepDesc <p>步骤描述</p>
                     * 
                     */
                    std::string GetStepDesc() const;

                    /**
                     * 设置<p>步骤描述</p>
                     * @param _stepDesc <p>步骤描述</p>
                     * 
                     */
                    void SetStepDesc(const std::string& _stepDesc);

                    /**
                     * 判断参数 StepDesc 是否已赋值
                     * @return StepDesc 是否已赋值
                     * 
                     */
                    bool StepDescHasBeenSet() const;

                    /**
                     * 获取<p>步骤状态</p>
                     * @return Status <p>步骤状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>步骤状态</p>
                     * @param _status <p>步骤状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>完成时间</p>
                     * @return FinishTime <p>完成时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>完成时间</p>
                     * @param _finishTime <p>完成时间</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息描述</p>
                     * @return ErrMsg <p>错误信息描述</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息描述</p>
                     * @param _errMsg <p>错误信息描述</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>步骤名称</p>
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * <p>步骤描述</p>
                     */
                    std::string m_stepDesc;
                    bool m_stepDescHasBeenSet;

                    /**
                     * <p>步骤状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>错误信息描述</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATINGSTEPINFO_H_
