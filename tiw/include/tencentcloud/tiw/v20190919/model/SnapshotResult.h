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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 白板板书结果
                */
                class SnapshotResult : public AbstractModel
                {
                public:
                    SnapshotResult();
                    ~SnapshotResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务执行错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 任务执行错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置任务执行错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode 任务执行错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取任务执行错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 任务执行错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置任务执行错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 任务执行错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取快照生成图片总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 快照生成图片总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置快照生成图片总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 快照生成图片总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取快照图片链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Snapshots 快照图片链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSnapshots() const;

                    /**
                     * 设置快照图片链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshots 快照图片链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshots(const std::vector<std::string>& _snapshots);

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                private:

                    /**
                     * 任务执行错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务执行错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 快照生成图片总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 快照图片链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_snapshots;
                    bool m_snapshotsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTRESULT_H_
