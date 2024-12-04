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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/AppearInfo.h>
#include <tencentcloud/ivld/v20210903/model/Rectf.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 人物信息
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公众人物姓名
                     * @return Name 公众人物姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置公众人物姓名
                     * @param _name 公众人物姓名
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
                     * 获取公众人物职务
                     * @return Job 公众人物职务
                     * 
                     */
                    std::string GetJob() const;

                    /**
                     * 设置公众人物职务
                     * @param _job 公众人物职务
                     * 
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取首次出现模态，可选值为[1,3]，详细参见AppearIndex定义
                     * @return FirstAppear 首次出现模态，可选值为[1,3]，详细参见AppearIndex定义
                     * 
                     */
                    int64_t GetFirstAppear() const;

                    /**
                     * 设置首次出现模态，可选值为[1,3]，详细参见AppearIndex定义
                     * @param _firstAppear 首次出现模态，可选值为[1,3]，详细参见AppearIndex定义
                     * 
                     */
                    void SetFirstAppear(const int64_t& _firstAppear);

                    /**
                     * 判断参数 FirstAppear 是否已赋值
                     * @return FirstAppear 是否已赋值
                     * 
                     */
                    bool FirstAppearHasBeenSet() const;

                    /**
                     * 获取人物出现信息
                     * @return AppearInfo 人物出现信息
                     * 
                     */
                    AppearInfo GetAppearInfo() const;

                    /**
                     * 设置人物出现信息
                     * @param _appearInfo 人物出现信息
                     * 
                     */
                    void SetAppearInfo(const AppearInfo& _appearInfo);

                    /**
                     * 判断参数 AppearInfo 是否已赋值
                     * @return AppearInfo 是否已赋值
                     * 
                     */
                    bool AppearInfoHasBeenSet() const;

                    /**
                     * 获取人脸在图片中的位置，仅在图片标签任务有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppearRect 人脸在图片中的位置，仅在图片标签任务有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Rectf GetAppearRect() const;

                    /**
                     * 设置人脸在图片中的位置，仅在图片标签任务有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appearRect 人脸在图片中的位置，仅在图片标签任务有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppearRect(const Rectf& _appearRect);

                    /**
                     * 判断参数 AppearRect 是否已赋值
                     * @return AppearRect 是否已赋值
                     * 
                     */
                    bool AppearRectHasBeenSet() const;

                    /**
                     * 获取人物的personId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonId 人物的personId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人物的personId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _personId 人物的personId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 公众人物姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 公众人物职务
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 首次出现模态，可选值为[1,3]，详细参见AppearIndex定义
                     */
                    int64_t m_firstAppear;
                    bool m_firstAppearHasBeenSet;

                    /**
                     * 人物出现信息
                     */
                    AppearInfo m_appearInfo;
                    bool m_appearInfoHasBeenSet;

                    /**
                     * 人脸在图片中的位置，仅在图片标签任务有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Rectf m_appearRect;
                    bool m_appearRectHasBeenSet;

                    /**
                     * 人物的personId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_PERSONINFO_H_
