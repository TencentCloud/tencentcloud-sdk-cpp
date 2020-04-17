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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 证书操作日志。
                */
                class OperationLog : public AbstractModel
                {
                public:
                    OperationLog();
                    ~OperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作证书动作。
                     * @return Action 操作证书动作。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置操作证书动作。
                     * @param Action 操作证书动作。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取操作时间。
                     * @return CreatedOn 操作时间。
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置操作时间。
                     * @param CreatedOn 操作时间。
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                private:

                    /**
                     * 操作证书动作。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 操作时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_
