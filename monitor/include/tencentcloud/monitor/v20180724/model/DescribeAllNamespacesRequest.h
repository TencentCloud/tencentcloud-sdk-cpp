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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAllNamespaces请求参数结构体
                */
                class DescribeAllNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeAllNamespacesRequest();
                    ~DescribeAllNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取根据使用场景过滤 目前仅有"ST_ALARM"=告警类型
                     * @return SceneType 根据使用场景过滤 目前仅有"ST_ALARM"=告警类型
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置根据使用场景过滤 目前仅有"ST_ALARM"=告警类型
                     * @param _sceneType 根据使用场景过滤 目前仅有"ST_ALARM"=告警类型
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取根据监控类型过滤 不填默认查所有类型 "MT_QCE"=云产品监控
                     * @return MonitorTypes 根据监控类型过滤 不填默认查所有类型 "MT_QCE"=云产品监控
                     * 
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置根据监控类型过滤 不填默认查所有类型 "MT_QCE"=云产品监控
                     * @param _monitorTypes 根据监控类型过滤 不填默认查所有类型 "MT_QCE"=云产品监控
                     * 
                     */
                    void SetMonitorTypes(const std::vector<std::string>& _monitorTypes);

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     * 
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取根据namespace的Id过滤 不填默认查询所有
                     * @return Ids 根据namespace的Id过滤 不填默认查询所有
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置根据namespace的Id过滤 不填默认查询所有
                     * @param _ids 根据namespace的Id过滤 不填默认查询所有
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 根据使用场景过滤 目前仅有"ST_ALARM"=告警类型
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 根据监控类型过滤 不填默认查所有类型 "MT_QCE"=云产品监控
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * 根据namespace的Id过滤 不填默认查询所有
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESREQUEST_H_
