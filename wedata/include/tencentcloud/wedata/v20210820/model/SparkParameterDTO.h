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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SPARKPARAMETERDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SPARKPARAMETERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SparkSQL或者PySpark任务批量修改任务参数
                */
                class SparkParameterDTO : public AbstractModel
                {
                public:
                    SparkParameterDTO();
                    ~SparkParameterDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SparkSQL或者PySpark任务批量修改任务参数
                     * @return Properties SparkSQL或者PySpark任务批量修改任务参数
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置SparkSQL或者PySpark任务批量修改任务参数
                     * @param _properties SparkSQL或者PySpark任务批量修改任务参数
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * SparkSQL或者PySpark任务批量修改任务参数
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SPARKPARAMETERDTO_H_
