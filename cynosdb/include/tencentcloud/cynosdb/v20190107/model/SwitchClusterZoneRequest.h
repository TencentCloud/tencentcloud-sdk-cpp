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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SwitchClusterZone请求参数结构体
                */
                class SwitchClusterZoneRequest : public AbstractModel
                {
                public:
                    SwitchClusterZoneRequest();
                    ~SwitchClusterZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取当前可用区
                     * @return OldZone 当前可用区
                     * 
                     */
                    std::string GetOldZone() const;

                    /**
                     * 设置当前可用区
                     * @param _oldZone 当前可用区
                     * 
                     */
                    void SetOldZone(const std::string& _oldZone);

                    /**
                     * 判断参数 OldZone 是否已赋值
                     * @return OldZone 是否已赋值
                     * 
                     */
                    bool OldZoneHasBeenSet() const;

                    /**
                     * 获取要切换到的可用区
                     * @return NewZone 要切换到的可用区
                     * 
                     */
                    std::string GetNewZone() const;

                    /**
                     * 设置要切换到的可用区
                     * @param _newZone 要切换到的可用区
                     * 
                     */
                    void SetNewZone(const std::string& _newZone);

                    /**
                     * 判断参数 NewZone 是否已赋值
                     * @return NewZone 是否已赋值
                     * 
                     */
                    bool NewZoneHasBeenSet() const;

                    /**
                     * 获取维护期间执行-yes,立即执行-no
                     * @return IsInMaintainPeriod 维护期间执行-yes,立即执行-no
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置维护期间执行-yes,立即执行-no
                     * @param _isInMaintainPeriod 维护期间执行-yes,立即执行-no
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 当前可用区
                     */
                    std::string m_oldZone;
                    bool m_oldZoneHasBeenSet;

                    /**
                     * 要切换到的可用区
                     */
                    std::string m_newZone;
                    bool m_newZoneHasBeenSet;

                    /**
                     * 维护期间执行-yes,立即执行-no
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_
