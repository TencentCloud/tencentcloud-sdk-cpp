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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DIAGREPORTURLITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DIAGREPORTURLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 健康报告URL信息
                */
                class DiagReportUrlItem : public AbstractModel
                {
                public:
                    DiagReportUrlItem();
                    ~DiagReportUrlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异步任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncRequestId 异步任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asyncRequestId 异步任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取报告下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportUrl 报告下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 设置报告下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportUrl 报告下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportUrl(const std::string& _reportUrl);

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取链接过期时间，Unix时间戳（秒），-1表示永不过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 链接过期时间，Unix时间戳（秒），-1表示永不过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置链接过期时间，Unix时间戳（秒），-1表示永不过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 链接过期时间，Unix时间戳（秒），-1表示永不过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 异步任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 报告下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * 链接过期时间，Unix时间戳（秒），-1表示永不过期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DIAGREPORTURLITEM_H_
