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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEPERSON_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEPERSON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleFaceInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI 样本管理，人物信息。
                */
                class AiSamplePerson : public AbstractModel
                {
                public:
                    AiSamplePerson();
                    ~AiSamplePerson() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人物 ID。
                     * @return PersonId 人物 ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人物 ID。
                     * @param _personId 人物 ID。
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
                     * 获取人物名称。
                     * @return Name 人物名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人物名称。
                     * @param _name 人物名称。
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
                     * 获取人物描述。
                     * @return Description 人物描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置人物描述。
                     * @param _description 人物描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取人脸信息。
                     * @return FaceInfoSet 人脸信息。
                     * 
                     */
                    std::vector<AiSampleFaceInfo> GetFaceInfoSet() const;

                    /**
                     * 设置人脸信息。
                     * @param _faceInfoSet 人脸信息。
                     * 
                     */
                    void SetFaceInfoSet(const std::vector<AiSampleFaceInfo>& _faceInfoSet);

                    /**
                     * 判断参数 FaceInfoSet 是否已赋值
                     * @return FaceInfoSet 是否已赋值
                     * 
                     */
                    bool FaceInfoSetHasBeenSet() const;

                    /**
                     * 获取人物标签。
                     * @return TagSet 人物标签。
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置人物标签。
                     * @param _tagSet 人物标签。
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取应用场景。
                     * @return UsageSet 应用场景。
                     * 
                     */
                    std::vector<std::string> GetUsageSet() const;

                    /**
                     * 设置应用场景。
                     * @param _usageSet 应用场景。
                     * 
                     */
                    void SetUsageSet(const std::vector<std::string>& _usageSet);

                    /**
                     * 判断参数 UsageSet 是否已赋值
                     * @return UsageSet 是否已赋值
                     * 
                     */
                    bool UsageSetHasBeenSet() const;

                    /**
                     * 获取创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _createTime 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return UpdateTime 最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _updateTime 最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 人物 ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人物名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人物描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 人脸信息。
                     */
                    std::vector<AiSampleFaceInfo> m_faceInfoSet;
                    bool m_faceInfoSetHasBeenSet;

                    /**
                     * 人物标签。
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 应用场景。
                     */
                    std::vector<std::string> m_usageSet;
                    bool m_usageSetHasBeenSet;

                    /**
                     * 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AISAMPLEPERSON_H_
