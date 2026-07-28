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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_LOGIDENTITY_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_LOGIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 单条日志数据结构
                */
                class LogIdentity : public AbstractModel
                {
                public:
                    LogIdentity();
                    ~LogIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>单条日志的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>单条日志的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>单条日志的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>单条日志的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>单条日志的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>单条日志的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>单条日志的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>单条日志的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>这条日志对应的Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName <p>这条日志对应的Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>这条日志对应的Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName <p>这条日志对应的Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>日志的时间戳（RFC3339格式的时间字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>日志的时间戳（RFC3339格式的时间字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>日志的时间戳（RFC3339格式的时间字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>日志的时间戳（RFC3339格式的时间字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>日志上报请求包的ID</p>
                     * @return PkgId <p>日志上报请求包的ID</p>
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置<p>日志上报请求包的ID</p>
                     * @param _pkgId <p>日志上报请求包的ID</p>
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取<p>请求包内日志的ID</p>
                     * @return PkgLogId <p>请求包内日志的ID</p>
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置<p>请求包内日志的ID</p>
                     * @param _pkgLogId <p>请求包内日志的ID</p>
                     * 
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                private:

                    /**
                     * <p>单条日志的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>单条日志的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>这条日志对应的Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>日志的时间戳（RFC3339格式的时间字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>日志上报请求包的ID</p>
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * <p>请求包内日志的ID</p>
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_LOGIDENTITY_H_
