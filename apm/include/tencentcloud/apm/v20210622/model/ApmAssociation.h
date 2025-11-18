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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMASSOCIATION_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 展示apm业务系统与其他云产品关联关系返回体
                */
                class ApmAssociation : public AbstractModel
                {
                public:
                    ApmAssociation();
                    ~ApmAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联产品的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerId 关联产品的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置关联产品的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerId 关联产品的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                    /**
                     * 获取关联关系状态：1（启用）、2（不启用）、3（已失效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 关联关系状态：1（启用）、2（不启用）、3（已失效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置关联关系状态：1（启用）、2（不启用）、3（已失效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 关联关系状态：1（启用）、2（不启用）、3（已失效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CKafka消息主题
                     * @return Topic CKafka消息主题
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置CKafka消息主题
                     * @param _topic CKafka消息主题
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * 关联产品的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * 关联关系状态：1（启用）、2（不启用）、3（已失效）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CKafka消息主题
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMASSOCIATION_H_
