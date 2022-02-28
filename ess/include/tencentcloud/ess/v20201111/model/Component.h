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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_COMPONENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_COMPONENT_H_

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
                * 模板控件信息
                */
                class Component : public AbstractModel
                {
                public:
                    Component();
                    ~Component() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取如果是 Component 控件类型，则可选类型为：
TEXT - 内容文本控件
DATE - 内容日期控件
SELECT - 勾选框控件
如果是 SignComponent 控件类型，则可选类型为：
SIGN_SEAL - 签署印章控件
SIGN_DATE - 签署日期控件
SIGN_SIGNATURE - 手写签名控件
                     * @return ComponentType 如果是 Component 控件类型，则可选类型为：
TEXT - 内容文本控件
DATE - 内容日期控件
SELECT - 勾选框控件
如果是 SignComponent 控件类型，则可选类型为：
SIGN_SEAL - 签署印章控件
SIGN_DATE - 签署日期控件
SIGN_SIGNATURE - 手写签名控件
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置如果是 Component 控件类型，则可选类型为：
TEXT - 内容文本控件
DATE - 内容日期控件
SELECT - 勾选框控件
如果是 SignComponent 控件类型，则可选类型为：
SIGN_SEAL - 签署印章控件
SIGN_DATE - 签署日期控件
SIGN_SIGNATURE - 手写签名控件
                     * @param ComponentType 如果是 Component 控件类型，则可选类型为：
TEXT - 内容文本控件
DATE - 内容日期控件
SELECT - 勾选框控件
如果是 SignComponent 控件类型，则可选类型为：
SIGN_SEAL - 签署印章控件
SIGN_DATE - 签署日期控件
SIGN_SIGNATURE - 手写签名控件
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取参数控件宽度，单位px
                     * @return ComponentWidth 参数控件宽度，单位px
                     */
                    double GetComponentWidth() const;

                    /**
                     * 设置参数控件宽度，单位px
                     * @param ComponentWidth 参数控件宽度，单位px
                     */
                    void SetComponentWidth(const double& _componentWidth);

                    /**
                     * 判断参数 ComponentWidth 是否已赋值
                     * @return ComponentWidth 是否已赋值
                     */
                    bool ComponentWidthHasBeenSet() const;

                    /**
                     * 获取参数控件高度，单位px
                     * @return ComponentHeight 参数控件高度，单位px
                     */
                    double GetComponentHeight() const;

                    /**
                     * 设置参数控件高度，单位px
                     * @param ComponentHeight 参数控件高度，单位px
                     */
                    void SetComponentHeight(const double& _componentHeight);

                    /**
                     * 判断参数 ComponentHeight 是否已赋值
                     * @return ComponentHeight 是否已赋值
                     */
                    bool ComponentHeightHasBeenSet() const;

                    /**
                     * 获取参数控件所在页码，取值为：1-N
                     * @return ComponentPage 参数控件所在页码，取值为：1-N
                     */
                    int64_t GetComponentPage() const;

                    /**
                     * 设置参数控件所在页码，取值为：1-N
                     * @param ComponentPage 参数控件所在页码，取值为：1-N
                     */
                    void SetComponentPage(const int64_t& _componentPage);

                    /**
                     * 判断参数 ComponentPage 是否已赋值
                     * @return ComponentPage 是否已赋值
                     */
                    bool ComponentPageHasBeenSet() const;

                    /**
                     * 获取参数控件X位置，单位px
                     * @return ComponentPosX 参数控件X位置，单位px
                     */
                    double GetComponentPosX() const;

                    /**
                     * 设置参数控件X位置，单位px
                     * @param ComponentPosX 参数控件X位置，单位px
                     */
                    void SetComponentPosX(const double& _componentPosX);

                    /**
                     * 判断参数 ComponentPosX 是否已赋值
                     * @return ComponentPosX 是否已赋值
                     */
                    bool ComponentPosXHasBeenSet() const;

                    /**
                     * 获取参数控件Y位置，单位px
                     * @return ComponentPosY 参数控件Y位置，单位px
                     */
                    double GetComponentPosY() const;

                    /**
                     * 设置参数控件Y位置，单位px
                     * @param ComponentPosY 参数控件Y位置，单位px
                     */
                    void SetComponentPosY(const double& _componentPosY);

                    /**
                     * 判断参数 ComponentPosY 是否已赋值
                     * @return ComponentPosY 是否已赋值
                     */
                    bool ComponentPosYHasBeenSet() const;

                    /**
                     * 获取控件所属文件的序号（模板中的resourceId排列序号，取值为：0-N）
                     * @return FileIndex 控件所属文件的序号（模板中的resourceId排列序号，取值为：0-N）
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置控件所属文件的序号（模板中的resourceId排列序号，取值为：0-N）
                     * @param FileIndex 控件所属文件的序号（模板中的resourceId排列序号，取值为：0-N）
                     */
                    void SetFileIndex(const int64_t& _fileIndex);

                    /**
                     * 判断参数 FileIndex 是否已赋值
                     * @return FileIndex 是否已赋值
                     */
                    bool FileIndexHasBeenSet() const;

                    /**
                     * 获取控件编号
                     * @return ComponentId 控件编号
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置控件编号
                     * @param ComponentId 控件编号
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取控件名称
                     * @return ComponentName 控件名称
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置控件名称
                     * @param ComponentName 控件名称
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取是否必选，默认为false
                     * @return ComponentRequired 是否必选，默认为false
                     */
                    bool GetComponentRequired() const;

                    /**
                     * 设置是否必选，默认为false
                     * @param ComponentRequired 是否必选，默认为false
                     */
                    void SetComponentRequired(const bool& _componentRequired);

                    /**
                     * 判断参数 ComponentRequired 是否已赋值
                     * @return ComponentRequired 是否已赋值
                     */
                    bool ComponentRequiredHasBeenSet() const;

                    /**
                     * 获取参数控件样式
                     * @return ComponentExtra 参数控件样式
                     */
                    std::string GetComponentExtra() const;

                    /**
                     * 设置参数控件样式
                     * @param ComponentExtra 参数控件样式
                     */
                    void SetComponentExtra(const std::string& _componentExtra);

                    /**
                     * 判断参数 ComponentExtra 是否已赋值
                     * @return ComponentExtra 是否已赋值
                     */
                    bool ComponentExtraHasBeenSet() const;

                    /**
                     * 获取控件关联的签署人ID
                     * @return ComponentRecipientId 控件关联的签署人ID
                     */
                    std::string GetComponentRecipientId() const;

                    /**
                     * 设置控件关联的签署人ID
                     * @param ComponentRecipientId 控件关联的签署人ID
                     */
                    void SetComponentRecipientId(const std::string& _componentRecipientId);

                    /**
                     * 判断参数 ComponentRecipientId 是否已赋值
                     * @return ComponentRecipientId 是否已赋值
                     */
                    bool ComponentRecipientIdHasBeenSet() const;

                    /**
                     * 获取控件所填写的内容
                     * @return ComponentValue 控件所填写的内容
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置控件所填写的内容
                     * @param ComponentValue 控件所填写的内容
                     */
                    void SetComponentValue(const std::string& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     */
                    bool ComponentValueHasBeenSet() const;

                    /**
                     * 获取是否是表单域类型，默认不存在
                     * @return IsFormType 是否是表单域类型，默认不存在
                     */
                    bool GetIsFormType() const;

                    /**
                     * 设置是否是表单域类型，默认不存在
                     * @param IsFormType 是否是表单域类型，默认不存在
                     */
                    void SetIsFormType(const bool& _isFormType);

                    /**
                     * 判断参数 IsFormType 是否已赋值
                     * @return IsFormType 是否已赋值
                     */
                    bool IsFormTypeHasBeenSet() const;

                    /**
                     * 获取NORMAL 正常模式，使用坐标制定签署控件位置
FIELD 表单域，需使用ComponentName指定表单域名称
KEYWORD 关键字，使用ComponentId指定关键字
                     * @return GenerateMode NORMAL 正常模式，使用坐标制定签署控件位置
FIELD 表单域，需使用ComponentName指定表单域名称
KEYWORD 关键字，使用ComponentId指定关键字
                     */
                    std::string GetGenerateMode() const;

                    /**
                     * 设置NORMAL 正常模式，使用坐标制定签署控件位置
FIELD 表单域，需使用ComponentName指定表单域名称
KEYWORD 关键字，使用ComponentId指定关键字
                     * @param GenerateMode NORMAL 正常模式，使用坐标制定签署控件位置
FIELD 表单域，需使用ComponentName指定表单域名称
KEYWORD 关键字，使用ComponentId指定关键字
                     */
                    void SetGenerateMode(const std::string& _generateMode);

                    /**
                     * 判断参数 GenerateMode 是否已赋值
                     * @return GenerateMode 是否已赋值
                     */
                    bool GenerateModeHasBeenSet() const;

                    /**
                     * 获取日期控件类型字号
                     * @return ComponentDateFontSize 日期控件类型字号
                     */
                    int64_t GetComponentDateFontSize() const;

                    /**
                     * 设置日期控件类型字号
                     * @param ComponentDateFontSize 日期控件类型字号
                     */
                    void SetComponentDateFontSize(const int64_t& _componentDateFontSize);

                    /**
                     * 判断参数 ComponentDateFontSize 是否已赋值
                     * @return ComponentDateFontSize 是否已赋值
                     */
                    bool ComponentDateFontSizeHasBeenSet() const;

                private:

                    /**
                     * 如果是 Component 控件类型，则可选类型为：
TEXT - 内容文本控件
DATE - 内容日期控件
SELECT - 勾选框控件
如果是 SignComponent 控件类型，则可选类型为：
SIGN_SEAL - 签署印章控件
SIGN_DATE - 签署日期控件
SIGN_SIGNATURE - 手写签名控件
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 参数控件宽度，单位px
                     */
                    double m_componentWidth;
                    bool m_componentWidthHasBeenSet;

                    /**
                     * 参数控件高度，单位px
                     */
                    double m_componentHeight;
                    bool m_componentHeightHasBeenSet;

                    /**
                     * 参数控件所在页码，取值为：1-N
                     */
                    int64_t m_componentPage;
                    bool m_componentPageHasBeenSet;

                    /**
                     * 参数控件X位置，单位px
                     */
                    double m_componentPosX;
                    bool m_componentPosXHasBeenSet;

                    /**
                     * 参数控件Y位置，单位px
                     */
                    double m_componentPosY;
                    bool m_componentPosYHasBeenSet;

                    /**
                     * 控件所属文件的序号（模板中的resourceId排列序号，取值为：0-N）
                     */
                    int64_t m_fileIndex;
                    bool m_fileIndexHasBeenSet;

                    /**
                     * 控件编号
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 控件名称
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 是否必选，默认为false
                     */
                    bool m_componentRequired;
                    bool m_componentRequiredHasBeenSet;

                    /**
                     * 参数控件样式
                     */
                    std::string m_componentExtra;
                    bool m_componentExtraHasBeenSet;

                    /**
                     * 控件关联的签署人ID
                     */
                    std::string m_componentRecipientId;
                    bool m_componentRecipientIdHasBeenSet;

                    /**
                     * 控件所填写的内容
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 是否是表单域类型，默认不存在
                     */
                    bool m_isFormType;
                    bool m_isFormTypeHasBeenSet;

                    /**
                     * NORMAL 正常模式，使用坐标制定签署控件位置
FIELD 表单域，需使用ComponentName指定表单域名称
KEYWORD 关键字，使用ComponentId指定关键字
                     */
                    std::string m_generateMode;
                    bool m_generateModeHasBeenSet;

                    /**
                     * 日期控件类型字号
                     */
                    int64_t m_componentDateFontSize;
                    bool m_componentDateFontSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_COMPONENT_H_
