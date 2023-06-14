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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_EGRESSGATEWAYSTATUS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_EGRESSGATEWAYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * egress gateway 的状态
                */
                class EgressGatewayStatus : public AbstractModel
                {
                public:
                    EgressGatewayStatus();
                    ~EgressGatewayStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取egress gateway的当前版本
                     * @return CurrentVersion egress gateway的当前版本
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置egress gateway的当前版本
                     * @param _currentVersion egress gateway的当前版本
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                    /**
                     * 获取egress gateway的目标版本
                     * @return DesiredVersion egress gateway的目标版本
                     * 
                     */
                    std::string GetDesiredVersion() const;

                    /**
                     * 设置egress gateway的目标版本
                     * @param _desiredVersion egress gateway的目标版本
                     * 
                     */
                    void SetDesiredVersion(const std::string& _desiredVersion);

                    /**
                     * 判断参数 DesiredVersion 是否已赋值
                     * @return DesiredVersion 是否已赋值
                     * 
                     */
                    bool DesiredVersionHasBeenSet() const;

                    /**
                     * 获取egress gateway的状态，取值：running，upgrading，rollbacking
                     * @return State egress gateway的状态，取值：running，upgrading，rollbacking
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置egress gateway的状态，取值：running，upgrading，rollbacking
                     * @param _state egress gateway的状态，取值：running，upgrading，rollbacking
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * egress gateway的当前版本
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                    /**
                     * egress gateway的目标版本
                     */
                    std::string m_desiredVersion;
                    bool m_desiredVersionHasBeenSet;

                    /**
                     * egress gateway的状态，取值：running，upgrading，rollbacking
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_EGRESSGATEWAYSTATUS_H_
