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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CREATEAIGCELEMENTREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CREATEAIGCELEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/ElementImageList.h>
#include <tencentcloud/vclm/v20240523/model/TagList.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * CreateAigcElement请求参数结构体
                */
                class CreateAigcElementRequest : public AbstractModel
                {
                public:
                    CreateAigcElementRequest();
                    ~CreateAigcElementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Description 
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置
                     * @param _description 
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
                     * 获取
                     * @return ReferenceType 
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置
                     * @param _referenceType 
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ElementImageList 
                     * 
                     */
                    ElementImageList GetElementImageList() const;

                    /**
                     * 设置
                     * @param _elementImageList 
                     * 
                     */
                    void SetElementImageList(const ElementImageList& _elementImageList);

                    /**
                     * 判断参数 ElementImageList 是否已赋值
                     * @return ElementImageList 是否已赋值
                     * 
                     */
                    bool ElementImageListHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoList 
                     * 
                     */
                    std::vector<std::string> GetVideoList() const;

                    /**
                     * 设置
                     * @param _videoList 
                     * 
                     */
                    void SetVideoList(const std::vector<std::string>& _videoList);

                    /**
                     * 判断参数 VideoList 是否已赋值
                     * @return VideoList 是否已赋值
                     * 
                     */
                    bool VideoListHasBeenSet() const;

                    /**
                     * 获取
                     * @return Provider 
                     * 
                     */
                    std::vector<std::string> GetProvider() const;

                    /**
                     * 设置
                     * @param _provider 
                     * 
                     */
                    void SetProvider(const std::vector<std::string>& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取
                     * @return TagList 
                     * 
                     */
                    std::vector<TagList> GetTagList() const;

                    /**
                     * 设置
                     * @param _tagList 
                     * 
                     */
                    void SetTagList(const std::vector<TagList>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * 
                     */
                    ElementImageList m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_videoList;
                    bool m_videoListHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<TagList> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CREATEAIGCELEMENTREQUEST_H_
