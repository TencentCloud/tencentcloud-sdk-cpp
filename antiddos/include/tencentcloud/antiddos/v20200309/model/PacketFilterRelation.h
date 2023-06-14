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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/PacketFilterConfig.h>
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
                * 特征过滤相关信息
                */
                class PacketFilterRelation : public AbstractModel
                {
                public:
                    PacketFilterRelation();
                    ~PacketFilterRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特征过滤配置
                     * @return PacketFilterConfig 特征过滤配置
                     * 
                     */
                    PacketFilterConfig GetPacketFilterConfig() const;

                    /**
                     * 设置特征过滤配置
                     * @param _packetFilterConfig 特征过滤配置
                     * 
                     */
                    void SetPacketFilterConfig(const PacketFilterConfig& _packetFilterConfig);

                    /**
                     * 判断参数 PacketFilterConfig 是否已赋值
                     * @return PacketFilterConfig 是否已赋值
                     * 
                     */
                    bool PacketFilterConfigHasBeenSet() const;

                    /**
                     * 获取特征过滤配置所属的实例
                     * @return InstanceDetailList 特征过滤配置所属的实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置特征过滤配置所属的实例
                     * @param _instanceDetailList 特征过滤配置所属的实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 特征过滤配置
                     */
                    PacketFilterConfig m_packetFilterConfig;
                    bool m_packetFilterConfigHasBeenSet;

                    /**
                     * 特征过滤配置所属的实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERRELATION_H_
