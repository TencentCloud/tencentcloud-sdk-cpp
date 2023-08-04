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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_AITASKRESULTINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_AITASKRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/BodyAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/PetAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/CarAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/ChefHatAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/ChefClothAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/FaceMaskAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/SmokingAIResultInfo.h>
#include <tencentcloud/iss/v20230517/model/PhoneCallAIResultInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI分析结果详情
                */
                class AITaskResultInfo : public AbstractModel
                {
                public:
                    AITaskResultInfo();
                    ~AITaskResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人体识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Body 人体识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BodyAIResultInfo> GetBody() const;

                    /**
                     * 设置人体识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _body 人体识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBody(const std::vector<BodyAIResultInfo>& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取宠物识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pet 宠物识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PetAIResultInfo> GetPet() const;

                    /**
                     * 设置宠物识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pet 宠物识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPet(const std::vector<PetAIResultInfo>& _pet);

                    /**
                     * 判断参数 Pet 是否已赋值
                     * @return Pet 是否已赋值
                     * 
                     */
                    bool PetHasBeenSet() const;

                    /**
                     * 获取车辆车牌识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Car 车辆车牌识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CarAIResultInfo> GetCar() const;

                    /**
                     * 设置车辆车牌识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _car 车辆车牌识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCar(const std::vector<CarAIResultInfo>& _car);

                    /**
                     * 判断参数 Car 是否已赋值
                     * @return Car 是否已赋值
                     * 
                     */
                    bool CarHasBeenSet() const;

                    /**
                     * 获取厨师帽结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChefHat 厨师帽结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChefHatAIResultInfo> GetChefHat() const;

                    /**
                     * 设置厨师帽结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chefHat 厨师帽结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChefHat(const std::vector<ChefHatAIResultInfo>& _chefHat);

                    /**
                     * 判断参数 ChefHat 是否已赋值
                     * @return ChefHat 是否已赋值
                     * 
                     */
                    bool ChefHatHasBeenSet() const;

                    /**
                     * 获取厨师服结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChefCloth 厨师服结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChefClothAIResultInfo> GetChefCloth() const;

                    /**
                     * 设置厨师服结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chefCloth 厨师服结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChefCloth(const std::vector<ChefClothAIResultInfo>& _chefCloth);

                    /**
                     * 判断参数 ChefCloth 是否已赋值
                     * @return ChefCloth 是否已赋值
                     * 
                     */
                    bool ChefClothHasBeenSet() const;

                    /**
                     * 获取口罩识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceMask 口罩识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FaceMaskAIResultInfo> GetFaceMask() const;

                    /**
                     * 设置口罩识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faceMask 口罩识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFaceMask(const std::vector<FaceMaskAIResultInfo>& _faceMask);

                    /**
                     * 判断参数 FaceMask 是否已赋值
                     * @return FaceMask 是否已赋值
                     * 
                     */
                    bool FaceMaskHasBeenSet() const;

                    /**
                     * 获取抽烟检测结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Smoking 抽烟检测结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SmokingAIResultInfo> GetSmoking() const;

                    /**
                     * 设置抽烟检测结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smoking 抽烟检测结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmoking(const std::vector<SmokingAIResultInfo>& _smoking);

                    /**
                     * 判断参数 Smoking 是否已赋值
                     * @return Smoking 是否已赋值
                     * 
                     */
                    bool SmokingHasBeenSet() const;

                    /**
                     * 获取接打电话识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCall 接打电话识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PhoneCallAIResultInfo> GetPhoneCall() const;

                    /**
                     * 设置接打电话识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCall 接打电话识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneCall(const std::vector<PhoneCallAIResultInfo>& _phoneCall);

                    /**
                     * 判断参数 PhoneCall 是否已赋值
                     * @return PhoneCall 是否已赋值
                     * 
                     */
                    bool PhoneCallHasBeenSet() const;

                private:

                    /**
                     * 人体识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BodyAIResultInfo> m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 宠物识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PetAIResultInfo> m_pet;
                    bool m_petHasBeenSet;

                    /**
                     * 车辆车牌识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CarAIResultInfo> m_car;
                    bool m_carHasBeenSet;

                    /**
                     * 厨师帽结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChefHatAIResultInfo> m_chefHat;
                    bool m_chefHatHasBeenSet;

                    /**
                     * 厨师服结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChefClothAIResultInfo> m_chefCloth;
                    bool m_chefClothHasBeenSet;

                    /**
                     * 口罩识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FaceMaskAIResultInfo> m_faceMask;
                    bool m_faceMaskHasBeenSet;

                    /**
                     * 抽烟检测结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SmokingAIResultInfo> m_smoking;
                    bool m_smokingHasBeenSet;

                    /**
                     * 接打电话识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PhoneCallAIResultInfo> m_phoneCall;
                    bool m_phoneCallHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_AITASKRESULTINFO_H_
