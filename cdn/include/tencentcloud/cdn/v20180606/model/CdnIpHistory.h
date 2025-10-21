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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CDNIPHISTORY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CDNIPHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CDN 节点上下线历史记录
                */
                class CdnIpHistory : public AbstractModel
                {
                public:
                    CdnIpHistory();
                    ~CdnIpHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型
online：节点上线
offline：节点下线
                     * @return Status 操作类型
online：节点上线
offline：节点下线
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置操作类型
online：节点上线
offline：节点下线
                     * @param _status 操作类型
online：节点上线
offline：节点下线
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
                     * 获取操作类型对应的操作时间
当该值为 null 时表示无历史状态变更记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Datetime 操作类型对应的操作时间
当该值为 null 时表示无历史状态变更记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatetime() const;

                    /**
                     * 设置操作类型对应的操作时间
当该值为 null 时表示无历史状态变更记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datetime 操作类型对应的操作时间
当该值为 null 时表示无历史状态变更记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatetime(const std::string& _datetime);

                    /**
                     * 判断参数 Datetime 是否已赋值
                     * @return Datetime 是否已赋值
                     * 
                     */
                    bool DatetimeHasBeenSet() const;

                private:

                    /**
                     * 操作类型
online：节点上线
offline：节点下线
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作类型对应的操作时间
当该值为 null 时表示无历史状态变更记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datetime;
                    bool m_datetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CDNIPHISTORY_H_
