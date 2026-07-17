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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTLOGINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务部署日志信息。
                */
                class InferenceServiceDeploymentLogInfo : public AbstractModel
                {
                public:
                    InferenceServiceDeploymentLogInfo();
                    ~InferenceServiceDeploymentLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志消息内容。
                     * @return LogMessage 日志消息内容。
                     * 
                     */
                    std::string GetLogMessage() const;

                    /**
                     * 设置日志消息内容。
                     * @param _logMessage 日志消息内容。
                     * 
                     */
                    void SetLogMessage(const std::string& _logMessage);

                    /**
                     * 判断参数 LogMessage 是否已赋值
                     * @return LogMessage 是否已赋值
                     * 
                     */
                    bool LogMessageHasBeenSet() const;

                    /**
                     * 获取日志产生时间。
                     * @return Timestamp 日志产生时间。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置日志产生时间。
                     * @param _timestamp 日志产生时间。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 日志消息内容。
                     */
                    std::string m_logMessage;
                    bool m_logMessageHasBeenSet;

                    /**
                     * 日志产生时间。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTLOGINFO_H_
