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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EMBEDSIGNCOMPONENTLIMIT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EMBEDSIGNCOMPONENTLIMIT_H_

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
                * 签署控件的类型和范围限制条件，用于控制**嵌入式文件**发起页面上，拖拽签署区时可使用的控件类型和具体的印章或签名方式。
                */
                class EmbedSignComponentLimit : public AbstractModel
                {
                public:
                    EmbedSignComponentLimit();
                    ~EmbedSignComponentLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>控件类型，支持以下类型</p><ul><li>SIGN_SEAL : 印章控件</li><li>SIGN_PAGING_SEAL : 骑缝章控件</li><li>SIGN_SIGNATURE : 用户签名控件</li><li>SIGN_PAGING_SIGNATURE : 用户签名骑缝控件</li></ul>
                     * @return ComponentType <p>控件类型，支持以下类型</p><ul><li>SIGN_SEAL : 印章控件</li><li>SIGN_PAGING_SEAL : 骑缝章控件</li><li>SIGN_SIGNATURE : 用户签名控件</li><li>SIGN_PAGING_SIGNATURE : 用户签名骑缝控件</li></ul>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置<p>控件类型，支持以下类型</p><ul><li>SIGN_SEAL : 印章控件</li><li>SIGN_PAGING_SEAL : 骑缝章控件</li><li>SIGN_SIGNATURE : 用户签名控件</li><li>SIGN_PAGING_SIGNATURE : 用户签名骑缝控件</li></ul>
                     * @param _componentType <p>控件类型，支持以下类型</p><ul><li>SIGN_SEAL : 印章控件</li><li>SIGN_PAGING_SEAL : 骑缝章控件</li><li>SIGN_SIGNATURE : 用户签名控件</li><li>SIGN_PAGING_SIGNATURE : 用户签名骑缝控件</li></ul>
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
                     * 获取<p>签署控件类型的值，用于限制签署时印章或者签名的选择范围</p><p>1.当 ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时，可指定印章类型。具体场景与规则说明如下：</p><p>指定印章类型:可传入以下枚举值来限制印章类型</p><ul><li> <b>OFFICIAL</b> :  企业公章</li><li> <b>CONTRACT</b> : 合同专用章</li><li> <b>FINANCE</b> : 财务专用章</li><li> <b>PERSONNEL</b> : 人事专用章</li><li> <b>OTHER</b> : 其他</li></ul><p>2.当ComponentType 是 SIGN_SIGNATURE 或者 SIGN_PAGING_SIGNATURE 时可传入以下类型（支持多个）</p><ul><li>HANDWRITE : 需要实时手写的手写签名</li><li>OCR_ESIGN : OCR印章（智慧手写签名）</li><li>IMG_ESIGN : 图片印章</li><li>ESIGN : 个人印章</li><li>SYSTEM_ESIGN : 系统印章</li></ul><br>
                     * @return ComponentValue <p>签署控件类型的值，用于限制签署时印章或者签名的选择范围</p><p>1.当 ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时，可指定印章类型。具体场景与规则说明如下：</p><p>指定印章类型:可传入以下枚举值来限制印章类型</p><ul><li> <b>OFFICIAL</b> :  企业公章</li><li> <b>CONTRACT</b> : 合同专用章</li><li> <b>FINANCE</b> : 财务专用章</li><li> <b>PERSONNEL</b> : 人事专用章</li><li> <b>OTHER</b> : 其他</li></ul><p>2.当ComponentType 是 SIGN_SIGNATURE 或者 SIGN_PAGING_SIGNATURE 时可传入以下类型（支持多个）</p><ul><li>HANDWRITE : 需要实时手写的手写签名</li><li>OCR_ESIGN : OCR印章（智慧手写签名）</li><li>IMG_ESIGN : 图片印章</li><li>ESIGN : 个人印章</li><li>SYSTEM_ESIGN : 系统印章</li></ul><br>
                     * 
                     */
                    std::vector<std::string> GetComponentValue() const;

                    /**
                     * 设置<p>签署控件类型的值，用于限制签署时印章或者签名的选择范围</p><p>1.当 ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时，可指定印章类型。具体场景与规则说明如下：</p><p>指定印章类型:可传入以下枚举值来限制印章类型</p><ul><li> <b>OFFICIAL</b> :  企业公章</li><li> <b>CONTRACT</b> : 合同专用章</li><li> <b>FINANCE</b> : 财务专用章</li><li> <b>PERSONNEL</b> : 人事专用章</li><li> <b>OTHER</b> : 其他</li></ul><p>2.当ComponentType 是 SIGN_SIGNATURE 或者 SIGN_PAGING_SIGNATURE 时可传入以下类型（支持多个）</p><ul><li>HANDWRITE : 需要实时手写的手写签名</li><li>OCR_ESIGN : OCR印章（智慧手写签名）</li><li>IMG_ESIGN : 图片印章</li><li>ESIGN : 个人印章</li><li>SYSTEM_ESIGN : 系统印章</li></ul><br>
                     * @param _componentValue <p>签署控件类型的值，用于限制签署时印章或者签名的选择范围</p><p>1.当 ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时，可指定印章类型。具体场景与规则说明如下：</p><p>指定印章类型:可传入以下枚举值来限制印章类型</p><ul><li> <b>OFFICIAL</b> :  企业公章</li><li> <b>CONTRACT</b> : 合同专用章</li><li> <b>FINANCE</b> : 财务专用章</li><li> <b>PERSONNEL</b> : 人事专用章</li><li> <b>OTHER</b> : 其他</li></ul><p>2.当ComponentType 是 SIGN_SIGNATURE 或者 SIGN_PAGING_SIGNATURE 时可传入以下类型（支持多个）</p><ul><li>HANDWRITE : 需要实时手写的手写签名</li><li>OCR_ESIGN : OCR印章（智慧手写签名）</li><li>IMG_ESIGN : 图片印章</li><li>ESIGN : 个人印章</li><li>SYSTEM_ESIGN : 系统印章</li></ul><br>
                     * 
                     */
                    void SetComponentValue(const std::vector<std::string>& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     * 
                     */
                    bool ComponentValueHasBeenSet() const;

                private:

                    /**
                     * <p>控件类型，支持以下类型</p><ul><li>SIGN_SEAL : 印章控件</li><li>SIGN_PAGING_SEAL : 骑缝章控件</li><li>SIGN_SIGNATURE : 用户签名控件</li><li>SIGN_PAGING_SIGNATURE : 用户签名骑缝控件</li></ul>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * <p>签署控件类型的值，用于限制签署时印章或者签名的选择范围</p><p>1.当 ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时，可指定印章类型。具体场景与规则说明如下：</p><p>指定印章类型:可传入以下枚举值来限制印章类型</p><ul><li> <b>OFFICIAL</b> :  企业公章</li><li> <b>CONTRACT</b> : 合同专用章</li><li> <b>FINANCE</b> : 财务专用章</li><li> <b>PERSONNEL</b> : 人事专用章</li><li> <b>OTHER</b> : 其他</li></ul><p>2.当ComponentType 是 SIGN_SIGNATURE 或者 SIGN_PAGING_SIGNATURE 时可传入以下类型（支持多个）</p><ul><li>HANDWRITE : 需要实时手写的手写签名</li><li>OCR_ESIGN : OCR印章（智慧手写签名）</li><li>IMG_ESIGN : 图片印章</li><li>ESIGN : 个人印章</li><li>SYSTEM_ESIGN : 系统印章</li></ul><br>
                     */
                    std::vector<std::string> m_componentValue;
                    bool m_componentValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EMBEDSIGNCOMPONENTLIMIT_H_
