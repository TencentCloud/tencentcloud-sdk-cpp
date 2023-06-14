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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_RUNTIME_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_RUNTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 运行环境
                */
                class Runtime : public AbstractModel
                {
                public:
                    Runtime();
                    ~Runtime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行环境名称
                     * @return Name 运行环境名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置运行环境名称
                     * @param _name 运行环境名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取运行环境框架
                     * @return Framework 运行环境框架
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置运行环境框架
                     * @param _framework 运行环境框架
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取运行环境描述
                     * @return Description 运行环境描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置运行环境描述
                     * @param _description 运行环境描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否为公开运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Public 是否为公开运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublic() const;

                    /**
                     * 设置是否为公开运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _public 是否为公开运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取是否打开健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckOn 是否打开健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHealthCheckOn() const;

                    /**
                     * 设置是否打开健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckOn 是否打开健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckOn(const bool& _healthCheckOn);

                    /**
                     * 判断参数 HealthCheckOn 是否已赋值
                     * @return HealthCheckOn 是否已赋值
                     * 
                     */
                    bool HealthCheckOnHasBeenSet() const;

                    /**
                     * 获取镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 运行环境名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行环境框架
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * 运行环境描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否为公开运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 是否打开健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_healthCheckOn;
                    bool m_healthCheckOnHasBeenSet;

                    /**
                     * 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_RUNTIME_H_
