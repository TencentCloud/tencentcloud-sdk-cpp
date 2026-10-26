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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_OPERATIONRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_OPERATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 通用操作结果项
                */
                class OperationResult : public AbstractModel
                {
                public:
                    OperationResult();
                    ~OperationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源 ID
                     * @return Id 资源 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源 ID
                     * @param _id 资源 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取失败原因（succeeded=false 时填充）
                     * @return Reason 失败原因（succeeded=false 时填充）
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因（succeeded=false 时填充）
                     * @param _reason 失败原因（succeeded=false 时填充）
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取是否成功
                     * @return Succeeded 是否成功
                     * 
                     */
                    bool GetSucceeded() const;

                    /**
                     * 设置是否成功
                     * @param _succeeded 是否成功
                     * 
                     */
                    void SetSucceeded(const bool& _succeeded);

                    /**
                     * 判断参数 Succeeded 是否已赋值
                     * @return Succeeded 是否已赋值
                     * 
                     */
                    bool SucceededHasBeenSet() const;

                private:

                    /**
                     * 资源 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 失败原因（succeeded=false 时填充）
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 是否成功
                     */
                    bool m_succeeded;
                    bool m_succeededHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_OPERATIONRESULT_H_
