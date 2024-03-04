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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEAPPDETAILRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEAPPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/AppConfig.h>
#include <tencentcloud/lcic/v20220817/model/SceneItem.h>
#include <tencentcloud/lcic/v20220817/model/TransferItem.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeAppDetail返回参数结构体
                */
                class DescribeAppDetailResponse : public AbstractModel
                {
                public:
                    DescribeAppDetailResponse();
                    ~DescribeAppDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK 对应的AppId 
                     * @return SdkAppId SDK 对应的AppId 
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取应用配置
                     * @return AppConfig 应用配置
                     * 
                     */
                    AppConfig GetAppConfig() const;

                    /**
                     * 判断参数 AppConfig 是否已赋值
                     * @return AppConfig 是否已赋值
                     * 
                     */
                    bool AppConfigHasBeenSet() const;

                    /**
                     * 获取场景配置
                     * @return SceneConfig 场景配置
                     * 
                     */
                    std::vector<SceneItem> GetSceneConfig() const;

                    /**
                     * 判断参数 SceneConfig 是否已赋值
                     * @return SceneConfig 是否已赋值
                     * 
                     */
                    bool SceneConfigHasBeenSet() const;

                    /**
                     * 获取转存配置
                     * @return TransferConfig 转存配置
                     * 
                     */
                    TransferItem GetTransferConfig() const;

                    /**
                     * 判断参数 TransferConfig 是否已赋值
                     * @return TransferConfig 是否已赋值
                     * 
                     */
                    bool TransferConfigHasBeenSet() const;

                private:

                    /**
                     * SDK 对应的AppId 
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 应用配置
                     */
                    AppConfig m_appConfig;
                    bool m_appConfigHasBeenSet;

                    /**
                     * 场景配置
                     */
                    std::vector<SceneItem> m_sceneConfig;
                    bool m_sceneConfigHasBeenSet;

                    /**
                     * 转存配置
                     */
                    TransferItem m_transferConfig;
                    bool m_transferConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEAPPDETAILRESPONSE_H_
