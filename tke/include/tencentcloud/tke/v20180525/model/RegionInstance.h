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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_REGIONINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_REGIONINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 地域属性信息
                */
                class RegionInstance : public AbstractModel
                {
                public:
                    RegionInstance();
                    ~RegionInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域状态
                     * @return Status 地域状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置地域状态
                     * @param _status 地域状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地域特性开关(按照JSON的形式返回所有属性)
                     * @return FeatureGates 地域特性开关(按照JSON的形式返回所有属性)
                     * 
                     */
                    std::string GetFeatureGates() const;

                    /**
                     * 设置地域特性开关(按照JSON的形式返回所有属性)
                     * @param _featureGates 地域特性开关(按照JSON的形式返回所有属性)
                     * 
                     */
                    void SetFeatureGates(const std::string& _featureGates);

                    /**
                     * 判断参数 FeatureGates 是否已赋值
                     * @return FeatureGates 是否已赋值
                     * 
                     */
                    bool FeatureGatesHasBeenSet() const;

                    /**
                     * 获取地域简称
                     * @return Alias 地域简称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置地域简称
                     * @param _alias 地域简称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取地域白名单
                     * @return Remark 地域白名单
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置地域白名单
                     * @param _remark 地域白名单
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域特性开关(按照JSON的形式返回所有属性)
                     */
                    std::string m_featureGates;
                    bool m_featureGatesHasBeenSet;

                    /**
                     * 地域简称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 地域白名单
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_REGIONINSTANCE_H_
