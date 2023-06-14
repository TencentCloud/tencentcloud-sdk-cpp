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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICEMODELDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICEMODELDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 设备物模型数据
                */
                class DeviceModelData : public AbstractModel
                {
                public:
                    DeviceModelData();
                    ~DeviceModelData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取物模型分支路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branch 物模型分支路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置物模型分支路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branch 物模型分支路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取物模型数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IotModel 物模型数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIotModel() const;

                    /**
                     * 设置物模型数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iotModel 物模型数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIotModel(const std::string& _iotModel);

                    /**
                     * 判断参数 IotModel 是否已赋值
                     * @return IotModel 是否已赋值
                     * 
                     */
                    bool IotModelHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 物模型分支路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * 物模型数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iotModel;
                    bool m_iotModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICEMODELDATA_H_
