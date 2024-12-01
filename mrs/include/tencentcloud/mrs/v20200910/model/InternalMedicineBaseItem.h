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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineAbdomen.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineHeart.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineVessel.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineRespiratorySystem.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineBriefSummary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-内科
                */
                class InternalMedicineBaseItem : public AbstractModel
                {
                public:
                    InternalMedicineBaseItem();
                    ~InternalMedicineBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取体检报告-内科-腹部
                     * @return Abdomen 体检报告-内科-腹部
                     * 
                     */
                    InternalMedicineAbdomen GetAbdomen() const;

                    /**
                     * 设置体检报告-内科-腹部
                     * @param _abdomen 体检报告-内科-腹部
                     * 
                     */
                    void SetAbdomen(const InternalMedicineAbdomen& _abdomen);

                    /**
                     * 判断参数 Abdomen 是否已赋值
                     * @return Abdomen 是否已赋值
                     * 
                     */
                    bool AbdomenHasBeenSet() const;

                    /**
                     * 获取体检报告-内科-心脏
                     * @return Heart 体检报告-内科-心脏
                     * 
                     */
                    InternalMedicineHeart GetHeart() const;

                    /**
                     * 设置体检报告-内科-心脏
                     * @param _heart 体检报告-内科-心脏
                     * 
                     */
                    void SetHeart(const InternalMedicineHeart& _heart);

                    /**
                     * 判断参数 Heart 是否已赋值
                     * @return Heart 是否已赋值
                     * 
                     */
                    bool HeartHasBeenSet() const;

                    /**
                     * 获取体检报告-内科-血管
                     * @return Vessel 体检报告-内科-血管
                     * 
                     */
                    InternalMedicineVessel GetVessel() const;

                    /**
                     * 设置体检报告-内科-血管
                     * @param _vessel 体检报告-内科-血管
                     * 
                     */
                    void SetVessel(const InternalMedicineVessel& _vessel);

                    /**
                     * 判断参数 Vessel 是否已赋值
                     * @return Vessel 是否已赋值
                     * 
                     */
                    bool VesselHasBeenSet() const;

                    /**
                     * 获取体检报告-内科-呼吸系统
                     * @return RespiratorySystem 体检报告-内科-呼吸系统
                     * 
                     */
                    InternalMedicineRespiratorySystem GetRespiratorySystem() const;

                    /**
                     * 设置体检报告-内科-呼吸系统
                     * @param _respiratorySystem 体检报告-内科-呼吸系统
                     * 
                     */
                    void SetRespiratorySystem(const InternalMedicineRespiratorySystem& _respiratorySystem);

                    /**
                     * 判断参数 RespiratorySystem 是否已赋值
                     * @return RespiratorySystem 是否已赋值
                     * 
                     */
                    bool RespiratorySystemHasBeenSet() const;

                    /**
                     * 获取体检报告-内科-内科其他
                     * @return Others 体检报告-内科-内科其他
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置体检报告-内科-内科其他
                     * @param _others 体检报告-内科-内科其他
                     * 
                     */
                    void SetOthers(const std::vector<KeyValueItem>& _others);

                    /**
                     * 判断参数 Others 是否已赋值
                     * @return Others 是否已赋值
                     * 
                     */
                    bool OthersHasBeenSet() const;

                    /**
                     * 获取体检报告-内科-小结
                     * @return BriefSummary 体检报告-内科-小结
                     * 
                     */
                    InternalMedicineBriefSummary GetBriefSummary() const;

                    /**
                     * 设置体检报告-内科-小结
                     * @param _briefSummary 体检报告-内科-小结
                     * 
                     */
                    void SetBriefSummary(const InternalMedicineBriefSummary& _briefSummary);

                    /**
                     * 判断参数 BriefSummary 是否已赋值
                     * @return BriefSummary 是否已赋值
                     * 
                     */
                    bool BriefSummaryHasBeenSet() const;

                private:

                    /**
                     * 体检报告-内科-腹部
                     */
                    InternalMedicineAbdomen m_abdomen;
                    bool m_abdomenHasBeenSet;

                    /**
                     * 体检报告-内科-心脏
                     */
                    InternalMedicineHeart m_heart;
                    bool m_heartHasBeenSet;

                    /**
                     * 体检报告-内科-血管
                     */
                    InternalMedicineVessel m_vessel;
                    bool m_vesselHasBeenSet;

                    /**
                     * 体检报告-内科-呼吸系统
                     */
                    InternalMedicineRespiratorySystem m_respiratorySystem;
                    bool m_respiratorySystemHasBeenSet;

                    /**
                     * 体检报告-内科-内科其他
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 体检报告-内科-小结
                     */
                    InternalMedicineBriefSummary m_briefSummary;
                    bool m_briefSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEBASEITEM_H_
