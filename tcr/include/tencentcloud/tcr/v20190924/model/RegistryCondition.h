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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCONDITION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例创建过程
                */
                class RegistryCondition : public AbstractModel
                {
                public:
                    RegistryCondition();
                    ~RegistryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例创建过程类型
                     * @return Type 实例创建过程类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例创建过程类型
                     * @param _type 实例创建过程类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例创建过程状态
                     * @return Status 实例创建过程状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例创建过程状态
                     * @param _status 实例创建过程状态
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
                     * 获取转换到该过程的简明原因
                     * @return Reason 转换到该过程的简明原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置转换到该过程的简明原因
                     * @param _reason 转换到该过程的简明原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 实例创建过程类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例创建过程状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 转换到该过程的简明原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCONDITION_H_
