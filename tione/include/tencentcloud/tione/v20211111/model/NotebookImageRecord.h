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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKIMAGERECORD_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKIMAGERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 镜像保存记录
                */
                class NotebookImageRecord : public AbstractModel
                {
                public:
                    NotebookImageRecord();
                    ~NotebookImageRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保存记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 保存记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置保存记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 保存记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrl 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取状态。eg：creating导出中/success已完成/stopped已停止/fail异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态。eg：creating导出中/success已完成/stopped已停止/fail异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。eg：creating导出中/success已完成/stopped已停止/fail异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态。eg：creating导出中/success已完成/stopped已停止/fail异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取kernel数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kernels kernel数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKernels() const;

                    /**
                     * 设置kernel数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kernels kernel数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKernels(const std::vector<std::string>& _kernels);

                    /**
                     * 判断参数 Kernels 是否已赋值
                     * @return Kernels 是否已赋值
                     * 
                     */
                    bool KernelsHasBeenSet() const;

                private:

                    /**
                     * 保存记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 状态。eg：creating导出中/success已完成/stopped已停止/fail异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * kernel数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_kernels;
                    bool m_kernelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NOTEBOOKIMAGERECORD_H_
