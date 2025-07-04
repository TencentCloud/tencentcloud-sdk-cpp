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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINSTANCETYPEMAP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINSTANCETYPEMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产类型和实例类型的映射
                */
                class AssetInstanceTypeMap : public AbstractModel
                {
                public:
                    AssetInstanceTypeMap();
                    ~AssetInstanceTypeMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产类型
                     * @return Text 资产类型
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置资产类型
                     * @param _text 资产类型
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return Value 资产类型
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置资产类型
                     * @param _value 资产类型
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取资产类型和实例类型映射关系
                     * @return InstanceTypeList 资产类型和实例类型映射关系
                     * 
                     */
                    std::vector<FilterDataObject> GetInstanceTypeList() const;

                    /**
                     * 设置资产类型和实例类型映射关系
                     * @param _instanceTypeList 资产类型和实例类型映射关系
                     * 
                     */
                    void SetInstanceTypeList(const std::vector<FilterDataObject>& _instanceTypeList);

                    /**
                     * 判断参数 InstanceTypeList 是否已赋值
                     * @return InstanceTypeList 是否已赋值
                     * 
                     */
                    bool InstanceTypeListHasBeenSet() const;

                private:

                    /**
                     * 资产类型
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 资产类型和实例类型映射关系
                     */
                    std::vector<FilterDataObject> m_instanceTypeList;
                    bool m_instanceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINSTANCETYPEMAP_H_
