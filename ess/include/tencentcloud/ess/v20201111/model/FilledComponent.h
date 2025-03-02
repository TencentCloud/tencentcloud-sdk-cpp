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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FILLEDCOMPONENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FILLEDCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 文档内的填充控件返回结构体，返回控件的基本信息和填写内容值
                */
                class FilledComponent : public AbstractModel
                {
                public:
                    FilledComponent();
                    ~FilledComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控件Id
                     * @return ComponentId 控件Id
                     * 
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置控件Id
                     * @param _componentId 控件Id
                     * 
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取控件名称
                     * @return ComponentName 控件名称
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置控件名称
                     * @param _componentName 控件名称
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取控件填写状态；0-未填写；1-已填写
                     * @return ComponentFillStatus 控件填写状态；0-未填写；1-已填写
                     * 
                     */
                    std::string GetComponentFillStatus() const;

                    /**
                     * 设置控件填写状态；0-未填写；1-已填写
                     * @param _componentFillStatus 控件填写状态；0-未填写；1-已填写
                     * 
                     */
                    void SetComponentFillStatus(const std::string& _componentFillStatus);

                    /**
                     * 判断参数 ComponentFillStatus 是否已赋值
                     * @return ComponentFillStatus 是否已赋值
                     * 
                     */
                    bool ComponentFillStatusHasBeenSet() const;

                    /**
                     * 获取控件填写内容
                     * @return ComponentValue 控件填写内容
                     * 
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置控件填写内容
                     * @param _componentValue 控件填写内容
                     * 
                     */
                    void SetComponentValue(const std::string& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     * 
                     */
                    bool ComponentValueHasBeenSet() const;

                    /**
                     * 获取控件所属参与方Id
                     * @return ComponentRecipientId 控件所属参与方Id
                     * 
                     */
                    std::string GetComponentRecipientId() const;

                    /**
                     * 设置控件所属参与方Id
                     * @param _componentRecipientId 控件所属参与方Id
                     * 
                     */
                    void SetComponentRecipientId(const std::string& _componentRecipientId);

                    /**
                     * 判断参数 ComponentRecipientId 是否已赋值
                     * @return ComponentRecipientId 是否已赋值
                     * 
                     */
                    bool ComponentRecipientIdHasBeenSet() const;

                    /**
                     * 获取图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
                     * @return ImageUrl 图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
                     * @param _imageUrl 图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 控件Id
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 控件名称
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 控件填写状态；0-未填写；1-已填写
                     */
                    std::string m_componentFillStatus;
                    bool m_componentFillStatusHasBeenSet;

                    /**
                     * 控件填写内容
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 控件所属参与方Id
                     */
                    std::string m_componentRecipientId;
                    bool m_componentRecipientIdHasBeenSet;

                    /**
                     * 图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FILLEDCOMPONENT_H_
