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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 日志详情
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogComponent 日志类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogComponent() const;

                    /**
                     * 设置日志类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logComponent 日志类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogComponent(const std::string& _logComponent);

                    /**
                     * 判断参数 LogComponent 是否已赋值
                     * @return LogComponent 是否已赋值
                     * 
                     */
                    bool LogComponentHasBeenSet() const;

                    /**
                     * 获取日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logLevel 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取日志产生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTime 日志产生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTime() const;

                    /**
                     * 设置日志产生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTime 日志产生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTime(const std::string& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     * 
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogDetail 日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogDetail() const;

                    /**
                     * 设置日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logDetail 日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogDetail(const std::string& _logDetail);

                    /**
                     * 判断参数 LogDetail 是否已赋值
                     * @return LogDetail 是否已赋值
                     * 
                     */
                    bool LogDetailHasBeenSet() const;

                    /**
                     * 获取日志连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogConnection 日志连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogConnection() const;

                    /**
                     * 设置日志连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logConnection 日志连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogConnection(const std::string& _logConnection);

                    /**
                     * 判断参数 LogConnection 是否已赋值
                     * @return LogConnection 是否已赋值
                     * 
                     */
                    bool LogConnectionHasBeenSet() const;

                    /**
                     * 获取日志id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogId 日志id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置日志id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logId 日志id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                private:

                    /**
                     * 日志类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logComponent;
                    bool m_logComponentHasBeenSet;

                    /**
                     * 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * 日志产生时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logDetail;
                    bool m_logDetailHasBeenSet;

                    /**
                     * 日志连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logConnection;
                    bool m_logConnectionHasBeenSet;

                    /**
                     * 日志id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGINFO_H_
