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

在通过文件发起合同时，对应的component有三种定位方式
1. 绝对定位方式
2. 表单域(FIELD)定位方式
3. 关键字(KEYWORD)定位方式
可以参考官网说明
https://cloud.tencent.com/document/product/1323/78346#component-.E4.B8.89.E7.A7.8D.E5.AE.9A.E4.BD.8D.E6.96.B9.E5.BC.8F.E8.AF.B4.E6.98.8E
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

CreateFlowByTemplates发起合同时优先以ComponentId（不为空）填充；否则以ComponentName填充

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     * @return ComponentId 控件编号

CreateFlowByTemplates发起合同时优先以ComponentId（不为空）填充；否则以ComponentName填充

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

CreateFlowByTemplates发起合同时优先以ComponentId（不为空）填充；否则以ComponentName填充

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。

创建控件时，此值为空
查询时返回完整结构
                     * @param ComponentId 控件编号

CreateFlowByTemplates发起合同时优先以ComponentId（不为空）填充；否则以ComponentName填充

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
MULTI_LINE_TEXT - 多行文本控件；
CHECK_BOX - 勾选框控件；
FILL_IMAGE - 图片控件；
DYNAMIC_TABLE - 数据表格控件；
ATTACHMENT - 附件控件；
SELECTOR - 选择器控件；
DATE - 日期控件；默认是格式化为xxxx年xx月xx日；
DISTRICT - 省市区行政区划控件；

如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件（使用文件发起暂不支持此类型）；
SIGN_PAGING_SEAL - 骑缝章；若文件发起，需要对应填充ComponentPosY、ComponentWidth、ComponentHeight
SIGN_OPINION - 签署意见控件，用户需要根据配置的签署意见内容，完成对意见内容的确认

表单域的控件不能作为印章和签名控件
                     * @return ComponentType 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
MULTI_LINE_TEXT - 多行文本控件；
CHECK_BOX - 勾选框控件；
FILL_IMAGE - 图片控件；
DYNAMIC_TABLE - 数据表格控件；
ATTACHMENT - 附件控件；
SELECTOR - 选择器控件；
DATE - 日期控件；默认是格式化为xxxx年xx月xx日；
DISTRICT - 省市区行政区划控件；

如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件（使用文件发起暂不支持此类型）；
SIGN_PAGING_SEAL - 骑缝章；若文件发起，需要对应填充ComponentPosY、ComponentWidth、ComponentHeight
SIGN_OPINION - 签署意见控件，用户需要根据配置的签署意见内容，完成对意见内容的确认

表单域的控件不能作为印章和签名控件
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
MULTI_LINE_TEXT - 多行文本控件；
CHECK_BOX - 勾选框控件；
FILL_IMAGE - 图片控件；
DYNAMIC_TABLE - 数据表格控件；
ATTACHMENT - 附件控件；
SELECTOR - 选择器控件；
DATE - 日期控件；默认是格式化为xxxx年xx月xx日；
DISTRICT - 省市区行政区划控件；

如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件（使用文件发起暂不支持此类型）；
SIGN_PAGING_SEAL - 骑缝章；若文件发起，需要对应填充ComponentPosY、ComponentWidth、ComponentHeight
SIGN_OPINION - 签署意见控件，用户需要根据配置的签署意见内容，完成对意见内容的确认

表单域的控件不能作为印章和签名控件
                     * @param ComponentType 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
MULTI_LINE_TEXT - 多行文本控件；
CHECK_BOX - 勾选框控件；
FILL_IMAGE - 图片控件；
DYNAMIC_TABLE - 数据表格控件；
ATTACHMENT - 附件控件；
SELECTOR - 选择器控件；
DATE - 日期控件；默认是格式化为xxxx年xx月xx日；
DISTRICT - 省市区行政区划控件；

如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件（使用文件发起暂不支持此类型）；
SIGN_PAGING_SEAL - 骑缝章；若文件发起，需要对应填充ComponentPosY、ComponentWidth、ComponentHeight
SIGN_OPINION - 签署意见控件，用户需要根据配置的签署意见内容，完成对意见内容的确认

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
                     * 获取控件关联的签署方id
                     * @return ComponentRecipientId 控件关联的签署方id
                     */
                    std::string GetComponentRecipientId() const;

                    /**
                     * 设置控件关联的签署方id
                     * @param ComponentRecipientId 控件关联的签署方id
                     */
                    void SetComponentRecipientId(const std::string& _componentRecipientId);

                    /**
                     * 判断参数 ComponentRecipientId 是否已赋值
                     * @return ComponentRecipientId 是否已赋值
                     */
                    bool ComponentRecipientIdHasBeenSet() const;

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

TEXT/MULTI_LINE_TEXT控件可以指定
1 Font：目前只支持黑体、宋体
2 FontSize： 范围12-72
3 FontAlign： Left/Right/Center，左对齐/居中/右对齐
例如：{"FontSize":12}

ComponentType为FILL_IMAGE时，支持以下参数：
NotMakeImageCenter：bool。是否设置图片居中。false：居中（默认）。 true: 不居中
FillMethod: int. 填充方式。0-铺满（默认）；1-等比例缩放

ComponentType为SIGN_SIGNATURE类型可以控制签署方式
{“ComponentTypeLimit”: [“xxx”]}
xxx可以为：
HANDWRITE – 手写签名
BORDERLESS_ESIGN – 自动生成无边框腾讯体
OCR_ESIGN -- AI智能识别手写签名
ESIGN -- 个人印章类型
如：{“ComponentTypeLimit”: [“BORDERLESS_ESIGN”]}
                     * @return ComponentExtra 参数控件样式，json格式表述

不同类型的控件会有部分非通用参数

TEXT/MULTI_LINE_TEXT控件可以指定
1 Font：目前只支持黑体、宋体
2 FontSize： 范围12-72
3 FontAlign： Left/Right/Center，左对齐/居中/右对齐
例如：{"FontSize":12}

ComponentType为FILL_IMAGE时，支持以下参数：
NotMakeImageCenter：bool。是否设置图片居中。false：居中（默认）。 true: 不居中
FillMethod: int. 填充方式。0-铺满（默认）；1-等比例缩放

