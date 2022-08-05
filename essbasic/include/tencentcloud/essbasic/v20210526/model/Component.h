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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMPONENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体 (Component) 用于描述控件属性。

                */
                class Component : public AbstractModel
                {
                public:
                    Component();
                    ~Component() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     * @return ComponentId 控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     * @param ComponentId 控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；跟TEXT相比会有校验逻辑
DYNAMIC_TABLE-动态表格控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件；

表单域的控件不能作为印章和签名控件
                     * @return ComponentType 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；跟TEXT相比会有校验逻辑
DYNAMIC_TABLE-动态表格控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件；

表单域的控件不能作为印章和签名控件
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；跟TEXT相比会有校验逻辑
DYNAMIC_TABLE-动态表格控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件；

表单域的控件不能作为印章和签名控件
                     * @param ComponentType 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；跟TEXT相比会有校验逻辑
DYNAMIC_TABLE-动态表格控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件；

表单域的控件不能作为印章和签名控件
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取控件简称，不能超过30个字符
                     * @return ComponentName 控件简称，不能超过30个字符
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置控件简称，不能超过30个字符
                     * @param ComponentName 控件简称，不能超过30个字符
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取定义控件是否为必填项，默认为false
                     * @return ComponentRequired 定义控件是否为必填项，默认为false
                     */
                    bool GetComponentRequired() const;

                    /**
                     * 设置定义控件是否为必填项，默认为false
                     * @param ComponentRequired 定义控件是否为必填项，默认为false
                     */
                    void SetComponentRequired(const bool& _componentRequired);

                    /**
                     * 判断参数 ComponentRequired 是否已赋值
                     * @return ComponentRequired 是否已赋值
                     */
                    bool ComponentRequiredHasBeenSet() const;

                    /**
                     * 获取控件所属文件的序号 (文档中文件的排列序号，从0开始)
                     * @return FileIndex 控件所属文件的序号 (文档中文件的排列序号，从0开始)
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置控件所属文件的序号 (文档中文件的排列序号，从0开始)
                     * @param FileIndex 控件所属文件的序号 (文档中文件的排列序号，从0开始)
                     */
                    void SetFileIndex(const int64_t& _fileIndex);

                    /**
                     * 判断参数 FileIndex 是否已赋值
                     * @return FileIndex 是否已赋值
                     */
                    bool FileIndexHasBeenSet() const;

                    /**
                     * 获取控件生成的方式：
NORMAL - 普通控件
FIELD - 表单域
KEYWORD - 关键字
                     * @return GenerateMode 控件生成的方式：
NORMAL - 普通控件
FIELD - 表单域
KEYWORD - 关键字
                     */
                    std::string GetGenerateMode() const;

                    /**
                     * 设置控件生成的方式：
NORMAL - 普通控件
FIELD - 表单域
KEYWORD - 关键字
                     * @param GenerateMode 控件生成的方式：
NORMAL - 普通控件
FIELD - 表单域
KEYWORD - 关键字
                     */
                    void SetGenerateMode(const std::string& _generateMode);

                    /**
                     * 判断参数 GenerateMode 是否已赋值
                     * @return GenerateMode 是否已赋值
                     */
                    bool GenerateModeHasBeenSet() const;

                    /**
                     * 获取参数控件宽度，默认100，单位px
表单域和关键字转换控件不用填
                     * @return ComponentWidth 参数控件宽度，默认100，单位px
表单域和关键字转换控件不用填
                     */
                    double GetComponentWidth() const;

                    /**
                     * 设置参数控件宽度，默认100，单位px
表单域和关键字转换控件不用填
                     * @param ComponentWidth 参数控件宽度，默认100，单位px
表单域和关键字转换控件不用填
                     */
                    void SetComponentWidth(const double& _componentWidth);

                    /**
                     * 判断参数 ComponentWidth 是否已赋值
                     * @return ComponentWidth 是否已赋值
                     */
                    bool ComponentWidthHasBeenSet() const;

                    /**
                     * 获取参数控件高度，默认100，单位px
表单域和关键字转换控件不用填
                     * @return ComponentHeight 参数控件高度，默认100，单位px
表单域和关键字转换控件不用填
                     */
                    double GetComponentHeight() const;

                    /**
                     * 设置参数控件高度，默认100，单位px
表单域和关键字转换控件不用填
                     * @param ComponentHeight 参数控件高度，默认100，单位px
表单域和关键字转换控件不用填
                     */
                    void SetComponentHeight(const double& _componentHeight);

                    /**
                     * 判断参数 ComponentHeight 是否已赋值
                     * @return ComponentHeight 是否已赋值
                     */
                    bool ComponentHeightHasBeenSet() const;

                    /**
                     * 获取参数控件所在页码，从1开始
                     * @return ComponentPage 参数控件所在页码，从1开始
                     */
                    int64_t GetComponentPage() const;

                    /**
                     * 设置参数控件所在页码，从1开始
                     * @param ComponentPage 参数控件所在页码，从1开始
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
                     * 获取参数控件样式，json格式表述
不同类型的控件会有部分非通用参数
TEXT控件可以指定字体
例如：{"FontSize":12}
                     * @return ComponentExtra 参数控件样式，json格式表述
不同类型的控件会有部分非通用参数
TEXT控件可以指定字体
例如：{"FontSize":12}
                     */
                    std::string GetComponentExtra() const;

                    /**
                     * 设置参数控件样式，json格式表述
不同类型的控件会有部分非通用参数
TEXT控件可以指定字体
例如：{"FontSize":12}
                     * @param ComponentExtra 参数控件样式，json格式表述
不同类型的控件会有部分非通用参数
TEXT控件可以指定字体
例如：{"FontSize":12}
                     */
                    void SetComponentExtra(const std::string& _componentExtra);

                    /**
                     * 判断参数 ComponentExtra 是否已赋值
                     * @return ComponentExtra 是否已赋值
                     */
                    bool ComponentExtraHasBeenSet() const;

                    /**
                     * 获取印章 ID，传参 DEFAULT_COMPANY_SEAL 表示使用默认印章。
控件填入内容，印章控件里面，如果是手写签名内容为PNG图片格式的base64编码
                     * @return ComponentValue 印章 ID，传参 DEFAULT_COMPANY_SEAL 表示使用默认印章。
控件填入内容，印章控件里面，如果是手写签名内容为PNG图片格式的base64编码
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置印章 ID，传参 DEFAULT_COMPANY_SEAL 表示使用默认印章。
控件填入内容，印章控件里面，如果是手写签名内容为PNG图片格式的base64编码
                     * @param ComponentValue 印章 ID，传参 DEFAULT_COMPANY_SEAL 表示使用默认印章。
控件填入内容，印章控件里面，如果是手写签名内容为PNG图片格式的base64编码
                     */
                    void SetComponentValue(const std::string& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     */
                    bool ComponentValueHasBeenSet() const;

                    /**
                     * 获取日期签署控件的字号，默认为 12

签署区日期控件会转换成图片格式并带存证，需要通过字体决定图片大小
                     * @return ComponentDateFontSize 日期签署控件的字号，默认为 12

签署区日期控件会转换成图片格式并带存证，需要通过字体决定图片大小
                     */
                    int64_t GetComponentDateFontSize() const;

                    /**
                     * 设置日期签署控件的字号，默认为 12

签署区日期控件会转换成图片格式并带存证，需要通过字体决定图片大小
                     * @param ComponentDateFontSize 日期签署控件的字号，默认为 12

签署区日期控件会转换成图片格式并带存证，需要通过字体决定图片大小
                     */
                    void SetComponentDateFontSize(const int64_t& _componentDateFontSize);

                    /**
                     * 判断参数 ComponentDateFontSize 是否已赋值
                     * @return ComponentDateFontSize 是否已赋值
                     */
                    bool ComponentDateFontSizeHasBeenSet() const;

                    /**
                     * 获取控件所属文档的Id, 模块相关接口为空值
                     * @return DocumentId 控件所属文档的Id, 模块相关接口为空值
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 设置控件所属文档的Id, 模块相关接口为空值
                     * @param DocumentId 控件所属文档的Id, 模块相关接口为空值
                     */
                    void SetDocumentId(const std::string& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取控件描述，不能超过30个字符
                     * @return ComponentDescription 控件描述，不能超过30个字符
                     */
                    std::string GetComponentDescription() const;

                    /**
                     * 设置控件描述，不能超过30个字符
                     * @param ComponentDescription 控件描述，不能超过30个字符
                     */
                    void SetComponentDescription(const std::string& _componentDescription);

                    /**
                     * 判断参数 ComponentDescription 是否已赋值
                     * @return ComponentDescription 是否已赋值
                     */
                    bool ComponentDescriptionHasBeenSet() const;

                    /**
                     * 获取指定关键字时横坐标偏移量，单位pt
                     * @return OffsetX 指定关键字时横坐标偏移量，单位pt
                     */
                    double GetOffsetX() const;

                    /**
                     * 设置指定关键字时横坐标偏移量，单位pt
                     * @param OffsetX 指定关键字时横坐标偏移量，单位pt
                     */
                    void SetOffsetX(const double& _offsetX);

                    /**
                     * 判断参数 OffsetX 是否已赋值
                     * @return OffsetX 是否已赋值
                     */
                    bool OffsetXHasBeenSet() const;

                    /**
                     * 获取指定关键字时纵坐标偏移量，单位pt
                     * @return OffsetY 指定关键字时纵坐标偏移量，单位pt
                     */
                    double GetOffsetY() const;

                    /**
                     * 设置指定关键字时纵坐标偏移量，单位pt
                     * @param OffsetY 指定关键字时纵坐标偏移量，单位pt
                     */
                    void SetOffsetY(const double& _offsetY);

                    /**
                     * 判断参数 OffsetY 是否已赋值
                     * @return OffsetY 是否已赋值
                     */
                    bool OffsetYHasBeenSet() const;

                private:

                    /**
                     * 控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；跟TEXT相比会有校验逻辑
DYNAMIC_TABLE-动态表格控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件；

表单域的控件不能作为印章和签名控件
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 控件简称，不能超过30个字符
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 定义控件是否为必填项，默认为false
                     */
                    bool m_componentRequired;
                    bool m_componentRequiredHasBeenSet;

                    /**
                     * 控件所属文件的序号 (文档中文件的排列序号，从0开始)
                     */
                    int64_t m_fileIndex;
                    bool m_fileIndexHasBeenSet;

                    /**
                     * 控件生成的方式：
NORMAL - 普通控件
FIELD - 表单域
KEYWORD - 关键字
                     */
                    std::string m_generateMode;
                    bool m_generateModeHasBeenSet;

                    /**
                     * 参数控件宽度，默认100，单位px
表单域和关键字转换控件不用填
                     */
                    double m_componentWidth;
                    bool m_componentWidthHasBeenSet;

                    /**
                     * 参数控件高度，默认100，单位px
表单域和关键字转换控件不用填
                     */
                    double m_componentHeight;
                    bool m_componentHeightHasBeenSet;

                    /**
                     * 参数控件所在页码，从1开始
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
                     * 参数控件样式，json格式表述
不同类型的控件会有部分非通用参数
TEXT控件可以指定字体
例如：{"FontSize":12}
                     */
                    std::string m_componentExtra;
                    bool m_componentExtraHasBeenSet;

                    /**
                     * 印章 ID，传参 DEFAULT_COMPANY_SEAL 表示使用默认印章。
控件填入内容，印章控件里面，如果是手写签名内容为PNG图片格式的base64编码
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 日期签署控件的字号，默认为 12

签署区日期控件会转换成图片格式并带存证，需要通过字体决定图片大小
                     */
                    int64_t m_componentDateFontSize;
                    bool m_componentDateFontSizeHasBeenSet;

                    /**
                     * 控件所属文档的Id, 模块相关接口为空值
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * 控件描述，不能超过30个字符
                     */
                    std::string m_componentDescription;
                    bool m_componentDescriptionHasBeenSet;

                    /**
                     * 指定关键字时横坐标偏移量，单位pt
                     */
                    double m_offsetX;
                    bool m_offsetXHasBeenSet;

                    /**
                     * 指定关键字时纵坐标偏移量，单位pt
                     */
                    double m_offsetY;
                    bool m_offsetYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMPONENT_H_
