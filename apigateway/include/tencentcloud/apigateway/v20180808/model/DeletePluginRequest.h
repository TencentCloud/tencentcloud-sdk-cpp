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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEPLUGINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DeletePlugin请求参数结构体
                */
                class DeletePluginRequest : public AbstractModel
                {
                public:
                    DeletePluginRequest();
                    ~DeletePluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的API网关插件的ID。
                     * @return PluginId 要删除的API网关插件的ID。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置要删除的API网关插件的ID。
                     * @param _pluginId 要删除的API网关插件的ID。
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                private:

                    /**
                     * 要删除的API网关插件的ID。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEPLUGINREQUEST_H_
