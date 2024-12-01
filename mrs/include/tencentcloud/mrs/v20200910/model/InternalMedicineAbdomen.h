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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEABDOMEN_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEABDOMEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomenLiver.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomenGallBladder.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomenPancreas.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomenSpleen.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomenKidney.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-内科-腹部
                */
                class InternalMedicineAbdomen : public AbstractModel
                {
                public:
                    InternalMedicineAbdomen();
                    ~InternalMedicineAbdomen() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内科腹部小结
                     * @return Text 内科腹部小结
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置内科腹部小结
                     * @param _text 内科腹部小结
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
                     * 获取肝脏
                     * @return Liver 肝脏
                     * 
                     */
                    InternalMedicineAbdomenLiver GetLiver() const;

                    /**
                     * 设置肝脏
                     * @param _liver 肝脏
                     * 
                     */
                    void SetLiver(const InternalMedicineAbdomenLiver& _liver);

                    /**
                     * 判断参数 Liver 是否已赋值
                     * @return Liver 是否已赋值
                     * 
                     */
                    bool LiverHasBeenSet() const;

                    /**
                     * 获取胆囊
                     * @return GallBladder 胆囊
                     * 
                     */
                    InternalMedicineAbdomenGallBladder GetGallBladder() const;

                    /**
                     * 设置胆囊
                     * @param _gallBladder 胆囊
                     * 
                     */
                    void SetGallBladder(const InternalMedicineAbdomenGallBladder& _gallBladder);

                    /**
                     * 判断参数 GallBladder 是否已赋值
                     * @return GallBladder 是否已赋值
                     * 
                     */
                    bool GallBladderHasBeenSet() const;

                    /**
                     * 获取胰腺
                     * @return Pancreas 胰腺
                     * 
                     */
                    InternalMedicineAbdomenPancreas GetPancreas() const;

                    /**
                     * 设置胰腺
                     * @param _pancreas 胰腺
                     * 
                     */
                    void SetPancreas(const InternalMedicineAbdomenPancreas& _pancreas);

                    /**
                     * 判断参数 Pancreas 是否已赋值
                     * @return Pancreas 是否已赋值
                     * 
                     */
                    bool PancreasHasBeenSet() const;

                    /**
                     * 获取脾脏
                     * @return Spleen 脾脏
                     * 
                     */
                    InternalMedicineAbdomenSpleen GetSpleen() const;

                    /**
                     * 设置脾脏
                     * @param _spleen 脾脏
                     * 
                     */
                    void SetSpleen(const InternalMedicineAbdomenSpleen& _spleen);

                    /**
                     * 判断参数 Spleen 是否已赋值
                     * @return Spleen 是否已赋值
                     * 
                     */
                    bool SpleenHasBeenSet() const;

                    /**
                     * 获取肾脏
                     * @return Kidney 肾脏
                     * 
                     */
                    InternalMedicineAbdomenKidney GetKidney() const;

                    /**
                     * 设置肾脏
                     * @param _kidney 肾脏
                     * 
                     */
                    void SetKidney(const InternalMedicineAbdomenKidney& _kidney);

                    /**
                     * 判断参数 Kidney 是否已赋值
                     * @return Kidney 是否已赋值
                     * 
                     */
                    bool KidneyHasBeenSet() const;

                    /**
                     * 获取腹部其他
                     * @return Others 腹部其他
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置腹部其他
                     * @param _others 腹部其他
                     * 
                     */
                    void SetOthers(const std::vector<KeyValueItem>& _others);

                    /**
                     * 判断参数 Others 是否已赋值
                     * @return Others 是否已赋值
                     * 
                     */
                    bool OthersHasBeenSet() const;

                private:

                    /**
                     * 内科腹部小结
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 肝脏
                     */
                    InternalMedicineAbdomenLiver m_liver;
                    bool m_liverHasBeenSet;

                    /**
                     * 胆囊
                     */
                    InternalMedicineAbdomenGallBladder m_gallBladder;
                    bool m_gallBladderHasBeenSet;

                    /**
                     * 胰腺
                     */
                    InternalMedicineAbdomenPancreas m_pancreas;
                    bool m_pancreasHasBeenSet;

                    /**
                     * 脾脏
                     */
                    InternalMedicineAbdomenSpleen m_spleen;
                    bool m_spleenHasBeenSet;

                    /**
                     * 肾脏
                     */
                    InternalMedicineAbdomenKidney m_kidney;
                    bool m_kidneyHasBeenSet;

                    /**
                     * 腹部其他
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEABDOMEN_H_
