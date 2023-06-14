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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTENSIONADDON_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTENSIONADDON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 创建集群时，选择安装的扩展组件的信息
                */
                class ExtensionAddon : public AbstractModel
                {
                public:
                    ExtensionAddon();
                    ~ExtensionAddon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩展组件名称
                     * @return AddonName 扩展组件名称
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置扩展组件名称
                     * @param _addonName 扩展组件名称
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取扩展组件信息(扩展组件资源对象的json字符串描述)
                     * @return AddonParam 扩展组件信息(扩展组件资源对象的json字符串描述)
                     * 
                     */
                    std::string GetAddonParam() const;

                    /**
                     * 设置扩展组件信息(扩展组件资源对象的json字符串描述)
                     * @param _addonParam 扩展组件信息(扩展组件资源对象的json字符串描述)
                     * 
                     */
                    void SetAddonParam(const std::string& _addonParam);

                    /**
                     * 判断参数 AddonParam 是否已赋值
                     * @return AddonParam 是否已赋值
                     * 
                     */
                    bool AddonParamHasBeenSet() const;

                private:

                    /**
                     * 扩展组件名称
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * 扩展组件信息(扩展组件资源对象的json字符串描述)
                     */
                    std::string m_addonParam;
                    bool m_addonParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTENSIONADDON_H_
