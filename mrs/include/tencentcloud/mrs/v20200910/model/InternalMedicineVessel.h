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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEVESSEL_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEVESSEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-内科-血管
                */
                class InternalMedicineVessel : public AbstractModel
                {
                public:
                    InternalMedicineVessel();
                    ~InternalMedicineVessel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取血管总体描述
                     * @return Text 血管总体描述
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置血管总体描述
                     * @param _text 血管总体描述
                     * 
                     */
                    void SetText(const KeyValueItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取血管杂音
                     * @return VascularMurmur 血管杂音
                     * 
                     */
                    KeyValueItem GetVascularMurmur() const;

                    /**
                     * 设置血管杂音
                     * @param _vascularMurmur 血管杂音
                     * 
                     */
                    void SetVascularMurmur(const KeyValueItem& _vascularMurmur);

                    /**
                     * 判断参数 VascularMurmur 是否已赋值
                     * @return VascularMurmur 是否已赋值
                     * 
                     */
                    bool VascularMurmurHasBeenSet() const;

                    /**
                     * 获取外周血管
                     * @return PeripheralVessel 外周血管
                     * 
                     */
                    KeyValueItem GetPeripheralVessel() const;

                    /**
                     * 设置外周血管
                     * @param _peripheralVessel 外周血管
                     * 
                     */
                    void SetPeripheralVessel(const KeyValueItem& _peripheralVessel);

                    /**
                     * 判断参数 PeripheralVessel 是否已赋值
                     * @return PeripheralVessel 是否已赋值
                     * 
                     */
                    bool PeripheralVesselHasBeenSet() const;

                private:

                    /**
                     * 血管总体描述
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 血管杂音
                     */
                    KeyValueItem m_vascularMurmur;
                    bool m_vascularMurmurHasBeenSet;

                    /**
                     * 外周血管
                     */
                    KeyValueItem m_peripheralVessel;
                    bool m_peripheralVesselHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEVESSEL_H_
