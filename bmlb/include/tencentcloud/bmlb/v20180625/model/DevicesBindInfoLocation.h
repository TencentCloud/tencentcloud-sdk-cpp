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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOLOCATION_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoBackend.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取设备绑定信息时返回的设备所绑定的转发路径信息。
                */
                class DevicesBindInfoLocation : public AbstractModel
                {
                public:
                    DevicesBindInfoLocation();
                    ~DevicesBindInfoLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发路径。
                     * @return Url 转发路径。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发路径。
                     * @param _url 转发路径。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取转发路径实例ID。
                     * @return LocationId 转发路径实例ID。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发路径实例ID。
                     * @param _locationId 转发路径实例ID。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取该转发路径所绑定的主机列表。
                     * @return BackendSet 该转发路径所绑定的主机列表。
                     * 
                     */
                    std::vector<DevicesBindInfoBackend> GetBackendSet() const;

                    /**
                     * 设置该转发路径所绑定的主机列表。
                     * @param _backendSet 该转发路径所绑定的主机列表。
                     * 
                     */
                    void SetBackendSet(const std::vector<DevicesBindInfoBackend>& _backendSet);

                    /**
                     * 判断参数 BackendSet 是否已赋值
                     * @return BackendSet 是否已赋值
                     * 
                     */
                    bool BackendSetHasBeenSet() const;

                private:

                    /**
                     * 转发路径。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 转发路径实例ID。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 该转发路径所绑定的主机列表。
                     */
                    std::vector<DevicesBindInfoBackend> m_backendSet;
                    bool m_backendSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOLOCATION_H_
