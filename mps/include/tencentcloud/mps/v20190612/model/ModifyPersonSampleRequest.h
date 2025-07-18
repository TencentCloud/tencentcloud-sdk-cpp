/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPERSONSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleFaceOperation.h>
#include <tencentcloud/mps/v20190612/model/AiSampleTagOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyPersonSample请求参数结构体
                */
                class ModifyPersonSampleRequest : public AbstractModel
                {
                public:
                    ModifyPersonSampleRequest();
                    ~ModifyPersonSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取素材 ID。
                     * @return PersonId 素材 ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置素材 ID。
                     * @param _personId 素材 ID。
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
                     * 获取名称，长度限制：128 个字符。
                     * @return Name 名称，长度限制：128 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称，长度限制：128 个字符。
                     * @param _name 名称，长度限制：128 个字符。
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
                     * 获取描述，长度限制：1024 个字符。
                     * @return Description 描述，长度限制：1024 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述，长度限制：1024 个字符。
                     * @param _description 描述，长度限制：1024 个字符。
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
                     * 获取素材应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于不适宜的内容识别，等价于 Review.Face。
3. All：用于内容识别、不适宜的内容识别，等价于 1+2。
                     * @return Usages 素材应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于不适宜的内容识别，等价于 Review.Face。
3. All：用于内容识别、不适宜的内容识别，等价于 1+2。
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置素材应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于不适宜的内容识别，等价于 Review.Face。
3. All：用于内容识别、不适宜的内容识别，等价于 1+2。
                     * @param _usages 素材应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于不适宜的内容识别，等价于 Review.Face。
3. All：用于内容识别、不适宜的内容识别，等价于 1+2。
                     * 
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取五官操作信息。
                     * @return FaceOperationInfo 五官操作信息。
                     * 
                     */
                    AiSampleFaceOperation GetFaceOperationInfo() const;

                    /**
                     * 设置五官操作信息。
                     * @param _faceOperationInfo 五官操作信息。
                     * 
                     */
                    void SetFaceOperationInfo(const AiSampleFaceOperation& _faceOperationInfo);

                    /**
                     * 判断参数 FaceOperationInfo 是否已赋值
                     * @return FaceOperationInfo 是否已赋值
                     * 
                     */
                    bool FaceOperationInfoHasBeenSet() const;

                    /**
                     * 获取标签操作信息。
                     * @return TagOperationInfo 标签操作信息。
                     * 
                     */
                    AiSampleTagOperation GetTagOperationInfo() const;

                    /**
                     * 设置标签操作信息。
                     * @param _tagOperationInfo 标签操作信息。
                     * 
                     */
                    void SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo);

                    /**
                     * 判断参数 TagOperationInfo 是否已赋值
                     * @return TagOperationInfo 是否已赋值
                     * 
                     */
                    bool TagOperationInfoHasBeenSet() const;

                private:

                    /**
                     * 素材 ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 名称，长度限制：128 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述，长度限制：1024 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 素材应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于不适宜的内容识别，等价于 Review.Face。
3. All：用于内容识别、不适宜的内容识别，等价于 1+2。
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 五官操作信息。
                     */
                    AiSampleFaceOperation m_faceOperationInfo;
                    bool m_faceOperationInfoHasBeenSet;

                    /**
                     * 标签操作信息。
                     */
                    AiSampleTagOperation m_tagOperationInfo;
                    bool m_tagOperationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
