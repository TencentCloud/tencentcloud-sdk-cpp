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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATEAPPLYRECORDDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATEAPPLYRECORDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceIdentifier.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 防火墙模板应用记录详情。
                */
                class FirewallTemplateApplyRecordDetail : public AbstractModel
                {
                public:
                    FirewallTemplateApplyRecordDetail();
                    ~FirewallTemplateApplyRecordDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例标识信息。
                     * @return Instance 实例标识信息。
                     * 
                     */
                    InstanceIdentifier GetInstance() const;

                    /**
                     * 设置实例标识信息。
                     * @param _instance 实例标识信息。
                     * 
                     */
                    void SetInstance(const InstanceIdentifier& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取防火墙模板应用状态。

- SUCCESS：成功
- FAILED：失败
- RUNNING：运行中
                     * @return ApplyState 防火墙模板应用状态。

- SUCCESS：成功
- FAILED：失败
- RUNNING：运行中
                     * 
                     */
                    std::string GetApplyState() const;

                    /**
                     * 设置防火墙模板应用状态。

- SUCCESS：成功
- FAILED：失败
- RUNNING：运行中
                     * @param _applyState 防火墙模板应用状态。

- SUCCESS：成功
- FAILED：失败
- RUNNING：运行中
                     * 
                     */
                    void SetApplyState(const std::string& _applyState);

                    /**
                     * 判断参数 ApplyState 是否已赋值
                     * @return ApplyState 是否已赋值
                     * 
                     */
                    bool ApplyStateHasBeenSet() const;

                    /**
                     * 获取防火墙模板应用错误信息。
                     * @return ErrorMessage 防火墙模板应用错误信息。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置防火墙模板应用错误信息。
                     * @param _errorMessage 防火墙模板应用错误信息。
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
                     * 实例标识信息。
                     */
                    InstanceIdentifier m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 防火墙模板应用状态。

- SUCCESS：成功
- FAILED：失败
- RUNNING：运行中
                     */
                    std::string m_applyState;
                    bool m_applyStateHasBeenSet;

                    /**
                     * 防火墙模板应用错误信息。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATEAPPLYRECORDDETAIL_H_
