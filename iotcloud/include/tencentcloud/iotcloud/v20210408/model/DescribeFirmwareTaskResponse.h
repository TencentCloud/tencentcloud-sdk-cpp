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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTask返回参数结构体
                */
                class DescribeFirmwareTaskResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareTaskResponse();
                    ~DescribeFirmwareTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取固件任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 固件任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取固件任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 固件任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取固件任务创建时间，单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 固件任务创建时间，单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取固件任务升级类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 固件任务升级类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取固件任务升级模式。originalVersion（按版本号升级）、filename（提交文件升级）、devicenames（按设备名称升级）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeMode 固件任务升级模式。originalVersion（按版本号升级）、filename（提交文件升级）、devicenames（按设备名称升级）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 判断参数 UpgradeMode 是否已赋值
                     * @return UpgradeMode 是否已赋值
                     * 
                     */
                    bool UpgradeModeHasBeenSet() const;

                    /**
                     * 获取产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取升级前版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalVersion 升级前版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalVersion() const;

                    /**
                     * 判断参数 OriginalVersion 是否已赋值
                     * @return OriginalVersion 是否已赋值
                     * 
                     */
                    bool OriginalVersionHasBeenSet() const;

                private:

                    /**
                     * 固件任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 固件任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 固件任务创建时间，单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 固件任务升级类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 固件任务升级模式。originalVersion（按版本号升级）、filename（提交文件升级）、devicenames（按设备名称升级）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                    /**
                     * 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 升级前版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalVersion;
                    bool m_originalVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKRESPONSE_H_
