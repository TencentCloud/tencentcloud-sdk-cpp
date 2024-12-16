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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERDETAILRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ServerBaseInfo.h>
#include <tencentcloud/tcbr/v20220217/model/ServerBaseConfig.h>
#include <tencentcloud/tcbr/v20220217/model/OnlineVersionInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeCloudRunServerDetail返回参数结构体
                */
                class DescribeCloudRunServerDetailResponse : public AbstractModel
                {
                public:
                    DescribeCloudRunServerDetailResponse();
                    ~DescribeCloudRunServerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务基本信息
                     * @return BaseInfo 服务基本信息
                     * 
                     */
                    ServerBaseInfo GetBaseInfo() const;

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取服务配置信息
                     * @return ServerConfig 服务配置信息
                     * 
                     */
                    ServerBaseConfig GetServerConfig() const;

                    /**
                     * 判断参数 ServerConfig 是否已赋值
                     * @return ServerConfig 是否已赋值
                     * 
                     */
                    bool ServerConfigHasBeenSet() const;

                    /**
                     * 获取在线版本信息
                     * @return OnlineVersionInfos 在线版本信息
                     * 
                     */
                    std::vector<OnlineVersionInfo> GetOnlineVersionInfos() const;

                    /**
                     * 判断参数 OnlineVersionInfos 是否已赋值
                     * @return OnlineVersionInfos 是否已赋值
                     * 
                     */
                    bool OnlineVersionInfosHasBeenSet() const;

                private:

                    /**
                     * 服务基本信息
                     */
                    ServerBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 服务配置信息
                     */
                    ServerBaseConfig m_serverConfig;
                    bool m_serverConfigHasBeenSet;

                    /**
                     * 在线版本信息
                     */
                    std::vector<OnlineVersionInfo> m_onlineVersionInfos;
                    bool m_onlineVersionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERDETAILRESPONSE_H_
