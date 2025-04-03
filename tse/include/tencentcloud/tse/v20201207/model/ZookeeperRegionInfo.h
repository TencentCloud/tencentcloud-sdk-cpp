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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ZOOKEEPERREGIONINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ZOOKEEPERREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ZookeeperRegionMyIdInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Zookeeper的地域额外信息记录
                */
                class ZookeeperRegionInfo : public AbstractModel
                {
                public:
                    ZookeeperRegionInfo();
                    ~ZookeeperRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署架构信息

- SingleRegion: 普通单地域
- MultiRegion: 普通多地域场景
- MasterSlave: 两地域，主备地域场景
                     * @return DeployMode 部署架构信息

- SingleRegion: 普通单地域
- MultiRegion: 普通多地域场景
- MasterSlave: 两地域，主备地域场景
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署架构信息

- SingleRegion: 普通单地域
- MultiRegion: 普通多地域场景
- MasterSlave: 两地域，主备地域场景
                     * @param _deployMode 部署架构信息

- SingleRegion: 普通单地域
- MultiRegion: 普通多地域场景
- MasterSlave: 两地域，主备地域场景
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取主地域的额外信息
                     * @return MainRegion 主地域的额外信息
                     * 
                     */
                    ZookeeperRegionMyIdInfo GetMainRegion() const;

                    /**
                     * 设置主地域的额外信息
                     * @param _mainRegion 主地域的额外信息
                     * 
                     */
                    void SetMainRegion(const ZookeeperRegionMyIdInfo& _mainRegion);

                    /**
                     * 判断参数 MainRegion 是否已赋值
                     * @return MainRegion 是否已赋值
                     * 
                     */
                    bool MainRegionHasBeenSet() const;

                    /**
                     * 获取其他地域的额外信息
                     * @return OtherRegions 其他地域的额外信息
                     * 
                     */
                    std::vector<ZookeeperRegionMyIdInfo> GetOtherRegions() const;

                    /**
                     * 设置其他地域的额外信息
                     * @param _otherRegions 其他地域的额外信息
                     * 
                     */
                    void SetOtherRegions(const std::vector<ZookeeperRegionMyIdInfo>& _otherRegions);

                    /**
                     * 判断参数 OtherRegions 是否已赋值
                     * @return OtherRegions 是否已赋值
                     * 
                     */
                    bool OtherRegionsHasBeenSet() const;

                private:

                    /**
                     * 部署架构信息

- SingleRegion: 普通单地域
- MultiRegion: 普通多地域场景
- MasterSlave: 两地域，主备地域场景
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 主地域的额外信息
                     */
                    ZookeeperRegionMyIdInfo m_mainRegion;
                    bool m_mainRegionHasBeenSet;

                    /**
                     * 其他地域的额外信息
                     */
                    std::vector<ZookeeperRegionMyIdInfo> m_otherRegions;
                    bool m_otherRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ZOOKEEPERREGIONINFO_H_
