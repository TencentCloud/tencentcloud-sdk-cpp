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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATERESULTOBJINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATERESULTOBJINFO_H_

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
                * 集群巡检诊断对象信息
                */
                class KubeJarvisStateResultObjInfo : public AbstractModel
                {
                public:
                    KubeJarvisStateResultObjInfo();
                    ~KubeJarvisStateResultObjInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象属性名称
                     * @return PropertyName 对象属性名称
                     * 
                     */
                    std::string GetPropertyName() const;

                    /**
                     * 设置对象属性名称
                     * @param _propertyName 对象属性名称
                     * 
                     */
                    void SetPropertyName(const std::string& _propertyName);

                    /**
                     * 判断参数 PropertyName 是否已赋值
                     * @return PropertyName 是否已赋值
                     * 
                     */
                    bool PropertyNameHasBeenSet() const;

                    /**
                     * 获取对象属性值
                     * @return PropertyValue 对象属性值
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置对象属性值
                     * @param _propertyValue 对象属性值
                     * 
                     */
                    void SetPropertyValue(const std::string& _propertyValue);

                    /**
                     * 判断参数 PropertyValue 是否已赋值
                     * @return PropertyValue 是否已赋值
                     * 
                     */
                    bool PropertyValueHasBeenSet() const;

                private:

                    /**
                     * 对象属性名称
                     */
                    std::string m_propertyName;
                    bool m_propertyNameHasBeenSet;

                    /**
                     * 对象属性值
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATERESULTOBJINFO_H_
