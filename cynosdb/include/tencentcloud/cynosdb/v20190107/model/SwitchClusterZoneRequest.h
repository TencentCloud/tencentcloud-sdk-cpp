/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>集群Id</p>
                     * @return ClusterId <p>集群Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群Id</p>
                     * @param _clusterId <p>集群Id</p>
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
                     * 获取<p>当前可用区</p>
                     * @return OldZone <p>当前可用区</p>
                     * 
                     */
                    std::string GetOldZone() const;

                    /**
                     * 设置<p>当前可用区</p>
                     * @param _oldZone <p>当前可用区</p>
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
                     * 获取<p>要切换到的可用区</p>
                     * @return NewZone <p>要切换到的可用区</p>
                     * 
                     */
                    std::string GetNewZone() const;

                    /**
                     * 设置<p>要切换到的可用区</p>
                     * @param _newZone <p>要切换到的可用区</p>
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
                     * 获取<p>维护期间执行-yes,立即执行-no</p>
                     * @return IsInMaintainPeriod <p>维护期间执行-yes,立即执行-no</p>
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置<p>维护期间执行-yes,立即执行-no</p>
                     * @param _isInMaintainPeriod <p>维护期间执行-yes,立即执行-no</p>
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
                     * <p>集群Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>当前可用区</p>
                     */
                    std::string m_oldZone;
                    bool m_oldZoneHasBeenSet;

                    /**
                     * <p>要切换到的可用区</p>
                     */
                    std::string m_newZone;
                    bool m_newZoneHasBeenSet;

                    /**
                     * <p>维护期间执行-yes,立即执行-no</p>
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_
