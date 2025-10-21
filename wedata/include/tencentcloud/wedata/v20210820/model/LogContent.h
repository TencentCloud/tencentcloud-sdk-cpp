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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实时任务日志内容
                */
                class LogContent : public AbstractModel
                {
                public:
                    LogContent();
                    ~LogContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志时间戳，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 日志时间戳，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置日志时间戳，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 日志时间戳，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取日志包id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgId 日志包id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志包id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgId 日志包id
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
                     * 获取日志内容
                     * @return Log 日志内容
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置日志内容
                     * @param _log 日志内容
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                private:

                    /**
                     * 日志时间戳，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 日志包id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENT_H_
