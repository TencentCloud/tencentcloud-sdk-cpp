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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GDNTASKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GDNTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 全球数据库任务信息
                */
                class GdnTaskInfo : public AbstractModel
                {
                public:
                    GdnTaskInfo();
                    ~GdnTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全球数据库唯一标识
                     * @return GdnId 全球数据库唯一标识
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置全球数据库唯一标识
                     * @param _gdnId 全球数据库唯一标识
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取全球数据库唯一别名
                     * @return GdnName 全球数据库唯一别名
                     * 
                     */
                    std::string GetGdnName() const;

                    /**
                     * 设置全球数据库唯一别名
                     * @param _gdnName 全球数据库唯一别名
                     * 
                     */
                    void SetGdnName(const std::string& _gdnName);

                    /**
                     * 判断参数 GdnName 是否已赋值
                     * @return GdnName 是否已赋值
                     * 
                     */
                    bool GdnNameHasBeenSet() const;

                    /**
                     * 获取主集群ID
                     * @return PrimaryClusterId 主集群ID
                     * 
                     */
                    std::string GetPrimaryClusterId() const;

                    /**
                     * 设置主集群ID
                     * @param _primaryClusterId 主集群ID
                     * 
                     */
                    void SetPrimaryClusterId(const std::string& _primaryClusterId);

                    /**
                     * 判断参数 PrimaryClusterId 是否已赋值
                     * @return PrimaryClusterId 是否已赋值
                     * 
                     */
                    bool PrimaryClusterIdHasBeenSet() const;

                    /**
                     * 获取主集群所在地域
                     * @return PrimaryClusterRegion 主集群所在地域
                     * 
                     */
                    std::string GetPrimaryClusterRegion() const;

                    /**
                     * 设置主集群所在地域
                     * @param _primaryClusterRegion 主集群所在地域
                     * 
                     */
                    void SetPrimaryClusterRegion(const std::string& _primaryClusterRegion);

                    /**
                     * 判断参数 PrimaryClusterRegion 是否已赋值
                     * @return PrimaryClusterRegion 是否已赋值
                     * 
                     */
                    bool PrimaryClusterRegionHasBeenSet() const;

                    /**
                     * 获取从集群所在地域
                     * @return StandbyClusterRegion 从集群所在地域
                     * 
                     */
                    std::string GetStandbyClusterRegion() const;

                    /**
                     * 设置从集群所在地域
                     * @param _standbyClusterRegion 从集群所在地域
                     * 
                     */
                    void SetStandbyClusterRegion(const std::string& _standbyClusterRegion);

                    /**
                     * 判断参数 StandbyClusterRegion 是否已赋值
                     * @return StandbyClusterRegion 是否已赋值
                     * 
                     */
                    bool StandbyClusterRegionHasBeenSet() const;

                    /**
                     * 获取从集群ID
                     * @return StandbyClusterId 从集群ID
                     * 
                     */
                    std::string GetStandbyClusterId() const;

                    /**
                     * 设置从集群ID
                     * @param _standbyClusterId 从集群ID
                     * 
                     */
                    void SetStandbyClusterId(const std::string& _standbyClusterId);

                    /**
                     * 判断参数 StandbyClusterId 是否已赋值
                     * @return StandbyClusterId 是否已赋值
                     * 
                     */
                    bool StandbyClusterIdHasBeenSet() const;

                    /**
                     * 获取从集群别名
                     * @return StandbyClusterName 从集群别名
                     * 
                     */
                    std::string GetStandbyClusterName() const;

                    /**
                     * 设置从集群别名
                     * @param _standbyClusterName 从集群别名
                     * 
                     */
                    void SetStandbyClusterName(const std::string& _standbyClusterName);

                    /**
                     * 判断参数 StandbyClusterName 是否已赋值
                     * @return StandbyClusterName 是否已赋值
                     * 
                     */
                    bool StandbyClusterNameHasBeenSet() const;

                private:

                    /**
                     * 全球数据库唯一标识
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * 全球数据库唯一别名
                     */
                    std::string m_gdnName;
                    bool m_gdnNameHasBeenSet;

                    /**
                     * 主集群ID
                     */
                    std::string m_primaryClusterId;
                    bool m_primaryClusterIdHasBeenSet;

                    /**
                     * 主集群所在地域
                     */
                    std::string m_primaryClusterRegion;
                    bool m_primaryClusterRegionHasBeenSet;

                    /**
                     * 从集群所在地域
                     */
                    std::string m_standbyClusterRegion;
                    bool m_standbyClusterRegionHasBeenSet;

                    /**
                     * 从集群ID
                     */
                    std::string m_standbyClusterId;
                    bool m_standbyClusterIdHasBeenSet;

                    /**
                     * 从集群别名
                     */
                    std::string m_standbyClusterName;
                    bool m_standbyClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GDNTASKINFO_H_
