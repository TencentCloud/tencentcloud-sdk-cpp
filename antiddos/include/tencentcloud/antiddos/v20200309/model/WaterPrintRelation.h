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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/WaterPrintConfig.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 水印配置相关信息
                */
                class WaterPrintRelation : public AbstractModel
                {
                public:
                    WaterPrintRelation();
                    ~WaterPrintRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印配置
                     * @return WaterPrintConfig 水印配置
                     * 
                     */
                    WaterPrintConfig GetWaterPrintConfig() const;

                    /**
                     * 设置水印配置
                     * @param _waterPrintConfig 水印配置
                     * 
                     */
                    void SetWaterPrintConfig(const WaterPrintConfig& _waterPrintConfig);

                    /**
                     * 判断参数 WaterPrintConfig 是否已赋值
                     * @return WaterPrintConfig 是否已赋值
                     * 
                     */
                    bool WaterPrintConfigHasBeenSet() const;

                    /**
                     * 获取水印配置所属的资源实例
                     * @return InstanceDetailList 水印配置所属的资源实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置水印配置所属的资源实例
                     * @param _instanceDetailList 水印配置所属的资源实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * 水印配置
                     */
                    WaterPrintConfig m_waterPrintConfig;
                    bool m_waterPrintConfigHasBeenSet;

                    /**
                     * 水印配置所属的资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTRELATION_H_
