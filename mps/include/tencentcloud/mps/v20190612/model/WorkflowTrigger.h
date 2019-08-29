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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosFileUploadTrigger.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 输入规则，当上传视频命中该规则时，即触发工作流。
                */
                class WorkflowTrigger : public AbstractModel
                {
                public:
                    WorkflowTrigger();
                    ~WorkflowTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发器的类型，目前仅支持 CosFileUpload。
                     * @return Type 触发器的类型，目前仅支持 CosFileUpload。
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发器的类型，目前仅支持 CosFileUpload。
                     * @param Type 触发器的类型，目前仅支持 CosFileUpload。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当 Type 为 CosFileUpload 时必填且有效，为 COS 触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosFileUploadTrigger 当 Type 为 CosFileUpload 时必填且有效，为 COS 触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosFileUploadTrigger GetCosFileUploadTrigger() const;

                    /**
                     * 设置当 Type 为 CosFileUpload 时必填且有效，为 COS 触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CosFileUploadTrigger 当 Type 为 CosFileUpload 时必填且有效，为 COS 触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCosFileUploadTrigger(const CosFileUploadTrigger& _cosFileUploadTrigger);

                    /**
                     * 判断参数 CosFileUploadTrigger 是否已赋值
                     * @return CosFileUploadTrigger 是否已赋值
                     */
                    bool CosFileUploadTriggerHasBeenSet() const;

                private:

                    /**
                     * 触发器的类型，目前仅支持 CosFileUpload。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当 Type 为 CosFileUpload 时必填且有效，为 COS 触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosFileUploadTrigger m_cosFileUploadTrigger;
                    bool m_cosFileUploadTriggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_
