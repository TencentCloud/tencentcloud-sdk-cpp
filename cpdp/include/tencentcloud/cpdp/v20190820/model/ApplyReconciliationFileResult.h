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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYRECONCILIATIONFILERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYRECONCILIATIONFILERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 申请对账文件结果
                */
                class ApplyReconciliationFileResult : public AbstractModel
                {
                public:
                    ApplyReconciliationFileResult();
                    ~ApplyReconciliationFileResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申请对账文件的任务ID。
                     * @return ApplyFileId 申请对账文件的任务ID。
                     * 
                     */
                    std::string GetApplyFileId() const;

                    /**
                     * 设置申请对账文件的任务ID。
                     * @param _applyFileId 申请对账文件的任务ID。
                     * 
                     */
                    void SetApplyFileId(const std::string& _applyFileId);

                    /**
                     * 判断参数 ApplyFileId 是否已赋值
                     * @return ApplyFileId 是否已赋值
                     * 
                     */
                    bool ApplyFileIdHasBeenSet() const;

                    /**
                     * 获取对账文件申请状态。
__I__：申请中
__S__：申请成功
__F__：申请失败
                     * @return ApplyStatus 对账文件申请状态。
__I__：申请中
__S__：申请成功
__F__：申请失败
                     * 
                     */
                    std::string GetApplyStatus() const;

                    /**
                     * 设置对账文件申请状态。
__I__：申请中
__S__：申请成功
__F__：申请失败
                     * @param _applyStatus 对账文件申请状态。
__I__：申请中
__S__：申请成功
__F__：申请失败
                     * 
                     */
                    void SetApplyStatus(const std::string& _applyStatus);

                    /**
                     * 判断参数 ApplyStatus 是否已赋值
                     * @return ApplyStatus 是否已赋值
                     * 
                     */
                    bool ApplyStatusHasBeenSet() const;

                    /**
                     * 获取申请结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyMessage 申请结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplyMessage() const;

                    /**
                     * 设置申请结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applyMessage 申请结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplyMessage(const std::string& _applyMessage);

                    /**
                     * 判断参数 ApplyMessage 是否已赋值
                     * @return ApplyMessage 是否已赋值
                     * 
                     */
                    bool ApplyMessageHasBeenSet() const;

                private:

                    /**
                     * 申请对账文件的任务ID。
                     */
                    std::string m_applyFileId;
                    bool m_applyFileIdHasBeenSet;

                    /**
                     * 对账文件申请状态。
__I__：申请中
__S__：申请成功
__F__：申请失败
                     */
                    std::string m_applyStatus;
                    bool m_applyStatusHasBeenSet;

                    /**
                     * 申请结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyMessage;
                    bool m_applyMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYRECONCILIATIONFILERESULT_H_
