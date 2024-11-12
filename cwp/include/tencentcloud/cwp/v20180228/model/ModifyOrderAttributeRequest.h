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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYORDERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYORDERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyOrderAttribute请求参数结构体
                */
                class ModifyOrderAttributeRequest : public AbstractModel
                {
                public:
                    ModifyOrderAttributeRequest();
                    ~ModifyOrderAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权类型 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * @return LicenseType 授权类型 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * @param _licenseType 授权类型 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取可编辑的属性名称 ,当前支持的有: 
alias 资源别名
projectId 项目ID
                     * @return AttrName 可编辑的属性名称 ,当前支持的有: 
alias 资源别名
projectId 项目ID
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置可编辑的属性名称 ,当前支持的有: 
alias 资源别名
projectId 项目ID
                     * @param _attrName 可编辑的属性名称 ,当前支持的有: 
alias 资源别名
projectId 项目ID
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取属性值
AttrName=alias时,任意字符串,最大字符15长度
AttrName=projectId时,项目ID必须是真实存在的
                     * @return AttrValue 属性值
AttrName=alias时,任意字符串,最大字符15长度
AttrName=projectId时,项目ID必须是真实存在的
                     * 
                     */
                    std::string GetAttrValue() const;

                    /**
                     * 设置属性值
AttrName=alias时,任意字符串,最大字符15长度
AttrName=projectId时,项目ID必须是真实存在的
                     * @param _attrValue 属性值
AttrName=alias时,任意字符串,最大字符15长度
AttrName=projectId时,项目ID必须是真实存在的
                     * 
                     */
                    void SetAttrValue(const std::string& _attrValue);

                    /**
                     * 判断参数 AttrValue 是否已赋值
                     * @return AttrValue 是否已赋值
                     * 
                     */
                    bool AttrValueHasBeenSet() const;

                private:

                    /**
                     * 授权类型 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 可编辑的属性名称 ,当前支持的有: 
alias 资源别名
projectId 项目ID
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * 属性值
AttrName=alias时,任意字符串,最大字符15长度
AttrName=projectId时,项目ID必须是真实存在的
                     */
                    std::string m_attrValue;
                    bool m_attrValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYORDERATTRIBUTEREQUEST_H_
