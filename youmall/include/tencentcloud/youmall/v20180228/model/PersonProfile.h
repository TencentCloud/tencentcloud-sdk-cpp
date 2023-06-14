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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONPROFILE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 来访客人基本资料
                */
                class PersonProfile : public AbstractModel
                {
                public:
                    PersonProfile();
                    ~PersonProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客人编码
                     * @return PersonId 客人编码
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置客人编码
                     * @param _personId 客人编码
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Gender 性别
                     * 
                     */
                    uint64_t GetGender() const;

                    /**
                     * 设置性别
                     * @param _gender 性别
                     * 
                     */
                    void SetGender(const uint64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    uint64_t GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
                     * 
                     */
                    void SetAge(const uint64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取首次到场时间
                     * @return FirstArrivedTime 首次到场时间
                     * 
                     */
                    std::string GetFirstArrivedTime() const;

                    /**
                     * 设置首次到场时间
                     * @param _firstArrivedTime 首次到场时间
                     * 
                     */
                    void SetFirstArrivedTime(const std::string& _firstArrivedTime);

                    /**
                     * 判断参数 FirstArrivedTime 是否已赋值
                     * @return FirstArrivedTime 是否已赋值
                     * 
                     */
                    bool FirstArrivedTimeHasBeenSet() const;

                    /**
                     * 获取来访次数
                     * @return ArrivedCount 来访次数
                     * 
                     */
                    uint64_t GetArrivedCount() const;

                    /**
                     * 设置来访次数
                     * @param _arrivedCount 来访次数
                     * 
                     */
                    void SetArrivedCount(const uint64_t& _arrivedCount);

                    /**
                     * 判断参数 ArrivedCount 是否已赋值
                     * @return ArrivedCount 是否已赋值
                     * 
                     */
                    bool ArrivedCountHasBeenSet() const;

                    /**
                     * 获取客户图片
                     * @return PicUrl 客户图片
                     * 
                     */
                    std::string GetPicUrl() const;

                    /**
                     * 设置客户图片
                     * @param _picUrl 客户图片
                     * 
                     */
                    void SetPicUrl(const std::string& _picUrl);

                    /**
                     * 判断参数 PicUrl 是否已赋值
                     * @return PicUrl 是否已赋值
                     * 
                     */
                    bool PicUrlHasBeenSet() const;

                    /**
                     * 获取置信度
                     * @return Similarity 置信度
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置置信度
                     * @param _similarity 置信度
                     * 
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                private:

                    /**
                     * 客人编码
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 性别
                     */
                    uint64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 年龄
                     */
                    uint64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 首次到场时间
                     */
                    std::string m_firstArrivedTime;
                    bool m_firstArrivedTimeHasBeenSet;

                    /**
                     * 来访次数
                     */
                    uint64_t m_arrivedCount;
                    bool m_arrivedCountHasBeenSet;

                    /**
                     * 客户图片
                     */
                    std::string m_picUrl;
                    bool m_picUrlHasBeenSet;

                    /**
                     * 置信度
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONPROFILE_H_
