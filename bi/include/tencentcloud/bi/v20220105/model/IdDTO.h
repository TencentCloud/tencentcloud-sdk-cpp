/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_IDDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_IDDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 仅包含id的对象
                */
                class IdDTO : public AbstractModel
                {
                public:
                    IdDTO();
                    ~IdDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKey key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranId 事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranId 事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取事务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranStatus 事务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTranStatus() const;

                    /**
                     * 设置事务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranStatus 事务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranStatus(const int64_t& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                private:

                    /**
                     * 请求id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * 事务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_IDDTO_H_
