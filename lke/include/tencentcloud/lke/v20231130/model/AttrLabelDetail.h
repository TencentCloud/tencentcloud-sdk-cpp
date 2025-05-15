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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 标签详情
                */
                class AttrLabelDetail : public AbstractModel
                {
                public:
                    AttrLabelDetail();
                    ~AttrLabelDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrBizId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrBizId() const;

                    /**
                     * 设置标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrBizId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrBizId(const std::string& _attrBizId);

                    /**
                     * 判断参数 AttrBizId 是否已赋值
                     * @return AttrBizId 是否已赋值
                     * 
                     */
                    bool AttrBizIdHasBeenSet() const;

                    /**
                     * 获取标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrKey 标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 设置标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrKey 标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrKey(const std::string& _attrKey);

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrName 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrName 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取标签值名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelNames 标签值名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelNames() const;

                    /**
                     * 设置标签值名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelNames 标签值名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelNames(const std::vector<std::string>& _labelNames);

                    /**
                     * 判断参数 LabelNames 是否已赋值
                     * @return LabelNames 是否已赋值
                     * 
                     */
                    bool LabelNamesHasBeenSet() const;

                    /**
                     * 获取标签是否在更新中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUpdating 标签是否在更新中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsUpdating() const;

                    /**
                     * 设置标签是否在更新中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUpdating 标签是否在更新中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsUpdating(const bool& _isUpdating);

                    /**
                     * 判断参数 IsUpdating 是否已赋值
                     * @return IsUpdating 是否已赋值
                     * 
                     */
                    bool IsUpdatingHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
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
                     * 获取状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取标签值总数
                     * @return LabelTotalCount 标签值总数
                     * 
                     */
                    std::string GetLabelTotalCount() const;

                    /**
                     * 设置标签值总数
                     * @param _labelTotalCount 标签值总数
                     * 
                     */
                    void SetLabelTotalCount(const std::string& _labelTotalCount);

                    /**
                     * 判断参数 LabelTotalCount 是否已赋值
                     * @return LabelTotalCount 是否已赋值
                     * 
                     */
                    bool LabelTotalCountHasBeenSet() const;

                private:

                    /**
                     * 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrBizId;
                    bool m_attrBizIdHasBeenSet;

                    /**
                     * 标签标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * 标签值名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelNames;
                    bool m_labelNamesHasBeenSet;

                    /**
                     * 标签是否在更新中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUpdating;
                    bool m_isUpdatingHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 标签值总数
                     */
                    std::string m_labelTotalCount;
                    bool m_labelTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABELDETAIL_H_
