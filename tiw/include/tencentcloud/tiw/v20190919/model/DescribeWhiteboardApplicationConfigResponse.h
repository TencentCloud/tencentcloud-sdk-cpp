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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/WhiteboardApplicationConfig.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeWhiteboardApplicationConfig返回参数结构体
                */
                class DescribeWhiteboardApplicationConfigResponse : public AbstractModel
                {
                public:
                    DescribeWhiteboardApplicationConfigResponse();
                    ~DescribeWhiteboardApplicationConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取白板应用任务相关配置
                     * @return Configs 白板应用任务相关配置
                     * 
                     */
                    std::vector<WhiteboardApplicationConfig> GetConfigs() const;

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 白板应用任务相关配置
                     */
                    std::vector<WhiteboardApplicationConfig> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGRESPONSE_H_
