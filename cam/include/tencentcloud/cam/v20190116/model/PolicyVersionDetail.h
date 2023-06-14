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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONDETAIL_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 策略版本详情
                */
                class PolicyVersionDetail : public AbstractModel
                {
                public:
                    PolicyVersionDetail();
                    ~PolicyVersionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 策略版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVersionId() const;

                    /**
                     * 设置策略版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 策略版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const uint64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取策略版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateDate 策略版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置策略版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createDate 策略版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取是否是正在生效的版本。0表示不是，1表示是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefaultVersion 是否是正在生效的版本。0表示不是，1表示是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsDefaultVersion() const;

                    /**
                     * 设置是否是正在生效的版本。0表示不是，1表示是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefaultVersion 是否是正在生效的版本。0表示不是，1表示是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefaultVersion(const uint64_t& _isDefaultVersion);

                    /**
                     * 判断参数 IsDefaultVersion 是否已赋值
                     * @return IsDefaultVersion 是否已赋值
                     * 
                     */
                    bool IsDefaultVersionHasBeenSet() const;

                    /**
                     * 获取策略语法文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Document 策略语法文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置策略语法文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _document 策略语法文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocument(const std::string& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                private:

                    /**
                     * 策略版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 策略版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 是否是正在生效的版本。0表示不是，1表示是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isDefaultVersion;
                    bool m_isDefaultVersionHasBeenSet;

                    /**
                     * 策略语法文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONDETAIL_H_
