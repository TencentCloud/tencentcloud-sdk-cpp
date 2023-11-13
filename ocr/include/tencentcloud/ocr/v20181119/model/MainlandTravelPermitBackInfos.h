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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDTRAVELPERMITBACKINFOS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDTRAVELPERMITBACKINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 港澳台来往内地通行证背面字段信息
                */
                class MainlandTravelPermitBackInfos : public AbstractModel
                {
                public:
                    MainlandTravelPermitBackInfos();
                    ~MainlandTravelPermitBackInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取String	证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type String	证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置String	证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type String	证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取卡证背面的中文姓名	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 卡证背面的中文姓名	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置卡证背面的中文姓名	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 卡证背面的中文姓名	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取卡证背面的身份证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IDNumber 卡证背面的身份证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIDNumber() const;

                    /**
                     * 设置卡证背面的身份证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iDNumber 卡证背面的身份证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIDNumber(const std::string& _iDNumber);

                    /**
                     * 判断参数 IDNumber 是否已赋值
                     * @return IDNumber 是否已赋值
                     * 
                     */
                    bool IDNumberHasBeenSet() const;

                    /**
                     * 获取历史通行证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HistoryNumber 历史通行证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHistoryNumber() const;

                    /**
                     * 设置历史通行证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _historyNumber 历史通行证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHistoryNumber(const std::string& _historyNumber);

                    /**
                     * 判断参数 HistoryNumber 是否已赋值
                     * @return HistoryNumber 是否已赋值
                     * 
                     */
                    bool HistoryNumberHasBeenSet() const;

                private:

                    /**
                     * String	证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 卡证背面的中文姓名	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 卡证背面的身份证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iDNumber;
                    bool m_iDNumberHasBeenSet;

                    /**
                     * 历史通行证号码	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_historyNumber;
                    bool m_historyNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDTRAVELPERMITBACKINFOS_H_
