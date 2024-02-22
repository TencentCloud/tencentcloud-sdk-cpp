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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATECUSTOMIZATIONREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATECUSTOMIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CreateCustomization请求参数结构体
                */
                class CreateCustomizationRequest : public AbstractModel
                {
                public:
                    CreateCustomizationRequest();
                    ~CreateCustomizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自学习模型名称，需在1-20字符之间
                     * @return ModelName 自学习模型名称，需在1-20字符之间
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置自学习模型名称，需在1-20字符之间
                     * @param _modelName 自学习模型名称，需在1-20字符之间
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * @return TextUrl 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * 
                     */
                    std::string GetTextUrl() const;

                    /**
                     * 设置文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * @param _textUrl 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * 
                     */
                    void SetTextUrl(const std::string& _textUrl);

                    /**
                     * 判断参数 TextUrl 是否已赋值
                     * @return TextUrl 是否已赋值
                     * 
                     */
                    bool TextUrlHasBeenSet() const;

                    /**
                     * 获取自学习模型类型，填写8k或者16k
                     * @return ModelType 自学习模型类型，填写8k或者16k
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置自学习模型类型，填写8k或者16k
                     * @param _modelType 自学习模型类型，填写8k或者16k
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return TagInfos 标签信息
                     * @deprecated
                     */
                    std::vector<std::string> GetTagInfos() const;

                    /**
                     * 设置标签信息
                     * @param _tagInfos 标签信息
                     * @deprecated
                     */
                    void SetTagInfos(const std::vector<std::string>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * @deprecated
                     */
                    bool TagInfosHasBeenSet() const;

                private:

                    /**
                     * 自学习模型名称，需在1-20字符之间
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     */
                    std::string m_textUrl;
                    bool m_textUrlHasBeenSet;

                    /**
                     * 自学习模型类型，填写8k或者16k
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<std::string> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATECUSTOMIZATIONREQUEST_H_
