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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPBLOCKCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPBLOCKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DDoS防护的区域封禁配置
                */
                class CcGeoIPBlockConfig : public AbstractModel
                {
                public:
                    CcGeoIPBlockConfig();
                    ~CcGeoIPBlockConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域类型，取值[
oversea(境外)
china(国内)
customized(自定义地区)
]
                     * @return RegionType 区域类型，取值[
oversea(境外)
china(国内)
customized(自定义地区)
]
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置区域类型，取值[
oversea(境外)
china(国内)
customized(自定义地区)
]
                     * @param _regionType 区域类型，取值[
oversea(境外)
china(国内)
customized(自定义地区)
]
                     * 
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取封禁动作，取值[
drop(拦截)
alg(人机校验)
]
                     * @return Action 封禁动作，取值[
drop(拦截)
alg(人机校验)
]
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置封禁动作，取值[
drop(拦截)
alg(人机校验)
]
                     * @param _action 封禁动作，取值[
drop(拦截)
alg(人机校验)
]
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取配置ID，配置添加成功后生成；添加新配置时不用填写此字段，修改或删除配置时需要填写配置ID
                     * @return Id 配置ID，配置添加成功后生成；添加新配置时不用填写此字段，修改或删除配置时需要填写配置ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置ID，配置添加成功后生成；添加新配置时不用填写此字段，修改或删除配置时需要填写配置ID
                     * @param _id 配置ID，配置添加成功后生成；添加新配置时不用填写此字段，修改或删除配置时需要填写配置ID
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
                     * 获取当RegionType为customized时，必须填写AreaList；当RegionType为china或oversea时，AreaList为空
                     * @return AreaList 当RegionType为customized时，必须填写AreaList；当RegionType为china或oversea时，AreaList为空
                     * 
                     */
                    std::vector<int64_t> GetAreaList() const;

                    /**
                     * 设置当RegionType为customized时，必须填写AreaList；当RegionType为china或oversea时，AreaList为空
                     * @param _areaList 当RegionType为customized时，必须填写AreaList；当RegionType为china或oversea时，AreaList为空
                     * 
                     */
                    void SetAreaList(const std::vector<int64_t>& _areaList);

                    /**
                     * 判断参数 AreaList 是否已赋值
                     * @return AreaList 是否已赋值
                     * 
                     */
                    bool AreaListHasBeenSet() const;

                private:

                    /**
                     * 区域类型，取值[
oversea(境外)
china(国内)
customized(自定义地区)
]
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * 封禁动作，取值[
drop(拦截)
alg(人机校验)
]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 配置ID，配置添加成功后生成；添加新配置时不用填写此字段，修改或删除配置时需要填写配置ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 当RegionType为customized时，必须填写AreaList；当RegionType为china或oversea时，AreaList为空
                     */
                    std::vector<int64_t> m_areaList;
                    bool m_areaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPBLOCKCONFIG_H_
