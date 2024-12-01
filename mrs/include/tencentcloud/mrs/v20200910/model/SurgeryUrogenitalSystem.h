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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYUROGENITALSYSTEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYUROGENITALSYSTEM_H_

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
                * 体检报告-外科-泌尿生殖系统
                */
                class SurgeryUrogenitalSystem : public AbstractModel
                {
                public:
                    SurgeryUrogenitalSystem();
                    ~SurgeryUrogenitalSystem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取泌尿生殖系统总体描述
                     * @return Text 泌尿生殖系统总体描述
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置泌尿生殖系统总体描述
                     * @param _text 泌尿生殖系统总体描述
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
                     * 获取前列腺
                     * @return Prostate 前列腺
                     * 
                     */
                    KeyValueItem GetProstate() const;

                    /**
                     * 设置前列腺
                     * @param _prostate 前列腺
                     * 
                     */
                    void SetProstate(const KeyValueItem& _prostate);

                    /**
                     * 判断参数 Prostate 是否已赋值
                     * @return Prostate 是否已赋值
                     * 
                     */
                    bool ProstateHasBeenSet() const;

                    /**
                     * 获取外生殖器（男性）
                     * @return ExternalReproductiveOrgans 外生殖器（男性）
                     * 
                     */
                    KeyValueItem GetExternalReproductiveOrgans() const;

                    /**
                     * 设置外生殖器（男性）
                     * @param _externalReproductiveOrgans 外生殖器（男性）
                     * 
                     */
                    void SetExternalReproductiveOrgans(const KeyValueItem& _externalReproductiveOrgans);

                    /**
                     * 判断参数 ExternalReproductiveOrgans 是否已赋值
                     * @return ExternalReproductiveOrgans 是否已赋值
                     * 
                     */
                    bool ExternalReproductiveOrgansHasBeenSet() const;

                private:

                    /**
                     * 泌尿生殖系统总体描述
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 前列腺
                     */
                    KeyValueItem m_prostate;
                    bool m_prostateHasBeenSet;

                    /**
                     * 外生殖器（男性）
                     */
                    KeyValueItem m_externalReproductiveOrgans;
                    bool m_externalReproductiveOrgansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYUROGENITALSYSTEM_H_
