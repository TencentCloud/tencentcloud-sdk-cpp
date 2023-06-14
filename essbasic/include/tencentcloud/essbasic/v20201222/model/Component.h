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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_COMPONENT_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_COMPONENT_H_

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
        namespace V20201222
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
                     * @return ComponentId 控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。
                     * 
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。
                     * @param _componentId 控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。
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
                     * 获取如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；
SELECT- 勾选框控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL- 签署印章控件；
SIGN_DATE- 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
                     * @return ComponentType 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；
SELECT- 勾选框控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL- 签署印章控件；
SIGN_DATE- 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；
SELECT- 勾选框控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL- 签署印章控件；
SIGN_DATE- 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
                     * @param _componentType 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；
SELECT- 勾选框控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL- 签署印章控件；
SIGN_DATE- 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
                     * 
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     * 
                     */
                    bool ComponentTypeHasBeenSet() const;

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
                     * 获取定义控件是否为必填项，默认为false
                     * @return ComponentRequired 定义控件是否为必填项，默认为false
                     * 
                     */
                    bool GetComponentRequired() const;

                    /**
                     * 设置定义控件是否为必填项，默认为false
                     * @param _componentRequired 定义控件是否为必填项，默认为false
                     * 
                     */
                    void SetComponentRequired(const bool& _componentRequired);

                    /**
                     * 判断参数 ComponentRequired 是否已赋值
                     * @return ComponentRequired 是否已赋值
                     * 
                     */
                    bool ComponentRequiredHasBeenSet() const;

                    /**
                     * 获取控件所属文件的序号 (模板中的resourceId排列序号)
                     * @return FileIndex 控件所属文件的序号 (模板中的resourceId排列序号)
                     * 
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置控件所属文件的序号 (模板中的resourceId排列序号)
                     * @param _fileIndex 控件所属文件的序号 (模板中的resourceId排列序号)
                     * 
                     */
                    void SetFileIndex(const int64_t& _fileIndex);

                    /**
                     * 判断参数 FileIndex 是否已赋值
                     * @return FileIndex 是否已赋值
                     * 
                     */
                    bool FileIndexHasBeenSet() const;

                    /**
                     * 获取控件生成的方式：
0 - 普通控件
1 - 表单域
2 - html 控件
3 - 关键字
                     * @return GenerateMode 控件生成的方式：
0 - 普通控件
1 - 表单域
2 - html 控件
3 - 关键字
                     * 
                     */
                    int64_t GetGenerateMode() const;

                    /**
                     * 设置控件生成的方式：
0 - 普通控件
1 - 表单域
2 - html 控件
3 - 关键字
                     * @param _generateMode 控件生成的方式：
0 - 普通控件
1 - 表单域
2 - html 控件
3 - 关键字
                     * 
                     */
                    void SetGenerateMode(const int64_t& _generateMode);

                    /**
                     * 判断参数 GenerateMode 是否已赋值
                     * @return GenerateMode 是否已赋值
                     * 
                     */
                    bool GenerateModeHasBeenSet() const;

                    /**
                     * 获取参数控件宽度，单位px
                     * @return ComponentWidth 参数控件宽度，单位px
                     * 
                     */
                    double GetComponentWidth() const;

                    /**
                     * 设置参数控件宽度，单位px
                     * @param _componentWidth 参数控件宽度，单位px
                     * 
                     */
                    void SetComponentWidth(const double& _componentWidth);

                    /**
                     * 判断参数 ComponentWidth 是否已赋值
                     * @return ComponentWidth 是否已赋值
                     * 
                     */
                    bool ComponentWidthHasBeenSet() const;

                    /**
                     * 获取参数控件高度，单位px
                     * @return ComponentHeight 参数控件高度，单位px
                     * 
                     */
                    double GetComponentHeight() const;

                    /**
                     * 设置参数控件高度，单位px
                     * @param _componentHeight 参数控件高度，单位px
                     * 
                     */
                    void SetComponentHeight(const double& _componentHeight);

                    /**
                     * 判断参数 ComponentHeight 是否已赋值
                     * @return ComponentHeight 是否已赋值
                     * 
                     */
                    bool ComponentHeightHasBeenSet() const;

                    /**
                     * 获取参数控件所在页码
                     * @return ComponentPage 参数控件所在页码
                     * 
                     */
                    int64_t GetComponentPage() const;

                    /**
                     * 设置参数控件所在页码
                     * @param _componentPage 参数控件所在页码
                     * 
                     */
                    void SetComponentPage(const int64_t& _componentPage);

                    /**
                     * 判断参数 ComponentPage 是否已赋值
                     * @return ComponentPage 是否已赋值
                     * 
                     */
                    bool ComponentPageHasBeenSet() const;

                    /**
                     * 获取参数控件X位置，单位px
                     * @return ComponentPosX 参数控件X位置，单位px
                     * 
                     */
                    double GetComponentPosX() const;

                    /**
                     * 设置参数控件X位置，单位px
                     * @param _componentPosX 参数控件X位置，单位px
                     * 
                     */
                    void SetComponentPosX(const double& _componentPosX);

                    /**
                     * 判断参数 ComponentPosX 是否已赋值
                     * @return ComponentPosX 是否已赋值
                     * 
                     */
                    bool ComponentPosXHasBeenSet() const;

                    /**
                     * 获取参数控件Y位置，单位px
                     * @return ComponentPosY 参数控件Y位置，单位px
                     * 
                     */
                    double GetComponentPosY() const;

                    /**
                     * 设置参数控件Y位置，单位px
                     * @param _componentPosY 参数控件Y位置，单位px
                     * 
                     */
                    void SetComponentPosY(const double& _componentPosY);

                    /**
                     * 判断参数 ComponentPosY 是否已赋值
                     * @return ComponentPosY 是否已赋值
                     * 
                     */
                    bool ComponentPosYHasBeenSet() const;

                    /**
                     * 获取参数控件样式
                     * @return ComponentExtra 参数控件样式
                     * 
                     */
                    std::string GetComponentExtra() const;

                    /**
                     * 设置参数控件样式
                     * @param _componentExtra 参数控件样式
                     * 
                     */
                    void SetComponentExtra(const std::string& _componentExtra);

                    /**
                     * 判断参数 ComponentExtra 是否已赋值
                     * @return ComponentExtra 是否已赋值
                     * 
                     */
                    bool ComponentExtraHasBeenSet() const;

                    /**
                     * 获取印章ID，如果是手写签名则为jpg或png格式的base64图片

SIGN_SEAL控件,可以用ORG_DEFAULT_SEAL表示主企业的默认印章
SIGN_SEAL控件,可以用SUBORG_DEFAULT_SEAL表示子企业的默认印章
SIGN_SEAL控件,可以用USER_DEFAULT_SEAL表示个人默认印章
                     * @return ComponentValue 印章ID，如果是手写签名则为jpg或png格式的base64图片

SIGN_SEAL控件,可以用ORG_DEFAULT_SEAL表示主企业的默认印章
SIGN_SEAL控件,可以用SUBORG_DEFAULT_SEAL表示子企业的默认印章
SIGN_SEAL控件,可以用USER_DEFAULT_SEAL表示个人默认印章
                     * 
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置印章ID，如果是手写签名则为jpg或png格式的base64图片

SIGN_SEAL控件,可以用ORG_DEFAULT_SEAL表示主企业的默认印章
SIGN_SEAL控件,可以用SUBORG_DEFAULT_SEAL表示子企业的默认印章
SIGN_SEAL控件,可以用USER_DEFAULT_SEAL表示个人默认印章
                     * @param _componentValue 印章ID，如果是手写签名则为jpg或png格式的base64图片

SIGN_SEAL控件,可以用ORG_DEFAULT_SEAL表示主企业的默认印章
SIGN_SEAL控件,可以用SUBORG_DEFAULT_SEAL表示子企业的默认印章
SIGN_SEAL控件,可以用USER_DEFAULT_SEAL表示个人默认印章
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
                     * 获取如果是SIGN_SEAL类型的签署控件, 参数标识H5签署界面是否在该签署区上进行放置展示, 1为放置,其他为不放置
                     * @return SealOperate 如果是SIGN_SEAL类型的签署控件, 参数标识H5签署界面是否在该签署区上进行放置展示, 1为放置,其他为不放置
                     * 
                     */
                    int64_t GetSealOperate() const;

                    /**
                     * 设置如果是SIGN_SEAL类型的签署控件, 参数标识H5签署界面是否在该签署区上进行放置展示, 1为放置,其他为不放置
                     * @param _sealOperate 如果是SIGN_SEAL类型的签署控件, 参数标识H5签署界面是否在该签署区上进行放置展示, 1为放置,其他为不放置
                     * 
                     */
                    void SetSealOperate(const int64_t& _sealOperate);

                    /**
                     * 判断参数 SealOperate 是否已赋值
                     * @return SealOperate 是否已赋值
                     * 
                     */
                    bool SealOperateHasBeenSet() const;

                    /**
                     * 获取不同GenerateMode对应的额外信息
                     * @return GenerateExtra 不同GenerateMode对应的额外信息
                     * 
                     */
                    std::string GetGenerateExtra() const;

                    /**
                     * 设置不同GenerateMode对应的额外信息
                     * @param _generateExtra 不同GenerateMode对应的额外信息
                     * 
                     */
                    void SetGenerateExtra(const std::string& _generateExtra);

                    /**
                     * 判断参数 GenerateExtra 是否已赋值
                     * @return GenerateExtra 是否已赋值
                     * 
                     */
                    bool GenerateExtraHasBeenSet() const;

                private:

                    /**
                     * 控件编号

注：
当GenerateMode=3时，通过"^"来决定是否使用关键字整词匹配能力。
例：
当GenerateMode=3时，如果传入关键字"^甲方签署^"，则会在PDF文件中有且仅有"甲方签署"关键字的地方进行对应操作。
如传入的关键字为"甲方签署"，则PDF文件中每个出现关键字的位置都会执行相应操作。
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 如果是Component控件类型，则可选的字段为：
TEXT - 普通文本控件；
DATE - 普通日期控件；
SELECT- 勾选框控件；
如果是SignComponent控件类型，则可选的字段为
SIGN_SEAL- 签署印章控件；
SIGN_DATE- 签署日期控件；
SIGN_SIGNATURE - 用户签名控件；
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 控件名称
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 定义控件是否为必填项，默认为false
                     */
                    bool m_componentRequired;
                    bool m_componentRequiredHasBeenSet;

                    /**
                     * 控件所属文件的序号 (模板中的resourceId排列序号)
                     */
                    int64_t m_fileIndex;
                    bool m_fileIndexHasBeenSet;

                    /**
                     * 控件生成的方式：
0 - 普通控件
1 - 表单域
2 - html 控件
3 - 关键字
                     */
                    int64_t m_generateMode;
                    bool m_generateModeHasBeenSet;

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
                     * 参数控件所在页码
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
                     * 参数控件样式
                     */
                    std::string m_componentExtra;
                    bool m_componentExtraHasBeenSet;

                    /**
                     * 印章ID，如果是手写签名则为jpg或png格式的base64图片

SIGN_SEAL控件,可以用ORG_DEFAULT_SEAL表示主企业的默认印章
SIGN_SEAL控件,可以用SUBORG_DEFAULT_SEAL表示子企业的默认印章
SIGN_SEAL控件,可以用USER_DEFAULT_SEAL表示个人默认印章
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 如果是SIGN_SEAL类型的签署控件, 参数标识H5签署界面是否在该签署区上进行放置展示, 1为放置,其他为不放置
                     */
                    int64_t m_sealOperate;
                    bool m_sealOperateHasBeenSet;

                    /**
                     * 不同GenerateMode对应的额外信息
                     */
                    std::string m_generateExtra;
                    bool m_generateExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_COMPONENT_H_
