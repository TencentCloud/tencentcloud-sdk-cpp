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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_VERSIONREPLICAITEM_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_VERSIONREPLICAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 检查doris内核是否支持新语法。
                */
                class VersionReplicaItem : public AbstractModel
                {
                public:
                    VersionReplicaItem();
                    ~VersionReplicaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaFlag 版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicaFlag() const;

                    /**
                     * 设置版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaFlag 版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicaFlag(const int64_t& _replicaFlag);

                    /**
                     * 判断参数 ReplicaFlag 是否已赋值
                     * @return ReplicaFlag 是否已赋值
                     * 
                     */
                    bool ReplicaFlagHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicaFlag;
                    bool m_replicaFlagHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_VERSIONREPLICAITEM_H_