ComponentType为SIGN_SIGNATURE类型可以控制签署方式
{“ComponentTypeLimit”: [“xxx”]}
xxx可以为：
HANDWRITE – 手写签名
BORDERLESS_ESIGN – 自动生成无边框腾讯体
OCR_ESIGN -- AI智能识别手写签名
ESIGN -- 个人印章类型
如：{“ComponentTypeLimit”: [“BORDERLESS_ESIGN”]}
                     */
                    std::string GetComponentExtra() const;

                    /**
                     * 设置参数控件样式，json格式表述

不同类型的控件会有部分非通用参数

TEXT/MULTI_LINE_TEXT控件可以指定
1 Font：目前只支持黑体、宋体
2 FontSize： 范围12-72
3 FontAlign： Left/Right/Center，左对齐/居中/右对齐
例如：{"FontSize":12}

ComponentType为FILL_IMAGE时，支持以下参数：
NotMakeImageCenter：bool。是否设置图片居中。false：居中（默认）。 true: 不居中
FillMethod: int. 填充方式。0-铺满（默认）；1-等比例缩放

ComponentType为SIGN_SIGNATURE类型可以控制签署方式
{“ComponentTypeLimit”: [“xxx”]}
xxx可以为：
HANDWRITE – 手写签名
BORDERLESS_ESIGN – 自动生成无边框腾讯体
OCR_ESIGN -- AI智能识别手写签名
ESIGN -- 个人印章类型
如：{“ComponentTypeLimit”: [“BORDERLESS_ESIGN”]}
                     * @param ComponentExtra 参数控件样式，json格式表述

不同类型的控件会有部分非通用参数

TEXT/MULTI_LINE_TEXT控件可以指定
1 Font：目前只支持黑体、宋体
2 FontSize： 范围12-72
3 FontAlign： Left/Right/Center，左对齐/居中/右对齐
例如：{"FontSize":12}

ComponentType为FILL_IMAGE时，支持以下参数：
NotMakeImageCenter：bool。是否设置图片居中。false：居中（默认）。 true: 不居中
FillMethod: int. 填充方式。0-铺满（默认）；1-等比例缩放

ComponentType为SIGN_SIGNATURE类型可以控制签署方式
{“ComponentTypeLimit”: [“xxx”]}
xxx可以为：
HANDWRITE – 手写签名
BORDERLESS_ESIGN – 自动生成无边框腾讯体
OCR_ESIGN -- AI智能识别手写签名
ESIGN -- 个人印章类型
如：{“ComponentTypeLimit”: [“BORDERLESS_ESIGN”]}
                     */
                    void SetComponentExtra(const std::string& _componentExtra);

                    /**
                     * 判断参数 ComponentExtra 是否已赋值
                     * @return ComponentExtra 是否已赋值
                     */
                    bool ComponentExtraHasBeenSet() const;

                    /**
                     * 获取控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DATE - 默认是格式化为xxxx年xx月xx日
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo：https://cloud.tencent.com/document/api/1420/61525#FlowInfo
SIGN_SEAL - 印章ID
SIGN_PAGING_SEAL - 可以指定印章ID
                     * @return ComponentValue 控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DATE - 默认是格式化为xxxx年xx月xx日
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo：https://cloud.tencent.com/document/api/1420/61525#FlowInfo
SIGN_SEAL - 印章ID
SIGN_PAGING_SEAL - 可以指定印章ID
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DATE - 默认是格式化为xxxx年xx月xx日
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo：https://cloud.tencent.com/document/api/1420/61525#FlowInfo
SIGN_SEAL - 印章ID
SIGN_PAGING_SEAL - 可以指定印章ID
                     * @param ComponentValue 控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DATE - 默认是格式化为xxxx年xx月xx日
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo：https://cloud.tencent.com/document/api/1420/61525#FlowInfo
SIGN_SEAL - 印章ID
SIGN_PAGING_SEAL - 可以指定印章ID
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

                    /**
                     * 获取渠道控件ID。
如果不为空，属于渠道预设控件；
                     * @return ChannelComponentId 渠道控件ID。
如果不为空，属于渠道预设控件；
                     */
                    std::string GetChannelComponentId() const;

                    /**
                     * 设置渠道控件ID。
如果不为空，属于渠道预设控件；
                     * @param ChannelComponentId 渠道控件ID。
如果不为空，属于渠道预设控件；
                     */
                    void SetChannelComponentId(const std::string& _channelComponentId);

                    /**
                     * 判断参数 ChannelComponentId 是否已赋值
                     * @return ChannelComponentId 是否已赋值
                     */
                    bool ChannelComponentIdHasBeenSet() const;

                    /**
                     * 获取指定关键字页码，可选参数，指定页码后，将只在指定的页码内查找关键字，非该页码的关键字将不会查询出来
                     * @return KeywordPage 指定关键字页码，可选参数，指定页码后，将只在指定的页码内查找关键字，非该页码的关键字将不会查询出来
                     */
                    int64_t GetKeywordPage() const;

                    /**
                     * 设置指定关键字页码，可选参数，指定页码后，将只在指定的页码内查找关键字，非该页码的关键字将不会查询出来
                     * @param KeywordPage 指定关键字页码，可选参数，指定页码后，将只在指定的页码内查找关键字，非该页码的关键字将不会查询出来
                     */
                    void SetKeywordPage(const int64_t& _keywordPage);

                    /**
                     * 判断参数 KeywordPage 是否已赋值
                     * @return KeywordPage 是否已赋值
                     */
                    bool KeywordPageHasBeenSet() const;

                    /**
                     * 获取关键字位置模式，Middle-居中，Below-正下方，Right-正右方，LowerRight-右上角，UpperRight-右下角。示例：如果设置Middle的关键字盖章，则印章的中心会和关键字的中心重合，如果设置Below，则印章在关键字的正下方
                     * @return RelativeLocation 关键字位置模式，Middle-居中，Below-正下方，Right-正右方，LowerRight-右上角，UpperRight-右下角。示例：如果设置Middle的关键字盖章，则印章的中心会和关键字的中心重合，如果设置Below，则印章在关键字的正下方
                     */
                    std::string GetRelativeLocation() const;

                    /**
                     * 设置关键字位置模式，Middle-居中，Below-正下方，Right-正右方，LowerRight-右上角，UpperRight-右下角。示例：如果设置Middle的关键字盖章，则印章的中心会和关键字的中心重合，如果设置Below，则印章在关键字的正下方
                     * @param RelativeLocation 关键字位置模式，Middle-居中，Below-正下方，Right-正右方，LowerRight-右上角，UpperRight-右下角。示例：如果设置Middle的关键字盖章，则印章的中心会和关键字的中心重合，如果设置Below，则印章在关键字的正下方
                     */
                    void SetRelativeLocation(const std::string& _relativeLocation);

                    /**
                     * 判断参数 RelativeLocation 是否已赋值
                     * @return RelativeLocation 是否已赋值
                     */
                    bool RelativeLocationHasBeenSet() const;

                    /**
                     * 获取关键字索引，可选参数，如果一个关键字在PDF文件中存在多个，可以通过关键字索引指定使用第几个关键字作为最后的结果，可指定多个索引。示例[0,2]，说明使用PDF文件内第1个和第3个关键字位置。
                     * @return KeywordIndexes 关键字索引，可选参数，如果一个关键字在PDF文件中存在多个，可以通过关键字索引指定使用第几个关键字作为最后的结果，可指定多个索引。示例[0,2]，说明使用PDF文件内第1个和第3个关键字位置。
                     */
                    std::vector<int64_t> GetKeywordIndexes() const;

                    /**
                     * 设置关键字索引，可选参数，如果一个关键字在PDF文件中存在多个，可以通过关键字索引指定使用第几个关键字作为最后的结果，可指定多个索引。示例[0,2]，说明使用PDF文件内第1个和第3个关键字位置。
                     * @param KeywordIndexes 关键字索引，可选参数，如果一个关键字在PDF文件中存在多个，可以通过关键字索引指定使用第几个关键字作为最后的结果，可指定多个索引。示例[0,2]，说明使用PDF文件内第1个和第3个关键字位置。
                     */
                    void SetKeywordIndexes(const std::vector<int64_t>& _keywordIndexes);

                    /**
                     * 判断参数 KeywordIndexes 是否已赋值
                     * @return KeywordIndexes 是否已赋值
                     */
                    bool KeywordIndexesHasBeenSet() const;

                private:

                    /**
                     * 控件编号

CreateFlowByTemplates发起合同时优先以ComponentId（不为空）填充；否则以ComponentName填充

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
MULTI_LINE_TEXT - 多行文本控件；
CHECK_BOX - 勾选框控件；
FILL_IMAGE - 图片控件；
DYNAMIC_TABLE - 数据表格控件；
ATTACHMENT - 附件控件；
SELECTOR - 选择器控件；
DATE - 日期控件；默认是格式化为xxxx年xx月xx日；
DISTRICT - 省市区行政区划控件；

如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL - 签署印章控件；
SIGN_DATE - 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
SIGN_PERSONAL_SEAL - 个人签署印章控件（使用文件发起暂不支持此类型）；
SIGN_PAGING_SEAL - 骑缝章；若文件发起，需要对应填充ComponentPosY、ComponentWidth、ComponentHeight
SIGN_OPINION - 签署意见控件，用户需要根据配置的签署意见内容，完成对意见内容的确认

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
                     * 控件关联的签署方id
                     */
                    std::string m_componentRecipientId;
                    bool m_componentRecipientIdHasBeenSet;

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

