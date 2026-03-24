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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGRECORDERRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGRECORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/UserConfigResource.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeConfigRecorder返回参数结构体
                */
                class DescribeConfigRecorderResponse : public AbstractModel
                {
                public:
                    DescribeConfigRecorderResponse();
                    ~DescribeConfigRecorderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户监控资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 用户监控资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserConfigResource> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取0 关闭1 打开
                     * @return Status 0 关闭1 打开
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当日快照次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerCount 当日快照次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerCount() const;

                    /**
                     * 判断参数 TriggerCount 是否已赋值
                     * @return TriggerCount 是否已赋值
                     * 
                     */
                    bool TriggerCountHasBeenSet() const;

                    /**
                     * 获取当日打开监控次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenCount 当日打开监控次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOpenCount() const;

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取当日修改监控范围次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateCount 当日修改监控范围次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateCount() const;

                    /**
                     * 判断参数 UpdateCount 是否已赋值
                     * @return UpdateCount 是否已赋值
                     * 
                     */
                    bool UpdateCountHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户监控资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserConfigResource> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 0 关闭1 打开
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当日快照次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * 当日打开监控次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * 当日修改监控范围次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateCount;
                    bool m_updateCountHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGRECORDERRESPONSE_H_
