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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODULECOUNTER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODULECOUNTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ISPCounter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 节点统计数据
                */
                class ModuleCounter : public AbstractModel
                {
                public:
                    ModuleCounter();
                    ~ModuleCounter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商统计信息列表
                     * @return ISPCounterSet 运营商统计信息列表
                     * 
                     */
                    std::vector<ISPCounter> GetISPCounterSet() const;

                    /**
                     * 设置运营商统计信息列表
                     * @param _iSPCounterSet 运营商统计信息列表
                     * 
                     */
                    void SetISPCounterSet(const std::vector<ISPCounter>& _iSPCounterSet);

                    /**
                     * 判断参数 ISPCounterSet 是否已赋值
                     * @return ISPCounterSet 是否已赋值
                     * 
                     */
                    bool ISPCounterSetHasBeenSet() const;

                    /**
                     * 获取省份数量
                     * @return ProvinceNum 省份数量
                     * 
                     */
                    int64_t GetProvinceNum() const;

                    /**
                     * 设置省份数量
                     * @param _provinceNum 省份数量
                     * 
                     */
                    void SetProvinceNum(const int64_t& _provinceNum);

                    /**
                     * 判断参数 ProvinceNum 是否已赋值
                     * @return ProvinceNum 是否已赋值
                     * 
                     */
                    bool ProvinceNumHasBeenSet() const;

                    /**
                     * 获取城市数量
                     * @return CityNum 城市数量
                     * 
                     */
                    int64_t GetCityNum() const;

                    /**
                     * 设置城市数量
                     * @param _cityNum 城市数量
                     * 
                     */
                    void SetCityNum(const int64_t& _cityNum);

                    /**
                     * 判断参数 CityNum 是否已赋值
                     * @return CityNum 是否已赋值
                     * 
                     */
                    bool CityNumHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return NodeNum 节点数量
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置节点数量
                     * @param _nodeNum 节点数量
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceNum 实例数量
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例数量
                     * @param _instanceNum 实例数量
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                private:

                    /**
                     * 运营商统计信息列表
                     */
                    std::vector<ISPCounter> m_iSPCounterSet;
                    bool m_iSPCounterSetHasBeenSet;

                    /**
                     * 省份数量
                     */
                    int64_t m_provinceNum;
                    bool m_provinceNumHasBeenSet;

                    /**
                     * 城市数量
                     */
                    int64_t m_cityNum;
                    bool m_cityNumHasBeenSet;

                    /**
                     * 节点数量
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODULECOUNTER_H_
