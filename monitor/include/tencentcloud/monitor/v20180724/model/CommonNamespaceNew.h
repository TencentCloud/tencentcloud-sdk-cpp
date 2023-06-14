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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACENEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DimensionNew.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 策略类型信息
                */
                class CommonNamespaceNew : public AbstractModel
                {
                public:
                    CommonNamespaceNew();
                    ~CommonNamespaceNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间标示
                     * @return Id 命名空间标示
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置命名空间标示
                     * @param _id 命名空间标示
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return Name 命名空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名称
                     * @param _name 命名空间名称
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
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param _monitorType 监控类型
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取维度信息
                     * @return Dimensions 维度信息
                     * 
                     */
                    std::vector<DimensionNew> GetDimensions() const;

                    /**
                     * 设置维度信息
                     * @param _dimensions 维度信息
                     * 
                     */
                    void SetDimensions(const std::vector<DimensionNew>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * 命名空间标示
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 维度信息
                     */
                    std::vector<DimensionNew> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACENEW_H_
