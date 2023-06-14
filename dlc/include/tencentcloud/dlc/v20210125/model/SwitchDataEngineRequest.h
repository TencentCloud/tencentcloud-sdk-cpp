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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SWITCHDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SWITCHDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SwitchDataEngine请求参数结构体
                */
                class SwitchDataEngineRequest : public AbstractModel
                {
                public:
                    SwitchDataEngineRequest();
                    ~SwitchDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主集群名称
                     * @return DataEngineName 主集群名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置主集群名称
                     * @param _dataEngineName 主集群名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取是否开启备集群
                     * @return StartStandbyCluster 是否开启备集群
                     * 
                     */
                    bool GetStartStandbyCluster() const;

                    /**
                     * 设置是否开启备集群
                     * @param _startStandbyCluster 是否开启备集群
                     * 
                     */
                    void SetStartStandbyCluster(const bool& _startStandbyCluster);

                    /**
                     * 判断参数 StartStandbyCluster 是否已赋值
                     * @return StartStandbyCluster 是否已赋值
                     * 
                     */
                    bool StartStandbyClusterHasBeenSet() const;

                private:

                    /**
                     * 主集群名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 是否开启备集群
                     */
                    bool m_startStandbyCluster;
                    bool m_startStandbyClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SWITCHDATAENGINEREQUEST_H_
