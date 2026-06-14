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
                     * 获取<p>请求id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>请求id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>请求id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>请求id</p>
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
                     * 获取<p>key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey <p>key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKey <p>key</p>
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
                     * 获取<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>id</p>
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
                     * 获取<p>事务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranId <p>事务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置<p>事务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranId <p>事务id</p>
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
                     * 获取<p>事务状态</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 处理成功</li><li>3： 处理失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranStatus <p>事务状态</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 处理成功</li><li>3： 处理失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTranStatus() const;

                    /**
                     * 设置<p>事务状态</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 处理成功</li><li>3： 处理失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranStatus <p>事务状态</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 处理成功</li><li>3： 处理失败</li></ul>
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
                     * <p>请求id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>事务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * <p>事务状态</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 处理成功</li><li>3： 处理失败</li></ul>
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
