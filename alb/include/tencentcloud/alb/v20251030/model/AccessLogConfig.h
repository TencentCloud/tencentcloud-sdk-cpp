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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ACCESSLOGCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ACCESSLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 访问日志配置。
                */
                class AccessLogConfig : public AbstractModel
                {
                public:
                    AccessLogConfig();
                    ~AccessLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSetId 负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logSetId 负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicId 负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTopicId 负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * 负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ACCESSLOGCONFIG_H_
