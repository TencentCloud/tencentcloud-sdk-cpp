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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 自定义配置参数
                */
                class Configuration : public AbstractModel
                {
                public:
                    Configuration();
                    ~Configuration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件名，支持SPARK、HIVE、HDFS、YARN的部分配置文件自定义。
                     * @return Classification 配置文件名，支持SPARK、HIVE、HDFS、YARN的部分配置文件自定义。
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置配置文件名，支持SPARK、HIVE、HDFS、YARN的部分配置文件自定义。
                     * @param _classification 配置文件名，支持SPARK、HIVE、HDFS、YARN的部分配置文件自定义。
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取配置参数通过KV的形式传入，部分文件支持自定义，可以通过特殊的键"content"传入所有内容。
                     * @return Properties 配置参数通过KV的形式传入，部分文件支持自定义，可以通过特殊的键"content"传入所有内容。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置配置参数通过KV的形式传入，部分文件支持自定义，可以通过特殊的键"content"传入所有内容。
                     * @param _properties 配置参数通过KV的形式传入，部分文件支持自定义，可以通过特殊的键"content"传入所有内容。
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
                     * 配置文件名，支持SPARK、HIVE、HDFS、YARN的部分配置文件自定义。
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * 配置参数通过KV的形式传入，部分文件支持自定义，可以通过特殊的键"content"传入所有内容。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATION_H_
