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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PERMISSIONSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PERMISSIONSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 读写权限状态
                */
                class PermissionStatus : public AbstractModel
                {
                public:
                    PermissionStatus();
                    ~PermissionStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanWrite 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanWrite() const;

                    /**
                     * 设置写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canWrite 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanWrite(const bool& _canWrite);

                    /**
                     * 判断参数 CanWrite 是否已赋值
                     * @return CanWrite 是否已赋值
                     * 
                     */
                    bool CanWriteHasBeenSet() const;

                    /**
                     * 获取写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanDelete 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canDelete 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanDelete(const bool& _canDelete);

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanRead 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanRead() const;

                    /**
                     * 设置写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canRead 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanRead(const bool& _canRead);

                    /**
                     * 判断参数 CanRead 是否已赋值
                     * @return CanRead 是否已赋值
                     * 
                     */
                    bool CanReadHasBeenSet() const;

                private:

                    /**
                     * 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canWrite;
                    bool m_canWriteHasBeenSet;

                    /**
                     * 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * 写权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canRead;
                    bool m_canReadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PERMISSIONSTATUS_H_
