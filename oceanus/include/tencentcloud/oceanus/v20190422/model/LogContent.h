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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_LOGCONTENT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_LOGCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 日志查询的每行日志信息
                */
                class LogContent : public AbstractModel
                {
                public:
                    LogContent();
                    ~LogContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Log 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _log 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取毫秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 毫秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置毫秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 毫秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取日志组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgId 日志组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgId 日志组Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取日志Id，在日志组范围里唯一
                     * @return PkgLogId 日志Id，在日志组范围里唯一
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置日志Id，在日志组范围里唯一
                     * @param _pkgLogId 日志Id，在日志组范围里唯一
                     * 
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取日志所属的容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName 日志所属的容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置日志所属的容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName 日志所属的容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                private:

                    /**
                     * 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 毫秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 日志组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志Id，在日志组范围里唯一
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 日志所属的容器名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_LOGCONTENT_H_
