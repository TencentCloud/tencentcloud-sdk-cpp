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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINREGIONDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINREGIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询域名可绑定集群数据
                */
                class DescribeDomainRegionData : public AbstractModel
                {
                public:
                    DescribeDomainRegionData();
                    ~DescribeDomainRegionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务节点描述
                     * @return Label 服务节点描述
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置服务节点描述
                     * @param _label 服务节点描述
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取服务节点 ID（对应为其他接口中所需的 ClusterId）
                     * @return Value 服务节点 ID（对应为其他接口中所需的 ClusterId）
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置服务节点 ID（对应为其他接口中所需的 ClusterId）
                     * @param _value 服务节点 ID（对应为其他接口中所需的 ClusterId）
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
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 服务节点描述
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 服务节点 ID（对应为其他接口中所需的 ClusterId）
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINREGIONDATA_H_