TEXT/MULTI_LINE_TEXT控件可以指定
1 Font：目前只支持黑体、宋体
2 FontSize： 范围12-72
3 FontAlign： Left/Right/Center，左对齐/居中/右对齐
例如：{"FontSize":12}

ComponentType为FILL_IMAGE时，支持以下参数：
NotMakeImageCenter：bool。是否设置图片居中。false：居中（默认）。 true: 不居中
FillMethod: int. 填充方式。0-铺满（默认）；1-等比例缩放

ComponentType为SIGN_SIGNATURE类型可以控制签署方式
{“ComponentTypeLimit”: [“xxx”]}
xxx可以为：
HANDWRITE – 手写签名
BORDERLESS_ESIGN – 自动生成无边框腾讯体
OCR_ESIGN -- AI智能识别手写签名
ESIGN -- 个人印章类型
如：{“ComponentTypeLimit”: [“BORDERLESS_ESIGN”]}
                     */
                    std::string m_componentExtra;
                    bool m_componentExtraHasBeenSet;

                    /**
                     * 控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DATE - 默认是格式化为xxxx年xx月xx日
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo：https://cloud.tencent.com/document/api/1420/61525#FlowInfo
SIGN_SEAL - 印章ID
SIGN_PAGING_SEAL - 可以指定印章ID
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

                    /**
                     * 渠道控件ID。
如果不为空，属于渠道预设控件；
                     */
                    std::string m_channelComponentId;
                    bool m_channelComponentIdHasBeenSet;

                    /**
                     * 指定关键字页码，可选参数，指定页码后，将只在指定的页码内查找关键字，非该页码的关键字将不会查询出来
                     */
                    int64_t m_keywordPage;
                    bool m_keywordPageHasBeenSet;

                    /**
                     * 关键字位置模式，Middle-居中，Below-正下方，Right-正右方，LowerRight-右上角，UpperRight-右下角。示例：如果设置Middle的关键字盖章，则印章的中心会和关键字的中心重合，如果设置Below，则印章在关键字的正下方
                     */
                    std::string m_relativeLocation;
                    bool m_relativeLocationHasBeenSet;

                    /**
                     * 关键字索引，可选参数，如果一个关键字在PDF文件中存在多个，可以通过关键字索引指定使用第几个关键字作为最后的结果，可指定多个索引。示例[0,2]，说明使用PDF文件内第1个和第3个关键字位置。
                     */
                    std::vector<int64_t> m_keywordIndexes;
                    bool m_keywordIndexesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMPONENT_H_
