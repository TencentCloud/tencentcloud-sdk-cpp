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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_UPLOADDEVICEUNIQUECODERESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_UPLOADDEVICEUNIQUECODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * UploadDeviceUniqueCode返回参数结构体
                */
                class UploadDeviceUniqueCodeResponse : public AbstractModel
                {
                public:
                    UploadDeviceUniqueCodeResponse();
                    ~UploadDeviceUniqueCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次已上传数量
                     * @return Count 本次已上传数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取重复的硬件唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExistedCodeSet 重复的硬件唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExistedCodeSet() const;

                    /**
                     * 判断参数 ExistedCodeSet 是否已赋值
                     * @return ExistedCodeSet 是否已赋值
                     * 
                     */
                    bool ExistedCodeSetHasBeenSet() const;

                    /**
                     * 获取剩余可上传数量
                     * @return LeftQuantity 剩余可上传数量
                     * 
                     */
                    uint64_t GetLeftQuantity() const;

                    /**
                     * 判断参数 LeftQuantity 是否已赋值
                     * @return LeftQuantity 是否已赋值
                     * 
                     */
                    bool LeftQuantityHasBeenSet() const;

                    /**
                     * 获取错误的硬件唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IllegalCodeSet 错误的硬件唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIllegalCodeSet() const;

                    /**
                     * 判断参数 IllegalCodeSet 是否已赋值
                     * @return IllegalCodeSet 是否已赋值
                     * 
                     */
                    bool IllegalCodeSetHasBeenSet() const;

                private:

                    /**
                     * 本次已上传数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 重复的硬件唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_existedCodeSet;
                    bool m_existedCodeSetHasBeenSet;

                    /**
                     * 剩余可上传数量
                     */
                    uint64_t m_leftQuantity;
                    bool m_leftQuantityHasBeenSet;

                    /**
                     * 错误的硬件唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_illegalCodeSet;
                    bool m_illegalCodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_UPLOADDEVICEUNIQUECODERESPONSE_H_
