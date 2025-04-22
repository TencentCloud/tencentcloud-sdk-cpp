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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGPARAMS_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 参数
                */
                class ConfigParams : public AbstractModel
                {
                public:
                    ConfigParams();
                    ~ConfigParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return ParameterName 名字
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置名字
                     * @param _parameterName 名字
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                    /**
                     * 获取值
                     * @return ParameterValue 值
                     * 
                     */
                    std::string GetParameterValue() const;

                    /**
                     * 设置值
                     * @param _parameterValue 值
                     * 
                     */
                    void SetParameterValue(const std::string& _parameterValue);

                    /**
                     * 判断参数 ParameterValue 是否已赋值
                     * @return ParameterValue 是否已赋值
                     * 
                     */
                    bool ParameterValueHasBeenSet() const;

                    /**
                     * 获取修改前的值
                     * @return ParameterOldValue 修改前的值
                     * 
                     */
                    std::string GetParameterOldValue() const;

                    /**
                     * 设置修改前的值
                     * @param _parameterOldValue 修改前的值
                     * 
                     */
                    void SetParameterOldValue(const std::string& _parameterOldValue);

                    /**
                     * 判断参数 ParameterOldValue 是否已赋值
                     * @return ParameterOldValue 是否已赋值
                     * 
                     */
                    bool ParameterOldValueHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_parameterValue;
                    bool m_parameterValueHasBeenSet;

                    /**
                     * 修改前的值
                     */
                    std::string m_parameterOldValue;
                    bool m_parameterOldValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGPARAMS_H_
